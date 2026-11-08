; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004659c0(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[34]:
;   FUN_0040d460 at 0040d4b3
;   FUN_0043c330 at 0043c353
;   FUN_00444970 at 00444993
;   FUN_0044c130 at 0044c1d0
;   FUN_0044f750 at 0044f7d8
;   FUN_00459980 at 0045999a
;   FUN_00459d00 at 00459d47
;   FUN_00460550 at 00460570
;   FUN_00473b20 at 00473b30
;   FUN_004aa810 at 004aa8b0
;   ... and 24 more
;
; Called Functions:
;   FUN_00465660
;   FUN_004656d0
;   FUN_00466190
;   FUN_005a4120
;   FUN_005a43ec
;   FUN_005a457c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004659c0
        ;   Label: FUN_004659c0
    PUSH ESI                            ; 004659c1
    PUSH EDI                            ; 004659c2
    SUB ESP,0x214                       ; 004659c3
    MOV EDI,dword ptr [ESP + 0x224]     ; 004659c9
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004659d0
    MOV EDX,dword ptr [ESP + 0x228]     ; 004659d7
    PUSH EDX                            ; 004659de
    PUSH EDI                            ; 004659df
    LEA EAX,[ESP + 0x8]                 ; 004659e0
    PUSH EAX                            ; 004659e4
    MOV EBX,ESI                         ; 004659e5
    CALL FUN_00465660                   ; 004659e7
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined FUN_00465660()
    MOV AH,byte ptr [ESI]               ; 004659ec
    ADD ESP,0xc                         ; 004659ee
    TEST AH,AH                          ; 004659f1
    JZ 0x00465a34                       ; 004659f3
        ;   XREF to: 00465a34 (CONDITIONAL_JUMP)  ; LAB_00465a34
    XOR EAX,EAX                         ; 004659f5
        ;   Label: LAB_004659f5
    MOV AL,byte ptr [EBX]               ; 004659f7
    PUSH EAX                            ; 004659f9
    CALL FUN_005a4120                   ; 004659fa
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4120()
    ADD ESP,0x4                         ; 004659ff
    CMP EAX,0x57                        ; 00465a02
    JNZ 0x00465a2c                      ; 00465a05
        ;   XREF to: 00465a2c (CONDITIONAL_JUMP)  ; LAB_00465a2c
    TEST EDI,EDI                        ; 00465a07
    JZ 0x00465a14                       ; 00465a09
        ;   XREF to: 00465a14 (CONDITIONAL_JUMP)  ; LAB_00465a14
    PUSH EDI                            ; 00465a0b
    CALL FUN_00466190                   ; 00465a0c
        ;   XREF to: 00466190 (UNCONDITIONAL_CALL)  ; undefined FUN_00466190()
    ADD ESP,0x4                         ; 00465a11
    PUSH ESI                            ; 00465a14
        ;   Label: LAB_00465a14
    LEA EAX,[ESP + 0x4]                 ; 00465a15
    PUSH EAX                            ; 00465a19
    CALL FUN_005a43ec                   ; 00465a1a
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 00465a1f
    ADD ESP,0x214                       ; 00465a22
        ;   Label: LAB_00465a22
    POP EDI                             ; 00465a28
    POP ESI                             ; 00465a29
    POP EBX                             ; 00465a2a
    RET                                 ; 00465a2b
    MOV DL,byte ptr [EBX + 0x1]         ; 00465a2c
        ;   Label: LAB_00465a2c
    INC EBX                             ; 00465a2f
    TEST DL,DL                          ; 00465a30
    JNZ 0x004659f5                      ; 00465a32
        ;   XREF to: 004659f5 (CONDITIONAL_JUMP)  ; LAB_004659f5
    MOV EAX,ESP                         ; 00465a34
        ;   Label: LAB_00465a34
    PUSH EAX                            ; 00465a36
    CALL FUN_004656d0                   ; 00465a37
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004656d0()
    ADD ESP,0x4                         ; 00465a3c
    TEST EAX,EAX                        ; 00465a3f
    JZ 0x00465a22                       ; 00465a41
        ;   XREF to: 00465a22 (CONDITIONAL_JUMP)  ; LAB_00465a22
    PUSH ESI                            ; 00465a43
    LEA EAX,[ESP + 0x104]               ; 00465a44
    PUSH EAX                            ; 00465a4b
    CALL FUN_005a43ec                   ; 00465a4c
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined FUN_005a43ec()
    ADD ESP,0x8                         ; 00465a51
    MOV EBX,EAX                         ; 00465a54
    TEST EAX,EAX                        ; 00465a56
    JZ 0x00465a22                       ; 00465a58
        ;   XREF to: 00465a22 (CONDITIONAL_JUMP)  ; LAB_00465a22
    MOV ECX,dword ptr [ESP + 0x200]     ; 00465a5a
    TEST ECX,ECX                        ; 00465a61
    JZ 0x00465a71                       ; 00465a63
        ;   XREF to: 00465a71 (CONDITIONAL_JUMP)  ; LAB_00465a71
    PUSH 0x0                            ; 00465a65
    PUSH ECX                            ; 00465a67
    PUSH EAX                            ; 00465a68
    CALL FUN_005a457c                   ; 00465a69
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined FUN_005a457c()
    ADD ESP,0xc                         ; 00465a6e
    MOV EAX,EBX                         ; 00465a71
        ;   Label: LAB_00465a71
    ADD ESP,0x214                       ; 00465a73
    POP EDI                             ; 00465a79
    POP ESI                             ; 00465a7a
    POP EBX                             ; 00465a7b
    RET                                 ; 00465a7c

