; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_unionzom_cpp_CUnionZombie_processMeleeAttackState_FUN_005a4220(CUnionZombie *this_ptr,float delta_time)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_BVanishAttack_005f02e0+2
;   TerminatedCString s_ChaseComplete_005f02ef
;   TerminatedCString s_Chasing_005f02fd
;   TerminatedCString s_Chasing_005f0305
;   undefined4 DAT_005f030e
;   undefined4 DAT_005ff540
;   undefined4 DAT_005ff544
;
; Called Functions:
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4220
        ;   Label: core_unionzom.cpp_CUnionZombie_processMeleeAttackState_FUN_005a4220
    PUSH ESI                            ; 005a4221
    PUSH EBP                            ; 005a4222
    MOV EBP,ESP                         ; 005a4223
    SUB ESP,0x14                        ; 005a4225
    AND ESP,0xfffffff8                  ; 005a4228
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a422b
    PUSH 0x1                            ; 005a422e
    PUSH 0x3                            ; 005a4230
    LEA EAX,[EBX + 0x2b4]               ; 005a4232
    PUSH EAX                            ; 005a4238
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a4239
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a423e
    ADD ESP,0xc                         ; 005a4244
    ADD EAX,0x20                        ; 005a4247
    PUSH EAX                            ; 005a424a
    PUSH EBX                            ; 005a424b
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a424c
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    LEA EAX,[EBX + 0x20]                ; 005a4251
    ADD ESP,0x8                         ; 005a4254
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a4257
    FLD float ptr [EAX + 0x8]           ; 005a425d
    FLD float ptr [EAX]                 ; 005a4260
    FSUB float ptr [ESI + 0x20]         ; 005a4262
    FXCH                                ; 005a4265
    FSUB float ptr [ESI + 0x28]         ; 005a4267
    FXCH                                ; 005a426a
    FST float ptr [ESP]                 ; 005a426c
    FMUL float ptr [ESP]                ; 005a426f
    FXCH                                ; 005a4272
    FST float ptr [ESP + 0x10]          ; 005a4274
    FMUL float ptr [ESP + 0x10]         ; 005a4278
    FXCH                                ; 005a427c
    FSTP float ptr [ESP + 0x8]          ; 005a427e
    FSTP float ptr [ESP + 0xc]          ; 005a4282
    FLD float ptr [ESP + 0x8]           ; 005a4286
    FADD float ptr [ESP + 0xc]          ; 005a428a
    FSQRT                               ; 005a428e
    LEA ESI,[EBX + 0x10af8]             ; 005a4290
    FST float ptr [ESP + 0x4]           ; 005a4296
    FCOMP float ptr [0x005ff540]        ; 005a429a | DAT_005ff540
    FNSTSW AX                           ; 005a42a0
    SAHF                                ; 005a42a2
    JA 0x005a42c0                       ; 005a42a3
        ;   XREF to: 005a42c0 (CONDITIONAL_JUMP)  ; LAB_005a42c0
    FLD float ptr [0x005ff544]          ; 005a42a5 | DAT_005ff544
    FADD float ptr [0x005f030e]         ; 005a42ab | DAT_005f030e
    FCOMP float ptr [ESP + 0x4]         ; 005a42b1
    FNSTSW AX                           ; 005a42b5
    SAHF                                ; 005a42b7
    JC 0x005a42fd                       ; 005a42b8
        ;   XREF to: 005a42fd (CONDITIONAL_JUMP)  ; LAB_005a42fd
    MOV ESP,EBP                         ; 005a42ba
        ;   Label: LAB_005a42ba
    POP EBP                             ; 005a42bc
    POP ESI                             ; 005a42bd
    POP EBX                             ; 005a42be
    RET                                 ; 005a42bf
    PUSH 0x5f02e2                       ; 005a42c0 | s_BVanishAttack_005f02e0+2
        ;   Label: LAB_005a42c0
    PUSH 0x5f02ef                       ; 005a42c5 | = "ChaseComplete"
    FLD float ptr [0x005ff540]          ; 005a42ca | DAT_005ff540
    PUSH ESI                            ; 005a42d0
    FSTP float ptr [EBX + 0x11394]      ; 005a42d1
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a42d7
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a42dc
    PUSH 0x3dcccccd                     ; 005a42df
    PUSH ESI                            ; 005a42e4
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005a42e5
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a42ea
    PUSH 0x5f02fd                       ; 005a42ed | = "Chasing"
    PUSH ESI                            ; 005a42f2
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a42f3
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a42f8
    JMP 0x005a42ba                      ; 005a42fb
        ;   XREF to: 005a42ba (UNCONDITIONAL_JUMP)  ; LAB_005a42ba
    PUSH 0x3dcccccd                     ; 005a42fd
        ;   Label: LAB_005a42fd
    FLD float ptr [0x005ff544]          ; 005a4302 | DAT_005ff544
    PUSH ESI                            ; 005a4308
    FSTP float ptr [EBX + 0x11394]      ; 005a4309
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005a430f
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a4314
    PUSH 0x5f0305                       ; 005a4317 | = "Chasing"
    PUSH ESI                            ; 005a431c
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a431d
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a4322
    MOV ESP,EBP                         ; 005a4325
    POP EBP                             ; 005a4327
    POP ESI                             ; 005a4328
    POP EBX                             ; 005a4329
    RET                                 ; 005a432a

