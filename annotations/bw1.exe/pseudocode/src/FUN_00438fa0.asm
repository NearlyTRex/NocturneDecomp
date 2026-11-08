; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438fa0(short *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   FUN_004011a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438fa0
        ;   Label: FUN_00438fa0
    PUSH ESI                            ; 00438fa1
    PUSH EDI                            ; 00438fa2
    PUSH EBP                            ; 00438fa3
    SUB ESP,0x4                         ; 00438fa4
    MOV EDX,0xfb                        ; 00438fa7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00438fac
    XOR EDI,EDI                         ; 00438fb0
    MOV dword ptr [0x01c4f020],EDX      ; 00438fb2 | DAT_01c4f020
    TEST ECX,ECX                        ; 00438fb8
    JLE 0x0043907d                      ; 00438fba
        ;   XREF to: 0043907d (CONDITIONAL_JUMP)  ; LAB_0043907d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00438fc0
    MOV AX,word ptr [EBX]               ; 00438fc4
        ;   Label: LAB_00438fc4
    MOV EBP,dword ptr [ESP + 0x20]      ; 00438fc7
    MOVSX ECX,AX                        ; 00438fcb
    MOV EAX,[0x01c4f008]                ; 00438fce | DAT_01c4f008
    ADD ECX,EBP                         ; 00438fd3
    CMP ECX,EAX                         ; 00438fd5
    JGE 0x00438fdb                      ; 00438fd7
        ;   XREF to: 00438fdb (CONDITIONAL_JUMP)  ; LAB_00438fdb
    MOV ECX,EAX                         ; 00438fd9
    MOV EDX,dword ptr [0x01c4f010]      ; 00438fdb | DAT_01c4f010
        ;   Label: LAB_00438fdb
    CMP ECX,EDX                         ; 00438fe1
    JL 0x00438fe7                       ; 00438fe3
        ;   XREF to: 00438fe7 (CONDITIONAL_JUMP)  ; LAB_00438fe7
    MOV ECX,EDX                         ; 00438fe5
    MOV AX,word ptr [EBX + 0x2]         ; 00438fe7
        ;   Label: LAB_00438fe7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00438feb
    MOVSX EDX,AX                        ; 00438fef
    MOV EBP,dword ptr [0x01c4f00c]      ; 00438ff2 | DAT_01c4f00c
    ADD EDX,ESI                         ; 00438ff8
    CMP EDX,EBP                         ; 00438ffa
    JGE 0x00439000                      ; 00438ffc
        ;   XREF to: 00439000 (CONDITIONAL_JUMP)  ; LAB_00439000
    MOV EDX,EBP                         ; 00438ffe
    MOV EAX,[0x01c4f014]                ; 00439000 | DAT_01c4f014
        ;   Label: LAB_00439000
    CMP EDX,EAX                         ; 00439005
    JL 0x0043900b                       ; 00439007
        ;   XREF to: 0043900b (CONDITIONAL_JUMP)  ; LAB_0043900b
    MOV EDX,EAX                         ; 00439009
    MOV AX,word ptr [EBX + 0x4]         ; 0043900b
        ;   Label: LAB_0043900b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043900f
    MOVSX ESI,AX                        ; 00439013
    MOV EAX,[0x01c4f008]                ; 00439016 | DAT_01c4f008
    ADD ESI,EBP                         ; 0043901b
    CMP ESI,EAX                         ; 0043901d
    JGE 0x00439023                      ; 0043901f
        ;   XREF to: 00439023 (CONDITIONAL_JUMP)  ; LAB_00439023
    MOV ESI,EAX                         ; 00439021
    MOV EBP,dword ptr [0x01c4f010]      ; 00439023 | DAT_01c4f010
        ;   Label: LAB_00439023
    CMP ESI,EBP                         ; 00439029
    JL 0x0043902f                       ; 0043902b
        ;   XREF to: 0043902f (CONDITIONAL_JUMP)  ; LAB_0043902f
    MOV ESI,EBP                         ; 0043902d
    MOV AX,word ptr [EBX + 0x6]         ; 0043902f
        ;   Label: LAB_0043902f
    ADD EAX,EAX                         ; 00439033
    SAR AX,0x1                          ; 00439035
    MOV word ptr [ESP],AX               ; 00439038
    MOV EAX,dword ptr [ESP + -0x2]      ; 0043903c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00439040
    SAR EAX,0x10                        ; 00439044
    ADD EAX,EBP                         ; 00439047
    MOV EBP,dword ptr [0x01c4f00c]      ; 00439049 | DAT_01c4f00c
    CMP EAX,EBP                         ; 0043904f
    JGE 0x00439055                      ; 00439051
        ;   XREF to: 00439055 (CONDITIONAL_JUMP)  ; LAB_00439055
    MOV EAX,EBP                         ; 00439053
    MOV EBP,dword ptr [0x01c4f014]      ; 00439055 | DAT_01c4f014
        ;   Label: LAB_00439055
    CMP EAX,EBP                         ; 0043905b
    JL 0x00439061                       ; 0043905d
        ;   XREF to: 00439061 (CONDITIONAL_JUMP)  ; LAB_00439061
    MOV EAX,EBP                         ; 0043905f
    PUSH EAX                            ; 00439061
        ;   Label: LAB_00439061
    PUSH ESI                            ; 00439062
    PUSH EDX                            ; 00439063
    PUSH ECX                            ; 00439064
    CALL FUN_004011a0                   ; 00439065
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004011a0()
    ADD ESP,0x10                        ; 0043906a
    INC EDI                             ; 0043906d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043906e
    ADD EBX,0x8                         ; 00439072
    CMP EDI,ESI                         ; 00439075
    JL 0x00438fc4                       ; 00439077
        ;   XREF to: 00438fc4 (CONDITIONAL_JUMP)  ; LAB_00438fc4
    ADD ESP,0x4                         ; 0043907d
        ;   Label: LAB_0043907d
    POP EBP                             ; 00439080
    POP EDI                             ; 00439081
    POP ESI                             ; 00439082
    POP EBX                             ; 00439083
    RET                                 ; 00439084

