; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_00575670(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_0050ba70 at 0050c8ea
;   sound_sndmain.cpp_FUN_005760b0 at 005760f3
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0 at 005755c1
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00574ea0 at 00574eb9
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80658
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575670
        ;   Label: sound_sndmain.cpp_closeSoundDevice_FUN_00575670
    PUSH ESI                            ; 00575671
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 ; 00575672
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005750e0()
    TEST EAX,EAX                        ; 00575677
    JZ 0x005756a8                       ; 00575679
        ;   XREF to: 005756a8 (CONDITIONAL_JUMP)  ; LAB_005756a8
    MOV EBX,0x2c78ff4                   ; 0057567b
    LEA ESI,[EBX + 0x6c00]              ; 00575680
    PUSH EBX                            ; 00575686
        ;   Label: LAB_00575686
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 00575687
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD EBX,0x1b0                       ; 0057568c
    ADD ESP,0x4                         ; 00575692
    CMP EBX,ESI                         ; 00575695
    JNZ 0x00575686                      ; 00575697
        ;   XREF to: 00575686 (CONDITIONAL_JUMP)  ; LAB_00575686
    MOV EDX,dword ptr [0x02c80650]      ; 00575699 | DAT_02c80650
    TEST EDX,EDX                        ; 0057569f
    JNZ 0x005756ab                      ; 005756a1
        ;   XREF to: 005756ab (CONDITIONAL_JUMP)  ; LAB_005756ab
    MOV EAX,0x1                         ; 005756a3
    POP ESI                             ; 005756a8
        ;   Label: LAB_005756a8
    POP EBX                             ; 005756a9
    RET                                 ; 005756aa
    PUSH EDX                            ; 005756ab
        ;   Label: LAB_005756ab
    MOV EBX,dword ptr [EDX]             ; 005756ac
    CALL dword ptr [EBX]                ; 005756ae
    ADD ESP,0x4                         ; 005756b0
    TEST EAX,EAX                        ; 005756b3
    JZ 0x005756a8                       ; 005756b5
        ;   XREF to: 005756a8 (CONDITIONAL_JUMP)  ; LAB_005756a8
    XOR ECX,ECX                         ; 005756b7
    MOV EAX,0x1                         ; 005756b9
    MOV dword ptr [0x02c80658],ECX      ; 005756be | DAT_02c80658
    MOV dword ptr [0x02c80650],ECX      ; 005756c4 | DAT_02c80650
    POP ESI                             ; 005756ca
    POP EBX                             ; 005756cb
    RET                                 ; 005756cc

