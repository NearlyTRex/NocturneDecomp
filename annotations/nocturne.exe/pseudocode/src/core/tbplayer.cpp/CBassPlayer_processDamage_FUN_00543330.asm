; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00543330(int param_1,int param_2)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543330
        ;   Label: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00543330
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543334
    FLD float ptr [EAX + 0x4]           ; 00543338
    FSUBR float ptr [EDX + 0x2434]      ; 0054333b
    FST float ptr [EDX + 0x2434]        ; 00543341
    FLDZ                                ; 00543347
    FCOMPP                              ; 00543349
    FNSTSW AX                           ; 0054334b
    SAHF                                ; 0054334d
    JNC 0x00543351                      ; 0054334e
        ;   XREF to: 00543351 (CONDITIONAL_JUMP)  ; LAB_00543351
    RET                                 ; 00543350
    PUSH 0x1                            ; 00543351
        ;   Label: LAB_00543351
    PUSH 0x3                            ; 00543353
    ADD EDX,0x150                       ; 00543355
    PUSH EDX                            ; 0054335b
    MOV dword ptr [EDX + 0x22e4],0x0    ; 0054335c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00543366
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054336b
    RET                                 ; 0054336e

