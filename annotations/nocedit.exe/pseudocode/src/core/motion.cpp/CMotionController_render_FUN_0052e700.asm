; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_render_FUN_0052e700(CMotionController *this_ptr,CDemonActor *actor)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; CBoundingBox3D   Stack[-0x44]:24  local_44
; CVector3i        Stack[-0x2c]:12  local_2c
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413c6e
;   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 at 00417482
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_004189b0 at 00418a8a
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 at 0042a351
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 at 00485cb2
;   core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0 at 0052082f
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_00529750 at 00529830
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590 at 005c764a
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_005e6da0 at 005e6e64
;
; Referenced Globals:
;   TerminatedCString s_s_s_0063ac46
;   TerminatedCString s_s_5_2f_0063ac4f
;   float FLOAT_00661ba0 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int INT_02f43978
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e700
        ;   Label: core_motion.cpp_CMotionController_render_FUN_0052e700
    PUSH ESI                            ; 0052e701
    PUSH EDI                            ; 0052e702
    PUSH EBP                            ; 0052e703
    MOV EBP,ESP                         ; 0052e704
    SUB ESP,0x98                        ; 0052e706
    SUB EBP,0x7a                        ; 0052e70c
    MOV EDI,dword ptr [EBP + 0x92]      ; 0052e70f
    CMP dword ptr [0x02f43978],0x0      ; 0052e715 | INT_02f43978
    JNZ 0x0052e726                      ; 0052e71c
        ;   XREF to: 0052e726 (CONDITIONAL_JUMP)  ; LAB_0052e726
    LEA ESP,[EBP + 0x7a]                ; 0052e71e
        ;   Label: LAB_0052e71e
    POP EBP                             ; 0052e721
    POP EDI                             ; 0052e722
    POP ESI                             ; 0052e723
    POP EBX                             ; 0052e724
    RET                                 ; 0052e725
    MOV ECX,dword ptr [0x006703ec]      ; 0052e726 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_0052e726
    PUSH ECX                            ; 0052e72c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0052e72d
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0052e732
    TEST EAX,EAX                        ; 0052e735
    JNZ 0x0052e71e                      ; 0052e737
        ;   XREF to: 0052e71e (CONDITIONAL_JUMP)  ; LAB_0052e71e
    LEA EDX,[EBP + 0x46]                ; 0052e739
    MOV dword ptr [EBP + 0x6a],EAX      ; 0052e73c
    PUSH EDX                            ; 0052e73f
    MOV EAX,dword ptr [EDI + 0x154]     ; 0052e740
    PUSH EDI                            ; 0052e746
    LEA EBX,[EBP + 0x5e]                ; 0052e747
    XOR ESI,ESI                         ; 0052e74a
    CALL dword ptr [EAX + 0x14]         ; 0052e74c
    MOV EDX,dword ptr [0x006703ec]      ; 0052e74f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX + 0x10]      ; 0052e755
    ADD ESP,0x8                         ; 0052e758
    MOV dword ptr [EBP + 0x6e],EAX      ; 0052e75b
    LEA EAX,[EBP + 0x6a]                ; 0052e75e
    MOV dword ptr [EBP + 0x72],ESI      ; 0052e761
    FLD float ptr [EAX]                 ; 0052e764
    FMUL float ptr [0x00661ba0]         ; 0052e766 | FLOAT_00661ba0
    FISTP dword ptr [EBX]               ; 0052e76c
    FLD float ptr [EAX + 0x4]           ; 0052e76e
    FMUL float ptr [0x00661ba0]         ; 0052e771 | FLOAT_00661ba0
    FISTP dword ptr [EBX + 0x4]         ; 0052e777
    FLD float ptr [EAX + 0x8]           ; 0052e77a
    FMUL float ptr [0x00661ba0]         ; 0052e77d | FLOAT_00661ba0
    FISTP dword ptr [EBX + 0x8]         ; 0052e783
    LEA EAX,[EBP + 0x5e]                ; 0052e786
    PUSH EAX                            ; 0052e789
    MOV EAX,dword ptr [EDX]             ; 0052e78a | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 0052e78c
    PUSH EAX                            ; 0052e791
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0052e792
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0052e797 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0052e79c | g_CDemonRendererInstance
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 0052e79e
    ADD ESP,0x8                         ; 0052e7a4
    TEST DL,0x80                        ; 0052e7a7
    JNZ 0x0052e71e                      ; 0052e7aa
        ;   XREF to: 0052e71e (CONDITIONAL_JUMP)  ; LAB_0052e71e
    MOV EBX,dword ptr [EAX + 0xea5e4]   ; 0052e7b0
    SAR EBX,0x10                        ; 0052e7b6
    MOV EDX,dword ptr [EAX + 0xea5e0]   ; 0052e7b9
    SUB EBX,0x21                        ; 0052e7bf
    SAR EDX,0x10                        ; 0052e7c2
    PUSH EBX                            ; 0052e7c5
    SUB EDX,0x23                        ; 0052e7c6
    PUSH EDX                            ; 0052e7c9
    PUSH EDI                            ; 0052e7ca
    MOV dword ptr [EBP + 0x76],EDX      ; 0052e7cb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0052e7ce
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0052e7d3
    MOV EDX,dword ptr [EAX + 0x28]      ; 0052e7d9
    ADD ESP,0xc                         ; 0052e7dc
    TEST EDX,EDX                        ; 0052e7df
    JL 0x0052e898                       ; 0052e7e1
        ;   XREF to: 0052e898 (CONDITIONAL_JUMP)  ; LAB_0052e898
    PUSH EAX                            ; 0052e7e7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052e7e8
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0052e7ed
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052e7f3
    MOV ESI,dword ptr [EDX + 0x28]      ; 0052e7f6
    ADD ESP,0x4                         ; 0052e7f9
    CMP EAX,ESI                         ; 0052e7fc
    JZ 0x0052e898                       ; 0052e7fe
        ;   XREF to: 0052e898 (CONDITIONAL_JUMP)  ; LAB_0052e898
    LEA EAX,[ESI + ESI*0x1]             ; 0052e804
    MOV EDI,EAX                         ; 0052e807
    SHL EDI,0x4                         ; 0052e809
    PUSH EDX                            ; 0052e80c
    SUB EDI,EAX                         ; 0052e80d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0052e80f
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD EAX,0x4                         ; 0052e814
    ADD ESP,0x4                         ; 0052e817
    ADD EAX,EDI                         ; 0052e81a
    PUSH EAX                            ; 0052e81c
    MOV EDX,dword ptr [EBP + 0x8e]      ; 0052e81d
    PUSH EDX                            ; 0052e823
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0 ; 0052e824
        ;   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052e829
    PUSH EAX                            ; 0052e82c
    PUSH 0x63ac46                       ; 0052e82d | = "%s -> %s"
    LEA EAX,[EBP + -0x1e]               ; 0052e832
    PUSH EAX                            ; 0052e835
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0052e836
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052e83b
    LEA EAX,[EBX + 0xb]                 ; 0052e83e
        ;   Label: LAB_0052e83e
    PUSH EAX                            ; 0052e841
    MOV ECX,dword ptr [EBP + 0x76]      ; 0052e842
    PUSH ECX                            ; 0052e845
    LEA EAX,[EBP + -0x1e]               ; 0052e846
    PUSH EAX                            ; 0052e849
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0052e84a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052e84f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0052e852
    SUB ESP,0x8                         ; 0052e858
    FLD float ptr [EAX + 0x8]           ; 0052e85b
    FSTP double ptr [ESP]               ; 0052e85e
    PUSH EAX                            ; 0052e861
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052e862
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052e867
    PUSH EAX                            ; 0052e86a
    PUSH 0x63ac4f                       ; 0052e86b | = "%s : %5.2f"
    LEA EAX,[EBP + -0x1e]               ; 0052e870
    PUSH EAX                            ; 0052e873
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0052e874
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0052e879
    ADD EBX,0x16                        ; 0052e87c
    PUSH EBX                            ; 0052e87f
    MOV EDI,dword ptr [EBP + 0x76]      ; 0052e880
    PUSH EDI                            ; 0052e883
    LEA EAX,[EBP + -0x1e]               ; 0052e884
    PUSH EAX                            ; 0052e887
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0052e888
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0052e88d
    LEA ESP,[EBP + 0x7a]                ; 0052e890
    POP EBP                             ; 0052e893
    POP EDI                             ; 0052e894
    POP ESI                             ; 0052e895
    POP EBX                             ; 0052e896
    RET                                 ; 0052e897
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0052e898
        ;   Label: LAB_0052e898
    PUSH EDI                            ; 0052e89e
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0 ; 0052e89f
        ;   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052e8a4
    LEA EDI,[EBP + -0x1e]               ; 0052e8a7
    MOV ESI,EAX                         ; 0052e8aa
    PUSH EDI                            ; 0052e8ac
    MOV AL,byte ptr [ESI]               ; 0052e8ad
        ;   Label: LAB_0052e8ad
    MOV byte ptr [EDI],AL               ; 0052e8af
    CMP AL,0x0                          ; 0052e8b1
    JZ 0x0052e8c5                       ; 0052e8b3
        ;   XREF to: 0052e8c5 (CONDITIONAL_JUMP)  ; LAB_0052e8c5
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e8b5
    ADD ESI,0x2                         ; 0052e8b8
    MOV byte ptr [EDI + 0x1],AL         ; 0052e8bb
    ADD EDI,0x2                         ; 0052e8be
    CMP AL,0x0                          ; 0052e8c1
    JNZ 0x0052e8ad                      ; 0052e8c3
        ;   XREF to: 0052e8ad (CONDITIONAL_JUMP)  ; LAB_0052e8ad
    POP EDI                             ; 0052e8c5
        ;   Label: LAB_0052e8c5
    JMP 0x0052e83e                      ; 0052e8c6
        ;   XREF to: 0052e83e (UNCONDITIONAL_JUMP)  ; LAB_0052e83e

