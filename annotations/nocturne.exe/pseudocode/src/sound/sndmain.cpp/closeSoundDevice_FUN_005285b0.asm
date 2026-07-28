; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005285b0(void)
;
;
; XREF[2]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2133
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 at 00528501
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;   undefined4 DAT_02dc8320
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
;   sound_sndmain.cpp_resetSoundDevice_FUN_00528080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005285b0
        ;   Label: sound_sndmain.cpp_closeSoundDevice_FUN_005285b0
    PUSH ESI                            ; 005285b1
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_00528080 ; 005285b2
        ;   XREF to: 00528080 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_00528080()
    TEST EAX,EAX                        ; 005285b7
    JZ 0x005285e8                       ; 005285b9
        ;   XREF to: 005285e8 (CONDITIONAL_JUMP)  ; LAB_005285e8
    MOV EBX,0x2dc1edc                   ; 005285bb
    LEA ESI,[EBX + 0x5a00]              ; 005285c0
    PUSH EBX                            ; 005285c6
        ;   Label: LAB_005285c6
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60 ; 005285c7
        ;   XREF to: 00523a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60(CSfxSample * this_ptr)
    ADD EBX,0x168                       ; 005285cc
    ADD ESP,0x4                         ; 005285d2
    CMP EBX,ESI                         ; 005285d5
    JNZ 0x005285c6                      ; 005285d7
        ;   XREF to: 005285c6 (CONDITIONAL_JUMP)  ; LAB_005285c6
    MOV EDX,dword ptr [0x02dc8318]      ; 005285d9 | DAT_02dc8318
    TEST EDX,EDX                        ; 005285df
    JNZ 0x005285eb                      ; 005285e1
        ;   XREF to: 005285eb (CONDITIONAL_JUMP)  ; LAB_005285eb
    MOV EAX,0x1                         ; 005285e3
    POP ESI                             ; 005285e8
        ;   Label: LAB_005285e8
    POP EBX                             ; 005285e9
    RET                                 ; 005285ea
    PUSH EDX                            ; 005285eb
        ;   Label: LAB_005285eb
    MOV EBX,dword ptr [EDX]             ; 005285ec
    CALL dword ptr [EBX]                ; 005285ee
    ADD ESP,0x4                         ; 005285f0
    TEST EAX,EAX                        ; 005285f3
    JZ 0x005285e8                       ; 005285f5
        ;   XREF to: 005285e8 (CONDITIONAL_JUMP)  ; LAB_005285e8
    XOR ECX,ECX                         ; 005285f7
    MOV EAX,0x1                         ; 005285f9
    MOV dword ptr [0x02dc8320],ECX      ; 005285fe | DAT_02dc8320
    MOV dword ptr [0x02dc8318],ECX      ; 00528604 | DAT_02dc8318
    POP ESI                             ; 0052860a
    POP EBX                             ; 0052860b
    RET                                 ; 0052860c

