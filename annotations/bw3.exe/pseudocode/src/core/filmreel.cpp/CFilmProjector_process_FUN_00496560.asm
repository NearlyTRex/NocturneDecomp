; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00496560(CFilmProjector *this_ptr,float delta_time)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005c049b
;   CFilterFX* g_CFilterFXPtr = 01549a94
;   undefined4 DAT_005fba60
;   undefined4 g_CFilmReelClassInfo.name_hash
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_dest.cpp_CActorDestination_process_FUN_004591f0
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_main.c_FUN_004e4330
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496560
        ;   Label: core_filmreel.cpp_CFilmProjector_process_FUN_00496560
    PUSH ESI                            ; 00496561
    PUSH EDI                            ; 00496562
    PUSH EBP                            ; 00496563
    SUB ESP,0x4                         ; 00496564
    MOV EBX,dword ptr [ESP + 0x18]      ; 00496567
    MOV EDX,dword ptr [EBX + 0x184]     ; 0049656b
    TEST EDX,EDX                        ; 00496571
    JNZ 0x004965a3                      ; 00496573
        ;   XREF to: 004965a3 (CONDITIONAL_JUMP)  ; LAB_004965a3
    CMP dword ptr [EBX + 0x3dc],0x0     ; 00496575
    JNZ 0x004966a7                      ; 0049657c
        ;   XREF to: 004966a7 (CONDITIONAL_JUMP)  ; LAB_004966a7
    PUSH dword ptr [ESP + 0x1c]         ; 00496582
        ;   Label: LAB_00496582
    MOV EAX,dword ptr [EBX + 0x184]     ; 00496586
    PUSH EBX                            ; 0049658c
    MOV dword ptr [EBX + 0x3dc],EAX     ; 0049658d
    CALL core_dest.cpp_CActorDestination_process_FUN_004591f0 ; 00496593
        ;   XREF to: 004591f0 (UNCONDITIONAL_CALL)  ; void core_dest.cpp_CActorDestination_process_FUN_004591f0(CActorDestination * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00496598
    ADD ESP,0x4                         ; 0049659b
    POP EBP                             ; 0049659e
    POP EDI                             ; 0049659f
    POP ESI                             ; 004965a0
    POP EBX                             ; 004965a1
    RET                                 ; 004965a2
    FLD float ptr [ESP + 0x1c]          ; 004965a3
        ;   Label: LAB_004965a3
    MOV EAX,dword ptr [EBX + 0x158]     ; 004965a7
    FMUL float ptr [0x005c049b]         ; 004965ad | DAT_005c049b
    FLD float ptr [EAX + 0x38]          ; 004965b3
    FSUB ST0,ST1                        ; 004965b6
    FSTP float ptr [EAX + 0x38]         ; 004965b8
    FSUBR float ptr [EBX + 0x3d8]       ; 004965bb
    MOV EBP,dword ptr [EBX + 0x3dc]     ; 004965c1
    FSTP float ptr [EBX + 0x3d8]        ; 004965c7
    TEST EBP,EBP                        ; 004965cd
    JZ 0x00496627                       ; 004965cf
        ;   XREF to: 00496627 (CONDITIONAL_JUMP)  ; LAB_00496627
    MOV EDX,dword ptr [EBX + 0x3e0]     ; 004965d1
    PUSH EDX                            ; 004965d7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 004965d8
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004965dd
    TEST EAX,EAX                        ; 004965e0
    JZ 0x0049660d                       ; 004965e2
        ;   XREF to: 0049660d (CONDITIONAL_JUMP)  ; LAB_0049660d
    MOV ECX,dword ptr [EBX + 0x370]     ; 004965e4
        ;   Label: LAB_004965e4
    CMP ECX,dword ptr [EBX + 0x158]     ; 004965ea
    JNZ 0x00496582                      ; 004965f0
        ;   XREF to: 00496582 (CONDITIONAL_JUMP)  ; LAB_00496582
    LEA EAX,[EBX + 0x374]               ; 004965f2
    PUSH EAX                            ; 004965f8
    MOV ESI,dword ptr [0x005fba60]      ; 004965f9 | DAT_005fba60
    PUSH ESI                            ; 004965ff
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00496600
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00496605
    JMP 0x00496582                      ; 00496608
        ;   XREF to: 00496582 (UNCONDITIONAL_JUMP)  ; LAB_00496582
    PUSH 0x5c0431                       ; 0049660d
        ;   Label: LAB_0049660d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00496612
    PUSH EBX                            ; 00496618
    CALL dword ptr [EAX + 0x2c]         ; 00496619
    ADD ESP,0x8                         ; 0049661c
    MOV dword ptr [EBX + 0x3e0],EAX     ; 0049661f
    JMP 0x004965e4                      ; 00496625
        ;   XREF to: 004965e4 (UNCONDITIONAL_JUMP)  ; LAB_004965e4
    MOV EAX,[0x01c73614]                ; 00496627 | g_CFilmReelClassInfo.name_hash
        ;   Label: LAB_00496627
    PUSH EAX                            ; 0049662c
    MOV EDX,dword ptr [EBX + 0x158]     ; 0049662d
    PUSH EDX                            ; 00496633
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00496634
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00496639
    MOV ESI,EAX                         ; 0049663c
    TEST EAX,EAX                        ; 0049663e
    JNZ 0x00496665                      ; 00496640
        ;   XREF to: 00496665 (CONDITIONAL_JUMP)  ; LAB_00496665
    MOV ECX,0x5c043d                    ; 00496642
    MOV EDI,0x11d                       ; 00496647
    PUSH 0x5c0452                       ; 0049664c
    MOV dword ptr [0x01d71de0],ECX      ; 00496651 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00496657 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0049665d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00496662
    LEA EAX,[ESI + 0x2d8]               ; 00496665
        ;   Label: LAB_00496665
    PUSH EAX                            ; 0049666b
    MOV EBP,dword ptr [0x005f1910]      ; 0049666c | g_CFilterFXPtr
    PUSH EBP                            ; 00496672
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00 ; 00496673
        ;   XREF to: 00459d00 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00496678
    MOV EAX,dword ptr [EBX + 0x3e0]     ; 0049667b
    PUSH EAX                            ; 00496681
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00496682
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00496687
    PUSH 0x5c0481                       ; 0049668a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049668f
    PUSH EBX                            ; 00496695
    CALL dword ptr [EAX + 0x2c]         ; 00496696
    ADD ESP,0x8                         ; 00496699
    MOV dword ptr [EBX + 0x3e0],EAX     ; 0049669c
    JMP 0x004965e4                      ; 004966a2
        ;   XREF to: 004965e4 (UNCONDITIONAL_JUMP)  ; LAB_004965e4
    PUSH EDX                            ; 004966a7
        ;   Label: LAB_004966a7
    MOV ESI,dword ptr [0x005f1910]      ; 004966a8 | g_CFilterFXPtr
    PUSH ESI                            ; 004966ae
    CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00 ; 004966af
        ;   XREF to: 00459d00 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004966b4
    MOV EDI,dword ptr [EBX + 0x3e0]     ; 004966b7
    PUSH EDI                            ; 004966bd
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004966be
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004966c3
    PUSH 0x5c048e                       ; 004966c6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004966cb
    PUSH EBX                            ; 004966d1
    CALL dword ptr [EAX + 0x2c]         ; 004966d2
    ADD ESP,0x8                         ; 004966d5
    MOV dword ptr [EBX + 0x3e0],EAX     ; 004966d8
    JMP 0x00496582                      ; 004966de
        ;   XREF to: 00496582 (UNCONDITIONAL_JUMP)  ; LAB_00496582

