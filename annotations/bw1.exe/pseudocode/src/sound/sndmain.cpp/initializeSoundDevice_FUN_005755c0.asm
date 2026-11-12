; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0(void)
;
;
; XREF[2]:
;   core_menu.cpp_FUN_0050ba70 at 0050c8f8
;   core_sound.cpp_FUN_0057cb30 at 0057cb67
;
; Referenced Globals:
;   undefined4 DAT_006232fc
;   undefined4 DAT_02c7fd78
;   undefined4 DAT_02c7fd7c
;   undefined4 DAT_02c80650
;   undefined4 DAT_02c80658
;
; Called Functions:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340
;   sound_sndmain.cpp_closeSoundDevice_FUN_00575670
;   sound_sndmain.cpp_selectSoundDevice_FUN_005754d0
;   sound_sndwav.cpp_getWavOutDevice_FUN_0057b410
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005755c0
        ;   Label: sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0
    CALL sound_sndmain.cpp_closeSoundDevice_FUN_00575670 ; 005755c1
        ;   XREF to: 00575670 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_closeSoundDevice_FUN_00575670()
    TEST EAX,EAX                        ; 005755c6
    JNZ 0x005755cc                      ; 005755c8
        ;   XREF to: 005755cc (CONDITIONAL_JUMP)  ; LAB_005755cc
    POP EBP                             ; 005755ca
    RET                                 ; 005755cb
    MOV EDX,dword ptr [0x006232fc]      ; 005755cc | DAT_006232fc
        ;   Label: LAB_005755cc
    PUSH EDX                            ; 005755d2
    CALL sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 ; 005755d3
        ;   XREF to: 005754d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_selectSoundDevice_FUN_005754d0(int device_id)
    MOV ECX,dword ptr [0x006232fc]      ; 005755d8 | DAT_006232fc
    ADD ESP,0x4                         ; 005755de
    TEST ECX,ECX                        ; 005755e1
    JL 0x00575654                       ; 005755e3
        ;   XREF to: 00575654 (CONDITIONAL_JUMP)  ; LAB_00575654
    LEA EAX,[ECX*0x8 + 0x0]             ; 005755e5
    ADD EAX,ECX                         ; 005755ec
    SHL EAX,0x2                         ; 005755ee
    SUB EAX,ECX                         ; 005755f1
    SHL EAX,0x3                         ; 005755f3
    CMP dword ptr [EAX + 0x2c7fe90],0x0 ; 005755f6 | DAT_02c7fd78
    JNZ 0x00575615                      ; 005755fd
        ;   XREF to: 00575615 (CONDITIONAL_JUMP)  ; LAB_00575615
    PUSH ESI                            ; 005755ff
    MOV ESI,dword ptr [EAX + 0x2c7fe94] ; 00575600 | DAT_02c7fd7c
    PUSH ESI                            ; 00575606
    CALL sound_sndwav.cpp_getWavOutDevice_FUN_0057b410 ; 00575607
        ;   XREF to: 0057b410 (UNCONDITIONAL_CALL)  ; CWavOutDevice * sound_sndwav.cpp_getWavOutDevice_FUN_0057b410(UINT device_id)
    ADD ESP,0x4                         ; 0057560c
    MOV [0x02c80650],EAX                ; 0057560f | DAT_02c80650
    POP ESI                             ; 00575614
    MOV EDX,dword ptr [0x006232fc]      ; 00575615 | DAT_006232fc
        ;   Label: LAB_00575615
    LEA EAX,[EDX*0x8 + 0x0]             ; 0057561b
    ADD EAX,EDX                         ; 00575622
    SHL EAX,0x2                         ; 00575624
    SUB EAX,EDX                         ; 00575627
    SHL EAX,0x3                         ; 00575629
    CMP dword ptr [EAX + 0x2c7fe90],0x1 ; 0057562c | DAT_02c7fd78
    JNZ 0x00575649                      ; 00575633
        ;   XREF to: 00575649 (CONDITIONAL_JUMP)  ; LAB_00575649
    MOV EBP,dword ptr [EAX + 0x2c7fe94] ; 00575635 | DAT_02c7fd7c
    PUSH EBP                            ; 0057563b
    CALL sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340 ; 0057563c
        ;   XREF to: 0057a340 (UNCONDITIONAL_CALL)  ; CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_0057a340(UINT device_id)
    ADD ESP,0x4                         ; 00575641
    MOV [0x02c80650],EAX                ; 00575644 | DAT_02c80650
    MOV EAX,[0x02c80650]                ; 00575649 | DAT_02c80650
        ;   Label: LAB_00575649
    TEST EAX,EAX                        ; 0057564e
    JNZ 0x00575658                      ; 00575650
        ;   XREF to: 00575658 (CONDITIONAL_JUMP)  ; LAB_00575658
    POP EBP                             ; 00575652
    RET                                 ; 00575653
    XOR EAX,EAX                         ; 00575654
        ;   Label: LAB_00575654
    POP EBP                             ; 00575656
    RET                                 ; 00575657
    PUSH EAX                            ; 00575658
        ;   Label: LAB_00575658
    MOV EDX,dword ptr [EAX]             ; 00575659
    CALL dword ptr [EDX + 0x14]         ; 0057565b
    ADD ESP,0x4                         ; 0057565e
    MOV [0x02c80658],EAX                ; 00575661 | DAT_02c80658
    MOV EAX,0x1                         ; 00575666
    POP EBP                             ; 0057566b
    RET                                 ; 0057566c

