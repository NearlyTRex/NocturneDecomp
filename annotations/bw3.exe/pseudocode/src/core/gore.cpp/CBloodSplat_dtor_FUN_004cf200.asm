; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_dtor_FUN_004cf200(CBloodSplat *this_ptr,uint flags)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf200
        ;   Label: core_gore.cpp_CBloodSplat_dtor_FUN_004cf200
    RET                                 ; 004cf204

