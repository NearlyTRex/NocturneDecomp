// Name: shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
// Address: 004775b0
// Address Range: [[004775b0, 00477651]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(char *pattern,char *target_string,int case_sensitive)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(char *pattern,char *target_string,int case_sensitive)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *pattern;
  do {
    if (bVar1 == 0) {
      return (uint)(*target_string == 0);
    }
    bVar1 = *pattern;
    if (bVar1 < 0x2a) {
LAB_004775d2:
      if (case_sensitive == 0) {
        iVar2 = tolower((uint)(byte)*pattern);
        iVar3 = tolower((uint)(byte)*target_string);
        if (iVar2 != iVar3) {
          return 0;
        }
      }
      else if (*pattern != *target_string) {
        return 0;
      }
    }
    else {
      if (bVar1 < 0x2b) {
        while( true ) {
          iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                            (pattern + 1,target_string,case_sensitive);
          if (iVar2 != 0) {
            return 1;
          }
          if (*target_string == 0) break;
          target_string = target_string + 1;
        }
        return 0;
      }
      if (bVar1 != 0x3f) goto LAB_004775d2;
      if (*target_string == 0) {
        return 0;
      }
    }
    target_string = target_string + 1;
    bVar1 = pattern[1];
    pattern = pattern + 1;
  } while( true );
}
