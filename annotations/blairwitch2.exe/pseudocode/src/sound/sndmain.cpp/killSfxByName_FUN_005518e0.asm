; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_killSfxByName_FUN_005518e0(char *sample_name)
;
; Parameters:
; char *           Stack[0x4]:4   sample_name
;
; XREF[1]:
;   sound_sndmain.cpp_freeSampleByName_FUN_00551950 at 005519a4
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005518e0
        ;   Label: sound_sndmain.cpp_killSfxByName_FUN_005518e0
    PUSH ESI                            ; 005518e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005518e2
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 005518e6
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    XOR EBX,EBX                         ; 005518eb
    MOV EAX,dword ptr [EBX + 0x263cf84] ; 005518ed
        ;   Label: LAB_005518ed
    TEST EAX,EAX                        ; 005518f3
    JNZ 0x0055190d                      ; 005518f5
        ;   XREF to: 0055190d (CONDITIONAL_JUMP)  ; LAB_0055190d
    ADD EBX,0x11c                       ; 005518f7
        ;   Label: LAB_005518f7
    CMP EBX,0x4700                      ; 005518fd
    JNZ 0x005518ed                      ; 00551903
        ;   XREF to: 005518ed (CONDITIONAL_JUMP)  ; LAB_005518ed
    CALL sound_sndmain.cpp_FUN_00551440 ; 00551905
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    POP ESI                             ; 0055190a
    POP EBX                             ; 0055190b
    RET                                 ; 0055190c
    PUSH ESI                            ; 0055190d
        ;   Label: LAB_0055190d
    PUSH EAX                            ; 0055190e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0055190f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00551914
    TEST EAX,EAX                        ; 00551917
    JNZ 0x005518f7                      ; 00551919
        ;   XREF to: 005518f7 (CONDITIONAL_JUMP)  ; LAB_005518f7
    MOV EAX,0x263cf1c                   ; 0055191b
    ADD EAX,EBX                         ; 00551920
    PUSH EAX                            ; 00551922
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 00551923
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00551928
    JMP 0x005518f7                      ; 0055192b
        ;   XREF to: 005518f7 (UNCONDITIONAL_JUMP)  ; LAB_005518f7

