; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00551890(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551890
        ;   Label: sound_sndmain.cpp_FUN_00551890
    PUSH ESI                            ; 00551891
    PUSH EDI                            ; 00551892
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551893
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV EDI,dword ptr [ESP + 0x10]      ; 00551898
    MOV EBX,0x2641924                   ; 0055189c
    XOR ESI,ESI                         ; 005518a1
    PUSH EDI                            ; 005518a3
        ;   Label: LAB_005518a3
    PUSH EBX                            ; 005518a4
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005518a5
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005518aa
    TEST EAX,EAX                        ; 005518ad
    JNZ 0x005518be                      ; 005518af
        ;   XREF to: 005518be (CONDITIONAL_JUMP)  ; LAB_005518be
    TEST EBX,EBX                        ; 005518b1
    JNZ 0x005518cc                      ; 005518b3
        ;   XREF to: 005518cc (CONDITIONAL_JUMP)  ; LAB_005518cc
    CALL sound_sndmain.cpp_FUN_00551440 ; 005518b5
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_005518b5
    POP EDI                             ; 005518ba
    POP ESI                             ; 005518bb
    POP EBX                             ; 005518bc
    RET                                 ; 005518bd
    INC ESI                             ; 005518be
        ;   Label: LAB_005518be
    ADD EBX,0x1ac                       ; 005518bf
    CMP ESI,0x40                        ; 005518c5
    JL 0x005518a3                       ; 005518c8
        ;   XREF to: 005518a3 (CONDITIONAL_JUMP)  ; LAB_005518a3
    JMP 0x005518b5                      ; 005518ca
        ;   XREF to: 005518b5 (UNCONDITIONAL_JUMP)  ; LAB_005518b5
    PUSH EBX                            ; 005518cc
        ;   Label: LAB_005518cc
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0 ; 005518cd
        ;   XREF to: 0054dbf0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005518d2
    CALL sound_sndmain.cpp_FUN_00551440 ; 005518d5
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    POP EDI                             ; 005518da
    POP ESI                             ; 005518db
    POP EBX                             ; 005518dc
    RET                                 ; 005518dd

