; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_0042b850(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005d5654+1
;   TerminatedCString s_carved_die_wav_005d5666
;   TerminatedCString s_carved_damage_wav_005d5676
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc60
;   core_carved.cpp_FUN_0042b370
;   core_carved.cpp_FUN_0042b580
;   core_enemy.cpp_FUN_004a0f00
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b850
        ;   Label: core_carved.cpp_FUN_0042b850
    PUSH EDI                            ; 0042b851
    PUSH EBP                            ; 0042b852
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042b853
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042b857
    CMP dword ptr [EBX + 0x27b0],0x0    ; 0042b85b
    JNZ 0x0042b965                      ; 0042b862
        ;   XREF to: 0042b965 (CONDITIONAL_JUMP)  ; LAB_0042b965
    PUSH EDI                            ; 0042b868
    PUSH EBX                            ; 0042b869
    CALL core_carved.cpp_FUN_0042b580   ; 0042b86a
        ;   XREF to: 0042b580 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b580()
    ADD ESP,0x8                         ; 0042b86f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b872
    PUSH EBX                            ; 0042b878
    CALL dword ptr [EAX + 0xf8]         ; 0042b879
    FLD float ptr [EDI + 0x4]           ; 0042b87f
    FSUBR float ptr [EBX + 0x2538]      ; 0042b882
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 0042b888
    FSTP float ptr [EBX + 0x2538]       ; 0042b88e
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042b894
    ADD ESP,0x4                         ; 0042b89b
    TEST ECX,ECX                        ; 0042b89e
    JZ 0x0042b97c                       ; 0042b8a0
        ;   XREF to: 0042b97c (CONDITIONAL_JUMP)  ; LAB_0042b97c
    PUSH ESI                            ; 0042b8a6
        ;   Label: LAB_0042b8a6
    FLD float ptr [EBX + 0x2538]        ; 0042b8a7
    FLDZ                                ; 0042b8ad
    LEA ESI,[EBX + 0x158]               ; 0042b8af
    MOV dword ptr [EBX + 0xc1e4],0x3f99999a ; 0042b8b5
    FCOMPP                              ; 0042b8bf
    FNSTSW AX                           ; 0042b8c1
    SAHF                                ; 0042b8c3
    JC 0x0042b9b2                       ; 0042b8c4
        ;   XREF to: 0042b9b2 (CONDITIONAL_JUMP)  ; LAB_0042b9b2
    PUSH ESI                            ; 0042b8ca
    MOV dword ptr [EBX + 0x2538],0x0    ; 0042b8cb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0042b8d5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EDX,dword ptr [EAX + 0x24]      ; 0042b8da
    ADD ESP,0x4                         ; 0042b8dd
    MOV EAX,EDX                         ; 0042b8e0
    CMP EDX,0x16                        ; 0042b8e2
    JZ 0x0042b987                       ; 0042b8e5
        ;   XREF to: 0042b987 (CONDITIONAL_JUMP)  ; LAB_0042b987
    CMP EDX,0x13                        ; 0042b8eb
    JZ 0x0042b987                       ; 0042b8ee
        ;   XREF to: 0042b987 (CONDITIONAL_JUMP)  ; LAB_0042b987
    PUSH EBX                            ; 0042b8f4
        ;   Label: LAB_0042b8f4
    CALL core_carved.cpp_FUN_0042b370   ; 0042b8f5
        ;   XREF to: 0042b370 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b370()
    ADD ESP,0x4                         ; 0042b8fa
    PUSH 0x2                            ; 0042b8fd
    PUSH 0x0                            ; 0042b8ff
    CALL core_actor.cpp_FUN_0040cc60    ; 0042b901
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042b906
    PUSH 0x1                            ; 0042b909
    ADD EAX,0x13                        ; 0042b90b
    PUSH EAX                            ; 0042b90e
    LEA EAX,[EBX + 0x158]               ; 0042b90f
    PUSH EAX                            ; 0042b915
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042b916
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042b91b
    MOV EBP,dword ptr [EBX + 0xc2dc]    ; 0042b91e
    PUSH EBP                            ; 0042b924
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0042b925
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0042b92a
    PUSH 0x5d5666                       ; 0042b92d | = "carved-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b932
    PUSH EBX                            ; 0042b938
    CALL dword ptr [EAX + 0x2c]         ; 0042b939
    ADD ESP,0x8                         ; 0042b93c
    PUSH 0x41c80000                     ; 0042b93f
    PUSH 0x32                           ; 0042b944
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b946
    PUSH EBX                            ; 0042b94c
    CALL dword ptr [EAX + 0xa8]         ; 0042b94d
    ADD ESP,0xc                         ; 0042b953
    PUSH EDI                            ; 0042b956
        ;   Label: LAB_0042b956
    PUSH EBX                            ; 0042b957
    CALL core_enemy.cpp_FUN_004a0f00    ; 0042b958
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 0042b95d
    POP ESI                             ; 0042b960
    POP EBP                             ; 0042b961
    POP EDI                             ; 0042b962
    POP EBX                             ; 0042b963
    RET                                 ; 0042b964
    PUSH 0x5d5655                       ; 0042b965 | s_ShotInvulnerable_005d5654+1
        ;   Label: LAB_0042b965
    MOV EAX,[0x0061b4d0]                ; 0042b96a | DAT_0061b4d0
    PUSH EAX                            ; 0042b96f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0042b970
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0042b975
    POP EBP                             ; 0042b978
    POP EDI                             ; 0042b979
    POP EBX                             ; 0042b97a
    RET                                 ; 0042b97b
    MOV dword ptr [EBX + 0x2538],ECX    ; 0042b97c
        ;   Label: LAB_0042b97c
    JMP 0x0042b8a6                      ; 0042b982
        ;   XREF to: 0042b8a6 (UNCONDITIONAL_JUMP)  ; LAB_0042b8a6
    CMP EAX,0x17                        ; 0042b987
        ;   Label: LAB_0042b987
    JZ 0x0042b995                       ; 0042b98a
        ;   XREF to: 0042b995 (CONDITIONAL_JUMP)  ; LAB_0042b995
    CMP EAX,0x14                        ; 0042b98c
    JNZ 0x0042b8f4                      ; 0042b98f
        ;   XREF to: 0042b8f4 (CONDITIONAL_JUMP)  ; LAB_0042b8f4
    CMP EAX,0x18                        ; 0042b995
        ;   Label: LAB_0042b995
    JZ 0x0042b956                       ; 0042b998
        ;   XREF to: 0042b956 (CONDITIONAL_JUMP)  ; LAB_0042b956
    CMP EAX,0x15                        ; 0042b99a
    JNZ 0x0042b8f4                      ; 0042b99d
        ;   XREF to: 0042b8f4 (CONDITIONAL_JUMP)  ; LAB_0042b8f4
    PUSH EDI                            ; 0042b9a3
    PUSH EBX                            ; 0042b9a4
    CALL core_enemy.cpp_FUN_004a0f00    ; 0042b9a5
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 0042b9aa
    POP ESI                             ; 0042b9ad
    POP EBP                             ; 0042b9ae
    POP EDI                             ; 0042b9af
    POP EBX                             ; 0042b9b0
    RET                                 ; 0042b9b1
    PUSH 0x5                            ; 0042b9b2
        ;   Label: LAB_0042b9b2
    PUSH 0x0                            ; 0042b9b4
    CALL core_actor.cpp_FUN_0040cc60    ; 0042b9b6
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042b9bb
    PUSH 0x1                            ; 0042b9be
    ADD EAX,0xd                         ; 0042b9c0
    PUSH EAX                            ; 0042b9c3
    PUSH ESI                            ; 0042b9c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042b9c5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0xc2d4]        ; 0042b9ca
    FLDZ                                ; 0042b9d0
    ADD ESP,0xc                         ; 0042b9d2
    FCOMPP                              ; 0042b9d5
    FNSTSW AX                           ; 0042b9d7
    SAHF                                ; 0042b9d9
    JC 0x0042b956                       ; 0042b9da
        ;   XREF to: 0042b956 (CONDITIONAL_JUMP)  ; LAB_0042b956
    MOV ESI,dword ptr [EBX + 0xc2dc]    ; 0042b9e0
    PUSH ESI                            ; 0042b9e6
    MOV dword ptr [EBX + 0xc2d4],0x40000000 ; 0042b9e7
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0042b9f1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042b9f6
    TEST EAX,EAX                        ; 0042b9f9
    JNZ 0x0042b956                      ; 0042b9fb
        ;   XREF to: 0042b956 (CONDITIONAL_JUMP)  ; LAB_0042b956
    PUSH 0x5d5676                       ; 0042ba01 | = "carved-damage?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ba06
    PUSH EBX                            ; 0042ba0c
    CALL dword ptr [EAX + 0x2c]         ; 0042ba0d
    ADD ESP,0x8                         ; 0042ba10
    MOV dword ptr [EBX + 0xc2dc],EAX    ; 0042ba13
    PUSH EDI                            ; 0042ba19
    PUSH EBX                            ; 0042ba1a
    CALL core_enemy.cpp_FUN_004a0f00    ; 0042ba1b
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a0f00()
    ADD ESP,0x8                         ; 0042ba20
    POP ESI                             ; 0042ba23
    POP EBP                             ; 0042ba24
    POP EDI                             ; 0042ba25
    POP EBX                             ; 0042ba26
    RET                                 ; 0042ba27

