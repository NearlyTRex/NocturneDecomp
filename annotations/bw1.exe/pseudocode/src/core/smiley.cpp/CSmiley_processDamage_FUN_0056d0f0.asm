; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_CSmiley_processDamage_FUN_0056d0f0(CSmiley *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_smiley_die_wav_005f2a56+1
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_smiley.cpp_CSmiley_processDismemberment_FUN_0056ce10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d0f0
        ;   Label: core_smiley.cpp_CSmiley_processDamage_FUN_0056d0f0
    PUSH ESI                            ; 0056d0f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056d0f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0056d0f6
    CMP dword ptr [EBX + 0xc2a8],0x1    ; 0056d0fa
    JNZ 0x0056d1be                      ; 0056d101
        ;   XREF to: 0056d1be (CONDITIONAL_JUMP)  ; LAB_0056d1be
    MOV ECX,dword ptr [ESI + 0x30]      ; 0056d107
    CMP ECX,0x4                         ; 0056d10a
    JZ 0x0056d1cf                       ; 0056d10d
        ;   XREF to: 0056d1cf (CONDITIONAL_JUMP)  ; LAB_0056d1cf
    CMP ECX,0xb                         ; 0056d113
    JLE 0x0056d124                      ; 0056d116
        ;   XREF to: 0056d124 (CONDITIONAL_JUMP)  ; LAB_0056d124
    CMP ECX,0x6b                        ; 0056d118
    JZ 0x0056d124                       ; 0056d11b
        ;   XREF to: 0056d124 (CONDITIONAL_JUMP)  ; LAB_0056d124
    MOV dword ptr [ESI + 0x4],0x0       ; 0056d11d
        ;   Label: LAB_0056d11d
    FLD float ptr [ESI + 0x4]           ; 0056d124
        ;   Label: LAB_0056d124
    FLDZ                                ; 0056d127
    FCOMPP                              ; 0056d129
    FNSTSW AX                           ; 0056d12b
    SAHF                                ; 0056d12d
    JNC 0x0056d13a                      ; 0056d12e
        ;   XREF to: 0056d13a (CONDITIONAL_JUMP)  ; LAB_0056d13a
    PUSH ESI                            ; 0056d130
    PUSH EBX                            ; 0056d131
    CALL core_smiley.cpp_CSmiley_processDismemberment_FUN_0056ce10 ; 0056d132
        ;   XREF to: 0056ce10 (UNCONDITIONAL_CALL)  ; void core_smiley.cpp_CSmiley_processDismemberment_FUN_0056ce10(CSmiley * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0056d137
    PUSH EDI                            ; 0056d13a
        ;   Label: LAB_0056d13a
    FLD float ptr [ESI + 0x4]           ; 0056d13b
    FSUBR float ptr [EBX + 0x2538]      ; 0056d13e
    LEA EDI,[EBX + 0x158]               ; 0056d144
    FST float ptr [EBX + 0x2538]        ; 0056d14a
    FLDZ                                ; 0056d150
    FCOMPP                              ; 0056d152
    FNSTSW AX                           ; 0056d154
    SAHF                                ; 0056d156
    JC 0x0056d1db                       ; 0056d157
        ;   XREF to: 0056d1db (CONDITIONAL_JUMP)  ; LAB_0056d1db
    PUSH EDI                            ; 0056d15d
    MOV dword ptr [EBX + 0x2538],0x0    ; 0056d15e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0056d168
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056d16d
    ADD ESP,0x4                         ; 0056d170
    CMP EAX,0x8                         ; 0056d173
    JZ 0x0056d1b0                       ; 0056d176
        ;   XREF to: 0056d1b0 (CONDITIONAL_JUMP)  ; LAB_0056d1b0
    CMP EAX,0x7                         ; 0056d178
    JZ 0x0056d1b0                       ; 0056d17b
        ;   XREF to: 0056d1b0 (CONDITIONAL_JUMP)  ; LAB_0056d1b0
    PUSH 0x1                            ; 0056d17d
    PUSH 0x7                            ; 0056d17f
    PUSH EDI                            ; 0056d181
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0056d182
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056d187
    PUSH 0x0                            ; 0056d18a
    PUSH 0x1                            ; 0056d18c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056d18e
    PUSH EBX                            ; 0056d194
    CALL dword ptr [EAX + 0x128]        ; 0056d195
    ADD ESP,0xc                         ; 0056d19b
    PUSH 0x5f2a57                       ; 0056d19e | s_smiley_die_wav_005f2a56+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056d1a3
    PUSH EBX                            ; 0056d1a9
    CALL dword ptr [EAX + 0x2c]         ; 0056d1aa
    ADD ESP,0x8                         ; 0056d1ad
    PUSH ESI                            ; 0056d1b0
        ;   Label: LAB_0056d1b0
    PUSH EBX                            ; 0056d1b1
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0056d1b2
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0056d1b7
    POP EDI                             ; 0056d1ba
    POP ESI                             ; 0056d1bb
    POP EBX                             ; 0056d1bc
    RET                                 ; 0056d1bd
    MOV dword ptr [ESI + 0x30],0x64     ; 0056d1be
        ;   Label: LAB_0056d1be
    MOV dword ptr [ESI + 0x4],0x0       ; 0056d1c5
    POP ESI                             ; 0056d1cc
    POP EBX                             ; 0056d1cd
    RET                                 ; 0056d1ce
    MOV dword ptr [ESI + 0x30],0x64     ; 0056d1cf
        ;   Label: LAB_0056d1cf
    JMP 0x0056d11d                      ; 0056d1d6
        ;   XREF to: 0056d11d (UNCONDITIONAL_JUMP)  ; LAB_0056d11d
    PUSH 0x1                            ; 0056d1db
        ;   Label: LAB_0056d1db
    PUSH 0x3                            ; 0056d1dd
    PUSH EDI                            ; 0056d1df
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0056d1e0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056d1e5
    PUSH ESI                            ; 0056d1e8
    PUSH EBX                            ; 0056d1e9
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0056d1ea
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0056d1ef
    POP EDI                             ; 0056d1f2
    POP ESI                             ; 0056d1f3
    POP EBX                             ; 0056d1f4
    RET                                 ; 0056d1f5

