; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_005459b0(CEnemy *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ShadowDead_005d13b3
;   undefined4 DAT_005d13be
;   undefined4 DAT_005fba60
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_enemy.cpp_FUN_0048a1b0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_shadow.cpp_FUN_00545000
;   core_shadow.cpp_FUN_005450c0
;   core_shadow.cpp_FUN_00545100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005459b0
        ;   Label: core_shadow.cpp_FUN_005459b0
    PUSH ESI                            ; 005459b1
    PUSH EDI                            ; 005459b2
    PUSH EBP                            ; 005459b3
    SUB ESP,0x34                        ; 005459b4
    MOV EBX,dword ptr [ESP + 0x48]      ; 005459b7
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005459bb
    CMP dword ptr [EBP + 0x30],0x6c     ; 005459bf
    JZ 0x00545a93                       ; 005459c3
        ;   XREF to: 00545a93 (CONDITIONAL_JUMP)  ; LAB_00545a93
    FLD float ptr [EBP + 0x4]           ; 005459c9
        ;   Label: LAB_005459c9
    LEA EAX,[EBX + 0x158]               ; 005459cc
    FSUBR float ptr [EBX + 0x2538]      ; 005459d2
    MOV dword ptr [ESP + 0x2c],EAX      ; 005459d8
    FST float ptr [EBX + 0x2538]        ; 005459dc
    FLDZ                                ; 005459e2
    FCOMPP                              ; 005459e4
    FNSTSW AX                           ; 005459e6
    SAHF                                ; 005459e8
    JNC 0x00545ade                      ; 005459e9
        ;   XREF to: 00545ade (CONDITIONAL_JUMP)  ; LAB_00545ade
    CMP dword ptr [EBX + 0xd054],0x2    ; 005459ef
    JZ 0x00545a78                       ; 005459f6
        ;   XREF to: 00545a78 (CONDITIONAL_JUMP)  ; LAB_00545a78
    PUSH dword ptr [EBP + 0x4]          ; 005459fc
    PUSH EBX                            ; 005459ff
    CALL core_enemy.cpp_FUN_0048a1b0    ; 00545a00
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 00545a05
    TEST EAX,EAX                        ; 00545a08
    JZ 0x00545a78                       ; 00545a0a
        ;   XREF to: 00545a78 (CONDITIONAL_JUMP)  ; LAB_00545a78
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00545a0c
    PUSH ESI                            ; 00545a10
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00545a11
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00545a16
    ADD ESP,0x4                         ; 00545a19
    TEST EAX,EAX                        ; 00545a1c
    JNZ 0x00545b96                      ; 00545a1e
        ;   XREF to: 00545b96 (CONDITIONAL_JUMP)  ; LAB_00545b96
    PUSH 0x2                            ; 00545a24
        ;   Label: LAB_00545a24
    PUSH 0x0                            ; 00545a26
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00545a28
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00545a2d
    MOV ESI,EAX                         ; 00545a30
    TEST EAX,EAX                        ; 00545a32
    JNZ 0x00545a49                      ; 00545a34
        ;   XREF to: 00545a49 (CONDITIONAL_JUMP)  ; LAB_00545a49
    PUSH 0x1                            ; 00545a36
    PUSH 0x11                           ; 00545a38
    LEA EAX,[EBX + 0x158]               ; 00545a3a
    PUSH EAX                            ; 00545a40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00545a41
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00545a46
    CMP ESI,0x1                         ; 00545a49
        ;   Label: LAB_00545a49
    JNZ 0x00545a60                      ; 00545a4c
        ;   XREF to: 00545a60 (CONDITIONAL_JUMP)  ; LAB_00545a60
    PUSH ESI                            ; 00545a4e
    PUSH 0x12                           ; 00545a4f
    LEA EAX,[EBX + 0x158]               ; 00545a51
    PUSH EAX                            ; 00545a57
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00545a58
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00545a5d
    CMP ESI,0x2                         ; 00545a60
        ;   Label: LAB_00545a60
    JNZ 0x00545a78                      ; 00545a63
        ;   XREF to: 00545a78 (CONDITIONAL_JUMP)  ; LAB_00545a78
    PUSH 0x1                            ; 00545a65
    PUSH 0x13                           ; 00545a67
    LEA EAX,[EBX + 0x158]               ; 00545a69
    PUSH EAX                            ; 00545a6f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00545a70
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00545a75
    PUSH EBX                            ; 00545a78
        ;   Label: LAB_00545a78
    CALL core_shadow.cpp_FUN_005450c0   ; 00545a79
        ;   XREF to: 005450c0 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_005450c0()
    ADD ESP,0x4                         ; 00545a7e
    PUSH EBP                            ; 00545a81
        ;   Label: LAB_00545a81
    PUSH EBX                            ; 00545a82
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00545a83
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00545a88
    ADD ESP,0x34                        ; 00545a8b
    POP EBP                             ; 00545a8e
    POP EDI                             ; 00545a8f
    POP ESI                             ; 00545a90
    POP EBX                             ; 00545a91
    RET                                 ; 00545a92
    PUSH EBX                            ; 00545a93
        ;   Label: LAB_00545a93
    CALL core_shadow.cpp_FUN_00545000   ; 00545a94
        ;   XREF to: 00545000 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545000()
    ADD ESP,0x4                         ; 00545a99
    PUSH 0x41f00000                     ; 00545a9c
    PUSH 0x41700000                     ; 00545aa1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00545aa6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00545aab
    FLD float ptr [ESP + 0x38]          ; 00545aaf
    FMUL double ptr [0x005d13be]        ; 00545ab3 | DAT_005d13be
    LEA EAX,[EBP + 0x1c]                ; 00545ab9
    ADD ESP,0x8                         ; 00545abc
    FLD float ptr [EBP + 0x4]           ; 00545abf
    FXCH                                ; 00545ac2
    FMUL ST1                            ; 00545ac4
    PUSH EAX                            ; 00545ac6
    LEA ESI,[ESP + 0x1c]                ; 00545ac7
    PUSH EBX                            ; 00545acb
    FSTP ST1                            ; 00545acc
    FSTP float ptr [EBP + 0x4]          ; 00545ace
    CALL core_actor.cpp_FUN_00408b80    ; 00545ad1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00545ad6
    JMP 0x005459c9                      ; 00545ad9
        ;   XREF to: 005459c9 (UNCONDITIONAL_JUMP)  ; LAB_005459c9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00545ade
        ;   Label: LAB_00545ade
    PUSH EDI                            ; 00545ae2
    MOV dword ptr [EBX + 0x2538],0x0    ; 00545ae3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00545aed
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00545af2
    ADD ESP,0x4                         ; 00545af5
    CMP EAX,0xf                         ; 00545af8
    JZ 0x00545a81                       ; 00545afb
        ;   XREF to: 00545a81 (CONDITIONAL_JUMP)  ; LAB_00545a81
    CMP EAX,0xd                         ; 00545afd
    JZ 0x00545a81                       ; 00545b00
        ;   XREF to: 00545a81 (CONDITIONAL_JUMP)  ; LAB_00545a81
    CMP EAX,0x10                        ; 00545b06
    JZ 0x00545a81                       ; 00545b09
        ;   XREF to: 00545a81 (CONDITIONAL_JUMP)  ; LAB_00545a81
    CMP EAX,0xe                         ; 00545b0f
    JZ 0x00545a81                       ; 00545b12
        ;   XREF to: 00545a81 (CONDITIONAL_JUMP)  ; LAB_00545a81
    MOV EAX,[0x01d5ba14]                ; 00545b18 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00545b1d
    ADD EAX,0x20                        ; 00545b24
    PUSH EAX                            ; 00545b27
    PUSH EBX                            ; 00545b28
    LEA ESI,[ESP + 0x8]                 ; 00545b29
    LEA EDI,[ESP + 0x14]                ; 00545b2d
    CALL core_actor.cpp_FUN_00408bf0    ; 00545b31
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x8]                 ; 00545b36
    ADD ESP,0x8                         ; 00545b3a
    MOVSD ES:EDI,ESI                    ; 00545b3d
    MOVSD ES:EDI,ESI                    ; 00545b3e
    MOVSD ES:EDI,ESI                    ; 00545b3f
    FLDZ                                ; 00545b40
    FCOMP float ptr [ESP + 0x14]        ; 00545b42
    FNSTSW AX                           ; 00545b46
    SAHF                                ; 00545b48
    JC 0x00545b8b                       ; 00545b49
        ;   XREF to: 00545b8b (CONDITIONAL_JUMP)  ; LAB_00545b8b
    PUSH 0x1                            ; 00545b4b
    PUSH 0xe                            ; 00545b4d
    MOV EAX,dword ptr [ESP + 0x34]      ; 00545b4f
    PUSH EAX                            ; 00545b53
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00545b54
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00545b54
    ADD ESP,0xc                         ; 00545b59
    PUSH EBX                            ; 00545b5c
    CALL core_shadow.cpp_FUN_00545100   ; 00545b5d
        ;   XREF to: 00545100 (UNCONDITIONAL_CALL)  ; undefined core_shadow.cpp_FUN_00545100()
    ADD ESP,0x4                         ; 00545b62
    PUSH 0x5d13b3                       ; 00545b65 | = "ShadowDead"
    MOV ECX,dword ptr [0x005fba60]      ; 00545b6a | DAT_005fba60
    PUSH ECX                            ; 00545b70
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00545b71
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00545b76
    PUSH EBP                            ; 00545b79
    PUSH EBX                            ; 00545b7a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00545b7b
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00545b80
    ADD ESP,0x34                        ; 00545b83
    POP EBP                             ; 00545b86
    POP EDI                             ; 00545b87
    POP ESI                             ; 00545b88
    POP EBX                             ; 00545b89
    RET                                 ; 00545b8a
    PUSH 0x1                            ; 00545b8b
        ;   Label: LAB_00545b8b
    PUSH 0xd                            ; 00545b8d
    MOV EDX,dword ptr [ESP + 0x34]      ; 00545b8f
    PUSH EDX                            ; 00545b93
    JMP 0x00545b54                      ; 00545b94
        ;   XREF to: 00545b54 (UNCONDITIONAL_JUMP)  ; LAB_00545b54
    CMP EAX,0x5                         ; 00545b96
        ;   Label: LAB_00545b96
    JZ 0x00545a24                       ; 00545b99
        ;   XREF to: 00545a24 (CONDITIONAL_JUMP)  ; LAB_00545a24
    CMP EAX,0xc                         ; 00545b9f
    JZ 0x00545a24                       ; 00545ba2
        ;   XREF to: 00545a24 (CONDITIONAL_JUMP)  ; LAB_00545a24
    CMP EAX,0x6                         ; 00545ba8
    JZ 0x00545a24                       ; 00545bab
        ;   XREF to: 00545a24 (CONDITIONAL_JUMP)  ; LAB_00545a24
    CMP EAX,0x7                         ; 00545bb1
    JZ 0x00545a24                       ; 00545bb4
        ;   XREF to: 00545a24 (CONDITIONAL_JUMP)  ; LAB_00545a24
    JMP 0x00545a78                      ; 00545bba
        ;   XREF to: 00545a78 (UNCONDITIONAL_JUMP)  ; LAB_00545a78

