; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl shape_multicrm_cpp_CMultiCram_setModelCount_FUN_0053ee60(CMultiCram *this_ptr,int *model_count)
;
; Parameters:
; CMultiCram *     Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   model_count
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053ee60
        ;   Label: shape_multicrm.cpp_CMultiCram_setModelCount_FUN_0053ee60
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053ee64
    MOV EAX,dword ptr [EAX]             ; 0053ee68
    MOV dword ptr [EDX],EAX             ; 0053ee6a
    MOV EAX,EDX                         ; 0053ee6c
    RET                                 ; 0053ee6e

