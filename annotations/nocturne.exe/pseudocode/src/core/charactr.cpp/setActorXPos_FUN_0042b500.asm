; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_setActorXPos_FUN_0042b500(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b500
        ;   Label: core_charactr.cpp_setActorXPos_FUN_0042b500
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b504
    MOV dword ptr [EDX + 0x20],EAX      ; 0042b508
    RET                                 ; 0042b50b

