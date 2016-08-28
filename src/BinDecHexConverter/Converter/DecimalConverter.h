/* 
 * File:   DecimalConverter.h
 * Author: RedSpiderMkV
 *
 * Created on 11 November 2015, 21:51
 */

#ifndef DECIMALCONVERTER_H
#define	DECIMALCONVERTER_H

#include<string>
#include "ConverterBase.h"

using namespace std;

namespace NumberBaseConverter
{
    class DecimalConverter : public ConverterBase
    {
        private:
            int parseIntFromString(string number);
            string convertToBinary(int number);
            string convertToHexadecimal(int number);
            string convertToOctal(int number);
        public:
            string ConvertToBinary(string decStr);
            string ConvertToHexadecimal(string decStr);
            string ConvertToOctal(string decStr);
    };
}

#endif	/* DECIMALCONVERTER_H */

