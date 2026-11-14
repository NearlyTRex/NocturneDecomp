// Name: core_doc.cpp_CDoc_setCharacterModel_FUN_00450a60
// Address: 00450a60
// Address Range: [[00450a60, 00450ac1]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setCharacterModel_FUN_00450a60(CDoc *this_ptr,char *model_name,char *cloth_name)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_setCharacterModel_FUN_00450a60(CDoc *this_ptr,char *model_name,char *cloth_name)

{
  char cVar1;
  char *pcVar2;
  
  core_charactr_cpp_CCharacter_setCharacterModel_FUN_0042b440
            ((CCharacter *)this_ptr,model_name,cloth_name);
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *model_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = model_name[1];
    model_name = model_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  pcVar2 = this_ptr->cloth_name;
  do {
    cVar1 = *cloth_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = cloth_name[1];
    cloth_name = cloth_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return;
}
