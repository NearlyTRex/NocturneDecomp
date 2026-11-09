; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_texture_cpp_FUN_00574490(int param_1,int param_2,char *param_3)
;
;
; XREF[3]:
;   engine_texture.cpp_FUN_00574e00 at 00574e33
;   engine_texture.cpp_FUN_00574ea0 at 00574ecf
;   engine_texture.cpp_FUN_00574f5c at 00574f8f
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574490
        ;   Label: engine_texture.cpp_FUN_00574490
    PUSH ESI                            ; 00574491
    PUSH EDI                            ; 00574492
    PUSH EBP                            ; 00574493
    MOV EDI,dword ptr [ESP + 0x14]      ; 00574494
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574498
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057449c
    TEST ESI,ESI                        ; 005744a0
    JL 0x005744ac                       ; 005744a2
        ;   XREF to: 005744ac (CONDITIONAL_JUMP)  ; LAB_005744ac
    CMP ESI,0x400                       ; 005744a4
    JL 0x005744e1                       ; 005744aa
        ;   XREF to: 005744e1 (CONDITIONAL_JUMP)  ; LAB_005744e1
    MOV EDX,dword ptr [EDI + 0x18004]   ; 005744ac
        ;   Label: LAB_005744ac
    XOR EBX,EBX                         ; 005744b2
    TEST EDX,EDX                        ; 005744b4
    JLE 0x005744d7                      ; 005744b6
        ;   XREF to: 005744d7 (CONDITIONAL_JUMP)  ; LAB_005744d7
    LEA ESI,[EDI + 0x8]                 ; 005744b8
    PUSH EBP                            ; 005744bb
        ;   Label: LAB_005744bb
    PUSH ESI                            ; 005744bc
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005744bd
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005744c2
    TEST EAX,EAX                        ; 005744c5
    JZ 0x0057450a                       ; 005744c7
        ;   XREF to: 0057450a (CONDITIONAL_JUMP)  ; LAB_0057450a
    INC EBX                             ; 005744c9
    MOV ECX,dword ptr [EDI + 0x18004]   ; 005744ca
    ADD ESI,0x60                        ; 005744d0
    CMP EBX,ECX                         ; 005744d3
    JL 0x005744bb                       ; 005744d5
        ;   XREF to: 005744bb (CONDITIONAL_JUMP)  ; LAB_005744bb
    MOV EAX,0xffffffff                  ; 005744d7
        ;   Label: LAB_005744d7
    POP EBP                             ; 005744dc
    POP EDI                             ; 005744dd
    POP ESI                             ; 005744de
    POP EBX                             ; 005744df
    RET                                 ; 005744e0
    LEA EAX,[ESI*0x4 + 0x0]             ; 005744e1
        ;   Label: LAB_005744e1
    SUB EAX,ESI                         ; 005744e8
    LEA EBX,[EDI + 0x4]                 ; 005744ea
    SHL EAX,0x5                         ; 005744ed
    ADD EAX,EBX                         ; 005744f0
    PUSH EBP                            ; 005744f2
    ADD EAX,0x4                         ; 005744f3
    PUSH EAX                            ; 005744f6
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005744f7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005744fc
    TEST EAX,EAX                        ; 005744ff
    JNZ 0x005744ac                      ; 00574501
        ;   XREF to: 005744ac (CONDITIONAL_JUMP)  ; LAB_005744ac
    MOV EAX,ESI                         ; 00574503
    POP EBP                             ; 00574505
    POP EDI                             ; 00574506
    POP ESI                             ; 00574507
    POP EBX                             ; 00574508
    RET                                 ; 00574509
    MOV EAX,EBX                         ; 0057450a
        ;   Label: LAB_0057450a
    POP EBP                             ; 0057450c
    POP EDI                             ; 0057450d
    POP ESI                             ; 0057450e
    POP EBX                             ; 0057450f
    RET                                 ; 00574510

