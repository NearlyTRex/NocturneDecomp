; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_imp_cpp_CImp_processDamage_FUN_004fae00(CImp *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_imp_die_wav_0062fa6e
;   TerminatedCString s_imp_hurt_wav_0062fa7b
;   double DOUBLE_0062fa8e = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_imp.cpp_CImp_FUN_004fab60
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fae00
        ;   Label: core_imp.cpp_CImp_processDamage_FUN_004fae00
    PUSH ESI                            ; 004fae01
    PUSH EDI                            ; 004fae02
    PUSH EBP                            ; 004fae03
    SUB ESP,0x14                        ; 004fae04
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fae07
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fae0b
    MOV EDX,dword ptr [ESI + 0xbebc]    ; 004fae0f
    PUSH EDX                            ; 004fae15
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004fae16
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x28]      ; 004fae1b
    ADD ESP,0x4                         ; 004fae1e
    CMP ECX,0x8                         ; 004fae21
    JNZ 0x004fae80                      ; 004fae24
        ;   XREF to: 004fae80 (CONDITIONAL_JUMP)  ; LAB_004fae80
    FLD float ptr [EDI + 0x4]           ; 004fae26
    LEA EAX,[EDI + 0x1c]                ; 004fae29
    FLD ST0                             ; 004fae2c
    FMUL double ptr [0x0062fa8e]        ; 004fae2e | DOUBLE_0062fa8e
    PUSH EAX                            ; 004fae34
    LEA EAX,[ESP + 0x4]                 ; 004fae35
    XOR EBX,EBX                         ; 004fae39
    PUSH EAX                            ; 004fae3b
    FSTP ST1                            ; 004fae3c
    PUSH ESI                            ; 004fae3e
    FSTP float ptr [EDI + 0x4]          ; 004fae3f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004fae42
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004fae47
    PUSH 0xffff                         ; 004fae4a
        ;   Label: LAB_004fae4a
    PUSH 0x0                            ; 004fae4f
    PUSH 0x4000                         ; 004fae51
    PUSH 0x4000                         ; 004fae56
    PUSH 0x0                            ; 004fae5b
    LEA EAX,[ESP + 0x14]                ; 004fae5d
    PUSH EAX                            ; 004fae61
    MOV EBP,dword ptr [0x0067a3d0]      ; 004fae62 | g_CFireEffectPtr
    PUSH EBP                            ; 004fae68 | g_CFireEffectInstance
    INC EBX                             ; 004fae69
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004fae6a
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004fae6f
    CMP EBX,0x5                         ; 004fae72
    JL 0x004fae4a                       ; 004fae75
        ;   XREF to: 004fae4a (CONDITIONAL_JUMP)  ; LAB_004fae4a
    LEA EAX,[EAX]                       ; 004fae77
    LEA EDX,[EDX]                       ; 004fae7d
    PUSH EDI                            ; 004fae80
        ;   Label: LAB_004fae80
    PUSH ESI                            ; 004fae81
    CALL core_imp.cpp_CImp_FUN_004fab60 ; 004fae82
        ;   XREF to: 004fab60 (UNCONDITIONAL_CALL)  ; void core_imp.cpp_CImp_FUN_004fab60(CImp * this_ptr)
    FLD float ptr [EDI + 0x4]           ; 004fae87
    ADD ESP,0x8                         ; 004fae8a
    FSUBR float ptr [ESI + 0x243c]      ; 004fae8d
    LEA EBX,[ESI + 0x158]               ; 004fae93
    FST float ptr [ESI + 0x243c]        ; 004fae99
    FLDZ                                ; 004fae9f
    FCOMPP                              ; 004faea1
    FNSTSW AX                           ; 004faea3
    SAHF                                ; 004faea5
    JC 0x004faf0e                       ; 004faea6
        ;   XREF to: 004faf0e (CONDITIONAL_JUMP)  ; LAB_004faf0e
    PUSH EBX                            ; 004faea8
    MOV dword ptr [ESI + 0x243c],0x0    ; 004faea9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004faeb3
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004faeb8
    ADD ESP,0x4                         ; 004faebb
    CMP EAX,0x6                         ; 004faebe
    JZ 0x004faefc                       ; 004faec1
        ;   XREF to: 004faefc (CONDITIONAL_JUMP)  ; LAB_004faefc
    CMP EAX,0x7                         ; 004faec3
    JZ 0x004faefc                       ; 004faec6
        ;   XREF to: 004faefc (CONDITIONAL_JUMP)  ; LAB_004faefc
    PUSH 0x1                            ; 004faec8
    PUSH 0x6                            ; 004faeca
    PUSH EBX                            ; 004faecc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004faecd
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004faed2
    MOV EDX,dword ptr [ESI + 0xbec0]    ; 004faed5
    PUSH EDX                            ; 004faedb
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004faedc
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004faee1
    PUSH 0x62fa6e                       ; 004faee4 | = "imp-die?.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 004faee9
        ;   Label: LAB_004faee9
    PUSH ESI                            ; 004faeef
    CALL dword ptr [EAX + 0x24]         ; 004faef0
    ADD ESP,0x8                         ; 004faef3
    MOV dword ptr [ESI + 0xbec0],EAX    ; 004faef6
    PUSH EDI                            ; 004faefc
        ;   Label: LAB_004faefc
    PUSH ESI                            ; 004faefd
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004faefe
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004faf03
    ADD ESP,0x14                        ; 004faf06
    POP EBP                             ; 004faf09
    POP EDI                             ; 004faf0a
    POP ESI                             ; 004faf0b
    POP EBX                             ; 004faf0c
    RET                                 ; 004faf0d
    PUSH 0x1                            ; 004faf0e
        ;   Label: LAB_004faf0e
    PUSH 0x5                            ; 004faf10
    PUSH EBX                            ; 004faf12
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004faf13
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004faf18
    MOV EAX,dword ptr [ESI + 0xbec0]    ; 004faf1b
    PUSH EAX                            ; 004faf21
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004faf22
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004faf27
    TEST EAX,EAX                        ; 004faf2a
    JNZ 0x004faefc                      ; 004faf2c
        ;   XREF to: 004faefc (CONDITIONAL_JUMP)  ; LAB_004faefc
    PUSH 0x62fa7b                       ; 004faf2e | = "imp-hurt?.wav"
    JMP 0x004faee9                      ; 004faf33
        ;   XREF to: 004faee9 (UNCONDITIONAL_JUMP)  ; LAB_004faee9

