; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CLightActor_FUN_004235d0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004235d0
        ;   Label: core_boxactor.cpp_CLightActor_FUN_004235d0
    CMP dword ptr [EAX + 0x178],0x0     ; 004235d4
    SETNZ AL                            ; 004235db
    AND EAX,0xff                        ; 004235de
    RET                                 ; 004235e3

