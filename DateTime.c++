# include <ctime>
# include "DateTime.h"

void DateTime::Now(char * buffer)
{

	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
  	timeinfo = localtime (&rawtime);
  	strftime (buffer,21,"%d/%m/%Y %H:%M:%S",timeinfo);
  			
}

void DateTime::DateNow(char * buffer)
{

	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,11,"%d/%m/%Y",timeinfo);
}  			
		
void DateTime::TimeNow(char * buffer)
{

	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,9,"%H:%M:%S",timeinfo);
  			
}

