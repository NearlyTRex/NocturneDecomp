; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047bc60(int param_1)
;
;
; XREF[2]:
;   FUN_0047c2c0 at 0047c6bd
;   FUN_0047e470 at 0047e92d
;
; Called Functions:
;   FUN_0047baf0
;   FUN_0047bba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bc60
        ;   Label: FUN_0047bc60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bc61
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bc65
    TEST EDX,EDX                        ; 0047bc6b
    JG 0x0047bc7a                       ; 0047bc6d
        ;   XREF to: 0047bc7a (CONDITIONAL_JUMP)  ; LAB_0047bc7a
    PUSH EBX                            ; 0047bc6f
    CALL FUN_0047baf0                   ; 0047bc70
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047baf0()
    ADD ESP,0x4                         ; 0047bc75
    POP EBX                             ; 0047bc78
    RET                                 ; 0047bc79
    MOV EAX,EDX                         ; 0047bc7a
        ;   Label: LAB_0047bc7a
    PUSH EAX                            ; 0047bc7c
    DEC EDX                             ; 0047bc7d
    PUSH EDX                            ; 0047bc7e
    PUSH EBX                            ; 0047bc7f
    MOV dword ptr [EBX + 0x134],EDX     ; 0047bc80
    CALL FUN_0047bba0                   ; 0047bc86
        ;   XREF to: 0047bba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bba0()
    ADD ESP,0xc                         ; 0047bc8b
    PUSH EBX                            ; 0047bc8e
    CALL FUN_0047baf0                   ; 0047bc8f
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047baf0()
    ADD ESP,0x4                         ; 0047bc94
    POP EBX                             ; 0047bc97
    RET                                 ; 0047bc98

