; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CBassPlayer_processDamage_FUN_00571d30(CBassPlayer *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571d30
        ;   Label: core_tbplayer.cpp_CBassPlayer_processDamage_FUN_00571d30
    MOV ECX,dword ptr [EDX + 0x281c]    ; 00571d34
    TEST ECX,ECX                        ; 00571d3a
    JNZ 0x00571d5a                      ; 00571d3c
        ;   XREF to: 00571d5a (CONDITIONAL_JUMP)  ; LAB_00571d5a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00571d3e
    FLD float ptr [EAX + 0x4]           ; 00571d42
    FSUBR float ptr [EDX + 0x25a8]      ; 00571d45
    FST float ptr [EDX + 0x25a8]        ; 00571d4b
    FLDZ                                ; 00571d51
    FCOMPP                              ; 00571d53
    FNSTSW AX                           ; 00571d55
    SAHF                                ; 00571d57
    JNC 0x00571d5b                      ; 00571d58
        ;   XREF to: 00571d5b (CONDITIONAL_JUMP)  ; LAB_00571d5b
    RET                                 ; 00571d5a
        ;   Label: LAB_00571d5a
    PUSH 0x1                            ; 00571d5b
        ;   Label: LAB_00571d5b
    PUSH 0x3                            ; 00571d5d
    ADD EDX,0x2b4                       ; 00571d5f
    PUSH EDX                            ; 00571d65
    MOV dword ptr [EDX + 0x22f4],ECX    ; 00571d66
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00571d6c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00571d71
    RET                                 ; 00571d74

