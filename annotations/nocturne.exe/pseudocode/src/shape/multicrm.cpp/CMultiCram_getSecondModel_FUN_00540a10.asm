; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDSEModel * __cdecl shape_multicrm_cpp_CMultiCram_getSecondModel_FUN_00540a10(CMultiCram *this_ptr)
;
; Parameters:
; CMultiCram *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00540a10
        ;   Label: shape_multicrm.cpp_CMultiCram_getSecondModel_FUN_00540a10
    MOV EAX,dword ptr [EAX + 0x8]       ; 00540a14
    RET                                 ; 00540a17

