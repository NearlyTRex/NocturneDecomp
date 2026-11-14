; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_FUN_005254b0(CMotionController *this_ptr,CDemonActor *actor)
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
; XREF[11]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 00410392
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 00413a55
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00 at 00414eee
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 at 0042f2e5
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0047cfe0 at 0047d0c5
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 00510892
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00521070 at 00521164
;   core_shadow.cpp_CShadow_renderTransparent_FUN_0055fc60 at 0055fd74
;   core_shadowsc.cpp_CShadowsc_renderTransparent_FUN_005611a0 at 005612a2
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00592aa0 at 00592b76
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_s_s_005eb0a2
;   TerminatedCString s_s_5_2f_005eb0ab
;   undefined4 DAT_006042c0
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005254b0
        ;   Label: core_motion.cpp_FUN_005254b0
    PUSH ESI                            ; 005254b1
    PUSH EDI                            ; 005254b2
    PUSH EBP                            ; 005254b3
    MOV EBP,ESP                         ; 005254b4
    SUB ESP,0xb0                        ; 005254b6
    SUB EBP,0x7a                        ; 005254bc
    CMP dword ptr [0x01d39d34],0x0      ; 005254bf | DAT_01d39d34
    JNZ 0x005254d0                      ; 005254c6
        ;   XREF to: 005254d0 (CONDITIONAL_JUMP)  ; LAB_005254d0
    LEA ESP,[EBP + 0x7a]                ; 005254c8
        ;   Label: LAB_005254c8
    POP EBP                             ; 005254cb
    POP EDI                             ; 005254cc
    POP ESI                             ; 005254cd
    POP EBX                             ; 005254ce
    RET                                 ; 005254cf
    MOV ECX,dword ptr [0x00612560]      ; 005254d0 | DAT_00612560
        ;   Label: LAB_005254d0
    PUSH ECX                            ; 005254d6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005254d7
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005254dc
    TEST EAX,EAX                        ; 005254df
    JNZ 0x005254c8                      ; 005254e1
        ;   XREF to: 005254c8 (CONDITIONAL_JUMP)  ; LAB_005254c8
    MOV ESI,dword ptr [EBP + 0x92]      ; 005254e3
    MOV dword ptr [EBP + 0x6a],EAX      ; 005254e9
    MOV EAX,dword ptr [EBP + 0x92]      ; 005254ec
    PUSH ESI                            ; 005254f2
    MOV EAX,dword ptr [EAX + 0x154]     ; 005254f3
    LEA ESI,[EBP + 0x2e]                ; 005254f9
    LEA EDI,[EBP + 0x46]                ; 005254fc
    CALL dword ptr [EAX + 0x1c]         ; 005254ff
    MOV ECX,0x6                         ; 00525502
    LEA ESI,[EBP + 0x2e]                ; 00525507
    LEA EBX,[EBP + 0x5e]                ; 0052550a
    MOV EDX,dword ptr [0x00612560]      ; 0052550d | DAT_00612560
    MOVSD.REP ES:EDI,ESI                ; 00525513
    ADD ESP,0x4                         ; 00525515
    MOV EAX,dword ptr [EBP + 0x56]      ; 00525518
    XOR EDI,EDI                         ; 0052551b
    MOV dword ptr [EBP + 0x6e],EAX      ; 0052551d
    LEA EAX,[EBP + 0x6a]                ; 00525520
    MOV dword ptr [EBP + 0x72],EDI      ; 00525523
    FLD float ptr [EAX]                 ; 00525526
    FMUL float ptr [0x006042c0]         ; 00525528 | DAT_006042c0
    FISTP dword ptr [EBX]               ; 0052552e
    FLD float ptr [EAX + 0x4]           ; 00525530
    FMUL float ptr [0x006042c0]         ; 00525533 | DAT_006042c0
    FISTP dword ptr [EBX + 0x4]         ; 00525539
    FLD float ptr [EAX + 0x8]           ; 0052553c
    FMUL float ptr [0x006042c0]         ; 0052553f | DAT_006042c0
    FISTP dword ptr [EBX + 0x8]         ; 00525545
    LEA EAX,[EBP + 0x5e]                ; 00525548
    PUSH EAX                            ; 0052554b
    MOV EAX,dword ptr [EDX]             ; 0052554c | DAT_01bc120c
    ADD EAX,0xea5d0                     ; 0052554e
    PUSH EAX                            ; 00525553
    CALL engine_special.cpp_FUN_00580173 ; 00525554
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00525559 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 0052555e | DAT_01bc120c
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 00525560
    ADD ESP,0x8                         ; 00525566
    TEST DL,0x80                        ; 00525569
    JNZ 0x005254c8                      ; 0052556c
        ;   XREF to: 005254c8 (CONDITIONAL_JUMP)  ; LAB_005254c8
    MOV EBX,dword ptr [EAX + 0xea5e4]   ; 00525572
    SAR EBX,0x10                        ; 00525578
    MOV EDX,dword ptr [EAX + 0xea5e0]   ; 0052557b
    SUB EBX,0x21                        ; 00525581
    SAR EDX,0x10                        ; 00525584
    PUSH EBX                            ; 00525587
    SUB EDX,0x23                        ; 00525588
    PUSH EDX                            ; 0052558b
    MOV dword ptr [EBP + 0x76],EDX      ; 0052558c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0052558f
    PUSH EDX                            ; 00525595
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00525596
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0052559b
    MOV ECX,dword ptr [EAX + 0x28]      ; 005255a1
    ADD ESP,0xc                         ; 005255a4
    TEST ECX,ECX                        ; 005255a7
    JL 0x0052565d                       ; 005255a9
        ;   XREF to: 0052565d (CONDITIONAL_JUMP)  ; LAB_0052565d
    PUSH EAX                            ; 005255af
    MOV ESI,EAX                         ; 005255b0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005255b2
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EDX,ESI                         ; 005255b7
    MOV EAX,dword ptr [EAX + 0x24]      ; 005255b9
    MOV EDI,dword ptr [EDX + 0x28]      ; 005255bc
    ADD ESP,0x4                         ; 005255bf
    CMP EAX,EDI                         ; 005255c2
    JZ 0x0052565d                       ; 005255c4
        ;   XREF to: 0052565d (CONDITIONAL_JUMP)  ; LAB_0052565d
    MOV EAX,dword ptr [ESI + 0x28]      ; 005255ca
    ADD EAX,EAX                         ; 005255cd
    MOV ESI,EAX                         ; 005255cf
    SHL ESI,0x4                         ; 005255d1
    PUSH EDX                            ; 005255d4
    SUB ESI,EAX                         ; 005255d5
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 005255d7
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD EAX,0x4                         ; 005255dc
    ADD ESP,0x4                         ; 005255df
    ADD EAX,ESI                         ; 005255e2
    PUSH EAX                            ; 005255e4
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005255e5
    PUSH ECX                            ; 005255eb
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10 ; 005255ec
        ;   XREF to: 00524a10 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005255f1
    PUSH EAX                            ; 005255f4
    PUSH 0x5eb0a2                       ; 005255f5 | = "%s -> %s"
    LEA EAX,[EBP + -0x36]               ; 005255fa
    PUSH EAX                            ; 005255fd
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005255fe
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00525603
    LEA EAX,[EBX + 0xb]                 ; 00525606
        ;   Label: LAB_00525606
    PUSH EAX                            ; 00525609
    MOV ESI,dword ptr [EBP + 0x76]      ; 0052560a
    PUSH ESI                            ; 0052560d
    LEA EAX,[EBP + -0x36]               ; 0052560e
    PUSH EAX                            ; 00525611
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00525612
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00525617
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0052561a
    SUB ESP,0x8                         ; 00525620
    FLD float ptr [EAX + 0x8]           ; 00525623
    FSTP double ptr [ESP]               ; 00525626
    PUSH EAX                            ; 00525629
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0052562a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052562f
    PUSH EAX                            ; 00525632
    PUSH 0x5eb0ab                       ; 00525633 | = "%s : %5.2f"
    LEA EAX,[EBP + -0x36]               ; 00525638
    PUSH EAX                            ; 0052563b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0052563c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x14                        ; 00525641
    ADD EBX,0x16                        ; 00525644
    PUSH EBX                            ; 00525647
    PUSH ESI                            ; 00525648
    LEA EAX,[EBP + -0x36]               ; 00525649
    PUSH EAX                            ; 0052564c
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0052564d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00525652
    LEA ESP,[EBP + 0x7a]                ; 00525655
    POP EBP                             ; 00525658
    POP EDI                             ; 00525659
    POP ESI                             ; 0052565a
    POP EBX                             ; 0052565b
    RET                                 ; 0052565c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0052565d
        ;   Label: LAB_0052565d
    PUSH EAX                            ; 00525663
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10 ; 00525664
        ;   XREF to: 00524a10 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_00524a10(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00525669
    LEA EDI,[EBP + -0x36]               ; 0052566c
    MOV ESI,EAX                         ; 0052566f
    PUSH EDI                            ; 00525671
    MOV AL,byte ptr [ESI]               ; 00525672
        ;   Label: LAB_00525672
    MOV byte ptr [EDI],AL               ; 00525674
    CMP AL,0x0                          ; 00525676
    JZ 0x0052568a                       ; 00525678
        ;   XREF to: 0052568a (CONDITIONAL_JUMP)  ; LAB_0052568a
    MOV AL,byte ptr [ESI + 0x1]         ; 0052567a
    ADD ESI,0x2                         ; 0052567d
    MOV byte ptr [EDI + 0x1],AL         ; 00525680
    ADD EDI,0x2                         ; 00525683
    CMP AL,0x0                          ; 00525686
    JNZ 0x00525672                      ; 00525688
        ;   XREF to: 00525672 (CONDITIONAL_JUMP)  ; LAB_00525672
    POP EDI                             ; 0052568a
        ;   Label: LAB_0052568a
    JMP 0x00525606                      ; 0052568b
        ;   XREF to: 00525606 (UNCONDITIONAL_JUMP)  ; LAB_00525606

