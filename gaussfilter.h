/** @file gaussfilter.h
 */


errno_t gaussfilter_addCLIcmd();

imageID gauss_filter(
    const char *__restrict__ ID_name,
    const char *__restrict__ out_name,
    float       sigma,
    int         filter_size
);

imageID gauss_3Dfilter(
    const char *__restrict__ ID_name,
    const char *__restrict__ out_name,
    float sigma,
    int filter_size
);
