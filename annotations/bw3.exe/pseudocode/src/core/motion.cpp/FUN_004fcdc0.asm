; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_004fcdc0(CMotionController *this_ptr,CDemonActor *actor)
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
; XREF[9]:
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a1931
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597ad9
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 at 0042e2c5
;   core_hecaitmx.cpp_CHecaitomix_renderTransparent_FUN_00598480 at 00598552
;   core_hino.cpp_CHino_renderTransparent_FUN_0059d120 at 0059d2e7
;   core_kedward.cpp_CKedward_renderTransparent_FUN_00591680 at 00591806
;   core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710 at 005938b8
;   core_npc.cpp_CNPC_renderTransparent_FUN_005095f0 at 00509772
;   core_shadow.cpp_FUN_00545710 at 005458ae
;
; Referenced Globals:
;   TerminatedCString s_s_s_005c9eb3
;   TerminatedCString s_s_5_2f_005c9ebc
;   undefined4 DAT_005e2c60
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcdc0
        ;   Label: core_motion.cpp_FUN_004fcdc0
    PUSH ESI                            ; 004fcdc1
    PUSH EDI                            ; 004fcdc2
    PUSH EBP                            ; 004fcdc3
    MOV EBP,ESP                         ; 004fcdc4
    SUB ESP,0xb0                        ; 004fcdc6
    SUB EBP,0x7a                        ; 004fcdcc
    CMP dword ptr [0x01d8e40c],0x0      ; 004fcdcf | DAT_01d8e40c
    JNZ 0x004fcde0                      ; 004fcdd6
        ;   XREF to: 004fcde0 (CONDITIONAL_JUMP)  ; LAB_004fcde0
    LEA ESP,[EBP + 0x7a]                ; 004fcdd8
        ;   Label: LAB_004fcdd8
    POP EBP                             ; 004fcddb
    POP EDI                             ; 004fcddc
    POP ESI                             ; 004fcddd
    POP EBX                             ; 004fcdde
    RET                                 ; 004fcddf
    MOV ECX,dword ptr [0x005f2afc]      ; 004fcde0 | DAT_005f2afc
        ;   Label: LAB_004fcde0
    PUSH ECX                            ; 004fcde6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004fcde7
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004fcdec
    TEST EAX,EAX                        ; 004fcdef
    JNZ 0x004fcdd8                      ; 004fcdf1
        ;   XREF to: 004fcdd8 (CONDITIONAL_JUMP)  ; LAB_004fcdd8
    MOV ESI,dword ptr [EBP + 0x92]      ; 004fcdf3
    MOV dword ptr [EBP + 0x6a],EAX      ; 004fcdf9
    MOV EAX,dword ptr [EBP + 0x92]      ; 004fcdfc
    PUSH ESI                            ; 004fce02
    MOV EAX,dword ptr [EAX + 0x154]     ; 004fce03
    LEA ESI,[EBP + 0x2e]                ; 004fce09
    LEA EDI,[EBP + 0x46]                ; 004fce0c
    CALL dword ptr [EAX + 0x1c]         ; 004fce0f
    MOV ECX,0x6                         ; 004fce12
    LEA ESI,[EBP + 0x2e]                ; 004fce17
    LEA EBX,[EBP + 0x5e]                ; 004fce1a
    MOV EDX,dword ptr [0x005f2afc]      ; 004fce1d | DAT_005f2afc
    MOVSD.REP ES:EDI,ESI                ; 004fce23
    ADD ESP,0x4                         ; 004fce25
    MOV EAX,dword ptr [EBP + 0x56]      ; 004fce28
    XOR EDI,EDI                         ; 004fce2b
    MOV dword ptr [EBP + 0x6e],EAX      ; 004fce2d
    LEA EAX,[EBP + 0x6a]                ; 004fce30
    MOV dword ptr [EBP + 0x72],EDI      ; 004fce33
    FLD float ptr [EAX]                 ; 004fce36
    FMUL float ptr [0x005e2c60]         ; 004fce38 | DAT_005e2c60
    FISTP dword ptr [EBX]               ; 004fce3e
    FLD float ptr [EAX + 0x4]           ; 004fce40
    FMUL float ptr [0x005e2c60]         ; 004fce43 | DAT_005e2c60
    FISTP dword ptr [EBX + 0x4]         ; 004fce49
    FLD float ptr [EAX + 0x8]           ; 004fce4c
    FMUL float ptr [0x005e2c60]         ; 004fce4f | DAT_005e2c60
    FISTP dword ptr [EBX + 0x8]         ; 004fce55
    LEA EAX,[EBP + 0x5e]                ; 004fce58
    PUSH EAX                            ; 004fce5b
    MOV EAX,dword ptr [EDX]             ; 004fce5c | DAT_01bdd7e4
    ADD EAX,0x124f50                    ; 004fce5e
    PUSH EAX                            ; 004fce63
    CALL engine_special.cpp_FUN_005632a3 ; 004fce64
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 004fce69 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 004fce6e | DAT_01bdd7e4
    MOV DL,byte ptr [EAX + 0x124f63]    ; 004fce70
    ADD ESP,0x8                         ; 004fce76
    TEST DL,0x80                        ; 004fce79
    JNZ 0x004fcdd8                      ; 004fce7c
        ;   XREF to: 004fcdd8 (CONDITIONAL_JUMP)  ; LAB_004fcdd8
    MOV EBX,dword ptr [EAX + 0x124f64]  ; 004fce82
    SAR EBX,0x10                        ; 004fce88
    MOV EDX,dword ptr [EAX + 0x124f60]  ; 004fce8b
    SUB EBX,0x21                        ; 004fce91
    SAR EDX,0x10                        ; 004fce94
    PUSH EBX                            ; 004fce97
    SUB EDX,0x23                        ; 004fce98
    PUSH EDX                            ; 004fce9b
    MOV dword ptr [EBP + 0x76],EDX      ; 004fce9c
    MOV EDX,dword ptr [EBP + 0x92]      ; 004fce9f
    PUSH EDX                            ; 004fcea5
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004fcea6
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004fceab
    MOV ECX,dword ptr [EAX + 0x28]      ; 004fceb1
    ADD ESP,0xc                         ; 004fceb4
    TEST ECX,ECX                        ; 004fceb7
    JL 0x004fcf6d                       ; 004fceb9
        ;   XREF to: 004fcf6d (CONDITIONAL_JUMP)  ; LAB_004fcf6d
    PUSH EAX                            ; 004fcebf
    MOV ESI,EAX                         ; 004fcec0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fcec2
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EDX,ESI                         ; 004fcec7
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fcec9
    MOV EDI,dword ptr [EDX + 0x28]      ; 004fcecc
    ADD ESP,0x4                         ; 004fcecf
    CMP EAX,EDI                         ; 004fced2
    JZ 0x004fcf6d                       ; 004fced4
        ;   XREF to: 004fcf6d (CONDITIONAL_JUMP)  ; LAB_004fcf6d
    MOV EAX,dword ptr [ESI + 0x28]      ; 004fceda
    ADD EAX,EAX                         ; 004fcedd
    MOV ESI,EAX                         ; 004fcedf
    SHL ESI,0x4                         ; 004fcee1
    PUSH EDX                            ; 004fcee4
    SUB ESI,EAX                         ; 004fcee5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 004fcee7
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD EAX,0x4                         ; 004fceec
    ADD ESP,0x4                         ; 004fceef
    ADD EAX,ESI                         ; 004fcef2
    PUSH EAX                            ; 004fcef4
    MOV ECX,dword ptr [EBP + 0x8e]      ; 004fcef5
    PUSH ECX                            ; 004fcefb
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320 ; 004fcefc
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fcf01
    PUSH EAX                            ; 004fcf04
    PUSH 0x5c9eb3                       ; 004fcf05 | = "%s -> %s"
    LEA EAX,[EBP + -0x36]               ; 004fcf0a
    PUSH EAX                            ; 004fcf0d
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004fcf0e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004fcf13
    LEA EAX,[EBX + 0xb]                 ; 004fcf16
        ;   Label: LAB_004fcf16
    PUSH EAX                            ; 004fcf19
    MOV ESI,dword ptr [EBP + 0x76]      ; 004fcf1a
    PUSH ESI                            ; 004fcf1d
    LEA EAX,[EBP + -0x36]               ; 004fcf1e
    PUSH EAX                            ; 004fcf21
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004fcf22
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004fcf27
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004fcf2a
    SUB ESP,0x8                         ; 004fcf30
    FLD float ptr [EAX + 0x8]           ; 004fcf33
    FSTP double ptr [ESP]               ; 004fcf36
    PUSH EAX                            ; 004fcf39
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fcf3a
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fcf3f
    PUSH EAX                            ; 004fcf42
    PUSH 0x5c9ebc                       ; 004fcf43 | = "%s : %5.2f"
    LEA EAX,[EBP + -0x36]               ; 004fcf48
    PUSH EAX                            ; 004fcf4b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004fcf4c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x14                        ; 004fcf51
    ADD EBX,0x16                        ; 004fcf54
    PUSH EBX                            ; 004fcf57
    PUSH ESI                            ; 004fcf58
    LEA EAX,[EBP + -0x36]               ; 004fcf59
    PUSH EAX                            ; 004fcf5c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004fcf5d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004fcf62
    LEA ESP,[EBP + 0x7a]                ; 004fcf65
    POP EBP                             ; 004fcf68
    POP EDI                             ; 004fcf69
    POP ESI                             ; 004fcf6a
    POP EBX                             ; 004fcf6b
    RET                                 ; 004fcf6c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004fcf6d
        ;   Label: LAB_004fcf6d
    PUSH EAX                            ; 004fcf73
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320 ; 004fcf74
        ;   XREF to: 004fc320 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fcf79
    LEA EDI,[EBP + -0x36]               ; 004fcf7c
    MOV ESI,EAX                         ; 004fcf7f
    PUSH EDI                            ; 004fcf81
    MOV AL,byte ptr [ESI]               ; 004fcf82
        ;   Label: LAB_004fcf82
    MOV byte ptr [EDI],AL               ; 004fcf84
    CMP AL,0x0                          ; 004fcf86
    JZ 0x004fcf9a                       ; 004fcf88
        ;   XREF to: 004fcf9a (CONDITIONAL_JUMP)  ; LAB_004fcf9a
    MOV AL,byte ptr [ESI + 0x1]         ; 004fcf8a
    ADD ESI,0x2                         ; 004fcf8d
    MOV byte ptr [EDI + 0x1],AL         ; 004fcf90
    ADD EDI,0x2                         ; 004fcf93
    CMP AL,0x0                          ; 004fcf96
    JNZ 0x004fcf82                      ; 004fcf98
        ;   XREF to: 004fcf82 (CONDITIONAL_JUMP)  ; LAB_004fcf82
    POP EDI                             ; 004fcf9a
        ;   Label: LAB_004fcf9a
    JMP 0x004fcf16                      ; 004fcf9b
        ;   XREF to: 004fcf16 (UNCONDITIONAL_JUMP)  ; LAB_004fcf16

