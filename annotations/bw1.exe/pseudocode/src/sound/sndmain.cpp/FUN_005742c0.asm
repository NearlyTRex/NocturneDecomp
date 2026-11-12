; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_005742c0(char *param_1)
;
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005742c0
        ;   Label: sound_sndmain.cpp_FUN_005742c0
    PUSH ESI                            ; 005742c1
    PUSH EDI                            ; 005742c2
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 005742c3
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EDI,dword ptr [ESP + 0x10]      ; 005742c8
    MOV EBX,0x2c78ff4                   ; 005742cc
    XOR ESI,ESI                         ; 005742d1
    PUSH EDI                            ; 005742d3
        ;   Label: LAB_005742d3
    PUSH EBX                            ; 005742d4
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 005742d5
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005742da
    TEST EAX,EAX                        ; 005742dd
    JNZ 0x005742ee                      ; 005742df
        ;   XREF to: 005742ee (CONDITIONAL_JUMP)  ; LAB_005742ee
    TEST EBX,EBX                        ; 005742e1
    JNZ 0x005742fc                      ; 005742e3
        ;   XREF to: 005742fc (CONDITIONAL_JUMP)  ; LAB_005742fc
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005742e5
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_005742e5
    POP EDI                             ; 005742ea
    POP ESI                             ; 005742eb
    POP EBX                             ; 005742ec
    RET                                 ; 005742ed
    INC ESI                             ; 005742ee
        ;   Label: LAB_005742ee
    ADD EBX,0x1b0                       ; 005742ef
    CMP ESI,0x40                        ; 005742f5
    JL 0x005742d3                       ; 005742f8
        ;   XREF to: 005742d3 (CONDITIONAL_JUMP)  ; LAB_005742d3
    JMP 0x005742e5                      ; 005742fa
        ;   XREF to: 005742e5 (UNCONDITIONAL_JUMP)  ; LAB_005742e5
    PUSH EBX                            ; 005742fc
        ;   Label: LAB_005742fc
    CALL sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260 ; 005742fd
        ;   XREF to: 00570260 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00574302
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00574305
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    POP EDI                             ; 0057430a
    POP ESI                             ; 0057430b
    POP EBX                             ; 0057430c
    RET                                 ; 0057430d

