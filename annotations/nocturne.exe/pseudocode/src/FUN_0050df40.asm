; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050df40(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0044ab60 at 0044abc1
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c777dc
;
; Called Functions:
;   FUN_0045ee60
;   FUN_004d76e0
;   FUN_00532b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050df40
        ;   Label: FUN_0050df40
    PUSH ESI                            ; 0050df41
    PUSH EDI                            ; 0050df42
    PUSH EBP                            ; 0050df43
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050df44
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050df48
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050df4c
    MOV EBX,dword ptr [0x005b9354]      ; 0050df50 | DAT_005b9354
    CMP dword ptr [EBX + 0x1f0],0x0     ; 0050df56 | DAT_01c777dc
    JNZ 0x0050df99                      ; 0050df5d
        ;   XREF to: 0050df99 (CONDITIONAL_JUMP)  ; LAB_0050df99
    MOV EBX,dword ptr [0x005ae704]      ; 0050df5f | DAT_005ae704
    MOV EBX,dword ptr [EBX + 0x18]      ; 0050df65 | DAT_01b4d750
    TEST EBX,EBX                        ; 0050df68
    JZ 0x0050df9e                       ; 0050df6a
        ;   XREF to: 0050df9e (CONDITIONAL_JUMP)  ; LAB_0050df9e
    XOR EBX,EBX                         ; 0050df6c
    TEST EDI,EDI                        ; 0050df6e
    JLE 0x0050df90                      ; 0050df70
        ;   XREF to: 0050df90 (CONDITIONAL_JUMP)  ; LAB_0050df90
    MOV ESI,EAX                         ; 0050df72
    PUSH ESI                            ; 0050df74
        ;   Label: LAB_0050df74
    MOV EAX,dword ptr [EBP + 0x161268]  ; 0050df75
    PUSH EAX                            ; 0050df7b
    INC EBX                             ; 0050df7c
    CALL FUN_004d76e0                   ; 0050df7d
        ;   XREF to: 004d76e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d76e0()
    ADD ESI,0x28                        ; 0050df82
    ADD ESP,0x8                         ; 0050df85
    CMP EBX,EDI                         ; 0050df88
    JL 0x0050df74                       ; 0050df8a
        ;   XREF to: 0050df74 (CONDITIONAL_JUMP)  ; LAB_0050df74
    LEA EAX,[EAX]                       ; 0050df8c
    CMP dword ptr [0x01c02594],0x0      ; 0050df90 | DAT_01c02594
        ;   Label: LAB_0050df90
    JNZ 0x0050dfcc                      ; 0050df97
        ;   XREF to: 0050dfcc (CONDITIONAL_JUMP)  ; LAB_0050dfcc
    POP EBP                             ; 0050df99
        ;   Label: LAB_0050df99
    POP EDI                             ; 0050df9a
    POP ESI                             ; 0050df9b
    POP EBX                             ; 0050df9c
    RET                                 ; 0050df9d
    XOR ESI,ESI                         ; 0050df9e
        ;   Label: LAB_0050df9e
    TEST EDI,EDI                        ; 0050dfa0
    JLE 0x0050df90                      ; 0050dfa2
        ;   XREF to: 0050df90 (CONDITIONAL_JUMP)  ; LAB_0050df90
    MOV EBX,EAX                         ; 0050dfa4
    PUSH EBX                            ; 0050dfa6
        ;   Label: LAB_0050dfa6
    MOV ECX,dword ptr [0x005ae704]      ; 0050dfa7 | DAT_005ae704
    PUSH ECX                            ; 0050dfad | DAT_01b4d738
    INC ESI                             ; 0050dfae
    CALL FUN_0045ee60                   ; 0050dfaf
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ee60()
    ADD EBX,0x28                        ; 0050dfb4
    ADD ESP,0x8                         ; 0050dfb7
    CMP ESI,EDI                         ; 0050dfba
    JL 0x0050dfa6                       ; 0050dfbc
        ;   XREF to: 0050dfa6 (CONDITIONAL_JUMP)  ; LAB_0050dfa6
    CMP dword ptr [0x01c02594],0x0      ; 0050dfbe | DAT_01c02594
    JNZ 0x0050dfcc                      ; 0050dfc5
        ;   XREF to: 0050dfcc (CONDITIONAL_JUMP)  ; LAB_0050dfcc
    POP EBP                             ; 0050dfc7
    POP EDI                             ; 0050dfc8
    POP ESI                             ; 0050dfc9
    POP EBX                             ; 0050dfca
    RET                                 ; 0050dfcb
    CALL FUN_00532b30                   ; 0050dfcc
        ;   XREF to: 00532b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00532b30()
        ;   Label: LAB_0050dfcc
    POP EBP                             ; 0050dfd1
    POP EDI                             ; 0050dfd2
    POP ESI                             ; 0050dfd3
    POP EBX                             ; 0050dfd4
    RET                                 ; 0050dfd5

