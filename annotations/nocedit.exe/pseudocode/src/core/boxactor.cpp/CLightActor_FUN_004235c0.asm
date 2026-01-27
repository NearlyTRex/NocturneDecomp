; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_boxactor.cpp_CLightActor_FUN_004235c0(CLightActor * this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004235c0
        ;   Label: core_boxactor.cpp_CLightActor_FUN_004235c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004235c4
    MOV dword ptr [EDX + 0x38],EAX      ; 004235c8
    RET                                 ; 004235cb

