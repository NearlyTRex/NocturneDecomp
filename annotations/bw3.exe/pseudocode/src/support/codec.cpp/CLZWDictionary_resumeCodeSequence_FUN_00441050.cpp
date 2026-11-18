// Name: support_codec.cpp_CLZWDictionary_resumeCodeSequence_FUN_00441050
// Address: 00441050
// Address Range: [[00441050, 004410e7]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CLZWDictionary_resumeCodeSequence_FUN_00441050(CLZWDictionary *this_ptr,int code,int resume_code,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_CLZWDictionary_resumeCodeSequence_FUN_00441050(CLZWDictionary *this_ptr,int code,int resume_code,void *ostream)

{
  CLZWDictionaryNode *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = this_ptr->node_table + code;
  if (-1 < pCVar1->parent_index) {
    if (code != resume_code) {
      iVar3 = support_codec_cpp_CLZWDictionary_resumeCodeSequence_FUN_00441050
                        (this_ptr,pCVar1->parent_index,resume_code,ostream);
      if (iVar3 < 0) {
        return iVar3;
      }
      goto LAB_00441090;
    }
    do {
      pCVar1 = this_ptr->node_table + resume_code;
      resume_code = pCVar1->parent_index;
    } while (-1 < resume_code);
  }
  iVar3 = pCVar1->code;
LAB_00441090:
  iVar2 = (**(code **)(*(int *)ostream + 4))(ostream,(char)this_ptr->node_table[code].code);
  if (-1 < iVar2) {
    return iVar3;
  }
  if (iVar2 != -1) {
    return -1;
  }
  return -2 - code;
}
