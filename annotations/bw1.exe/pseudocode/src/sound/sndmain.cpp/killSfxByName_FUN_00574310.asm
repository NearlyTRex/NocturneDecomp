; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_killSfxByName_FUN_00574310(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; XREF[1]:
;   sound_sndmain.cpp_freeSampleByName_FUN_00574380 at 005743d4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574310
        ;   Label: sound_sndmain.cpp_killSfxByName_FUN_00574310
    PUSH ESI                            ; 00574311
    MOV ESI,dword ptr [ESP + 0xc]       ; 00574312
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 00574316
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    XOR EBX,EBX                         ; 0057431b
    MOV EAX,dword ptr [EBX + 0x2c74654] ; 0057431d
        ;   Label: LAB_0057431d
    TEST EAX,EAX                        ; 00574323
    JNZ 0x0057433d                      ; 00574325
        ;   XREF to: 0057433d (CONDITIONAL_JUMP)  ; LAB_0057433d
    ADD EBX,0x11c                       ; 00574327
        ;   Label: LAB_00574327
    CMP EBX,0x4700                      ; 0057432d
    JNZ 0x0057431d                      ; 00574333
        ;   XREF to: 0057431d (CONDITIONAL_JUMP)  ; LAB_0057431d
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00574335
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    POP ESI                             ; 0057433a
    POP EBX                             ; 0057433b
    RET                                 ; 0057433c
    PUSH ESI                            ; 0057433d
        ;   Label: LAB_0057433d
    PUSH EAX                            ; 0057433e
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057433f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00574344
    TEST EAX,EAX                        ; 00574347
    JNZ 0x00574327                      ; 00574349
        ;   XREF to: 00574327 (CONDITIONAL_JUMP)  ; LAB_00574327
    MOV EAX,0x2c745ec                   ; 0057434b
    ADD EAX,EBX                         ; 00574350
    PUSH EAX                            ; 00574352
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00574353
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00574358
    JMP 0x00574327                      ; 0057435b
        ;   XREF to: 00574327 (UNCONDITIONAL_JUMP)  ; LAB_00574327

