; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004c61b0(CGargoyle *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_gargoyle_shatter_wav_005c3fff+1
;   TerminatedCString s_gargoyle_hurt_wav_005c4015
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_FUN_004300e0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c5f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c61b0
        ;   Label: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004c61b0
    PUSH ESI                            ; 004c61b1
    PUSH EDI                            ; 004c61b2
    PUSH EBP                            ; 004c61b3
    SUB ESP,0x18                        ; 004c61b4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004c61b7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c61bb
    ADD EAX,0x1c                        ; 004c61bf
    PUSH EAX                            ; 004c61c2
    PUSH EBP                            ; 004c61c3
    LEA ESI,[ESP + 0x14]                ; 004c61c4
    LEA EDI,[ESP + 0x8]                 ; 004c61c8
    CALL core_actor.cpp_FUN_00408b80    ; 004c61cc
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 004c61d1
    ADD ESP,0x8                         ; 004c61d5
    XOR EBX,EBX                         ; 004c61d8
    MOVSD ES:EDI,ESI                    ; 004c61da
    MOVSD ES:EDI,ESI                    ; 004c61db
    MOVSD ES:EDI,ESI                    ; 004c61dc
    XOR ESI,ESI                         ; 004c61dd
    PUSH 0xffff                         ; 004c61df
        ;   Label: LAB_004c61df
    PUSH ESI                            ; 004c61e4
    PUSH 0x8000                         ; 004c61e5
    PUSH 0x10000                        ; 004c61ea
    PUSH ESI                            ; 004c61ef
    LEA EAX,[ESP + 0x14]                ; 004c61f0
    PUSH EAX                            ; 004c61f4
    MOV EDX,dword ptr [0x005fc5a0]      ; 004c61f5 | DAT_005fc5a0
    PUSH EDX                            ; 004c61fb
    INC EBX                             ; 004c61fc
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004c61fd
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004c6202
    CMP EBX,0x3                         ; 004c6205
    JL 0x004c61df                       ; 004c6208
        ;   XREF to: 004c61df (CONDITIONAL_JUMP)  ; LAB_004c61df
    LEA EBX,[EBP + 0x158]               ; 004c620a
    PUSH EBX                            ; 004c6210
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c6211
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c6216
    ADD ESP,0x4                         ; 004c6219
    CMP EAX,0x5                         ; 004c621c
    JZ 0x004c62c4                       ; 004c621f
        ;   XREF to: 004c62c4 (CONDITIONAL_JUMP)  ; LAB_004c62c4
    MOV ECX,dword ptr [ESP + 0x30]      ; 004c6225
    PUSH ECX                            ; 004c6229
    PUSH EBP                            ; 004c622a
    CALL core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c5f10 ; 004c622b
        ;   XREF to: 004c5f10 (UNCONDITIONAL_CALL)  ; void core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004c5f10(CGargoyle * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c6230
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c6233
    FLD float ptr [EAX + 0x4]           ; 004c6237
    FSUBR float ptr [EBP + 0x2538]      ; 004c623a
    FST float ptr [EBP + 0x2538]        ; 004c6240
    FLDZ                                ; 004c6246
    FCOMPP                              ; 004c6248
    FNSTSW AX                           ; 004c624a
    SAHF                                ; 004c624c
    JC 0x004c62e1                       ; 004c624d
        ;   XREF to: 004c62e1 (CONDITIONAL_JUMP)  ; LAB_004c62e1
    MOV ESI,dword ptr [EBP + 0xd094]    ; 004c6253
    PUSH ESI                            ; 004c6259
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004c625a
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004c625f
    PUSH EBX                            ; 004c6262
    MOV dword ptr [EBP + 0x2538],0x0    ; 004c6263
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004c626d
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c6272
    ADD ESP,0x4                         ; 004c6275
    CMP EAX,0x8                         ; 004c6278
    JZ 0x004c62ae                       ; 004c627b
        ;   XREF to: 004c62ae (CONDITIONAL_JUMP)  ; LAB_004c62ae
    PUSH 0x1                            ; 004c627d
    PUSH 0x8                            ; 004c627f
    PUSH EBX                            ; 004c6281
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004c6282
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004c6287
    PUSH 0x5c4000                       ; 004c628a | s_gargoyle_shatter_wav_005c3fff+1
    MOV EAX,dword ptr [EBP + 0x154]     ; 004c628f
    PUSH EBP                            ; 004c6295
    CALL dword ptr [EAX + 0x2c]         ; 004c6296
    ADD ESP,0x8                         ; 004c6299
    PUSH 0x1                            ; 004c629c
    PUSH 0xbf800000                     ; 004c629e
    PUSH 0x0                            ; 004c62a3
    PUSH EBP                            ; 004c62a5
    CALL core_charactr.cpp_FUN_004300e0 ; 004c62a6
        ;   XREF to: 004300e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004300e0()
    ADD ESP,0x10                        ; 004c62ab
    MOV EDI,dword ptr [ESP + 0x30]      ; 004c62ae
        ;   Label: LAB_004c62ae
    PUSH EDI                            ; 004c62b2
    PUSH EBP                            ; 004c62b3
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004c62b4
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c62b9
    ADD ESP,0x18                        ; 004c62bc
    POP EBP                             ; 004c62bf
    POP EDI                             ; 004c62c0
    POP ESI                             ; 004c62c1
    POP EBX                             ; 004c62c2
    RET                                 ; 004c62c3
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c62c4
        ;   Label: LAB_004c62c4
    PUSH EAX                            ; 004c62c8
    PUSH EBP                            ; 004c62c9
    MOV dword ptr [EAX + 0x4],0x0       ; 004c62ca
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004c62d1
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004c62d6
    ADD ESP,0x18                        ; 004c62d9
    POP EBP                             ; 004c62dc
    POP EDI                             ; 004c62dd
    POP ESI                             ; 004c62de
    POP EBX                             ; 004c62df
    RET                                 ; 004c62e0
    MOV EBX,dword ptr [EBP + 0xd094]    ; 004c62e1
        ;   Label: LAB_004c62e1
    PUSH EBX                            ; 004c62e7
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c62e8
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c62ed
    TEST EAX,EAX                        ; 004c62f0
    JNZ 0x004c62ae                      ; 004c62f2
        ;   XREF to: 004c62ae (CONDITIONAL_JUMP)  ; LAB_004c62ae
    PUSH 0x5c4015                       ; 004c62f4 | = "gargoyle-hurt?.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 004c62f9
    PUSH EBP                            ; 004c62ff
    CALL dword ptr [EAX + 0x2c]         ; 004c6300
    ADD ESP,0x8                         ; 004c6303
    MOV dword ptr [EBP + 0xd094],EAX    ; 004c6306
    JMP 0x004c62ae                      ; 004c630c
        ;   XREF to: 004c62ae (UNCONDITIONAL_JUMP)  ; LAB_004c62ae

