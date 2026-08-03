; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(CBoneGuy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419f40
        ;   Label: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00419f41
    MOV EDX,dword ptr [EBX + 0xbd34]    ; 00419f45
    PUSH EDX                            ; 00419f4b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00419f4c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00419f51
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419f54
    FLD float ptr [EAX + 0x4]           ; 00419f58
    FSUBR float ptr [EBX + 0x2434]      ; 00419f5b
    FST float ptr [EBX + 0x2434]        ; 00419f61
    FLDZ                                ; 00419f67
    FCOMPP                              ; 00419f69
    FNSTSW AX                           ; 00419f6b
    SAHF                                ; 00419f6d
    JC 0x00419f93                       ; 00419f6e
        ;   XREF to: 00419f93 (CONDITIONAL_JUMP)  ; LAB_00419f93
    PUSH EBX                            ; 00419f70
    MOV dword ptr [EBX + 0x2434],0x3f800000 ; 00419f71
    CALL core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0 ; 00419f7b
        ;   XREF to: 0041a0f0 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00419f80
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419f83
    PUSH ECX                            ; 00419f87
    PUSH EBX                            ; 00419f88
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00419f89
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419f8e
    POP EBX                             ; 00419f91
    RET                                 ; 00419f92
    PUSH 0x1                            ; 00419f93
        ;   Label: LAB_00419f93
    PUSH 0x3                            ; 00419f95
    LEA EAX,[EBX + 0x150]               ; 00419f97
    PUSH EAX                            ; 00419f9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419f9e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00419fa3
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419fa6
    PUSH ECX                            ; 00419faa
    PUSH EBX                            ; 00419fab
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00419fac
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419fb1
    POP EBX                             ; 00419fb4
    RET                                 ; 00419fb5

