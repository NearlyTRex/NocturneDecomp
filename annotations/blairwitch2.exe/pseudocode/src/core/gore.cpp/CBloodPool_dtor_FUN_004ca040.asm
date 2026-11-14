; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodPool * __cdecl core_gore_cpp_CBloodPool_dtor_FUN_004ca040(CBloodPool *this_ptr,uint flags)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca040
        ;   Label: core_gore.cpp_CBloodPool_dtor_FUN_004ca040
    RET                                 ; 004ca044

