; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00557390(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_FUN_00553660
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_00558e90
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557390
        ;   Label: sound_sndmain.cpp_FUN_00557390
    PUSH ESI                            ; 00557391
    PUSH EDI                            ; 00557392
    PUSH EBP                            ; 00557393
    MOV EBP,dword ptr [ESP + 0x14]      ; 00557394
    CALL sound_sndmain.cpp_FUN_00558e90 ; 00557398
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
    MOV EBX,0x2cebc24                   ; 0055739d
    MOV EDI,EBP                         ; 005573a2
    XOR ESI,ESI                         ; 005573a4
    PUSH EDI                            ; 005573a6
        ;   Label: LAB_005573a6
    PUSH EBX                            ; 005573a7
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005573a8
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005573ad
    TEST EAX,EAX                        ; 005573b0
    JNZ 0x005573e6                      ; 005573b2
        ;   XREF to: 005573e6 (CONDITIONAL_JUMP)  ; LAB_005573e6
    TEST EBX,EBX                        ; 005573b4
    JZ 0x005573f2                       ; 005573b6
        ;   XREF to: 005573f2 (CONDITIONAL_JUMP)  ; LAB_005573f2
    CMP dword ptr [EBX + 0x1ac],0x0     ; 005573b8
    JNZ 0x00557402                      ; 005573bf
        ;   XREF to: 00557402 (CONDITIONAL_JUMP)  ; LAB_00557402
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005573c1
    PUSH ECX                            ; 005573c5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005573c6
    PUSH ESI                            ; 005573ca
    PUSH EBX                            ; 005573cb
    CALL sound_sndmain.cpp_FUN_00553660 ; 005573cc
        ;   XREF to: 00553660 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00553660()
    MOV EBX,EAX                         ; 005573d1
    ADD ESP,0xc                         ; 005573d3
    TEST EAX,EAX                        ; 005573d6
    JNZ 0x00557412                      ; 005573d8
        ;   XREF to: 00557412 (CONDITIONAL_JUMP)  ; LAB_00557412
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 005573da
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_005573da
    XOR EAX,EAX                         ; 005573df
    POP EBP                             ; 005573e1
    POP EDI                             ; 005573e2
    POP ESI                             ; 005573e3
    POP EBX                             ; 005573e4
    RET                                 ; 005573e5
    INC ESI                             ; 005573e6
        ;   Label: LAB_005573e6
    ADD EBX,0x1b0                       ; 005573e7
    CMP ESI,0x40                        ; 005573ed
    JL 0x005573a6                       ; 005573f0
        ;   XREF to: 005573a6 (CONDITIONAL_JUMP)  ; LAB_005573a6
    PUSH EBP                            ; 005573f2
        ;   Label: LAB_005573f2
    PUSH 0x5d39c0                       ; 005573f3
    CALL sound_sndmain.cpp_FUN_0055a560 ; 005573f8
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x8                         ; 005573fd
    JMP 0x005573da                      ; 00557400
        ;   XREF to: 005573da (UNCONDITIONAL_JUMP)  ; LAB_005573da
    PUSH EBP                            ; 00557402
        ;   Label: LAB_00557402
    PUSH 0x5d39e9                       ; 00557403
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00557408
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x8                         ; 0055740d
    JMP 0x005573da                      ; 00557410
        ;   XREF to: 005573da (UNCONDITIONAL_JUMP)  ; LAB_005573da
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00557412
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00557412
    MOV EAX,EBX                         ; 00557417
    POP EBP                             ; 00557419
    POP EDI                             ; 0055741a
    POP ESI                             ; 0055741b
    POP EBX                             ; 0055741c
    RET                                 ; 0055741d

