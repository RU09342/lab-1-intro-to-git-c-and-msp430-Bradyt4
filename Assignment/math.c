/*
 * math.c
 *
 *  Created on: Sept 7, 2017
 * 	Last Edited: Sept 7, 2017
 *      Author: Tyler Brady
 */

/*
 *VALID INPUTS: MUST BE INTERGERS NOT FLOATS, FLOATING VALUES WILL NOT WORK
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
    *num2 MUST NOT be 0.
 * % Modulus (num1 % num2)
    *num2 MUST NOT be 0.
*/

#ifndef MATH_C_
#define MATH_C_

{
    switch(Operator)
    {
    case '+': return (num1 + num2);
    break;
    
    case '-': return num1 - num2;
    break;
    
    case '*': return num1 * num2;
    break;
    
    case '/': return num1 / num2;
    break;
    
    case '%': return num1 % num2;
    break;
    }
}

#endif /* MATH_C_ */
