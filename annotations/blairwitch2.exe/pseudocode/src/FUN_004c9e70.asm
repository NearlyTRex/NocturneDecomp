; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c9e70(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   FUN_004bbf70 at 004bc65d
;   FUN_004fb590 at 004fbbe6
;
; Referenced Globals:
;   undefined4 DAT_005d958a
;   undefined4 DAT_005d958e
;   undefined4 DAT_01cbcaf8
;   undefined4 DAT_01cdde40
;
; Called Functions:
;   FUN_004c86c0
;   FUN_004c8da0
;   FUN_005b8100
;   FUN_005b9600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9e70
        ;   Label: FUN_004c9e70
    PUSH ESI                            ; 004c9e71
    PUSH EDI                            ; 004c9e72
    PUSH EBP                            ; 004c9e73
    SUB ESP,0x100                       ; 004c9e74
    MOV EDI,dword ptr [ESP + 0x118]     ; 004c9e7a
    PUSH EDI                            ; 004c9e81
    PUSH 0xff                           ; 004c9e82
    LEA EBX,[ESP + 0x8]                 ; 004c9e87
    PUSH EBX                            ; 004c9e8b
    CALL FUN_005b9600                   ; 004c9e8c
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9600()
    ADD ESP,0xc                         ; 004c9e91
    PUSH 0x1cdde40                      ; 004c9e94 | DAT_01cdde40
    PUSH 0x5d958a                       ; 004c9e99 | DAT_005d958a
    PUSH EDI                            ; 004c9e9e
    XOR ESI,ESI                         ; 004c9e9f
    CALL FUN_005b8100                   ; 004c9ea1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EDX,dword ptr [0x01cdde40]      ; 004c9ea6 | DAT_01cdde40
    ADD ESP,0xc                         ; 004c9eac
    TEST EDX,EDX                        ; 004c9eaf
    JLE 0x004c9ed0                      ; 004c9eb1
        ;   XREF to: 004c9ed0 (CONDITIONAL_JUMP)  ; LAB_004c9ed0
    MOV EBX,0x1cdde44                   ; 004c9eb3
    PUSH EDI                            ; 004c9eb8
        ;   Label: LAB_004c9eb8
    PUSH EBX                            ; 004c9eb9
    INC ESI                             ; 004c9eba
    CALL FUN_004c8da0                   ; 004c9ebb
        ;   XREF to: 004c8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8da0()
    MOV ECX,dword ptr [0x01cdde40]      ; 004c9ec0 | DAT_01cdde40
    ADD ESP,0x8                         ; 004c9ec6
    ADD EBX,0x28                        ; 004c9ec9
    CMP ESI,ECX                         ; 004c9ecc
    JL 0x004c9eb8                       ; 004c9ece
        ;   XREF to: 004c9eb8 (CONDITIONAL_JUMP)  ; LAB_004c9eb8
    PUSH 0x1cbcaf8                      ; 004c9ed0 | DAT_01cbcaf8
        ;   Label: LAB_004c9ed0
    PUSH 0x5d958e                       ; 004c9ed5 | DAT_005d958e
    PUSH EDI                            ; 004c9eda
    XOR ESI,ESI                         ; 004c9edb
    CALL FUN_005b8100                   ; 004c9edd
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EBX,dword ptr [0x01cbcaf8]      ; 004c9ee2 | DAT_01cbcaf8
    ADD ESP,0xc                         ; 004c9ee8
    TEST EBX,EBX                        ; 004c9eeb
    JLE 0x004c9f10                      ; 004c9eed
        ;   XREF to: 004c9f10 (CONDITIONAL_JUMP)  ; LAB_004c9f10
    MOV EBX,0x1cbcafc                   ; 004c9eef
    PUSH EDI                            ; 004c9ef4
        ;   Label: LAB_004c9ef4
    PUSH EBX                            ; 004c9ef5
    INC ESI                             ; 004c9ef6
    CALL FUN_004c86c0                   ; 004c9ef7
        ;   XREF to: 004c86c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c86c0()
    MOV EBP,dword ptr [0x01cbcaf8]      ; 004c9efc | DAT_01cbcaf8
    ADD ESP,0x8                         ; 004c9f02
    ADD EBX,0x44                        ; 004c9f05
    CMP ESI,EBP                         ; 004c9f08
    JL 0x004c9ef4                       ; 004c9f0a
        ;   XREF to: 004c9ef4 (CONDITIONAL_JUMP)  ; LAB_004c9ef4
    LEA EAX,[EAX]                       ; 004c9f0c
    ADD ESP,0x100                       ; 004c9f10
        ;   Label: LAB_004c9f10
    POP EBP                             ; 004c9f16
    POP EDI                             ; 004c9f17
    POP ESI                             ; 004c9f18
    POP EBX                             ; 004c9f19
    RET                                 ; 004c9f1a

