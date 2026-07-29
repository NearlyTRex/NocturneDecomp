; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonImage * __cdecl core_dimage_cpp_CDemonImage_ctor_FUN_0044d430(CDemonImage *this_ptr)
;
; Parameters:
; CDemonImage *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044d430
        ;   Label: core_dimage.cpp_CDemonImage_ctor_FUN_0044d430
    MOV dword ptr [EAX + 0x300],0x0     ; 0044d434
    RET                                 ; 0044d43e

