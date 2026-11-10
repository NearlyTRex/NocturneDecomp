; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_imp_cpp_CImp_processDamage_FUN_004f3f50(CImp *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_imp_die_wav_005e56ba
;   TerminatedCString s_imp_hurt_wav_005e56c7
;   undefined4 DAT_005e56da
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_imp.cpp_CImp_processDismemberment_FUN_004f3cb0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f50
        ;   Label: core_imp.cpp_CImp_processDamage_FUN_004f3f50
    PUSH EBP                            ; 004f3f51
    SUB ESP,0x20                        ; 004f3f52
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004f3f55
    MOV EDX,dword ptr [EBP + 0xc268]    ; 004f3f59
    PUSH EDX                            ; 004f3f5f
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f3f60
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004f3f65
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f3f68
    CMP dword ptr [EAX + 0x28],0x8      ; 004f3f6c
    JNZ 0x004f3fce                      ; 004f3f70
        ;   XREF to: 004f3fce (CONDITIONAL_JUMP)  ; LAB_004f3fce
    PUSH EDI                            ; 004f3f72
    PUSH ESI                            ; 004f3f73
    FLD float ptr [EAX + 0x4]           ; 004f3f74
    ADD EAX,0x1c                        ; 004f3f77
    FLD ST0                             ; 004f3f7a
    FMUL double ptr [0x005e56da]        ; 004f3f7c | DAT_005e56da
    PUSH EAX                            ; 004f3f82
    LEA ESI,[ESP + 0xc]                 ; 004f3f83
    LEA EDI,[ESP + 0x18]                ; 004f3f87
    PUSH EBP                            ; 004f3f8b
    FSTP ST1                            ; 004f3f8c
    FSTP float ptr [EAX + -0x18]        ; 004f3f8e
    CALL core_actor.cpp_FUN_00408b40    ; 004f3f91
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x10]                ; 004f3f96
    ADD ESP,0x8                         ; 004f3f9a
    XOR EBX,EBX                         ; 004f3f9d
    MOVSD ES:EDI,ESI                    ; 004f3f9f
    MOVSD ES:EDI,ESI                    ; 004f3fa0
    MOVSD ES:EDI,ESI                    ; 004f3fa1
    MOV ESI,0x4000                      ; 004f3fa2
    PUSH 0xffff                         ; 004f3fa7
        ;   Label: LAB_004f3fa7
    PUSH 0x0                            ; 004f3fac
    PUSH ESI                            ; 004f3fae
    PUSH ESI                            ; 004f3faf
    PUSH 0x0                            ; 004f3fb0
    LEA EAX,[ESP + 0x28]                ; 004f3fb2
    PUSH EAX                            ; 004f3fb6
    MOV EDI,dword ptr [0x0061c010]      ; 004f3fb7 | DAT_0061c010
    PUSH EDI                            ; 004f3fbd
    INC EBX                             ; 004f3fbe
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004f3fbf
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004f3fc4
    CMP EBX,0x5                         ; 004f3fc7
    JL 0x004f3fa7                       ; 004f3fca
        ;   XREF to: 004f3fa7 (CONDITIONAL_JUMP)  ; LAB_004f3fa7
    POP ESI                             ; 004f3fcc
    POP EDI                             ; 004f3fcd
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f3fce
        ;   Label: LAB_004f3fce
    PUSH EAX                            ; 004f3fd2
    PUSH EBP                            ; 004f3fd3
    CALL core_imp.cpp_CImp_processDismemberment_FUN_004f3cb0 ; 004f3fd4
        ;   XREF to: 004f3cb0 (UNCONDITIONAL_CALL)  ; void core_imp.cpp_CImp_processDismemberment_FUN_004f3cb0(CImp * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004f3fd9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f3fdc
    FLD float ptr [EAX + 0x4]           ; 004f3fe0
    FSUBR float ptr [EBP + 0x2538]      ; 004f3fe3
    LEA EBX,[EBP + 0x158]               ; 004f3fe9
    FST float ptr [EBP + 0x2538]        ; 004f3fef
    FLDZ                                ; 004f3ff5
    FCOMPP                              ; 004f3ff7
    FNSTSW AX                           ; 004f3ff9
    SAHF                                ; 004f3ffb
    JC 0x004f4066                       ; 004f3ffc
        ;   XREF to: 004f4066 (CONDITIONAL_JUMP)  ; LAB_004f4066
    PUSH EBX                            ; 004f3ffe
    MOV dword ptr [EBP + 0x2538],0x0    ; 004f3fff
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f4009
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f400e
    ADD ESP,0x4                         ; 004f4011
    CMP EAX,0x6                         ; 004f4014
    JZ 0x004f4052                       ; 004f4017
        ;   XREF to: 004f4052 (CONDITIONAL_JUMP)  ; LAB_004f4052
    CMP EAX,0x7                         ; 004f4019
    JZ 0x004f4052                       ; 004f401c
        ;   XREF to: 004f4052 (CONDITIONAL_JUMP)  ; LAB_004f4052
    PUSH 0x1                            ; 004f401e
    PUSH 0x6                            ; 004f4020
    PUSH EBX                            ; 004f4022
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f4023
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f4028
    MOV ECX,dword ptr [EBP + 0xc26c]    ; 004f402b
    PUSH ECX                            ; 004f4031
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004f4032
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004f4037
    PUSH 0x5e56ba                       ; 004f403a | = "imp-die?.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f403f
        ;   Label: LAB_004f403f
    PUSH EBP                            ; 004f4045
    CALL dword ptr [EAX + 0x2c]         ; 004f4046
    ADD ESP,0x8                         ; 004f4049
    MOV dword ptr [EBP + 0xc26c],EAX    ; 004f404c
    MOV EBX,dword ptr [ESP + 0x30]      ; 004f4052
        ;   Label: LAB_004f4052
    PUSH EBX                            ; 004f4056
    PUSH EBP                            ; 004f4057
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 004f4058
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004f405d
    ADD ESP,0x20                        ; 004f4060
    POP EBP                             ; 004f4063
    POP EBX                             ; 004f4064
    RET                                 ; 004f4065
    PUSH 0x1                            ; 004f4066
        ;   Label: LAB_004f4066
    PUSH 0x5                            ; 004f4068
    PUSH EBX                            ; 004f406a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004f406b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004f4070
    MOV EDX,dword ptr [EBP + 0xc26c]    ; 004f4073
    PUSH EDX                            ; 004f4079
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004f407a
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004f407f
    TEST EAX,EAX                        ; 004f4082
    JNZ 0x004f4052                      ; 004f4084
        ;   XREF to: 004f4052 (CONDITIONAL_JUMP)  ; LAB_004f4052
    PUSH 0x5e56c7                       ; 004f4086 | = "imp-hurt?.wav"
    JMP 0x004f403f                      ; 004f408b
        ;   XREF to: 004f403f (UNCONDITIONAL_JUMP)  ; LAB_004f403f

