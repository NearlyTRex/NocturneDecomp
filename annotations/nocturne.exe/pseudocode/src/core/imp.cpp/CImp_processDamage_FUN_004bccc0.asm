; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_CImp_processDamage_FUN_004bccc0(CImp *param_1,SDamageInfo *param_2)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_imp_die_wav_005864bd
;   TerminatedCString s_imp_hurt_wav_005864ca
;   double DOUBLE_005864dd = 2
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_imp.cpp_CImp_processDismemberment_FUN_004bca20
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bccc0
        ;   Label: core_imp.cpp_CImp_processDamage_FUN_004bccc0
    PUSH ESI                            ; 004bccc1
    PUSH EDI                            ; 004bccc2
    PUSH EBP                            ; 004bccc3
    SUB ESP,0x14                        ; 004bccc4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bccc7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004bcccb
    MOV EDX,dword ptr [ESI + 0xbd24]    ; 004bcccf
    PUSH EDX                            ; 004bccd5
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004bccd6
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x28]      ; 004bccdb
    ADD ESP,0x4                         ; 004bccde
    CMP ECX,0x8                         ; 004bcce1
    JNZ 0x004bcd40                      ; 004bcce4
        ;   XREF to: 004bcd40 (CONDITIONAL_JUMP)  ; LAB_004bcd40
    FLD float ptr [EDI + 0x4]           ; 004bcce6
    LEA EAX,[EDI + 0x1c]                ; 004bcce9
    FLD ST0                             ; 004bccec
    FMUL double ptr [0x005864dd]        ; 004bccee | DOUBLE_005864dd
    PUSH EAX                            ; 004bccf4
    LEA EAX,[ESP + 0x4]                 ; 004bccf5
    XOR EBX,EBX                         ; 004bccf9
    PUSH EAX                            ; 004bccfb
    FSTP ST1                            ; 004bccfc
    PUSH ESI                            ; 004bccfe
    FSTP float ptr [EDI + 0x4]          ; 004bccff
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004bcd02
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004bcd07
    PUSH 0xffff                         ; 004bcd0a
        ;   Label: LAB_004bcd0a
    PUSH 0x0                            ; 004bcd0f
    PUSH 0x4000                         ; 004bcd11
    PUSH 0x4000                         ; 004bcd16
    PUSH 0x0                            ; 004bcd1b
    LEA EAX,[ESP + 0x14]                ; 004bcd1d
    PUSH EAX                            ; 004bcd21
    MOV EBP,dword ptr [0x005b80f0]      ; 004bcd22 | g_CFireEffect_PTR_005b80f0
    PUSH EBP                            ; 004bcd28
    INC EBX                             ; 004bcd29
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004bcd2a
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004bcd2f
    CMP EBX,0x5                         ; 004bcd32
    JL 0x004bcd0a                       ; 004bcd35
        ;   XREF to: 004bcd0a (CONDITIONAL_JUMP)  ; LAB_004bcd0a
    LEA EAX,[EAX]                       ; 004bcd37
    LEA EDX,[EDX]                       ; 004bcd3d
    PUSH EDI                            ; 004bcd40
        ;   Label: LAB_004bcd40
    PUSH ESI                            ; 004bcd41
    CALL core_imp.cpp_CImp_processDismemberment_FUN_004bca20 ; 004bcd42
        ;   XREF to: 004bca20 (UNCONDITIONAL_CALL)  ; void core_imp.cpp_CImp_processDismemberment_FUN_004bca20(CImp * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [EDI + 0x4]           ; 004bcd47
    ADD ESP,0x8                         ; 004bcd4a
    FSUBR float ptr [ESI + 0x2434]      ; 004bcd4d
    LEA EBX,[ESI + 0x150]               ; 004bcd53
    FST float ptr [ESI + 0x2434]        ; 004bcd59
    FLDZ                                ; 004bcd5f
    FCOMPP                              ; 004bcd61
    FNSTSW AX                           ; 004bcd63
    SAHF                                ; 004bcd65
    JC 0x004bcdce                       ; 004bcd66
        ;   XREF to: 004bcdce (CONDITIONAL_JUMP)  ; LAB_004bcdce
    PUSH EBX                            ; 004bcd68
    MOV dword ptr [ESI + 0x2434],0x0    ; 004bcd69
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004bcd73
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004bcd78
    ADD ESP,0x4                         ; 004bcd7b
    CMP EAX,0x6                         ; 004bcd7e
    JZ 0x004bcdbc                       ; 004bcd81
        ;   XREF to: 004bcdbc (CONDITIONAL_JUMP)  ; LAB_004bcdbc
    CMP EAX,0x7                         ; 004bcd83
    JZ 0x004bcdbc                       ; 004bcd86
        ;   XREF to: 004bcdbc (CONDITIONAL_JUMP)  ; LAB_004bcdbc
    PUSH 0x1                            ; 004bcd88
    PUSH 0x6                            ; 004bcd8a
    PUSH EBX                            ; 004bcd8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bcd8d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004bcd92
    MOV EDX,dword ptr [ESI + 0xbd28]    ; 004bcd95
    PUSH EDX                            ; 004bcd9b
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004bcd9c
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004bcda1
    PUSH 0x5864bd                       ; 004bcda4 | = "imp-die?.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004bcda9
        ;   Label: LAB_004bcda9
    PUSH ESI                            ; 004bcdaf
    CALL dword ptr [EAX + 0x24]         ; 004bcdb0
    ADD ESP,0x8                         ; 004bcdb3
    MOV dword ptr [ESI + 0xbd28],EAX    ; 004bcdb6
    PUSH EDI                            ; 004bcdbc
        ;   Label: LAB_004bcdbc
    PUSH ESI                            ; 004bcdbd
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 004bcdbe
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004bcdc3
    ADD ESP,0x14                        ; 004bcdc6
    POP EBP                             ; 004bcdc9
    POP EDI                             ; 004bcdca
    POP ESI                             ; 004bcdcb
    POP EBX                             ; 004bcdcc
    RET                                 ; 004bcdcd
    PUSH 0x1                            ; 004bcdce
        ;   Label: LAB_004bcdce
    PUSH 0x5                            ; 004bcdd0
    PUSH EBX                            ; 004bcdd2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004bcdd3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004bcdd8
    MOV EAX,dword ptr [ESI + 0xbd28]    ; 004bcddb
    PUSH EAX                            ; 004bcde1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004bcde2
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004bcde7
    TEST EAX,EAX                        ; 004bcdea
    JNZ 0x004bcdbc                      ; 004bcdec
        ;   XREF to: 004bcdbc (CONDITIONAL_JUMP)  ; LAB_004bcdbc
    PUSH 0x5864ca                       ; 004bcdee | = "imp-hurt?.wav"
    JMP 0x004bcda9                      ; 004bcdf3
        ;   XREF to: 004bcda9 (UNCONDITIONAL_JUMP)  ; LAB_004bcda9

