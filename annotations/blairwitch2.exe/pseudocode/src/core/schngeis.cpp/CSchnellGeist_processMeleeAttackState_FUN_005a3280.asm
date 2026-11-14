; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_schngeis_cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280(CSchnellGeist *this_ptr,float delta_time)
;
; Parameters:
; CSchnellGeist *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0119
;   undefined4 DAT_005ff350
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059d8e0
;   core_muzzle.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3280
        ;   Label: core_schngeis.cpp_CSchnellGeist_processMeleeAttackState_FUN_005a3280
    PUSH ESI                            ; 005a3281
    PUSH EDI                            ; 005a3282
    SUB ESP,0xc                         ; 005a3283
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a3286
    PUSH EBX                            ; 005a328a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a328b
    CALL dword ptr [EAX + 0x17c]        ; 005a3291
    ADD ESP,0x4                         ; 005a3297
    TEST EAX,EAX                        ; 005a329a
    JNZ 0x005a32a5                      ; 005a329c
        ;   XREF to: 005a32a5 (CONDITIONAL_JUMP)  ; LAB_005a32a5
    ADD ESP,0xc                         ; 005a329e
        ;   Label: LAB_005a329e
    POP EDI                             ; 005a32a1
    POP ESI                             ; 005a32a2
    POP EBX                             ; 005a32a3
    RET                                 ; 005a32a4
    LEA ESI,[EBX + 0x20]                ; 005a32a5
        ;   Label: LAB_005a32a5
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a32a8
    FLD float ptr [ESI]                 ; 005a32ae
    FSUB float ptr [EAX + 0x20]         ; 005a32b0
    FMUL ST0                            ; 005a32b3
    FLD float ptr [ESI + 0x8]           ; 005a32b5
    FSUB float ptr [EAX + 0x28]         ; 005a32b8
    FMUL ST0                            ; 005a32bb
    FADDP                               ; 005a32bd
    FSQRT                               ; 005a32bf
    LEA ESI,[EBX + 0x2b4]               ; 005a32c1
    PUSH ESI                            ; 005a32c7
    FSTP float ptr [ESP + 0x4]          ; 005a32c8
    CALL core_motion.cpp_FUN_005035c0   ; 005a32cc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005a32d1
    MOV EDI,dword ptr [EAX + 0x24]      ; 005a32d4
    FLD float ptr [ESP]                 ; 005a32d7
    FCOMP float ptr [0x005ff350]        ; 005a32da | DAT_005ff350
    FNSTSW AX                           ; 005a32e0
    SAHF                                ; 005a32e2
    JA 0x005a3323                       ; 005a32e3
        ;   XREF to: 005a3323 (CONDITIONAL_JUMP)  ; LAB_005a3323
    CMP EDI,0xa                         ; 005a32e5
    JZ 0x005a3382                       ; 005a32e8
        ;   XREF to: 005a3382 (CONDITIONAL_JUMP)  ; LAB_005a3382
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a32ee
    ADD EAX,0x20                        ; 005a32f4
    PUSH EAX                            ; 005a32f7
    PUSH EBX                            ; 005a32f8
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a32f9
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    MOV EBX,dword ptr [EBX + 0x1186c]   ; 005a32fe
    ADD ESP,0x8                         ; 005a3304
    TEST EBX,EBX                        ; 005a3307
    JBE 0x005a336e                      ; 005a3309
        ;   XREF to: 005a336e (CONDITIONAL_JUMP)  ; LAB_005a336e
    CMP EBX,0x1                         ; 005a330b
    JNZ 0x005a329e                      ; 005a330e
        ;   XREF to: 005a329e (CONDITIONAL_JUMP)  ; LAB_005a329e
    PUSH EBX                            ; 005a3310
    PUSH 0x4                            ; 005a3311
    PUSH ESI                            ; 005a3313
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a3314
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a3319
    ADD ESP,0xc                         ; 005a331c
    POP EDI                             ; 005a331f
    POP ESI                             ; 005a3320
    POP EBX                             ; 005a3321
    RET                                 ; 005a3322
    PUSH 0x3f000000                     ; 005a3323
        ;   Label: LAB_005a3323
    ADD EBX,0x10af8                     ; 005a3328
    FLD float ptr [0x005ff350]          ; 005a332e | DAT_005ff350
    PUSH EBX                            ; 005a3334
    FSTP float ptr [EBX + 0x89c]        ; 005a3335
    CALL core_muzzle.cpp_FUN_0059dcb0   ; 005a333b
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a3340
    PUSH 0x5f0119                       ; 005a3343 | = "Chasing"
    PUSH EBX                            ; 005a3348
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005a3349
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a334e
    CMP EDI,0xa                         ; 005a3351
    JNZ 0x005a329e                      ; 005a3354
        ;   XREF to: 005a329e (CONDITIONAL_JUMP)  ; LAB_005a329e
    PUSH 0x1                            ; 005a335a
    PUSH 0x0                            ; 005a335c
    PUSH ESI                            ; 005a335e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a335f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a3364
    ADD ESP,0xc                         ; 005a3367
    POP EDI                             ; 005a336a
    POP ESI                             ; 005a336b
    POP EBX                             ; 005a336c
    RET                                 ; 005a336d
    PUSH 0x1                            ; 005a336e
        ;   Label: LAB_005a336e
    PUSH 0x3                            ; 005a3370
    PUSH ESI                            ; 005a3372
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a3373
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a3378
    ADD ESP,0xc                         ; 005a337b
    POP EDI                             ; 005a337e
    POP ESI                             ; 005a337f
    POP EBX                             ; 005a3380
    RET                                 ; 005a3381
    PUSH 0x1                            ; 005a3382
        ;   Label: LAB_005a3382
    PUSH 0x0                            ; 005a3384
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005a3386
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a338b
    PUSH 0x1                            ; 005a338e
    PUSH 0x0                            ; 005a3390
    PUSH ESI                            ; 005a3392
    MOV dword ptr [EBX + 0x1186c],EAX   ; 005a3393
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a3399
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a339e
    ADD ESP,0xc                         ; 005a33a1
    POP EDI                             ; 005a33a4
    POP ESI                             ; 005a33a5
    POP EBX                             ; 005a33a6
    RET                                 ; 005a33a7

