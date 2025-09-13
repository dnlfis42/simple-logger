#include "simple_logger.h"

int main()
{
	LOG_INIT_DBG;

	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");
	LOG_ERR(L"MAIN", L"hi %s", L"world");

	return 0;
}