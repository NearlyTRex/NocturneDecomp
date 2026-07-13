; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056af76(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00564905 at 0056490c
;   FUN_00566ed7 at 00566ef6
;
; Called Functions:
;   FUN_0056dd80
;   FUN_0056fca0
;   FUN_0056fcd4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056af76
        ;   Label: FUN_0056af76
    MOV AX,DS                           ; 0056af77
    AND EAX,0xffff                      ; 0056af79
    PUSH EAX                            ; 0056af7e
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056af7f
    PUSH EDX                            ; 0056af83
    CALL FUN_0056fca0                   ; 0056af84
        ;   XREF to: 0056fca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fca0()
    ADD ESP,0x8                         ; 0056af89
    TEST EAX,EAX                        ; 0056af8c
    JZ 0x0056af9f                       ; 0056af8e
        ;   XREF to: 0056af9f (CONDITIONAL_JUMP)  ; LAB_0056af9f
    MOV ESI,dword ptr [ESP + 0xc]       ; 0056af90
    PUSH ESI                            ; 0056af94
    CALL FUN_0056fcd4                   ; 0056af95
        ;   XREF to: 0056fcd4 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fcd4()
    ADD ESP,0x4                         ; 0056af9a
    POP ESI                             ; 0056af9d
    RET                                 ; 0056af9e
    PUSH EBX                            ; 0056af9f
        ;   Label: LAB_0056af9f
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056afa0
    PUSH ECX                            ; 0056afa4
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056afa5
    PUSH EBX                            ; 0056afa9
    CALL FUN_0056dd80                   ; 0056afaa
        ;   XREF to: 0056dd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dd80()
    ADD ESP,0x8                         ; 0056afaf
    POP EBX                             ; 0056afb2
    POP ESI                             ; 0056afb3
    RET                                 ; 0056afb4

