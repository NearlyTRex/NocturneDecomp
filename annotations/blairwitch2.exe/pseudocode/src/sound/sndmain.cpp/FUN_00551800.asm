; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00551800(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   sound_sndmain.cpp_FUN_0054daf0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_FUN_005549c0
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551800
        ;   Label: sound_sndmain.cpp_FUN_00551800
    PUSH ESI                            ; 00551801
    PUSH EDI                            ; 00551802
    PUSH EBP                            ; 00551803
    MOV EBP,dword ptr [ESP + 0x14]      ; 00551804
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551808
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV EBX,0x2641924                   ; 0055180d
    MOV EDI,EBP                         ; 00551812
    XOR ESI,ESI                         ; 00551814
    PUSH EDI                            ; 00551816
        ;   Label: LAB_00551816
    PUSH EBX                            ; 00551817
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00551818
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055181d
    TEST EAX,EAX                        ; 00551820
    JNZ 0x00551856                      ; 00551822
        ;   XREF to: 00551856 (CONDITIONAL_JUMP)  ; LAB_00551856
    TEST EBX,EBX                        ; 00551824
    JZ 0x00551862                       ; 00551826
        ;   XREF to: 00551862 (CONDITIONAL_JUMP)  ; LAB_00551862
    CMP dword ptr [EBX + 0x1a8],0x0     ; 00551828
    JNZ 0x00551872                      ; 0055182f
        ;   XREF to: 00551872 (CONDITIONAL_JUMP)  ; LAB_00551872
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00551831
    PUSH ECX                            ; 00551835
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00551836
    PUSH ESI                            ; 0055183a
    PUSH EBX                            ; 0055183b
    CALL sound_sndmain.cpp_FUN_0054daf0 ; 0055183c
        ;   XREF to: 0054daf0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054daf0()
    MOV EBX,EAX                         ; 00551841
    ADD ESP,0xc                         ; 00551843
    TEST EAX,EAX                        ; 00551846
    JNZ 0x00551882                      ; 00551848
        ;   XREF to: 00551882 (CONDITIONAL_JUMP)  ; LAB_00551882
    CALL sound_sndmain.cpp_FUN_00551440 ; 0055184a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_0055184a
    XOR EAX,EAX                         ; 0055184f
    POP EBP                             ; 00551851
    POP EDI                             ; 00551852
    POP ESI                             ; 00551853
    POP EBX                             ; 00551854
    RET                                 ; 00551855
    INC ESI                             ; 00551856
        ;   Label: LAB_00551856
    ADD EBX,0x1ac                       ; 00551857
    CMP ESI,0x40                        ; 0055185d
    JL 0x00551816                       ; 00551860
        ;   XREF to: 00551816 (CONDITIONAL_JUMP)  ; LAB_00551816
    PUSH EBP                            ; 00551862
        ;   Label: LAB_00551862
    PUSH 0x5e8edc                       ; 00551863
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00551868
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x8                         ; 0055186d
    JMP 0x0055184a                      ; 00551870
        ;   XREF to: 0055184a (UNCONDITIONAL_JUMP)  ; LAB_0055184a
    PUSH EBP                            ; 00551872
        ;   Label: LAB_00551872
    PUSH 0x5e8f05                       ; 00551873
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00551878
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x8                         ; 0055187d
    JMP 0x0055184a                      ; 00551880
        ;   XREF to: 0055184a (UNCONDITIONAL_JUMP)  ; LAB_0055184a
    CALL sound_sndmain.cpp_FUN_00551440 ; 00551882
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_00551882
    MOV EAX,EBX                         ; 00551887
    POP EBP                             ; 00551889
    POP EDI                             ; 0055188a
    POP ESI                             ; 0055188b
    POP EBX                             ; 0055188c
    RET                                 ; 0055188d

