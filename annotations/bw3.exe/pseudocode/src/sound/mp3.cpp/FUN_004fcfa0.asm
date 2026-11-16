; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fcfa0(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcfa0
        ;   Label: FUN_004fcfa0
    PUSH ESI                            ; 004fcfa1
    PUSH EDI                            ; 004fcfa2
    PUSH EBP                            ; 004fcfa3
    SUB ESP,0xc                         ; 004fcfa4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004fcfa7
    MOV ECX,dword ptr [ESI]             ; 004fcfab
    MOV EAX,dword ptr [ECX + 0x4]       ; 004fcfad
    DEC EAX                             ; 004fcfb0
    MOV dword ptr [ESP],EAX             ; 004fcfb1
    MOV EAX,dword ptr [ECX + 0xc]       ; 004fcfb4
    MOV EBX,dword ptr [ECX]             ; 004fcfb7
    MOV dword ptr [ESP + 0x4],EAX       ; 004fcfb9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004fcfbd
    SUB EAX,EBX                         ; 004fcfc4
    SHL EAX,0x2                         ; 004fcfc6
    MOV EBP,EAX                         ; 004fcfc9
    SHL EBP,0x4                         ; 004fcfcb
    SUB EBP,EAX                         ; 004fcfce
    MOV EAX,dword ptr [ESP]             ; 004fcfd0
    SHL EAX,0x2                         ; 004fcfd3
    MOV EDX,EAX                         ; 004fcfd6
    SHL EAX,0x4                         ; 004fcfd8
    SUB EAX,EDX                         ; 004fcfdb
    ADD EBP,EAX                         ; 004fcfdd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fcfdf
    MOV EDX,dword ptr [EBP + EAX*0x4 + 0x6011f8] ; 004fcfe3
    MOV EAX,EDX                         ; 004fcfea
    MOV EBP,dword ptr [ESI + 0x10]      ; 004fcfec
    SAR EDX,0x1f                        ; 004fcfef
    IDIV EBP                            ; 004fcff2
    MOV EDX,EAX                         ; 004fcff4
    MOV EAX,dword ptr [ECX + 0x10]      ; 004fcff6
    MOV ECX,EBX                         ; 004fcff9
    SHL ECX,0x5                         ; 004fcffb
    MOV EDI,dword ptr [ESI + 0x18]      ; 004fcffe
    FLD double ptr [ECX + EAX*0x8 + 0x6011b8] ; 004fd001
    CALL crt_math.c_round_FUN_005a3120  ; 004fd008
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004fd00d
    CMP EBX,0x1                         ; 004fd011
    JNZ 0x004fd099                      ; 004fd014
        ;   XREF to: 004fd099 (CONDITIONAL_JUMP)  ; LAB_004fd099
    CMP dword ptr [ESP + 0x8],0x30      ; 004fd01a
    JNZ 0x004fd03b                      ; 004fd01f
        ;   XREF to: 004fd03b (CONDITIONAL_JUMP)  ; LAB_004fd03b
    CMP EDX,0x38                        ; 004fd021
    JL 0x004fd03b                       ; 004fd024
        ;   XREF to: 004fd03b (CONDITIONAL_JUMP)  ; LAB_004fd03b
    XOR EAX,EAX                         ; 004fd026
        ;   Label: LAB_004fd026
    CMP EAX,dword ptr [ESI + 0xc]       ; 004fd028
    JNZ 0x004fd0ad                      ; 004fd02b
        ;   XREF to: 004fd0ad (CONDITIONAL_JUMP)  ; LAB_004fd0ad
    MOV EAX,EDI                         ; 004fd031
    ADD ESP,0xc                         ; 004fd033
    POP EBP                             ; 004fd036
    POP EDI                             ; 004fd037
    POP ESI                             ; 004fd038
    POP EBX                             ; 004fd039
    RET                                 ; 004fd03a
    CMP EDX,0x38                        ; 004fd03b
        ;   Label: LAB_004fd03b
    JL 0x004fd045                       ; 004fd03e
        ;   XREF to: 004fd045 (CONDITIONAL_JUMP)  ; LAB_004fd045
    CMP EDX,0x50                        ; 004fd040
    JLE 0x004fd026                      ; 004fd043
        ;   XREF to: 004fd026 (CONDITIONAL_JUMP)  ; LAB_004fd026
    CMP dword ptr [ESP + 0x8],0x30      ; 004fd045
        ;   Label: LAB_004fd045
    JZ 0x004fd065                       ; 004fd04a
        ;   XREF to: 004fd065 (CONDITIONAL_JUMP)  ; LAB_004fd065
    CMP EDX,0x60                        ; 004fd04c
    JL 0x004fd065                       ; 004fd04f
        ;   XREF to: 004fd065 (CONDITIONAL_JUMP)  ; LAB_004fd065
    MOV EAX,0x1                         ; 004fd051
    CMP EAX,dword ptr [ESI + 0xc]       ; 004fd056
    JNZ 0x004fd0ad                      ; 004fd059
        ;   XREF to: 004fd0ad (CONDITIONAL_JUMP)  ; LAB_004fd0ad
    MOV EAX,EDI                         ; 004fd05b
    ADD ESP,0xc                         ; 004fd05d
    POP EBP                             ; 004fd060
    POP EDI                             ; 004fd061
    POP ESI                             ; 004fd062
    POP EBX                             ; 004fd063
    RET                                 ; 004fd064
    CMP dword ptr [ESP + 0x8],0x20      ; 004fd065
        ;   Label: LAB_004fd065
    JZ 0x004fd085                       ; 004fd06a
        ;   XREF to: 004fd085 (CONDITIONAL_JUMP)  ; LAB_004fd085
    CMP EDX,0x30                        ; 004fd06c
    JG 0x004fd085                       ; 004fd06f
        ;   XREF to: 004fd085 (CONDITIONAL_JUMP)  ; LAB_004fd085
    MOV EAX,0x2                         ; 004fd071
    CMP EAX,dword ptr [ESI + 0xc]       ; 004fd076
    JNZ 0x004fd0ad                      ; 004fd079
        ;   XREF to: 004fd0ad (CONDITIONAL_JUMP)  ; LAB_004fd0ad
    MOV EAX,EDI                         ; 004fd07b
    ADD ESP,0xc                         ; 004fd07d
    POP EBP                             ; 004fd080
    POP EDI                             ; 004fd081
    POP ESI                             ; 004fd082
    POP EBX                             ; 004fd083
    RET                                 ; 004fd084
    MOV EAX,0x3                         ; 004fd085
        ;   Label: LAB_004fd085
    CMP EAX,dword ptr [ESI + 0xc]       ; 004fd08a
    JNZ 0x004fd0ad                      ; 004fd08d
        ;   XREF to: 004fd0ad (CONDITIONAL_JUMP)  ; LAB_004fd0ad
    MOV EAX,EDI                         ; 004fd08f
    ADD ESP,0xc                         ; 004fd091
    POP EBP                             ; 004fd094
    POP EDI                             ; 004fd095
    POP ESI                             ; 004fd096
    POP EBX                             ; 004fd097
    RET                                 ; 004fd098
    MOV EAX,0x4                         ; 004fd099
        ;   Label: LAB_004fd099
    CMP EAX,dword ptr [ESI + 0xc]       ; 004fd09e
    JNZ 0x004fd0ad                      ; 004fd0a1
        ;   XREF to: 004fd0ad (CONDITIONAL_JUMP)  ; LAB_004fd0ad
    MOV EAX,EDI                         ; 004fd0a3
    ADD ESP,0xc                         ; 004fd0a5
    POP EBP                             ; 004fd0a8
    POP EDI                             ; 004fd0a9
    POP ESI                             ; 004fd0aa
    POP EBX                             ; 004fd0ab
    RET                                 ; 004fd0ac
    PUSH 0x1d94b98                      ; 004fd0ad
        ;   Label: LAB_004fd0ad
    MOV EAX,0x5c9ec7                    ; 004fd0b2
    MOV EDX,0x1d8                       ; 004fd0b7
    PUSH 0x5c9ed8                       ; 004fd0bc
    MOV [0x01d71de0],EAX                ; 004fd0c1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004fd0c6 | DAT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004fd0cc
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x8                         ; 004fd0d1
    MOV EAX,EDI                         ; 004fd0d4
    ADD ESP,0xc                         ; 004fd0d6
    POP EBP                             ; 004fd0d9
    POP EDI                             ; 004fd0da
    POP ESI                             ; 004fd0db
    POP EBX                             ; 004fd0dc
    RET                                 ; 004fd0dd

