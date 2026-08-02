; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodPool * __cdecl core_gore_cpp_CBloodPool_dtor_FUN_004b0a00(CBloodPool *this_ptr,uint flags)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b0a00
        ;   Label: core_gore.cpp_CBloodPool_dtor_FUN_004b0a00
    RET                                 ; 004b0a04

