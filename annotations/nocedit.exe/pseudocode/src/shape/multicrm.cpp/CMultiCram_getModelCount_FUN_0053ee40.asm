; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMultiCram * __cdecl shape_multicrm_cpp_CMultiCram_getModelCount_FUN_0053ee40(CMultiCram *this_ptr,int *model_count_ptr)
;
; Parameters:
; CMultiCram *     Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   model_count_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053ee40
        ;   Label: shape_multicrm.cpp_CMultiCram_getModelCount_FUN_0053ee40
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ee44
    MOV EAX,dword ptr [EAX]             ; 0053ee48
    MOV dword ptr [EDX],EAX             ; 0053ee4a
    MOV EAX,EDX                         ; 0053ee4c
    RET                                 ; 0053ee4e

