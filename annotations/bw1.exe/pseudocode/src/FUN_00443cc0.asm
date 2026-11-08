; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00443cc0(int param_1)
;
;
; Called Functions:
;   FUN_00444020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443cc0
        ;   Label: FUN_00443cc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00443cc1
    CMP dword ptr [EBX + 0x10],0x0      ; 00443cc5
    JZ 0x00443cee                       ; 00443cc9
        ;   XREF to: 00443cee (CONDITIONAL_JUMP)  ; LAB_00443cee
    MOV ECX,dword ptr [EBX + 0x18]      ; 00443ccb
    CMP ECX,dword ptr [EBX + 0x1c]      ; 00443cce
    JLE 0x00443cf5                      ; 00443cd1
        ;   XREF to: 00443cf5 (CONDITIONAL_JUMP)  ; LAB_00443cf5
    PUSH EDI                            ; 00443cd3
        ;   Label: LAB_00443cd3
    PUSH ESI                            ; 00443cd4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 00443cd5
    MOV EAX,dword ptr [EBX + 0x10]      ; 00443cd8
    ADD EAX,ESI                         ; 00443cdb
    MOV AL,byte ptr [EAX]               ; 00443cdd
    LEA EDI,[ESI + 0x1]                 ; 00443cdf
    AND EAX,0xff                        ; 00443ce2
    MOV dword ptr [EBX + 0x1c],EDI      ; 00443ce7
    POP ESI                             ; 00443cea
    POP EDI                             ; 00443ceb
    POP EBX                             ; 00443cec
    RET                                 ; 00443ced
    MOV EAX,0xfffffffe                  ; 00443cee
        ;   Label: LAB_00443cee
    POP EBX                             ; 00443cf3
    RET                                 ; 00443cf4
    PUSH EBX                            ; 00443cf5
        ;   Label: LAB_00443cf5
    CALL FUN_00444020                   ; 00443cf6
        ;   XREF to: 00444020 (UNCONDITIONAL_CALL)  ; undefined FUN_00444020()
    ADD ESP,0x4                         ; 00443cfb
    TEST EAX,EAX                        ; 00443cfe
    JGE 0x00443cd3                      ; 00443d00
        ;   XREF to: 00443cd3 (CONDITIONAL_JUMP)  ; LAB_00443cd3
    POP EBX                             ; 00443d02
    RET                                 ; 00443d03

