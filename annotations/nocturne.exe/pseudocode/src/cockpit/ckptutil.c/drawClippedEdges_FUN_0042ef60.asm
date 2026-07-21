; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_drawClippedEdges_FUN_0042ef60(short *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004015a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ef60
        ;   Label: cockpit_ckptutil.c_drawClippedEdges_FUN_0042ef60
    PUSH ESI                            ; 0042ef61
    PUSH EDI                            ; 0042ef62
    PUSH EBP                            ; 0042ef63
    SUB ESP,0x4                         ; 0042ef64
    MOV EDX,0xfb                        ; 0042ef67
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042ef6c
    XOR EDI,EDI                         ; 0042ef70
    MOV dword ptr [0x01c00c70],EDX      ; 0042ef72 | DAT_01c00c70
    TEST ECX,ECX                        ; 0042ef78
    JLE 0x0042f03d                      ; 0042ef7a
        ;   XREF to: 0042f03d (CONDITIONAL_JUMP)  ; LAB_0042f03d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042ef80
    MOV AX,word ptr [EBX]               ; 0042ef84
        ;   Label: LAB_0042ef84
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042ef87
    MOVSX ECX,AX                        ; 0042ef8b
    MOV EAX,[0x01c00c58]                ; 0042ef8e | DAT_01c00c58
    ADD ECX,EBP                         ; 0042ef93
    CMP ECX,EAX                         ; 0042ef95
    JGE 0x0042ef9b                      ; 0042ef97
        ;   XREF to: 0042ef9b (CONDITIONAL_JUMP)  ; LAB_0042ef9b
    MOV ECX,EAX                         ; 0042ef99
    MOV EDX,dword ptr [0x01c00c60]      ; 0042ef9b | DAT_01c00c60
        ;   Label: LAB_0042ef9b
    CMP ECX,EDX                         ; 0042efa1
    JL 0x0042efa7                       ; 0042efa3
        ;   XREF to: 0042efa7 (CONDITIONAL_JUMP)  ; LAB_0042efa7
    MOV ECX,EDX                         ; 0042efa5
    MOV AX,word ptr [EBX + 0x2]         ; 0042efa7
        ;   Label: LAB_0042efa7
    MOV ESI,dword ptr [ESP + 0x24]      ; 0042efab
    MOVSX EDX,AX                        ; 0042efaf
    MOV EBP,dword ptr [0x01c00c5c]      ; 0042efb2 | DAT_01c00c5c
    ADD EDX,ESI                         ; 0042efb8
    CMP EDX,EBP                         ; 0042efba
    JGE 0x0042efc0                      ; 0042efbc
        ;   XREF to: 0042efc0 (CONDITIONAL_JUMP)  ; LAB_0042efc0
    MOV EDX,EBP                         ; 0042efbe
    MOV EAX,[0x01c00c64]                ; 0042efc0 | DAT_01c00c64
        ;   Label: LAB_0042efc0
    CMP EDX,EAX                         ; 0042efc5
    JL 0x0042efcb                       ; 0042efc7
        ;   XREF to: 0042efcb (CONDITIONAL_JUMP)  ; LAB_0042efcb
    MOV EDX,EAX                         ; 0042efc9
    MOV AX,word ptr [EBX + 0x4]         ; 0042efcb
        ;   Label: LAB_0042efcb
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042efcf
    MOVSX ESI,AX                        ; 0042efd3
    MOV EAX,[0x01c00c58]                ; 0042efd6 | DAT_01c00c58
    ADD ESI,EBP                         ; 0042efdb
    CMP ESI,EAX                         ; 0042efdd
    JGE 0x0042efe3                      ; 0042efdf
        ;   XREF to: 0042efe3 (CONDITIONAL_JUMP)  ; LAB_0042efe3
    MOV ESI,EAX                         ; 0042efe1
    MOV EBP,dword ptr [0x01c00c60]      ; 0042efe3 | DAT_01c00c60
        ;   Label: LAB_0042efe3
    CMP ESI,EBP                         ; 0042efe9
    JL 0x0042efef                       ; 0042efeb
        ;   XREF to: 0042efef (CONDITIONAL_JUMP)  ; LAB_0042efef
    MOV ESI,EBP                         ; 0042efed
    MOV AX,word ptr [EBX + 0x6]         ; 0042efef
        ;   Label: LAB_0042efef
    ADD EAX,EAX                         ; 0042eff3
    SAR AX,0x1                          ; 0042eff5
    MOV word ptr [ESP],AX               ; 0042eff8
    MOV EAX,dword ptr [ESP + -0x2]      ; 0042effc
    MOV EBP,dword ptr [ESP + 0x24]      ; 0042f000
    SAR EAX,0x10                        ; 0042f004
    ADD EAX,EBP                         ; 0042f007
    MOV EBP,dword ptr [0x01c00c5c]      ; 0042f009 | DAT_01c00c5c
    CMP EAX,EBP                         ; 0042f00f
    JGE 0x0042f015                      ; 0042f011
        ;   XREF to: 0042f015 (CONDITIONAL_JUMP)  ; LAB_0042f015
    MOV EAX,EBP                         ; 0042f013
    MOV EBP,dword ptr [0x01c00c64]      ; 0042f015 | DAT_01c00c64
        ;   Label: LAB_0042f015
    CMP EAX,EBP                         ; 0042f01b
    JL 0x0042f021                       ; 0042f01d
        ;   XREF to: 0042f021 (CONDITIONAL_JUMP)  ; LAB_0042f021
    MOV EAX,EBP                         ; 0042f01f
    PUSH EAX                            ; 0042f021
        ;   Label: LAB_0042f021
    PUSH ESI                            ; 0042f022
    PUSH EDX                            ; 0042f023
    PUSH ECX                            ; 0042f024
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0042f025
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawLine_FUN_004015a0()
    ADD ESP,0x10                        ; 0042f02a
    INC EDI                             ; 0042f02d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0042f02e
    ADD EBX,0x8                         ; 0042f032
    CMP EDI,ESI                         ; 0042f035
    JL 0x0042ef84                       ; 0042f037
        ;   XREF to: 0042ef84 (CONDITIONAL_JUMP)  ; LAB_0042ef84
    ADD ESP,0x4                         ; 0042f03d
        ;   Label: LAB_0042f03d
    POP EBP                             ; 0042f040
    POP EDI                             ; 0042f041
    POP ESI                             ; 0042f042
    POP EBX                             ; 0042f043
    RET                                 ; 0042f044

