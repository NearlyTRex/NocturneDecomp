; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl sound_sndmain_cpp_lockSample_FUN_00574230(char *sample_name,int lock_offset,int lock_length)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
; int              Stack[0x8]:4   lock_offset
; int              Stack[0xc]:4   lock_length
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   sound_sndmain.cpp_CSfxSample_lock_FUN_00570160
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   sound_sndmain.cpp_unlockSound_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574230
        ;   Label: sound_sndmain.cpp_lockSample_FUN_00574230
    PUSH ESI                            ; 00574231
    PUSH EDI                            ; 00574232
    PUSH EBP                            ; 00574233
    MOV EBP,dword ptr [ESP + 0x14]      ; 00574234
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00574238
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EBX,0x2c78ff4                   ; 0057423d
    MOV EDI,EBP                         ; 00574242
    XOR ESI,ESI                         ; 00574244
    PUSH EDI                            ; 00574246
        ;   Label: LAB_00574246
    PUSH EBX                            ; 00574247
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 00574248
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057424d
    TEST EAX,EAX                        ; 00574250
    JNZ 0x00574286                      ; 00574252
        ;   XREF to: 00574286 (CONDITIONAL_JUMP)  ; LAB_00574286
    TEST EBX,EBX                        ; 00574254
    JZ 0x00574292                       ; 00574256
        ;   XREF to: 00574292 (CONDITIONAL_JUMP)  ; LAB_00574292
    CMP dword ptr [EBX + 0x1ac],0x0     ; 00574258
    JNZ 0x005742a2                      ; 0057425f
        ;   XREF to: 005742a2 (CONDITIONAL_JUMP)  ; LAB_005742a2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00574261
    PUSH ECX                            ; 00574265
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00574266
    PUSH ESI                            ; 0057426a
    PUSH EBX                            ; 0057426b
    CALL sound_sndmain.cpp_CSfxSample_lock_FUN_00570160 ; 0057426c
        ;   XREF to: 00570160 (UNCONDITIONAL_CALL)  ; void * sound_sndmain.cpp_CSfxSample_lock_FUN_00570160(CSfxSample * this_ptr, int lock_offset, int lock_length)
    MOV EBX,EAX                         ; 00574271
    ADD ESP,0xc                         ; 00574273
    TEST EAX,EAX                        ; 00574276
    JNZ 0x005742b2                      ; 00574278
        ;   XREF to: 005742b2 (CONDITIONAL_JUMP)  ; LAB_005742b2
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 0057427a
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_0057427a
    XOR EAX,EAX                         ; 0057427f
    POP EBP                             ; 00574281
    POP EDI                             ; 00574282
    POP ESI                             ; 00574283
    POP EBX                             ; 00574284
    RET                                 ; 00574285
    INC ESI                             ; 00574286
        ;   Label: LAB_00574286
    ADD EBX,0x1b0                       ; 00574287
    CMP ESI,0x40                        ; 0057428d
    JL 0x00574246                       ; 00574290
        ;   XREF to: 00574246 (CONDITIONAL_JUMP)  ; LAB_00574246
    PUSH EBP                            ; 00574292
        ;   Label: LAB_00574292
    PUSH 0x5f40d6                       ; 00574293
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00574298
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x8                         ; 0057429d
    JMP 0x0057427a                      ; 005742a0
        ;   XREF to: 0057427a (UNCONDITIONAL_JUMP)  ; LAB_0057427a
    PUSH EBP                            ; 005742a2
        ;   Label: LAB_005742a2
    PUSH 0x5f40ff                       ; 005742a3
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 005742a8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x8                         ; 005742ad
    JMP 0x0057427a                      ; 005742b0
        ;   XREF to: 0057427a (UNCONDITIONAL_JUMP)  ; LAB_0057427a
    CALL sound_sndmain.cpp_unlockSound_FUN_00573e70 ; 005742b2
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00573e70()
        ;   Label: LAB_005742b2
    MOV EAX,EBX                         ; 005742b7
    POP EBP                             ; 005742b9
    POP EDI                             ; 005742ba
    POP ESI                             ; 005742bb
    POP EBX                             ; 005742bc
    RET                                 ; 005742bd

