; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog1_cpp_FUN_005ac200(CCharacter *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f0dd2
;   TerminatedCString s_ChaseComplete_005f0dde
;   TerminatedCString s_Chasing_005f0dec
;   undefined4 DAT_005f0df6
;   undefined4 DAT_00600c50
;
; Called Functions:
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_00503e60
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac200
        ;   Label: core_dog1.cpp_FUN_005ac200
    PUSH ESI                            ; 005ac201
    PUSH EDI                            ; 005ac202
    PUSH EBP                            ; 005ac203
    MOV EBP,ESP                         ; 005ac204
    SUB ESP,0xc                         ; 005ac206
    AND ESP,0xfffffff8                  ; 005ac209
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ac20c
    PUSH EBX                            ; 005ac20f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005ac210
    CALL dword ptr [EAX + 0x17c]        ; 005ac216
    ADD ESP,0x4                         ; 005ac21c
    TEST EAX,EAX                        ; 005ac21f
    JNZ 0x005ac22a                      ; 005ac221
        ;   XREF to: 005ac22a (CONDITIONAL_JUMP)  ; LAB_005ac22a
    MOV ESP,EBP                         ; 005ac223
    POP EBP                             ; 005ac225
    POP EDI                             ; 005ac226
    POP ESI                             ; 005ac227
    POP EBX                             ; 005ac228
    RET                                 ; 005ac229
    LEA EDI,[EBX + 0x2b4]               ; 005ac22a
        ;   Label: LAB_005ac22a
    PUSH EDI                            ; 005ac230
    CALL core_motion.cpp_FUN_005035c0   ; 005ac231
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005ac236
    PUSH EDI                            ; 005ac239
    MOV ESI,dword ptr [EAX + 0x24]      ; 005ac23a
    CALL core_motion.cpp_FUN_00503e60   ; 005ac23d
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xc],EAX       ; 005ac242
    MOV dword ptr [ESP + 0x8],ESI       ; 005ac246
    FLD float ptr [ESP + 0xc]           ; 005ac24a
    ADD ESP,0x4                         ; 005ac24e
    FSTP float ptr [ESP]                ; 005ac251
    CMP ESI,0x3                         ; 005ac254
    JNZ 0x005ac27a                      ; 005ac257
        ;   XREF to: 005ac27a (CONDITIONAL_JUMP)  ; LAB_005ac27a
    FLD float ptr [ESP]                 ; 005ac259
    FCOMP double ptr [0x005f0df6]       ; 005ac25c | DAT_005f0df6
    FNSTSW AX                           ; 005ac262
    SAHF                                ; 005ac264
    JNC 0x005ac27a                      ; 005ac265
        ;   XREF to: 005ac27a (CONDITIONAL_JUMP)  ; LAB_005ac27a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005ac267
    ADD EAX,0x20                        ; 005ac26d
    PUSH EAX                            ; 005ac270
    PUSH EBX                            ; 005ac271
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005ac272
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    ADD ESP,0x8                         ; 005ac277
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ac27a
        ;   Label: LAB_005ac27a
    LEA EAX,[EBX + 0x2b4]               ; 005ac27e
    CMP EDX,0x7                         ; 005ac284
    JZ 0x005ac29d                       ; 005ac287
        ;   XREF to: 005ac29d (CONDITIONAL_JUMP)  ; LAB_005ac29d
    PUSH 0x1                            ; 005ac289
    PUSH 0x3                            ; 005ac28b
    PUSH EAX                            ; 005ac28d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac28e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ac293
    MOV ESP,EBP                         ; 005ac296
    POP EBP                             ; 005ac298
    POP EDI                             ; 005ac299
    POP ESI                             ; 005ac29a
    POP EBX                             ; 005ac29b
    RET                                 ; 005ac29c
    PUSH 0x1                            ; 005ac29d
        ;   Label: LAB_005ac29d
    PUSH 0x0                            ; 005ac29f
    PUSH EAX                            ; 005ac2a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac2a2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ac2a7
    PUSH 0x5f0dd2                       ; 005ac2aa | = "MeleeAttack"
    ADD EBX,0x10af8                     ; 005ac2af
    PUSH 0x5f0dde                       ; 005ac2b5 | = "ChaseComplete"
    FLD float ptr [0x00600c50]          ; 005ac2ba | DAT_00600c50
    PUSH EBX                            ; 005ac2c0
    FSTP float ptr [EBX + 0x89c]        ; 005ac2c1
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005ac2c7
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005ac2cc
    PUSH 0x5f0dec                       ; 005ac2cf | = "Chasing"
    PUSH EBX                            ; 005ac2d4
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005ac2d5
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ac2da
    MOV ESP,EBP                         ; 005ac2dd
    POP EBP                             ; 005ac2df
    POP EDI                             ; 005ac2e0
    POP ESI                             ; 005ac2e1
    POP EBX                             ; 005ac2e2
    RET                                 ; 005ac2e3

