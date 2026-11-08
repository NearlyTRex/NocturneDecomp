; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aafb0(int param_1,char *param_2)
;
;
; XREF[7]:
;   FUN_0047b800 at 0047b8cc
;   FUN_0047e2b0 at 0047e447
;   FUN_0047e870 at 0047ec0f
;   FUN_00484f20 at 00484f7b
;   FUN_00485380 at 00485403
;   FUN_004a1570 at 004a1618
;   FUN_004eb0e0 at 004eb1ec
;
; Called Functions:
;   FUN_004ab560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aafb0
        ;   Label: FUN_004aafb0
    PUSH ESI                            ; 004aafb1
    PUSH EDI                            ; 004aafb2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004aafb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004aafb7
    CMP dword ptr [EDI + 0x4210],0x0    ; 004aafbb
    JNZ 0x004ab018                      ; 004aafc2
        ;   XREF to: 004ab018 (CONDITIONAL_JUMP)  ; LAB_004ab018
    MOV AH,byte ptr [EBX]               ; 004aafc4
        ;   Label: LAB_004aafc4
    XOR ESI,ESI                         ; 004aafc6
    TEST AH,AH                          ; 004aafc8
    JZ 0x004ab07e                       ; 004aafca
        ;   XREF to: 004ab07e (CONDITIONAL_JUMP)  ; LAB_004ab07e
    MOV DH,byte ptr [EBX]               ; 004aafd0
        ;   Label: LAB_004aafd0
    CMP DH,0xa                          ; 004aafd2
    JNZ 0x004ab050                      ; 004aafd5
        ;   XREF to: 004ab050 (CONDITIONAL_JUMP)  ; LAB_004ab050
    MOV DL,DH                           ; 004aafdb
    MOV ECX,dword ptr [EDI + 0x41f0]    ; 004aafdd
    MOV ESI,dword ptr [EDI + 0x41f8]    ; 004aafe3
        ;   Label: LAB_004aafe3
    ADD ESI,dword ptr [EDI + 0x41f0]    ; 004aafe9
    ADD ECX,ESI                         ; 004aafef
    LEA ESI,[EBX + 0x1]                 ; 004aaff1
    MOV AL,byte ptr [ESI]               ; 004aaff4
        ;   Label: LAB_004aaff4
    CMP AL,DL                           ; 004aaff6
    JZ 0x004ab00c                       ; 004aaff8
        ;   XREF to: 004ab00c (CONDITIONAL_JUMP)  ; LAB_004ab00c
    CMP AL,0x0                          ; 004aaffa
    JZ 0x004ab00a                       ; 004aaffc
        ;   XREF to: 004ab00a (CONDITIONAL_JUMP)  ; LAB_004ab00a
    INC ESI                             ; 004aaffe
    MOV AL,byte ptr [ESI]               ; 004aafff
    CMP AL,DL                           ; 004ab001
    JZ 0x004ab00c                       ; 004ab003
        ;   XREF to: 004ab00c (CONDITIONAL_JUMP)  ; LAB_004ab00c
    INC ESI                             ; 004ab005
    CMP AL,0x0                          ; 004ab006
    JNZ 0x004aaff4                      ; 004ab008
        ;   XREF to: 004aaff4 (CONDITIONAL_JUMP)  ; LAB_004aaff4
    SUB ESI,ESI                         ; 004ab00a
        ;   Label: LAB_004ab00a
    MOV EBX,ESI                         ; 004ab00c
        ;   Label: LAB_004ab00c
    TEST ESI,ESI                        ; 004ab00e
    JNZ 0x004aafe3                      ; 004ab010
        ;   XREF to: 004aafe3 (CONDITIONAL_JUMP)  ; LAB_004aafe3
    MOV EAX,ECX                         ; 004ab012
    POP EDI                             ; 004ab014
    POP ESI                             ; 004ab015
    POP EBX                             ; 004ab016
    RET                                 ; 004ab017
    MOV DL,0xa                          ; 004ab018
        ;   Label: LAB_004ab018
    MOV ESI,EBX                         ; 004ab01a
    MOV AL,byte ptr [ESI]               ; 004ab01c
        ;   Label: LAB_004ab01c
    CMP AL,DL                           ; 004ab01e
    JZ 0x004ab034                       ; 004ab020
        ;   XREF to: 004ab034 (CONDITIONAL_JUMP)  ; LAB_004ab034
    CMP AL,0x0                          ; 004ab022
    JZ 0x004ab032                       ; 004ab024
        ;   XREF to: 004ab032 (CONDITIONAL_JUMP)  ; LAB_004ab032
    INC ESI                             ; 004ab026
    MOV AL,byte ptr [ESI]               ; 004ab027
    CMP AL,DL                           ; 004ab029
    JZ 0x004ab034                       ; 004ab02b
        ;   XREF to: 004ab034 (CONDITIONAL_JUMP)  ; LAB_004ab034
    INC ESI                             ; 004ab02d
    CMP AL,0x0                          ; 004ab02e
    JNZ 0x004ab01c                      ; 004ab030
        ;   XREF to: 004ab01c (CONDITIONAL_JUMP)  ; LAB_004ab01c
    SUB ESI,ESI                         ; 004ab032
        ;   Label: LAB_004ab032
    TEST ESI,ESI                        ; 004ab034
        ;   Label: LAB_004ab034
    JNZ 0x004aafc4                      ; 004ab036
        ;   XREF to: 004aafc4 (CONDITIONAL_JUMP)  ; LAB_004aafc4
    PUSH EBX                            ; 004ab038
    MOV EAX,dword ptr [EDI + 0x4214]    ; 004ab039
    PUSH EAX                            ; 004ab03f
    MOV ECX,dword ptr [EAX + 0x6a44]    ; 004ab040
    CALL dword ptr [ECX + 0xc]          ; 004ab046
    ADD ESP,0x8                         ; 004ab049
    POP EDI                             ; 004ab04c
    POP ESI                             ; 004ab04d
    POP EBX                             ; 004ab04e
    RET                                 ; 004ab04f
    XOR EAX,EAX                         ; 004ab050
        ;   Label: LAB_004ab050
    MOV AL,DH                           ; 004ab052
    PUSH EAX                            ; 004ab054
    PUSH EDI                            ; 004ab055
    CALL FUN_004ab560                   ; 004ab056
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 004ab05b
    CMP EAX,ESI                         ; 004ab05e
    JLE 0x004ab072                      ; 004ab060
        ;   XREF to: 004ab072 (CONDITIONAL_JUMP)  ; LAB_004ab072
    XOR EAX,EAX                         ; 004ab062
    MOV AL,byte ptr [EBX]               ; 004ab064
    PUSH EAX                            ; 004ab066
    PUSH EDI                            ; 004ab067
    CALL FUN_004ab560                   ; 004ab068
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 004ab06d
    MOV ESI,EAX                         ; 004ab070
    MOV DL,byte ptr [EBX + 0x1]         ; 004ab072
        ;   Label: LAB_004ab072
    INC EBX                             ; 004ab075
    TEST DL,DL                          ; 004ab076
    JNZ 0x004aafd0                      ; 004ab078
        ;   XREF to: 004aafd0 (CONDITIONAL_JUMP)  ; LAB_004aafd0
    MOV EAX,ESI                         ; 004ab07e
        ;   Label: LAB_004ab07e
    POP EDI                             ; 004ab080
    POP ESI                             ; 004ab081
    POP EBX                             ; 004ab082
    RET                                 ; 004ab083

