; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004ea140(CHaystack *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_00601a58
;   CGame* g_CGamePtr = 01ccf390
;   CGore* g_CGorePtr = 01cd0e3c
;   undefined4 g_CGameInstance.field444_0x1ec
;   undefined4 g_CGameInstance.field536_0x248
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea140
        ;   Label: core_haystack.cpp_CHaystack_processDamage_FUN_004ea140
    PUSH ESI                            ; 004ea141
    PUSH EDI                            ; 004ea142
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ea143
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ea147
    TEST dword ptr [EBX + 0xc1d0],0x7fffffff ; 004ea14b
    JNZ 0x004ea1dc                      ; 004ea155
        ;   XREF to: 004ea1dc (CONDITIONAL_JUMP)  ; LAB_004ea1dc
    MOV EAX,[0x0061d95c]                ; 004ea15b | g_CGamePtr
        ;   Label: LAB_004ea15b
    CMP dword ptr [EAX + 0x1ec],0x0     ; 004ea160 | g_CGameInstance.field444_0x1ec
    JZ 0x004ea170                       ; 004ea167
        ;   XREF to: 004ea170 (CONDITIONAL_JUMP)  ; LAB_004ea170
    MOV dword ptr [EDI + 0x4],0x0       ; 004ea169
    MOV EAX,[0x0061d95c]                ; 004ea170 | g_CGamePtr
        ;   Label: LAB_004ea170
    MOV ESI,dword ptr [EAX + 0x248]     ; 004ea175 | g_CGameInstance.field536_0x248
    TEST ESI,ESI                        ; 004ea17b
    JZ 0x004ea1e8                       ; 004ea17d
        ;   XREF to: 004ea1e8 (CONDITIONAL_JUMP)  ; LAB_004ea1e8
    MOV EAX,[0x00601a58]                ; 004ea17f | DAT_00601a58
        ;   Label: LAB_004ea17f
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 004ea184
    FLD float ptr [EDI + 0x4]           ; 004ea18a
    FSUBR float ptr [EBX + 0x2538]      ; 004ea18d
    LEA ESI,[EBX + 0x158]               ; 004ea193
    FST float ptr [EBX + 0x2538]        ; 004ea199
    FLDZ                                ; 004ea19f
    FCOMPP                              ; 004ea1a1
    FNSTSW AX                           ; 004ea1a3
    SAHF                                ; 004ea1a5
    JNC 0x004ea1ed                      ; 004ea1a6
        ;   XREF to: 004ea1ed (CONDITIONAL_JUMP)  ; LAB_004ea1ed
    FLD float ptr [EDI + 0x4]           ; 004ea1a8
    FLDZ                                ; 004ea1ab
    FCOMPP                              ; 004ea1ad
    FNSTSW AX                           ; 004ea1af
    SAHF                                ; 004ea1b1
    JNC 0x004ea1ce                      ; 004ea1b2
        ;   XREF to: 004ea1ce (CONDITIONAL_JUMP)  ; LAB_004ea1ce
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004ea1b4
    JNZ 0x004ea256                      ; 004ea1bb
        ;   XREF to: 004ea256 (CONDITIONAL_JUMP)  ; LAB_004ea256
    PUSH 0x1                            ; 004ea1c1
    PUSH 0x4                            ; 004ea1c3
    PUSH ESI                            ; 004ea1c5
        ;   Label: LAB_004ea1c5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ea1c6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ea1cb
    PUSH EDI                            ; 004ea1ce
        ;   Label: LAB_004ea1ce
    PUSH EBX                            ; 004ea1cf
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 004ea1d0
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ea1d5
    POP EDI                             ; 004ea1d8
    POP ESI                             ; 004ea1d9
    POP EBX                             ; 004ea1da
    RET                                 ; 004ea1db
    MOV dword ptr [EDI + 0x4],0x0       ; 004ea1dc
        ;   Label: LAB_004ea1dc
    JMP 0x004ea15b                      ; 004ea1e3
        ;   XREF to: 004ea15b (UNCONDITIONAL_JUMP)  ; LAB_004ea15b
    MOV dword ptr [EDI + 0x4],ESI       ; 004ea1e8
        ;   Label: LAB_004ea1e8
    JMP 0x004ea17f                      ; 004ea1eb
        ;   XREF to: 004ea17f (UNCONDITIONAL_JUMP)  ; LAB_004ea17f
    PUSH ESI                            ; 004ea1ed
        ;   Label: LAB_004ea1ed
    MOV dword ptr [EBX + 0x2538],0x0    ; 004ea1ee
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004ea1f8
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ea1fd
    ADD ESP,0x4                         ; 004ea200
    CMP EAX,0x9                         ; 004ea203
    JZ 0x004ea1ce                       ; 004ea206
        ;   XREF to: 004ea1ce (CONDITIONAL_JUMP)  ; LAB_004ea1ce
    PUSH ESI                            ; 004ea208
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004ea209
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ea20e
    ADD ESP,0x4                         ; 004ea211
    CMP EAX,0x8                         ; 004ea214
    JZ 0x004ea1ce                       ; 004ea217
        ;   XREF to: 004ea1ce (CONDITIONAL_JUMP)  ; LAB_004ea1ce
    PUSH 0x1                            ; 004ea219
    PUSH 0x8                            ; 004ea21b
    PUSH ESI                            ; 004ea21d
    MOV dword ptr [EBX + 0x26fc],0x0    ; 004ea21e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ea228
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ea22d
    PUSH 0x0                            ; 004ea230
    PUSH 0x42480000                     ; 004ea232
    PUSH 0x32                           ; 004ea237
    PUSH EBX                            ; 004ea239
    MOV EAX,[0x0061dca4]                ; 004ea23a | g_CGorePtr
    PUSH EAX                            ; 004ea23f
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0 ; 004ea240
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004e64d0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 004ea245
    PUSH EDI                            ; 004ea248
    PUSH EBX                            ; 004ea249
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 004ea24a
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004ea24f
    POP EDI                             ; 004ea252
    POP ESI                             ; 004ea253
    POP EBX                             ; 004ea254
    RET                                 ; 004ea255
    PUSH 0x1                            ; 004ea256
        ;   Label: LAB_004ea256
    PUSH 0xb                            ; 004ea258
    JMP 0x004ea1c5                      ; 004ea25a
        ;   XREF to: 004ea1c5 (UNCONDITIONAL_JUMP)  ; LAB_004ea1c5

