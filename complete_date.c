BEGIN {
      start = mktime("2007 07 01 00 00 00");
      end = mktime("2014 09 30 23 59 59");
      steps = end-start+1;
      for(i=0; i<steps; i=i+60)
      {
            d[i] = strftime("%Y%m%d%H%M", i+start);
            a[d[i]] = 999999;
      }
}
{
      a[$1] = $2;
}
END {
      for(i=0; i<steps; i=i+60)
            print d[i], a[d[i]];
      
}
