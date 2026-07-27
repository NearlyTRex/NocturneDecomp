; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_00528410(int param_1)
;
;
; XREF[3]:
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d2139
;   sound_sndmain.cpp_FUN_005289f0 at 00528a6e
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 at 00528513
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593850
;   TerminatedCString s_selectSoundDevice_device_00593865
;   undefined4 DAT_005bea74
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_sndmain.cpp_findBestSoundDevice_FUN_00528320
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
;   sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528410
        ;   Label: sound_sndmain.cpp_selectSoundDevice_FUN_00528410
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528411
    CALL sound_sndmain.cpp_isSoundSystemActive_FUN_00528480 ; 00528415
        ;   XREF to: 00528480 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundSystemActive_FUN_00528480()
    TEST EAX,EAX                        ; 0052841a
    JNZ 0x00528440                      ; 0052841c
        ;   XREF to: 00528440 (CONDITIONAL_JUMP)  ; LAB_00528440
    TEST EBX,EBX                        ; 0052841e
        ;   Label: LAB_0052841e
    JGE 0x00528428                      ; 00528420
        ;   XREF to: 00528428 (CONDITIONAL_JUMP)  ; LAB_00528428
    MOV EBX,dword ptr [0x005bea74]      ; 00528422 | DAT_005bea74
    CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 ; 00528428
        ;   XREF to: 00528230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230()
        ;   Label: LAB_00528428
    CMP EBX,EAX                         ; 0052842d
    JL 0x00528465                       ; 0052842f
        ;   XREF to: 00528465 (CONDITIONAL_JUMP)  ; LAB_00528465
    CALL sound_sndmain.cpp_findBestSoundDevice_FUN_00528320 ; 00528431
        ;   XREF to: 00528320 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_findBestSoundDevice_FUN_00528320()
        ;   Label: LAB_00528431
    MOV EBX,EAX                         ; 00528436
    MOV dword ptr [0x005bea74],EBX      ; 00528438 | DAT_005bea74
    POP EBX                             ; 0052843e
    RET                                 ; 0052843f
    MOV EDX,0x593850                    ; 00528440 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00528440
    MOV ECX,0x1211                      ; 00528445
    PUSH 0x593865                       ; 0052844a | = "selectSoundDevice - device already open."
    MOV dword ptr [0x01cc4800],EDX      ; 0052844f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00528455 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052845b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00528460
    JMP 0x0052841e                      ; 00528463
        ;   XREF to: 0052841e (UNCONDITIONAL_JUMP)  ; LAB_0052841e
    TEST EBX,EBX                        ; 00528465
        ;   Label: LAB_00528465
    JL 0x00528431                       ; 00528467
        ;   XREF to: 00528431 (CONDITIONAL_JUMP)  ; LAB_00528431
    MOV dword ptr [0x005bea74],EBX      ; 00528469 | DAT_005bea74
    POP EBX                             ; 0052846f
    RET                                 ; 00528470

