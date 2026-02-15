; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_005da240(CBassPlayer *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005da240
        ;   Label: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_005da240
    MOV EAX,dword ptr [ESP + 0x8]       ; 005da244
    FLD float ptr [EAX + 0x4]           ; 005da248
    FSUBR float ptr [EDX + 0x243c]      ; 005da24b
    FST float ptr [EDX + 0x243c]        ; 005da251
    FLDZ                                ; 005da257
    FCOMPP                              ; 005da259
    FNSTSW AX                           ; 005da25b
    SAHF                                ; 005da25d
    JNC 0x005da261                      ; 005da25e
        ;   XREF to: 005da261 (CONDITIONAL_JUMP)  ; LAB_005da261
    RET                                 ; 005da260
    PUSH 0x1                            ; 005da261
        ;   Label: LAB_005da261
    PUSH 0x3                            ; 005da263
    ADD EDX,0x158                       ; 005da265
    PUSH EDX                            ; 005da26b
    MOV dword ptr [EDX + 0x22e4],0x0    ; 005da26c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005da276
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005da27b
    RET                                 ; 005da27e

