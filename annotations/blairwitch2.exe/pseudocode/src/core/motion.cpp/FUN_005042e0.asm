; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_005042e0(CMotionController *this_ptr,CDemonActor *actor)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0xc0]:1  local_c0
; undefined1       Stack[-0xbf]:1  local_bf
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[10]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 00410812
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413c70 at 00413d55
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415120 at 0041520e
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 at 00425598
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00464ac0 at 00464ba5
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f1b02
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_005020c0 at 005021b4
;   core_shadow.cpp_CShadow_renderTransparent_FUN_0053e6c0 at 0053e7d4
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056ff26
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_00582ec0 at 00582f97
;
; Referenced Globals:
;   TerminatedCString s_s_s_005dfe47
;   TerminatedCString s_s_5_2f_005dfe50
;   undefined4 DAT_005fa5c0
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d1cdc8
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_motion.cpp_FUN_005035c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005042e0
        ;   Label: core_motion.cpp_FUN_005042e0
    PUSH ESI                            ; 005042e1
    PUSH EDI                            ; 005042e2
    PUSH EBP                            ; 005042e3
    MOV EBP,ESP                         ; 005042e4
    SUB ESP,0xb0                        ; 005042e6
    SUB EBP,0x7a                        ; 005042ec
    CMP dword ptr [0x01d1cdc8],0x0      ; 005042ef | DAT_01d1cdc8
    JNZ 0x00504300                      ; 005042f6
        ;   XREF to: 00504300 (CONDITIONAL_JUMP)  ; LAB_00504300
    LEA ESP,[EBP + 0x7a]                ; 005042f8
        ;   Label: LAB_005042f8
    POP EBP                             ; 005042fb
    POP EDI                             ; 005042fc
    POP ESI                             ; 005042fd
    POP EBX                             ; 005042fe
    RET                                 ; 005042ff
    MOV ECX,dword ptr [0x0060b280]      ; 00504300 | DAT_0060b280
        ;   Label: LAB_00504300
    PUSH ECX                            ; 00504306 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00504307
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050430c
    TEST EAX,EAX                        ; 0050430f
    JNZ 0x005042f8                      ; 00504311
        ;   XREF to: 005042f8 (CONDITIONAL_JUMP)  ; LAB_005042f8
    MOV ESI,dword ptr [EBP + 0x92]      ; 00504313
    MOV dword ptr [EBP + 0x6a],EAX      ; 00504319
    MOV EAX,dword ptr [EBP + 0x92]      ; 0050431c
    PUSH ESI                            ; 00504322
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00504323
    LEA ESI,[EBP + 0x2e]                ; 00504329
    LEA EDI,[EBP + 0x46]                ; 0050432c
    CALL dword ptr [EAX + 0x24]         ; 0050432f
    MOV ECX,0x6                         ; 00504332
    LEA ESI,[EBP + 0x2e]                ; 00504337
    LEA EBX,[EBP + 0x5e]                ; 0050433a
    MOV EDX,dword ptr [0x0060b280]      ; 0050433d | DAT_0060b280
    MOVSD.REP ES:EDI,ESI                ; 00504343
    ADD ESP,0x4                         ; 00504345
    MOV EAX,dword ptr [EBP + 0x56]      ; 00504348
    XOR EDI,EDI                         ; 0050434b
    MOV dword ptr [EBP + 0x6e],EAX      ; 0050434d
    LEA EAX,[EBP + 0x6a]                ; 00504350
    MOV dword ptr [EBP + 0x72],EDI      ; 00504353
    FLD float ptr [EAX]                 ; 00504356
    FMUL float ptr [0x005fa5c0]         ; 00504358 | DAT_005fa5c0
    FISTP dword ptr [EBX]               ; 0050435e
    FLD float ptr [EAX + 0x4]           ; 00504360
    FMUL float ptr [0x005fa5c0]         ; 00504363 | DAT_005fa5c0
    FISTP dword ptr [EBX + 0x4]         ; 00504369
    FLD float ptr [EAX + 0x8]           ; 0050436c
    FMUL float ptr [0x005fa5c0]         ; 0050436f | DAT_005fa5c0
    FISTP dword ptr [EBX + 0x8]         ; 00504375
    LEA EAX,[EBP + 0x5e]                ; 00504378
    PUSH EAX                            ; 0050437b
    MOV EAX,dword ptr [EDX]             ; 0050437c | DAT_01ba5c50
    ADD EAX,0xea5d0                     ; 0050437e
    PUSH EAX                            ; 00504383
    CALL engine_special.cpp_FUN_0055d723 ; 00504384
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 00504389 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 0050438e | DAT_01ba5c50
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 00504390
    ADD ESP,0x8                         ; 00504396
    TEST DL,0x80                        ; 00504399
    JNZ 0x005042f8                      ; 0050439c
        ;   XREF to: 005042f8 (CONDITIONAL_JUMP)  ; LAB_005042f8
    MOV EBX,dword ptr [EAX + 0xea5e4]   ; 005043a2
    SAR EBX,0x10                        ; 005043a8
    MOV EDX,dword ptr [EAX + 0xea5e0]   ; 005043ab
    SUB EBX,0x21                        ; 005043b1
    SAR EDX,0x10                        ; 005043b4
    PUSH EBX                            ; 005043b7
    SUB EDX,0x23                        ; 005043b8
    PUSH EDX                            ; 005043bb
    MOV dword ptr [EBP + 0x76],EDX      ; 005043bc
    MOV EDX,dword ptr [EBP + 0x92]      ; 005043bf
    PUSH EDX                            ; 005043c5
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005043c6
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005043cb
    MOV ECX,dword ptr [EAX + 0x28]      ; 005043d1
    ADD ESP,0xc                         ; 005043d4
    TEST ECX,ECX                        ; 005043d7
    JL 0x0050448d                       ; 005043d9
        ;   XREF to: 0050448d (CONDITIONAL_JUMP)  ; LAB_0050448d
    PUSH EAX                            ; 005043df
    MOV ESI,EAX                         ; 005043e0
    CALL core_motion.cpp_FUN_005035c0   ; 005043e2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EDX,ESI                         ; 005043e7
    MOV EAX,dword ptr [EAX + 0x24]      ; 005043e9
    MOV EDI,dword ptr [EDX + 0x28]      ; 005043ec
    ADD ESP,0x4                         ; 005043ef
    CMP EAX,EDI                         ; 005043f2
    JZ 0x0050448d                       ; 005043f4
        ;   XREF to: 0050448d (CONDITIONAL_JUMP)  ; LAB_0050448d
    MOV EAX,dword ptr [ESI + 0x28]      ; 005043fa
    ADD EAX,EAX                         ; 005043fd
    MOV ESI,EAX                         ; 005043ff
    SHL ESI,0x4                         ; 00504401
    PUSH EDX                            ; 00504404
    SUB ESI,EAX                         ; 00504405
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00504407
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD EAX,0x4                         ; 0050440c
    ADD ESP,0x4                         ; 0050440f
    ADD EAX,ESI                         ; 00504412
    PUSH EAX                            ; 00504414
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00504415
    PUSH ECX                            ; 0050441b
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870 ; 0050441c
        ;   XREF to: 00503870 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00504421
    PUSH EAX                            ; 00504424
    PUSH 0x5dfe47                       ; 00504425 | = "%s -> %s"
    LEA EAX,[EBP + -0x36]               ; 0050442a
    PUSH EAX                            ; 0050442d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050442e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00504433
    LEA EAX,[EBX + 0xb]                 ; 00504436
        ;   Label: LAB_00504436
    PUSH EAX                            ; 00504439
    MOV ESI,dword ptr [EBP + 0x76]      ; 0050443a
    PUSH ESI                            ; 0050443d
    LEA EAX,[EBP + -0x36]               ; 0050443e
    PUSH EAX                            ; 00504441
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00504442
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00504447
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0050444a
    SUB ESP,0x8                         ; 00504450
    FLD float ptr [EAX + 0x8]           ; 00504453
    FSTP double ptr [ESP]               ; 00504456
    PUSH EAX                            ; 00504459
    CALL core_motion.cpp_FUN_005035c0   ; 0050445a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0050445f
    PUSH EAX                            ; 00504462
    PUSH 0x5dfe50                       ; 00504463 | = "%s : %5.2f"
    LEA EAX,[EBP + -0x36]               ; 00504468
    PUSH EAX                            ; 0050446b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0050446c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 00504471
    ADD EBX,0x16                        ; 00504474
    PUSH EBX                            ; 00504477
    PUSH ESI                            ; 00504478
    LEA EAX,[EBP + -0x36]               ; 00504479
    PUSH EAX                            ; 0050447c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0050447d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00504482
    LEA ESP,[EBP + 0x7a]                ; 00504485
    POP EBP                             ; 00504488
    POP EDI                             ; 00504489
    POP ESI                             ; 0050448a
    POP EBX                             ; 0050448b
    RET                                 ; 0050448c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0050448d
        ;   Label: LAB_0050448d
    PUSH EAX                            ; 00504493
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870 ; 00504494
        ;   XREF to: 00503870 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00503870(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00504499
    LEA EDI,[EBP + -0x36]               ; 0050449c
    MOV ESI,EAX                         ; 0050449f
    PUSH EDI                            ; 005044a1
    MOV AL,byte ptr [ESI]               ; 005044a2
        ;   Label: LAB_005044a2
    MOV byte ptr [EDI],AL               ; 005044a4
    CMP AL,0x0                          ; 005044a6
    JZ 0x005044ba                       ; 005044a8
        ;   XREF to: 005044ba (CONDITIONAL_JUMP)  ; LAB_005044ba
    MOV AL,byte ptr [ESI + 0x1]         ; 005044aa
    ADD ESI,0x2                         ; 005044ad
    MOV byte ptr [EDI + 0x1],AL         ; 005044b0
    ADD EDI,0x2                         ; 005044b3
    CMP AL,0x0                          ; 005044b6
    JNZ 0x005044a2                      ; 005044b8
        ;   XREF to: 005044a2 (CONDITIONAL_JUMP)  ; LAB_005044a2
    POP EDI                             ; 005044ba
        ;   Label: LAB_005044ba
    JMP 0x00504436                      ; 005044bb
        ;   XREF to: 00504436 (UNCONDITIONAL_JUMP)  ; LAB_00504436

