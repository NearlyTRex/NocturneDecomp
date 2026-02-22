; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_FUN_00581aa0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xc8c]:1  local_c8c
; undefined        Stack[-0x8e4]:1  local_8e4
; undefined        Stack[-0x53c]:1  local_53c
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x193]:1  local_193
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   TerminatedCString s_Outside_006489f3
;   TerminatedCString s_Small_006489fb
;   TerminatedCString s_Medium_e_g_Mausoleum_00648a01
;   TerminatedCString s_Large_e_g_Warehouse_00648a19
;   TerminatedCString s_Humongous_00648a30
;   TerminatedCString s_Show_this_help_screen_00648a3a
;   TerminatedCString s_F1_00648a50
;   TerminatedCString s_Set_default_room_size_fo_00648a53
;   TerminatedCString s_S_00648a71
;   TerminatedCString s_Next_room_00648a73
;   TerminatedCString s_TAB_00648a7d
;   TerminatedCString s_Previous_room_00648a81
;   TerminatedCString s_SHIFT_TAB_00648a8f
;   TerminatedCString s_Insert_room_00648a99
;   TerminatedCString s_I_00648aa5
;   ... and 43 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_setedit.cpp_FUN_005817d0
;   core_slew.cpp_CSlew_init_FUN_005a2060
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_memmove_FUN_005fe5e0
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581aa0
        ;   Label: core_setedit.cpp_CDemonSet_FUN_00581aa0
    PUSH ESI                            ; 00581aa1
    PUSH EDI                            ; 00581aa2
    PUSH EBP                            ; 00581aa3
    MOV EBP,ESP                         ; 00581aa4
    SUB ESP,0xc7c                       ; 00581aa6
    SUB EBP,0x7e                        ; 00581aac
    PUSH 0x648b45                       ; 00581aaf | = "Preparing set."
    MOV EDX,dword ptr [0x00678a60]      ; 00581ab4 | g_CEditorToolsPtr
    PUSH EDX                            ; 00581aba | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 00581abb
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 00581ac0
    MOV ECX,dword ptr [EBP + 0x92]      ; 00581ac3
    PUSH ECX                            ; 00581ac9
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 00581aca
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581acf
    ADD ESP,0x4                         ; 00581ad5
    MOV dword ptr [EAX + 0x14d154],0x0  ; 00581ad8
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00581ae2
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00581ae7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    LEA EAX,[EBP + -0x7a]               ; 00581aec
    PUSH EAX                            ; 00581aef
    XOR EBX,EBX                         ; 00581af0
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 00581af2
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    MOV EAX,0x42200000                  ; 00581af7
    MOV EDX,dword ptr [0x0067b654]      ; 00581afc | g_CGamePtr
    ADD ESP,0x4                         ; 00581b02
    MOV dword ptr [EBP + -0x12],EBX     ; 00581b05
    MOV dword ptr [EBP + -0xe],EBX      ; 00581b08
    PUSH EDX                            ; 00581b0b | g_CGameInstance
    MOV dword ptr [EBP + -0xa],EBX      ; 00581b0c
    MOV dword ptr [EBP + 0x66],EAX      ; 00581b0f
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00581b12
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581b17
    ADD EAX,0x15aec0                    ; 00581b1d
    MOV dword ptr [EAX + 0xfffffdcc],0x1 ; 00581b22
    MOV dword ptr [EAX + 0xfffffdd0],0x1 ; 00581b2c
    MOV dword ptr [EAX + 0xfffffdc4],0x1 ; 00581b36
    MOV dword ptr [EBP + 0x6e],EAX      ; 00581b40
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581b43
    MOV dword ptr [EBP + 0x72],EBX      ; 00581b49
    ADD EAX,0x15aeb8                    ; 00581b4c
    ADD ESP,0x4                         ; 00581b51
    MOV dword ptr [EBP + 0x4e],EAX      ; 00581b54
    XOR EBX,EBX                         ; 00581b57
        ;   Label: LAB_00581b57
    MOV ESI,dword ptr [EBP + 0x72]      ; 00581b59
    MOV dword ptr [EBP + 0x76],EBX      ; 00581b5c
    TEST ESI,ESI                        ; 00581b5f
    JL 0x00581b7c                       ; 00581b61
        ;   XREF to: 00581b7c (CONDITIONAL_JUMP)  ; LAB_00581b7c
    MOV EDX,dword ptr [EBP + 0x92]      ; 00581b63
    CMP ESI,dword ptr [EDX + 0x15aebc]  ; 00581b69
    JGE 0x00581b7c                      ; 00581b6f
        ;   XREF to: 00581b7c (CONDITIONAL_JUMP)  ; LAB_00581b7c
    IMUL EAX,ESI,0x44                   ; 00581b71
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00581b74
    ADD EDX,EAX                         ; 00581b77
    MOV dword ptr [EBP + 0x76],EDX      ; 00581b79
    CALL wincore_winrun.cpp_doNothing_FUN_005f2f80 ; 00581b7c
        ;   XREF to: 005f2f80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_doNothing_FUN_005f2f80()
        ;   Label: LAB_00581b7c
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00581b81
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 00581b86
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
    CMP dword ptr [EBP + 0x76],0x0      ; 00581b8b
    JZ 0x00581c45                       ; 00581b8f
        ;   XREF to: 00581c45 (CONDITIONAL_JUMP)  ; LAB_00581c45
    LEA EDX,[EBP + -0x6e]               ; 00581b95
    LEA EAX,[EBP + -0x12]               ; 00581b98
    CMP EDX,EAX                         ; 00581b9b
    JZ 0x00581bb1                       ; 00581b9d
        ;   XREF to: 00581bb1 (CONDITIONAL_JUMP)  ; LAB_00581bb1
    MOV EAX,dword ptr [EBP + -0x12]     ; 00581b9f
    MOV dword ptr [EBP + -0x6e],EAX     ; 00581ba2
    MOV EAX,dword ptr [EBP + -0xe]      ; 00581ba5
    MOV dword ptr [EBP + -0x6a],EAX     ; 00581ba8
    MOV EAX,dword ptr [EBP + -0xa]      ; 00581bab
    MOV dword ptr [EBP + -0x66],EAX     ; 00581bae
    LEA EAX,[EBP + -0x6]                ; 00581bb1
        ;   Label: LAB_00581bb1
    PUSH EAX                            ; 00581bb4
    MOV EAX,dword ptr [EBP + 0x76]      ; 00581bb5
    ADD EAX,0x18                        ; 00581bb8
    PUSH EAX                            ; 00581bbb
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 00581bbc
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBP + -0x6a]         ; 00581bc1
    ADD ESP,0x8                         ; 00581bc4
    FADD float ptr [EAX + 0x4]          ; 00581bc7
    LEA EAX,[EBP + -0x6e]               ; 00581bca
    PUSH EAX                            ; 00581bcd
    LEA EAX,[EBP + 0xffffff5e]          ; 00581bce
    PUSH EAX                            ; 00581bd4
    FSTP float ptr [EBP + -0x6a]        ; 00581bd5
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00581bd8
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBP + 0x66]          ; 00581bdd
    FCHS                                ; 00581be0
    FSTP float ptr [EBP + 0x4a]         ; 00581be2
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00581be5
    ADD ESP,0x8                         ; 00581be8
    MOV dword ptr [EBP + 0xe],EAX       ; 00581beb
    LEA EAX,[EBP + 0x6]                 ; 00581bee
    PUSH EAX                            ; 00581bf1
    LEA EAX,[EBP + -0x42]               ; 00581bf2
    PUSH EAX                            ; 00581bf5
    LEA EAX,[EBP + 0xffffff5e]          ; 00581bf6
    XOR EBX,EBX                         ; 00581bfc
    PUSH EAX                            ; 00581bfe
    MOV dword ptr [EBP + 0x6],EBX       ; 00581bff
    MOV dword ptr [EBP + 0xa],EBX       ; 00581c02
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00581c05
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,dword ptr [EBP + 0x76]      ; 00581c0a
    FLD float ptr [EAX]                 ; 00581c0d
    FADD float ptr [EDX]                ; 00581c0f
    FSTP float ptr [EBP + 0x36]         ; 00581c11
    FLD float ptr [EAX + 0x4]           ; 00581c14
    FADD float ptr [EDX + 0x4]          ; 00581c17
    ADD ESP,0xc                         ; 00581c1a
    FSTP float ptr [EBP + 0x3a]         ; 00581c1d
    FLD float ptr [EAX + 0x8]           ; 00581c20
    LEA EAX,[EBP + 0x36]                ; 00581c23
    FADD float ptr [EDX + 0x8]          ; 00581c26
    LEA EDX,[EBP + -0x7a]               ; 00581c29
    FSTP float ptr [EBP + 0x3e]         ; 00581c2c
    CMP EDX,EAX                         ; 00581c2f
    JZ 0x00581c45                       ; 00581c31
        ;   XREF to: 00581c45 (CONDITIONAL_JUMP)  ; LAB_00581c45
    MOV EAX,dword ptr [EBP + 0x36]      ; 00581c33
    MOV dword ptr [EBP + -0x7a],EAX     ; 00581c36
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00581c39
    MOV dword ptr [EBP + -0x76],EAX     ; 00581c3c
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00581c3f
    MOV dword ptr [EBP + -0x72],EAX     ; 00581c42
    MOV EDI,0x41e00000                  ; 00581c45
        ;   Label: LAB_00581c45
    LEA EAX,[EBP + -0x7a]               ; 00581c4a
    MOV dword ptr [EBP + -0x62],EDI     ; 00581c4d
    CMP EAX,0x32758e8                   ; 00581c50 | DAT_032758e8
    JZ 0x00581c6f                       ; 00581c55
        ;   XREF to: 00581c6f (CONDITIONAL_JUMP)  ; LAB_00581c6f
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00581c57
    MOV [0x032758e8],EAX                ; 00581c5a | DAT_032758e8
    MOV EAX,dword ptr [EBP + -0x76]     ; 00581c5f
    MOV [0x032758ec],EAX                ; 00581c62 | g_CDemonCameraInstance.base.position.y
    MOV EAX,dword ptr [EBP + -0x72]     ; 00581c67
    MOV [0x032758f0],EAX                ; 00581c6a | g_CDemonCameraInstance.base.position.z
    LEA EAX,[EBP + -0x6e]               ; 00581c6f
        ;   Label: LAB_00581c6f
    PUSH EAX                            ; 00581c72
    PUSH 0x32758f4                      ; 00581c73 | g_CDemonCameraInstance.base.rotation_matrix.m[0].x
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00581c78
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00581c7d
    PUSH 0x1                            ; 00581c80
    MOV EAX,dword ptr [EBP + -0x62]     ; 00581c82
    PUSH 0x32758e4                      ; 00581c85 | g_CDemonCameraInstance
    MOV [0x0327591c],EAX                ; 00581c8a | g_CDemonCameraInstance.base.projection_scale
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 ; 00581c8f
        ;   XREF to: 0044c430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430(CDemonCamera * this_ptr, int skip_clear_buffers)
    ADD ESP,0x8                         ; 00581c94
    PUSH 0x0                            ; 00581c97
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581c99
    PUSH 0x43160000                     ; 00581c9f
    PUSH EAX                            ; 00581ca4
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 00581ca5
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00581caa
    PUSH 0x1                            ; 00581cad
    MOV EDX,dword ptr [0x006703ec]      ; 00581caf | g_CDemonRendererPtr2
    PUSH EDX                            ; 00581cb5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 00581cb6
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581cbb
    XOR EDI,EDI                         ; 00581cc1
    MOV ECX,dword ptr [EAX + 0x15aebc]  ; 00581cc3
    ADD ESP,0x8                         ; 00581cc9
    TEST ECX,ECX                        ; 00581ccc
    JLE 0x00581dd8                      ; 00581cce
        ;   XREF to: 00581dd8 (CONDITIONAL_JUMP)  ; LAB_00581dd8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00581cd4
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00581cd7
    ADD EAX,0x18                        ; 00581cda
    ADD ESI,0xc                         ; 00581cdd
    MOV dword ptr [EBP + 0x7a],EAX      ; 00581ce0
    IMUL EAX,EDI,0x44                   ; 00581ce3
        ;   Label: LAB_00581ce3
    MOV EBX,dword ptr [EBP + 0x6e]      ; 00581ce6
    ADD EBX,EAX                         ; 00581ce9
    LEA EAX,[EBP + 0x12]                ; 00581ceb
    PUSH EAX                            ; 00581cee
    MOV ECX,dword ptr [EBP + 0x7a]      ; 00581cef
    PUSH ECX                            ; 00581cf2
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 00581cf3
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00581cf8
    PUSH EBX                            ; 00581cfb
    MOV EBX,dword ptr [0x006703ec]      ; 00581cfc | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 00581d02 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00581d03
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00581d08
    PUSH 0x0                            ; 00581d0b
    LEA EAX,[EBP + 0x12]                ; 00581d0d
    PUSH EAX                            ; 00581d10
    MOV EAX,[0x006703ec]                ; 00581d11 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00581d16 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00581d17
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EDX,dword ptr [EBP + 0x72]      ; 00581d1c
    ADD ESP,0xc                         ; 00581d1f
    CMP EDI,EDX                         ; 00581d22
    JNZ 0x0058248b                      ; 00581d24
        ;   XREF to: 0058248b (CONDITIONAL_JUMP)  ; LAB_0058248b
    FLD float ptr [ESI]                 ; 00581d2a
    PUSH 0x0                            ; 00581d2c
    LEA EAX,[EBP + 0x2a]                ; 00581d2e
    FCHS                                ; 00581d31
    FSTP float ptr [EBP + 0x2a]         ; 00581d33
    PUSH 0xff                           ; 00581d36
    FLD float ptr [ESI + 0x4]           ; 00581d3b
    FCHS                                ; 00581d3e
    PUSH 0x0                            ; 00581d40
    FSTP float ptr [EBP + 0x2e]         ; 00581d42
    PUSH 0x3f000000                     ; 00581d45
    FLD float ptr [ESI + 0x8]           ; 00581d4a
    PUSH ESI                            ; 00581d4d
    FCHS                                ; 00581d4e
    PUSH EAX                            ; 00581d50
    FSTP float ptr [EBP + 0x32]         ; 00581d51
    CALL core_setedit.cpp_FUN_005817d0  ; 00581d54
        ;   XREF to: 005817d0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_FUN_005817d0(void * unk)
    ADD ESP,0x18                        ; 00581d59
    MOV ECX,dword ptr [0x00678a60]      ; 00581d5c | g_CEditorToolsPtr
    PUSH ECX                            ; 00581d62 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 00581d63
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00581d68
    PUSH EAX                            ; 00581d6b
    MOV EBX,EAX                         ; 00581d6c
    MOV EAX,[0x00678a60]                ; 00581d6e | g_CEditorToolsPtr
    PUSH 0x40000000                     ; 00581d73
    PUSH EAX                            ; 00581d78 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 00581d79
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    FLD float ptr [ESI]                 ; 00581d7e
    LEA EAX,[EBP + -0x1e]               ; 00581d80
    MOV EDX,dword ptr [0x00678a60]      ; 00581d83 | g_CEditorToolsPtr
    ADD ESP,0xc                         ; 00581d89
    FCHS                                ; 00581d8c
    FSTP float ptr [EBP + -0x1e]        ; 00581d8e
    PUSH EBX                            ; 00581d91
    FLD float ptr [ESI + 0x4]           ; 00581d92
    FCHS                                ; 00581d95
    PUSH ESI                            ; 00581d97
    FSTP float ptr [EBP + -0x1a]        ; 00581d98
    FLD float ptr [ESI + 0x8]           ; 00581d9b
    PUSH EAX                            ; 00581d9e
    FCHS                                ; 00581d9f
    PUSH EDX                            ; 00581da1 | g_CEditorToolsInstance
    FSTP float ptr [EBP + -0x16]        ; 00581da2
    CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 ; 00581da5
        ;   XREF to: 004a2050 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools * this_ptr, CVector3f * corner1, CVector3f * corner2, int color_value)
    ADD ESP,0x10                        ; 00581daa
    MOV EBX,dword ptr [0x006703ec]      ; 00581dad | g_CDemonRendererPtr2
        ;   Label: LAB_00581dad
    PUSH EBX                            ; 00581db3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00581db4
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD dword ptr [EBP + 0x7a],0x44     ; 00581db9
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581dbd
    ADD ESI,0x44                        ; 00581dc3
    INC EDI                             ; 00581dc6
    MOV EDX,dword ptr [EAX + 0x15aebc]  ; 00581dc7
    ADD ESP,0x4                         ; 00581dcd
    CMP EDI,EDX                         ; 00581dd0
    JL 0x00581ce3                       ; 00581dd2
        ;   XREF to: 00581ce3 (CONDITIONAL_JUMP)  ; LAB_00581ce3
    MOV ECX,dword ptr [EBP + 0x76]      ; 00581dd8
        ;   Label: LAB_00581dd8
    TEST ECX,ECX                        ; 00581ddb
    JZ 0x005824c2                       ; 00581ddd
        ;   XREF to: 005824c2 (CONDITIONAL_JUMP)  ; LAB_005824c2
    MOV EBX,dword ptr [ECX + 0x40]      ; 00581de3
    PUSH EBX                            ; 00581de6
    PUSH 0x648b54                       ; 00581de7 | = "Room size: %d"
    LEA EAX,[EBP + 0xfffffefa]          ; 00581dec
    PUSH EAX                            ; 00581df2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00581df3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00581df8
    PUSH 0x0                            ; 00581dfb
        ;   Label: LAB_00581dfb
    PUSH 0x0                            ; 00581dfd
    LEA EAX,[EBP + 0xfffffefa]          ; 00581dff
    PUSH EAX                            ; 00581e05
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581e06
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00581e0b
    PUSH 0x0                            ; 00581e0e
    PUSH 0x32758e4                      ; 00581e10 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 ; 00581e15
        ;   XREF to: 0044cb80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80(CDemonCamera * this_ptr, int skip_zbuffer_copy)
    ADD ESP,0x8                         ; 00581e1a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00581e1d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ESI,dword ptr [0x0067b654]      ; 00581e22 | g_CGamePtr
    PUSH ESI                            ; 00581e28 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 00581e29
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 00581e2e
    MOV EAX,[0x0067cf44]                ; 00581e31 | g_CKeysPtr
    PUSH 0x1                            ; 00581e36
    MOV EDX,dword ptr [EAX]             ; 00581e38 | g_CKeysInstance
    PUSH EAX                            ; 00581e3a | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00581e3b
    ADD ESP,0x8                         ; 00581e3e
    TEST EAX,EAX                        ; 00581e41
    JNZ 0x005828e1                      ; 00581e43
        ;   XREF to: 005828e1 (CONDITIONAL_JUMP)  ; LAB_005828e1
    CMP dword ptr [EBP + 0x76],0x0      ; 00581e49
    JNZ 0x005824ec                      ; 00581e4d
        ;   XREF to: 005824ec (CONDITIONAL_JUMP)  ; LAB_005824ec
    LEA EAX,[EBP + -0x7a]               ; 00581e53
    PUSH EAX                            ; 00581e56
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 00581e57
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 00581e5c
    PUSH 0x1f                           ; 00581e5f
        ;   Label: LAB_00581e5f
    MOV EAX,[0x0067cf44]                ; 00581e61 | g_CKeysPtr
    PUSH EAX                            ; 00581e66 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00581e67 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00581e69
    ADD ESP,0x8                         ; 00581e6c
    TEST EAX,EAX                        ; 00581e6f
    JZ 0x00581f24                       ; 00581e71
        ;   XREF to: 00581f24 (CONDITIONAL_JUMP)  ; LAB_00581f24
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581e77
    PUSH EAX                            ; 00581e7d
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00581e7e
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00581e83
    PUSH 0x6489f3                       ; 00581e86 | = "Outside"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581e8b
    PUSH EAX                            ; 00581e91
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581e92
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581e97
    PUSH 0x6489fb                       ; 00581e9a | = "Small"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581e9f
    PUSH EAX                            ; 00581ea5
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581ea6
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581eab
    PUSH 0x648a01                       ; 00581eae | = "Medium (e.g. Mausoleum)"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581eb3
    PUSH EAX                            ; 00581eb9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581eba
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581ebf
    PUSH 0x648a19                       ; 00581ec2 | = "Large (e.g. Warehouse)"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581ec7
    PUSH EAX                            ; 00581ecd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581ece
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581ed3
    PUSH 0x648a30                       ; 00581ed6 | = "Humongous"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581edb
    PUSH EAX                            ; 00581ee1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581ee2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581ee7
    MOV EAX,dword ptr [EBP + 0x4e]      ; 00581eea
    PUSH 0x0                            ; 00581eed
    MOV ECX,dword ptr [EAX]             ; 00581eef
    PUSH ECX                            ; 00581ef1
    PUSH 0x648b73                       ; 00581ef2 | = "Select default room size"
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581ef7
    PUSH EAX                            ; 00581efd
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00581efe
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00581f03
    TEST EAX,EAX                        ; 00581f06
    JL 0x0058286c                       ; 00581f08
        ;   XREF to: 0058286c (CONDITIONAL_JUMP)  ; LAB_0058286c
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00581f0e
    PUSH 0x0                            ; 00581f11
    MOV dword ptr [EDX],EAX             ; 00581f13
    LEA EAX,[EBP + 0xfffff7aa]          ; 00581f15
        ;   Label: LAB_00581f15
    PUSH EAX                            ; 00581f1b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00581f1c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00581f21
    PUSH 0xf                            ; 00581f24
        ;   Label: LAB_00581f24
    MOV EAX,[0x0067cf44]                ; 00581f26 | g_CKeysPtr
    PUSH EAX                            ; 00581f2b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00581f2c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00581f2e
    ADD ESP,0x8                         ; 00581f31
    TEST EAX,EAX                        ; 00581f34
    JZ 0x00581f5e                       ; 00581f36
        ;   XREF to: 00581f5e (CONDITIONAL_JUMP)  ; LAB_00581f5e
    PUSH 0x2a                           ; 00581f38
    MOV EAX,[0x0067cf44]                ; 00581f3a | g_CKeysPtr
    PUSH EAX                            ; 00581f3f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00581f40 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00581f42
    ADD ESP,0x8                         ; 00581f44
    TEST EAX,EAX                        ; 00581f47
    JZ 0x00582888                       ; 00581f49
        ;   XREF to: 00582888 (CONDITIONAL_JUMP)  ; LAB_00582888
    MOV EAX,dword ptr [EBP + 0x72]      ; 00581f4f
    DEC EAX                             ; 00581f52
    MOV dword ptr [EBP + 0x72],EAX      ; 00581f53
    TEST EAX,EAX                        ; 00581f56
    JL 0x00582873                       ; 00581f58
        ;   XREF to: 00582873 (CONDITIONAL_JUMP)  ; LAB_00582873
    PUSH 0x17                           ; 00581f5e
        ;   Label: LAB_00581f5e
    MOV EAX,[0x0067cf44]                ; 00581f60 | g_CKeysPtr
    PUSH EAX                            ; 00581f65 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00581f66 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00581f68
    ADD ESP,0x8                         ; 00581f6b
    TEST EAX,EAX                        ; 00581f6e
    JZ 0x005820cc                       ; 00581f70
        ;   XREF to: 005820cc (CONDITIONAL_JUMP)  ; LAB_005820cc
    MOV EAX,dword ptr [EBP + 0x92]      ; 00581f76
    CMP dword ptr [EAX + 0x15aebc],0x14 ; 00581f7c
    JGE 0x005828c1                      ; 00581f83
        ;   XREF to: 005828c1 (CONDITIONAL_JUMP)  ; LAB_005828c1
    LEA EAX,[EBP + 0xfffffb52]          ; 00581f89
    PUSH EAX                            ; 00581f8f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 00581f90
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00581f95
    PUSH 0x6489f3                       ; 00581f98 | = "Outside"
    LEA EAX,[EBP + 0xfffffb52]          ; 00581f9d
    PUSH EAX                            ; 00581fa3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581fa4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581fa9
    PUSH 0x6489fb                       ; 00581fac | = "Small"
    LEA EAX,[EBP + 0xfffffb52]          ; 00581fb1
    PUSH EAX                            ; 00581fb7
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581fb8
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581fbd
    PUSH 0x648a01                       ; 00581fc0 | = "Medium (e.g. Mausoleum)"
    LEA EAX,[EBP + 0xfffffb52]          ; 00581fc5
    PUSH EAX                            ; 00581fcb
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581fcc
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581fd1
    PUSH 0x648a19                       ; 00581fd4 | = "Large (e.g. Warehouse)"
    LEA EAX,[EBP + 0xfffffb52]          ; 00581fd9
    PUSH EAX                            ; 00581fdf
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581fe0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581fe5
    PUSH 0x648a30                       ; 00581fe8 | = "Humongous"
    LEA EAX,[EBP + 0xfffffb52]          ; 00581fed
    PUSH EAX                            ; 00581ff3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00581ff4
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00581ff9
    PUSH 0x0                            ; 00581ffc
    MOV ESI,dword ptr [0x03365cbc]      ; 00581ffe | DAT_03365cbc
    PUSH ESI                            ; 00582004
    PUSH 0x648b8c                       ; 00582005 | = "Create new room"
    LEA EAX,[EBP + 0xfffffb52]          ; 0058200a
    PUSH EAX                            ; 00582010
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00582011
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00582016
    TEST EAX,EAX                        ; 00582019
    JL 0x005828ab                       ; 0058201b
        ;   XREF to: 005828ab (CONDITIONAL_JUMP)  ; LAB_005828ab
    PUSH 0x0                            ; 00582021
    MOV [0x03365cbc],EAX                ; 00582023 | DAT_03365cbc
    LEA EAX,[EBP + 0xfffffb52]          ; 00582028
    PUSH EAX                            ; 0058202e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0058202f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00582034
    MOV EAX,dword ptr [EAX + 0x15aebc]  ; 0058203a
    MOV dword ptr [EBP + 0x72],EAX      ; 00582040
    IMUL EAX,EAX,0x44                   ; 00582043
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00582046
    ADD ESP,0x8                         ; 00582049
    ADD EDX,EAX                         ; 0058204c
    LEA EAX,[EBP + -0x7a]               ; 0058204e
    MOV dword ptr [EBP + 0x76],EDX      ; 00582051
    CMP EAX,EDX                         ; 00582054
    JZ 0x00582069                       ; 00582056
        ;   XREF to: 00582069 (CONDITIONAL_JUMP)  ; LAB_00582069
    MOV EAX,dword ptr [EBP + -0x7a]     ; 00582058
    MOV dword ptr [EDX],EAX             ; 0058205b
    MOV EAX,dword ptr [EBP + -0x76]     ; 0058205d
    MOV dword ptr [EDX + 0x4],EAX       ; 00582060
    MOV EAX,dword ptr [EBP + -0x72]     ; 00582063
    MOV dword ptr [EDX + 0x8],EAX       ; 00582066
    MOV EAX,dword ptr [EBP + -0x6e]     ; 00582069
        ;   Label: LAB_00582069
    MOV dword ptr [EBP + -0x2a],EAX     ; 0058206c
    MOV EAX,dword ptr [EBP + -0x6a]     ; 0058206f
    MOV dword ptr [EBP + -0x26],EAX     ; 00582072
    MOV EAX,dword ptr [EBP + -0x66]     ; 00582075
    MOV dword ptr [EBP + -0x22],EAX     ; 00582078
    LEA EAX,[EBP + -0x2a]               ; 0058207b
    PUSH EAX                            ; 0058207e
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058207f
    ADD EAX,0x18                        ; 00582082
    XOR ECX,ECX                         ; 00582085
    PUSH EAX                            ; 00582087
    MOV dword ptr [EBP + -0x2a],ECX     ; 00582088
    MOV dword ptr [EBP + -0x22],ECX     ; 0058208b
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0058208e
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582093
    MOV dword ptr [EAX + 0xc],0x41200000 ; 00582096
    MOV dword ptr [EAX + 0x10],0x41200000 ; 0058209d
    MOV dword ptr [EAX + 0x14],0x41200000 ; 005820a4
    MOV EDX,dword ptr [EBP + 0x76]      ; 005820ab
    MOV EAX,[0x03365cbc]                ; 005820ae | DAT_03365cbc
    MOV dword ptr [EDX + 0x40],EAX      ; 005820b3
    MOV EAX,dword ptr [EBP + 0x92]      ; 005820b6
    MOV ESI,dword ptr [EAX + 0x15aebc]  ; 005820bc
    INC ESI                             ; 005820c2
    ADD ESP,0x8                         ; 005820c3
    MOV dword ptr [EAX + 0x15aebc],ESI  ; 005820c6
    PUSH 0x20                           ; 005820cc
        ;   Label: LAB_005820cc
    MOV EAX,[0x0067cf44]                ; 005820ce | g_CKeysPtr
    PUSH EAX                            ; 005820d3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005820d4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005820d6
    ADD ESP,0x8                         ; 005820d9
    TEST EAX,EAX                        ; 005820dc
    JZ 0x00582164                       ; 005820de
        ;   XREF to: 00582164 (CONDITIONAL_JUMP)  ; LAB_00582164
    MOV EDI,dword ptr [EBP + 0x72]      ; 005820e4
    TEST EDI,EDI                        ; 005820e7
    JL 0x00582164                       ; 005820e9
        ;   XREF to: 00582164 (CONDITIONAL_JUMP)  ; LAB_00582164
    MOV EDX,dword ptr [EBP + 0x92]      ; 005820ef
    CMP EDI,dword ptr [EDX + 0x15aebc]  ; 005820f5
    JGE 0x00582164                      ; 005820fb
        ;   XREF to: 00582164 (CONDITIONAL_JUMP)  ; LAB_00582164
    PUSH 0x648bdc                       ; 005820fd | = "Delete the selected room?"
    MOV EBX,dword ptr [0x00678a60]      ; 00582102 | g_CEditorToolsPtr
    PUSH EBX                            ; 00582108 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 00582109
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0058210e
    TEST EAX,EAX                        ; 00582111
    JZ 0x00582164                       ; 00582113
        ;   XREF to: 00582164 (CONDITIONAL_JUMP)  ; LAB_00582164
    MOV EAX,dword ptr [EBP + 0x92]      ; 00582115
    MOV ESI,dword ptr [EAX + 0x15aebc]  ; 0058211b
    DEC ESI                             ; 00582121
    MOV dword ptr [EAX + 0x15aebc],ESI  ; 00582122
    MOV EAX,ESI                         ; 00582128
    SUB EAX,EDI                         ; 0058212a
    IMUL EAX,EAX,0x44                   ; 0058212c
    PUSH EAX                            ; 0058212f
    LEA EAX,[EDI + 0x1]                 ; 00582130
    IMUL EAX,EAX,0x44                   ; 00582133
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00582136
    ADD EAX,EDX                         ; 00582139
    PUSH EAX                            ; 0058213b
    IMUL EAX,EDI,0x44                   ; 0058213c
    ADD EAX,EDX                         ; 0058213f
    PUSH EAX                            ; 00582141
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00582142
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBP + 0x92]      ; 00582147
    MOV ESI,dword ptr [EDX + 0x15aebc]  ; 0058214d
    ADD ESP,0xc                         ; 00582153
    CMP EDI,ESI                         ; 00582156
    JL 0x0058215f                       ; 00582158
        ;   XREF to: 0058215f (CONDITIONAL_JUMP)  ; LAB_0058215f
    XOR EDI,EDI                         ; 0058215a
    MOV dword ptr [EBP + 0x72],EDI      ; 0058215c
    XOR EAX,EAX                         ; 0058215f
        ;   Label: LAB_0058215f
    MOV dword ptr [EBP + 0x76],EAX      ; 00582161
    PUSH 0x31                           ; 00582164
        ;   Label: LAB_00582164
    MOV EAX,[0x0067cf44]                ; 00582166 | g_CKeysPtr
    PUSH EAX                            ; 0058216b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058216c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0058216e
    ADD ESP,0x8                         ; 00582171
    TEST EAX,EAX                        ; 00582174
    JZ 0x00582185                       ; 00582176
        ;   XREF to: 00582185 (CONDITIONAL_JUMP)  ; LAB_00582185
    XOR ECX,ECX                         ; 00582178
    MOV EDX,0xffffffff                  ; 0058217a
    MOV dword ptr [EBP + 0x76],ECX      ; 0058217f
    MOV dword ptr [EBP + 0x72],EDX      ; 00582182
    PUSH 0x1c                           ; 00582185
        ;   Label: LAB_00582185
    MOV EAX,[0x0067cf44]                ; 00582187 | g_CKeysPtr
    PUSH EAX                            ; 0058218c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058218d | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0058218f
    ADD ESP,0x8                         ; 00582192
    TEST EAX,EAX                        ; 00582195
    JZ 0x00582253                       ; 00582197
        ;   XREF to: 00582253 (CONDITIONAL_JUMP)  ; LAB_00582253
    MOV EBX,dword ptr [EBP + 0x76]      ; 0058219d
    TEST EBX,EBX                        ; 005821a0
    JZ 0x00582253                       ; 005821a2
        ;   XREF to: 00582253 (CONDITIONAL_JUMP)  ; LAB_00582253
    LEA EAX,[EBP + 0xfffff402]          ; 005821a8
    PUSH EAX                            ; 005821ae
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 005821af
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 005821b4
    PUSH 0x6489f3                       ; 005821b7 | = "Outside"
    LEA EAX,[EBP + 0xfffff402]          ; 005821bc
    PUSH EAX                            ; 005821c2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005821c3
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005821c8
    PUSH 0x6489fb                       ; 005821cb | = "Small"
    LEA EAX,[EBP + 0xfffff402]          ; 005821d0
    PUSH EAX                            ; 005821d6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005821d7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005821dc
    PUSH 0x648a01                       ; 005821df | = "Medium (e.g. Mausoleum)"
    LEA EAX,[EBP + 0xfffff402]          ; 005821e4
    PUSH EAX                            ; 005821ea
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005821eb
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 005821f0
    PUSH 0x648a19                       ; 005821f3 | = "Large (e.g. Warehouse)"
    LEA EAX,[EBP + 0xfffff402]          ; 005821f8
    PUSH EAX                            ; 005821fe
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 005821ff
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00582204
    PUSH 0x648a30                       ; 00582207 | = "Humongous"
    LEA EAX,[EBP + 0xfffff402]          ; 0058220c
    PUSH EAX                            ; 00582212
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00582213
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00582218
    PUSH 0x0                            ; 0058221b
    MOV ESI,dword ptr [EBX + 0x40]      ; 0058221d
    PUSH ESI                            ; 00582220
    PUSH 0x648bf6                       ; 00582221 | = "Choose room size"
    LEA EAX,[EBP + 0xfffff402]          ; 00582226
    PUSH EAX                            ; 0058222c
    ADD EBX,0x40                        ; 0058222d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 00582230
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 00582235
    TEST EAX,EAX                        ; 00582238
    JL 0x005828da                       ; 0058223a
        ;   XREF to: 005828da (CONDITIONAL_JUMP)  ; LAB_005828da
    PUSH 0x0                            ; 00582240
    MOV dword ptr [EBX],EAX             ; 00582242
    LEA EAX,[EBP + 0xfffff402]          ; 00582244
        ;   Label: LAB_00582244
    PUSH EAX                            ; 0058224a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0058224b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00582250
    PUSH 0x3b                           ; 00582253
        ;   Label: LAB_00582253
    MOV EAX,[0x0067cf44]                ; 00582255 | g_CKeysPtr
    PUSH EAX                            ; 0058225a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058225b | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0058225d
    ADD ESP,0x8                         ; 00582260
    TEST EAX,EAX                        ; 00582263
    JZ 0x00581b57                       ; 00582265
        ;   XREF to: 00581b57 (CONDITIONAL_JUMP)  ; LAB_00581b57
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0058226b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EDI,dword ptr [0x00679394]      ; 00582270 | g_WindowWidth
    IMUL EDX,EDI,0x0                    ; 00582276
    MOV EAX,EDX                         ; 00582279
    SAR EDX,0x1f                        ; 0058227b
    SUB EAX,EDX                         ; 0058227e
    SAR EAX,0x1                         ; 00582280
    PUSH 0x0                            ; 00582282
    PUSH EAX                            ; 00582284
    PUSH 0x648a50                       ; 00582285 | = "F1"
    MOV EBX,EAX                         ; 0058228a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058228c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582291 | g_WindowWidth
    MOV EDX,EAX                         ; 00582296
    MOV ESI,0xa                         ; 00582298
    SAR EDX,0x1f                        ; 0058229d
    IDIV ESI                            ; 005822a0
    ADD ESP,0xc                         ; 005822a2
    PUSH 0x0                            ; 005822a5
    ADD EAX,EBX                         ; 005822a7
    PUSH EAX                            ; 005822a9
    PUSH 0x648a3a                       ; 005822aa | = "Show this help screen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005822af
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005822b4 | g_WindowWidth
    IMUL EDX,EAX,0x0                    ; 005822b9
    MOV EAX,EDX                         ; 005822bc
    SAR EDX,0x1f                        ; 005822be
    SUB EAX,EDX                         ; 005822c1
    SAR EAX,0x1                         ; 005822c3
    ADD ESP,0xc                         ; 005822c5
    PUSH 0xb                            ; 005822c8
    PUSH EAX                            ; 005822ca
    PUSH 0x648a71                       ; 005822cb | = "S"
    MOV EBX,EAX                         ; 005822d0
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005822d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005822d7 | g_WindowWidth
    MOV EDX,EAX                         ; 005822dc
    SAR EDX,0x1f                        ; 005822de
    IDIV ESI                            ; 005822e1
    ADD ESP,0xc                         ; 005822e3
    PUSH 0xb                            ; 005822e6
    ADD EAX,EBX                         ; 005822e8
    PUSH EAX                            ; 005822ea
    PUSH 0x648a53                       ; 005822eb | = "Set default room size for set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005822f0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [0x00679394]      ; 005822f5 | g_WindowWidth
    IMUL EDX,ECX,0x0                    ; 005822fb
    MOV EAX,EDX                         ; 005822fe
    SAR EDX,0x1f                        ; 00582300
    SUB EAX,EDX                         ; 00582303
    SAR EAX,0x1                         ; 00582305
    ADD ESP,0xc                         ; 00582307
    PUSH 0x16                           ; 0058230a
    PUSH EAX                            ; 0058230c
    PUSH 0x648a7d                       ; 0058230d | = "TAB"
    MOV EBX,EAX                         ; 00582312
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582314
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582319 | g_WindowWidth
    MOV EDX,EAX                         ; 0058231e
    SAR EDX,0x1f                        ; 00582320
    IDIV ESI                            ; 00582323
    ADD ESP,0xc                         ; 00582325
    PUSH 0x16                           ; 00582328
    ADD EAX,EBX                         ; 0058232a
    PUSH EAX                            ; 0058232c
    PUSH 0x648a73                       ; 0058232d | = "Next room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582332
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00582337
    MOV EBX,dword ptr [0x00679394]      ; 0058233a | g_WindowWidth
    IMUL EDX,EBX,0x0                    ; 00582340
    MOV EAX,EDX                         ; 00582343
    SAR EDX,0x1f                        ; 00582345
    SUB EAX,EDX                         ; 00582348
    SAR EAX,0x1                         ; 0058234a
    PUSH 0x21                           ; 0058234c
    PUSH EAX                            ; 0058234e
    PUSH 0x648a8f                       ; 0058234f | = "SHIFT+TAB"
    MOV EBX,EAX                         ; 00582354
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582356
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0058235b | g_WindowWidth
    MOV EDX,EAX                         ; 00582360
    SAR EDX,0x1f                        ; 00582362
    IDIV ESI                            ; 00582365
    ADD ESP,0xc                         ; 00582367
    PUSH 0x21                           ; 0058236a
    ADD EAX,EBX                         ; 0058236c
    PUSH EAX                            ; 0058236e
    PUSH 0x648a81                       ; 0058236f | = "Previous room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582374
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ESI,dword ptr [0x00679394]      ; 00582379 | g_WindowWidth
    IMUL EDX,ESI,0x0                    ; 0058237f
    MOV EAX,EDX                         ; 00582382
    SAR EDX,0x1f                        ; 00582384
    SUB EAX,EDX                         ; 00582387
    SAR EAX,0x1                         ; 00582389
    ADD ESP,0xc                         ; 0058238b
    PUSH 0x2c                           ; 0058238e
    PUSH EAX                            ; 00582390
    PUSH 0x648aa5                       ; 00582391 | = "I"
    MOV EBX,EAX                         ; 00582396
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582398
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0058239d | g_WindowWidth
    MOV EDX,EAX                         ; 005823a2
    MOV ESI,0xa                         ; 005823a4
    SAR EDX,0x1f                        ; 005823a9
    IDIV ESI                            ; 005823ac
    ADD ESP,0xc                         ; 005823ae
    PUSH 0x2c                           ; 005823b1
    ADD EAX,EBX                         ; 005823b3
    PUSH EAX                            ; 005823b5
    PUSH 0x648a99                       ; 005823b6 | = "Insert room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005823bb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [0x00679394]      ; 005823c0 | g_WindowWidth
    IMUL EDX,EDI,0x0                    ; 005823c6
    MOV EAX,EDX                         ; 005823c9
    SAR EDX,0x1f                        ; 005823cb
    SUB EAX,EDX                         ; 005823ce
    SAR EAX,0x1                         ; 005823d0
    ADD ESP,0xc                         ; 005823d2
    PUSH 0x37                           ; 005823d5
    PUSH EAX                            ; 005823d7
    PUSH 0x648ab3                       ; 005823d8 | = "D"
    MOV EBX,EAX                         ; 005823dd
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005823df
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005823e4 | g_WindowWidth
    MOV EDX,EAX                         ; 005823e9
    SAR EDX,0x1f                        ; 005823eb
    IDIV ESI                            ; 005823ee
    ADD ESP,0xc                         ; 005823f0
    PUSH 0x37                           ; 005823f3
    ADD EAX,EBX                         ; 005823f5
    PUSH EAX                            ; 005823f7
    PUSH 0x648aa7                       ; 005823f8 | = "Delete room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005823fd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582402 | g_WindowWidth
    IMUL EDX,EAX,0x0                    ; 00582407
    MOV EAX,EDX                         ; 0058240a
    SAR EDX,0x1f                        ; 0058240c
    SUB EAX,EDX                         ; 0058240f
    SAR EAX,0x1                         ; 00582411
    ADD ESP,0xc                         ; 00582413
    PUSH 0x42                           ; 00582416
    PUSH EAX                            ; 00582418
    PUSH 0x648ac3                       ; 00582419 | = "N"
    MOV EBX,EAX                         ; 0058241e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582420
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582425 | g_WindowWidth
    MOV EDX,EAX                         ; 0058242a
    SAR EDX,0x1f                        ; 0058242c
    IDIV ESI                            ; 0058242f
    ADD ESP,0xc                         ; 00582431
    PUSH 0x42                           ; 00582434
    ADD EAX,EBX                         ; 00582436
    PUSH EAX                            ; 00582438
    PUSH 0x648ab5                       ; 00582439 | = "Deselect room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058243e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00582443
    PUSH 0x58                           ; 00582446
    PUSH 0x0                            ; 00582448
    PUSH 0x648ac5                       ; 0058244a | = "To position the selected box, use the..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058244f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00582454
    PUSH 0x63                           ; 00582457
    PUSH 0x0                            ; 00582459
    PUSH 0x648afd                       ; 0058245b | = "To size the selected box, use arrow k..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582460
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00582465
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00582468
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0058246d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EDX,dword ptr [0x0067cf44]      ; 00582472 | g_CKeysPtr
    PUSH EDX                            ; 00582478 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 00582479
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0058247e
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00582481
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    JMP 0x00581b57                      ; 00582486
        ;   XREF to: 00581b57 (UNCONDITIONAL_JUMP)  ; LAB_00581b57
    FLD float ptr [ESI]                 ; 0058248b
        ;   Label: LAB_0058248b
    PUSH 0xff                           ; 0058248d
    LEA EAX,[EBP + -0x36]               ; 00582492
    FCHS                                ; 00582495
    FSTP float ptr [EBP + -0x36]        ; 00582497
    PUSH 0x0                            ; 0058249a
    FLD float ptr [ESI + 0x4]           ; 0058249c
    FCHS                                ; 0058249f
    PUSH 0x0                            ; 005824a1
    FSTP float ptr [EBP + -0x32]        ; 005824a3
    PUSH 0x3e4ccccd                     ; 005824a6
    FLD float ptr [ESI + 0x8]           ; 005824ab
    PUSH ESI                            ; 005824ae
    FCHS                                ; 005824af
    PUSH EAX                            ; 005824b1
    FSTP float ptr [EBP + -0x2e]        ; 005824b2
    CALL core_setedit.cpp_FUN_005817d0  ; 005824b5
        ;   XREF to: 005817d0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_FUN_005817d0(void * unk)
    ADD ESP,0x18                        ; 005824ba
    JMP 0x00581dad                      ; 005824bd
        ;   XREF to: 00581dad (UNCONDITIONAL_JUMP)  ; LAB_00581dad
    MOV ESI,0x648b62                    ; 005824c2 | = "No room selected"
        ;   Label: LAB_005824c2
    LEA EDI,[EBP + 0xfffffefa]          ; 005824c7
    PUSH EDI                            ; 005824cd
    MOV AL,byte ptr [ESI]               ; 005824ce | = "No room selected" | s_room_selected_00648b64
        ;   Label: LAB_005824ce
    MOV byte ptr [EDI],AL               ; 005824d0
    CMP AL,0x0                          ; 005824d2
    JZ 0x005824e6                       ; 005824d4
        ;   XREF to: 005824e6 (CONDITIONAL_JUMP)  ; LAB_005824e6
    MOV AL,byte ptr [ESI + 0x1]         ; 005824d6 | s_o_room_selected_00648b63 | s_room_selected_00648b65
    ADD ESI,0x2                         ; 005824d9
    MOV byte ptr [EDI + 0x1],AL         ; 005824dc
    ADD EDI,0x2                         ; 005824df
    CMP AL,0x0                          ; 005824e2
    JNZ 0x005824ce                      ; 005824e4
        ;   XREF to: 005824ce (CONDITIONAL_JUMP)  ; LAB_005824ce
    POP EDI                             ; 005824e6
        ;   Label: LAB_005824e6
    JMP 0x00581dfb                      ; 005824e7
        ;   XREF to: 00581dfb (UNCONDITIONAL_JUMP)  ; LAB_00581dfb
    MOV EAX,[0x0067b654]                ; 005824ec | g_CGamePtr
        ;   Label: LAB_005824ec
    MOV EAX,dword ptr [EAX + 0x264]     ; 005824f1 | g_CGameInstance.delta_time_float
    PUSH 0x38                           ; 005824f7
    MOV dword ptr [EBP + 0x56],EAX      ; 005824f9
    MOV dword ptr [EBP + 0x5a],EAX      ; 005824fc
    MOV EAX,[0x0067cf44]                ; 005824ff | g_CKeysPtr
    PUSH EAX                            ; 00582504 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00582505 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00582507
    ADD ESP,0x8                         ; 00582509
    TEST EAX,EAX                        ; 0058250c
    JZ 0x005827b0                       ; 0058250e
        ;   XREF to: 005827b0 (CONDITIONAL_JUMP)  ; LAB_005827b0
    FLD float ptr [EBP + 0x56]          ; 00582514
    FMUL double ptr [0x00648c15]        ; 00582517 | DOUBLE_00648c15
    FSTP float ptr [EBP + 0x5a]         ; 0058251d
        ;   Label: LAB_0058251d
    FLD float ptr [EBP + 0x66]          ; 00582520
        ;   Label: LAB_00582520
    FMUL double ptr [0x00648c25]        ; 00582523 | DOUBLE_00648c25
    FLD float ptr [EBP + 0x5a]          ; 00582529
    FLD ST0                             ; 0058252c
    FMUL double ptr [0x00648c1d]        ; 0058252e | DOUBLE_00648c1d
    PUSH 0x4a                           ; 00582534
    MOV EAX,[0x0067cf44]                ; 00582536 | g_CKeysPtr
    FXCH ST2                            ; 0058253b
    FMULP                               ; 0058253d
    PUSH EAX                            ; 0058253f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00582540 | g_CKeysInstance
    FXCH                                ; 00582542
    FSTP float ptr [EBP + 0x5e]         ; 00582544
    FSTP float ptr [EBP + 0x52]         ; 00582547
    CALL dword ptr [EDX]                ; 0058254a
    ADD ESP,0x8                         ; 0058254c
    TEST EAX,EAX                        ; 0058254f
    JZ 0x0058255c                       ; 00582551
        ;   XREF to: 0058255c (CONDITIONAL_JUMP)  ; LAB_0058255c
    FLD float ptr [EBP + -0x12]         ; 00582553
    FADD float ptr [EBP + 0x5e]         ; 00582556
    FSTP float ptr [EBP + -0x12]        ; 00582559
    PUSH 0x4e                           ; 0058255c
        ;   Label: LAB_0058255c
    MOV EAX,[0x0067cf44]                ; 0058255e | g_CKeysPtr
    PUSH EAX                            ; 00582563 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00582564 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00582566
    ADD ESP,0x8                         ; 00582568
    TEST EAX,EAX                        ; 0058256b
    JZ 0x00582578                       ; 0058256d
        ;   XREF to: 00582578 (CONDITIONAL_JUMP)  ; LAB_00582578
    FLD float ptr [EBP + -0x12]         ; 0058256f
    FSUB float ptr [EBP + 0x5e]         ; 00582572
    FSTP float ptr [EBP + -0x12]        ; 00582575
    PUSH 0x52                           ; 00582578
        ;   Label: LAB_00582578
    MOV EAX,[0x0067cf44]                ; 0058257a | g_CKeysPtr
    PUSH EAX                            ; 0058257f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00582580 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00582582
    ADD ESP,0x8                         ; 00582584
    TEST EAX,EAX                        ; 00582587
    JZ 0x00582594                       ; 00582589
        ;   XREF to: 00582594 (CONDITIONAL_JUMP)  ; LAB_00582594
    FLD float ptr [EBP + -0xe]          ; 0058258b
    FADD float ptr [EBP + 0x5e]         ; 0058258e
    FSTP float ptr [EBP + -0xe]         ; 00582591
    PUSH 0x53                           ; 00582594
        ;   Label: LAB_00582594
    MOV EAX,[0x0067cf44]                ; 00582596 | g_CKeysPtr
    PUSH EAX                            ; 0058259b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058259c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0058259e
    ADD ESP,0x8                         ; 005825a0
    TEST EAX,EAX                        ; 005825a3
    JZ 0x005825b0                       ; 005825a5
        ;   XREF to: 005825b0 (CONDITIONAL_JUMP)  ; LAB_005825b0
    FLD float ptr [EBP + -0xe]          ; 005825a7
    FSUB float ptr [EBP + 0x5e]         ; 005825aa
    FSTP float ptr [EBP + -0xe]         ; 005825ad
    PUSH 0xd                            ; 005825b0
        ;   Label: LAB_005825b0
    MOV EAX,[0x0067cf44]                ; 005825b2 | g_CKeysPtr
    PUSH EAX                            ; 005825b7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005825b8 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005825ba
    ADD ESP,0x8                         ; 005825bd
    TEST EAX,EAX                        ; 005825c0
    JZ 0x005825cd                       ; 005825c2
        ;   XREF to: 005825cd (CONDITIONAL_JUMP)  ; LAB_005825cd
    FLD float ptr [EBP + 0x66]          ; 005825c4
    FSUB float ptr [EBP + 0x52]         ; 005825c7
    FSTP float ptr [EBP + 0x66]         ; 005825ca
    PUSH 0xc                            ; 005825cd
        ;   Label: LAB_005825cd
    MOV EAX,[0x0067cf44]                ; 005825cf | g_CKeysPtr
    PUSH EAX                            ; 005825d4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005825d5 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005825d7
    ADD ESP,0x8                         ; 005825da
    TEST EAX,EAX                        ; 005825dd
    JZ 0x005825ea                       ; 005825df
        ;   XREF to: 005825ea (CONDITIONAL_JUMP)  ; LAB_005825ea
    FLD float ptr [EBP + 0x66]          ; 005825e1
    FADD float ptr [EBP + 0x52]         ; 005825e4
    FSTP float ptr [EBP + 0x66]         ; 005825e7
    FLD float ptr [EBP + -0x12]         ; 005825ea
        ;   Label: LAB_005825ea
    FCOMP double ptr [0x00648c3d]       ; 005825ed | DOUBLE_00648c3d
    FNSTSW AX                           ; 005825f3
    SAHF                                ; 005825f5
    JNC 0x005825ff                      ; 005825f6
        ;   XREF to: 005825ff (CONDITIONAL_JUMP)  ; LAB_005825ff
    MOV dword ptr [EBP + -0x12],0xbfc90fdb ; 005825f8
    FLD float ptr [EBP + -0x12]         ; 005825ff
        ;   Label: LAB_005825ff
    FCOMP double ptr [0x00648c1d]       ; 00582602 | DOUBLE_00648c1d
    FNSTSW AX                           ; 00582608
    SAHF                                ; 0058260a
    JBE 0x00582614                      ; 0058260b
        ;   XREF to: 00582614 (CONDITIONAL_JUMP)  ; LAB_00582614
    MOV dword ptr [EBP + -0x12],0x3fc90fdb ; 0058260d
    FLD float ptr [EBP + -0xe]          ; 00582614
        ;   Label: LAB_00582614
    FCOMP double ptr [0x00648c3d]       ; 00582617 | DOUBLE_00648c3d
    FNSTSW AX                           ; 0058261d
    SAHF                                ; 0058261f
    JNC 0x0058262e                      ; 00582620
        ;   XREF to: 0058262e (CONDITIONAL_JUMP)  ; LAB_0058262e
    FLD float ptr [EBP + -0xe]          ; 00582622
    FADD float ptr [0x00648c45]         ; 00582625 | FLOAT_00648c45
    FSTP float ptr [EBP + -0xe]         ; 0058262b
    FLD float ptr [EBP + -0xe]          ; 0058262e
        ;   Label: LAB_0058262e
    FCOMP double ptr [0x00648c1d]       ; 00582631 | DOUBLE_00648c1d
    FNSTSW AX                           ; 00582637
    SAHF                                ; 00582639
    JBE 0x00582648                      ; 0058263a
        ;   XREF to: 00582648 (CONDITIONAL_JUMP)  ; LAB_00582648
    FLD float ptr [EBP + -0xe]          ; 0058263c
    FADD float ptr [0x00648c49]         ; 0058263f | FLOAT_00648c49
    FSTP float ptr [EBP + -0xe]         ; 00582645
    FLD float ptr [EBP + 0x66]          ; 00582648
        ;   Label: LAB_00582648
    FCOMP double ptr [0x00648c25]       ; 0058264b | DOUBLE_00648c25
    FNSTSW AX                           ; 00582651
    SAHF                                ; 00582653
    JNC 0x0058265d                      ; 00582654
        ;   XREF to: 0058265d (CONDITIONAL_JUMP)  ; LAB_0058265d
    MOV dword ptr [EBP + 0x66],0x3f000000 ; 00582656
    PUSH 0x1d                           ; 0058265d
        ;   Label: LAB_0058265d
    MOV EAX,[0x0067cf44]                ; 0058265f | g_CKeysPtr
    PUSH EAX                            ; 00582664 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00582665 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00582667
    ADD ESP,0x8                         ; 00582669
    TEST EAX,EAX                        ; 0058266c
    JZ 0x005827d9                       ; 0058266e
        ;   XREF to: 005827d9 (CONDITIONAL_JUMP)  ; LAB_005827d9
    MOV EAX,[0x0067b654]                ; 00582674 | g_CGamePtr
    PUSH 0x38                           ; 00582679
    FLD float ptr [EAX + 0x264]         ; 0058267b | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 00582681 | g_CKeysPtr
    FMUL double ptr [0x00648c2d]        ; 00582686 | DOUBLE_00648c2d
    PUSH EAX                            ; 0058268c | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058268d | g_CKeysInstance
    FSTP float ptr [EBP + 0x6a]         ; 0058268f
    CALL dword ptr [EDX]                ; 00582692
    ADD ESP,0x8                         ; 00582694
    TEST EAX,EAX                        ; 00582697
    JZ 0x005826a7                       ; 00582699
        ;   XREF to: 005826a7 (CONDITIONAL_JUMP)  ; LAB_005826a7
    FLD float ptr [EBP + 0x6a]          ; 0058269b
    FMUL double ptr [0x00648c35]        ; 0058269e | DOUBLE_00648c35
    FSTP float ptr [EBP + 0x6a]         ; 005826a4
    PUSH 0x4b                           ; 005826a7
        ;   Label: LAB_005826a7
    MOV EAX,[0x0067cf44]                ; 005826a9 | g_CKeysPtr
    PUSH EAX                            ; 005826ae | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005826af | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005826b1
    ADD ESP,0x8                         ; 005826b3
    TEST EAX,EAX                        ; 005826b6
    JZ 0x005826c6                       ; 005826b8
        ;   XREF to: 005826c6 (CONDITIONAL_JUMP)  ; LAB_005826c6
    MOV EAX,dword ptr [EBP + 0x76]      ; 005826ba
    FLD float ptr [EAX + 0xc]           ; 005826bd
    FSUB float ptr [EBP + 0x6a]         ; 005826c0
    FSTP float ptr [EAX + 0xc]          ; 005826c3
    PUSH 0x4d                           ; 005826c6
        ;   Label: LAB_005826c6
    MOV EAX,[0x0067cf44]                ; 005826c8 | g_CKeysPtr
    PUSH EAX                            ; 005826cd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005826ce | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005826d0
    ADD ESP,0x8                         ; 005826d2
    TEST EAX,EAX                        ; 005826d5
    JZ 0x005826e5                       ; 005826d7
        ;   XREF to: 005826e5 (CONDITIONAL_JUMP)  ; LAB_005826e5
    MOV EAX,dword ptr [EBP + 0x76]      ; 005826d9
    FLD float ptr [EAX + 0xc]           ; 005826dc
    FADD float ptr [EBP + 0x6a]         ; 005826df
    FSTP float ptr [EAX + 0xc]          ; 005826e2
    PUSH 0x1e                           ; 005826e5
        ;   Label: LAB_005826e5
    MOV EAX,[0x0067cf44]                ; 005826e7 | g_CKeysPtr
    PUSH EAX                            ; 005826ec | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005826ed | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005826ef
    ADD ESP,0x8                         ; 005826f1
    TEST EAX,EAX                        ; 005826f4
    JZ 0x00582704                       ; 005826f6
        ;   XREF to: 00582704 (CONDITIONAL_JUMP)  ; LAB_00582704
    MOV EAX,dword ptr [EBP + 0x76]      ; 005826f8
    FLD float ptr [EAX + 0x10]          ; 005826fb
    FSUB float ptr [EBP + 0x6a]         ; 005826fe
    FSTP float ptr [EAX + 0x10]         ; 00582701
    PUSH 0x10                           ; 00582704
        ;   Label: LAB_00582704
    MOV EAX,[0x0067cf44]                ; 00582706 | g_CKeysPtr
    PUSH EAX                            ; 0058270b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058270c | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0058270e
    ADD ESP,0x8                         ; 00582710
    TEST EAX,EAX                        ; 00582713
    JZ 0x00582723                       ; 00582715
        ;   XREF to: 00582723 (CONDITIONAL_JUMP)  ; LAB_00582723
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582717
    FLD float ptr [EAX + 0x10]          ; 0058271a
    FADD float ptr [EBP + 0x6a]         ; 0058271d
    FSTP float ptr [EAX + 0x10]         ; 00582720
    PUSH 0x50                           ; 00582723
        ;   Label: LAB_00582723
    MOV EAX,[0x0067cf44]                ; 00582725 | g_CKeysPtr
    PUSH EAX                            ; 0058272a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058272b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0058272d
    ADD ESP,0x8                         ; 0058272f
    TEST EAX,EAX                        ; 00582732
    JZ 0x00582742                       ; 00582734
        ;   XREF to: 00582742 (CONDITIONAL_JUMP)  ; LAB_00582742
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582736
    FLD float ptr [EAX + 0x14]          ; 00582739
    FSUB float ptr [EBP + 0x6a]         ; 0058273c
    FSTP float ptr [EAX + 0x14]         ; 0058273f
    PUSH 0x48                           ; 00582742
        ;   Label: LAB_00582742
    MOV EAX,[0x0067cf44]                ; 00582744 | g_CKeysPtr
    PUSH EAX                            ; 00582749 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0058274a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0058274c
    ADD ESP,0x8                         ; 0058274e
    TEST EAX,EAX                        ; 00582751
    JZ 0x00582761                       ; 00582753
        ;   XREF to: 00582761 (CONDITIONAL_JUMP)  ; LAB_00582761
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582755
    FLD float ptr [EAX + 0x14]          ; 00582758
    FADD float ptr [EBP + 0x6a]         ; 0058275b
    FSTP float ptr [EAX + 0x14]         ; 0058275e
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582761
        ;   Label: LAB_00582761
    MOV EDI,0x3f800000                  ; 00582764
    MOV EDX,dword ptr [EAX + 0xc]       ; 00582769
    MOV dword ptr [EBP + 0x62],EDI      ; 0058276c
    CMP EDX,EDI                         ; 0058276f
    JGE 0x00582779                      ; 00582771
        ;   XREF to: 00582779 (CONDITIONAL_JUMP)  ; LAB_00582779
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582773
    MOV dword ptr [EAX + 0xc],EDI       ; 00582776
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582779
        ;   Label: LAB_00582779
    FLD float ptr [EAX + 0x10]          ; 0058277c
    FCOMP float ptr [EBP + 0x62]        ; 0058277f
    FNSTSW AX                           ; 00582782
    SAHF                                ; 00582784
    JNC 0x00582790                      ; 00582785
        ;   XREF to: 00582790 (CONDITIONAL_JUMP)  ; LAB_00582790
    MOV EDX,dword ptr [EBP + 0x76]      ; 00582787
    MOV EAX,dword ptr [EBP + 0x62]      ; 0058278a
    MOV dword ptr [EDX + 0x10],EAX      ; 0058278d
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582790
        ;   Label: LAB_00582790
    FLD float ptr [EAX + 0x14]          ; 00582793
    FCOMP float ptr [EBP + 0x62]        ; 00582796
    FNSTSW AX                           ; 00582799
    SAHF                                ; 0058279b
    JNC 0x00581e5f                      ; 0058279c
        ;   XREF to: 00581e5f (CONDITIONAL_JUMP)  ; LAB_00581e5f
    MOV EDX,dword ptr [EBP + 0x76]      ; 005827a2
    MOV EAX,dword ptr [EBP + 0x62]      ; 005827a5
    MOV dword ptr [EDX + 0x14],EAX      ; 005827a8
    JMP 0x00581e5f                      ; 005827ab
        ;   XREF to: 00581e5f (UNCONDITIONAL_JUMP)  ; LAB_00581e5f
    PUSH 0x2a                           ; 005827b0
        ;   Label: LAB_005827b0
    MOV EAX,[0x0067cf44]                ; 005827b2 | g_CKeysPtr
    PUSH EAX                            ; 005827b7 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005827b8 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005827ba
    ADD ESP,0x8                         ; 005827bc
    TEST EAX,EAX                        ; 005827bf
    JZ 0x00582520                       ; 005827c1
        ;   XREF to: 00582520 (CONDITIONAL_JUMP)  ; LAB_00582520
    FLD float ptr [EBP + 0x56]          ; 005827c7
    FLD ST0                             ; 005827ca
    FMUL double ptr [0x00648c0d]        ; 005827cc | DOUBLE_00648c0d
    FSTP ST1                            ; 005827d2
    JMP 0x0058251d                      ; 005827d4
        ;   XREF to: 0058251d (UNCONDITIONAL_JUMP)  ; LAB_0058251d
    LEA EAX,[EBP + -0x5e]               ; 005827d9
        ;   Label: LAB_005827d9
    PUSH EAX                            ; 005827dc
    MOV EBX,dword ptr [EBP + 0x76]      ; 005827dd
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 005827e0
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    LEA EAX,[EBP + -0x5e]               ; 005827e5
    ADD ESP,0x4                         ; 005827e8
    CMP EAX,EBX                         ; 005827eb
    JZ 0x00582800                       ; 005827ed
        ;   XREF to: 00582800 (CONDITIONAL_JUMP)  ; LAB_00582800
    MOV EAX,dword ptr [EBX]             ; 005827ef
    MOV dword ptr [EBP + -0x5e],EAX     ; 005827f1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005827f4
    MOV dword ptr [EBP + -0x5a],EAX     ; 005827f7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005827fa
    MOV dword ptr [EBP + -0x56],EAX     ; 005827fd
    LEA EAX,[EBP + 0x1e]                ; 00582800
        ;   Label: LAB_00582800
    PUSH EAX                            ; 00582803
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582804
    ADD EAX,0x18                        ; 00582807
    PUSH EAX                            ; 0058280a
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0058280b
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EBX,EAX                         ; 00582810
    LEA EAX,[EBP + -0x52]               ; 00582812
    ADD ESP,0x8                         ; 00582815
    CMP EAX,EBX                         ; 00582818
    JZ 0x0058282d                       ; 0058281a
        ;   XREF to: 0058282d (CONDITIONAL_JUMP)  ; LAB_0058282d
    MOV EAX,dword ptr [EBX]             ; 0058281c
    MOV dword ptr [EBP + -0x52],EAX     ; 0058281e
    MOV EAX,dword ptr [EBX + 0x4]       ; 00582821
    MOV dword ptr [EBP + -0x4e],EAX     ; 00582824
    MOV EAX,dword ptr [EBX + 0x8]       ; 00582827
    MOV dword ptr [EBP + -0x4a],EAX     ; 0058282a
    LEA EAX,[EBP + -0x5e]               ; 0058282d
        ;   Label: LAB_0058282d
    PUSH EAX                            ; 00582830
    MOV ESI,dword ptr [EBP + 0x76]      ; 00582831
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 00582834
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[EBP + -0x5e]               ; 00582839
    ADD ESP,0x4                         ; 0058283c
    CMP EAX,ESI                         ; 0058283f
    JZ 0x00582854                       ; 00582841
        ;   XREF to: 00582854 (CONDITIONAL_JUMP)  ; LAB_00582854
    MOV EAX,dword ptr [EBP + -0x5e]     ; 00582843
    MOV dword ptr [ESI],EAX             ; 00582846
    MOV EAX,dword ptr [EBP + -0x5a]     ; 00582848
    MOV dword ptr [ESI + 0x4],EAX       ; 0058284b
    MOV EAX,dword ptr [EBP + -0x56]     ; 0058284e
    MOV dword ptr [ESI + 0x8],EAX       ; 00582851
    LEA EAX,[EBP + -0x52]               ; 00582854
        ;   Label: LAB_00582854
    PUSH EAX                            ; 00582857
    MOV EAX,dword ptr [EBP + 0x76]      ; 00582858
    ADD EAX,0x18                        ; 0058285b
    PUSH EAX                            ; 0058285e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0058285f
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00582864
    JMP 0x00581e5f                      ; 00582867
        ;   XREF to: 00581e5f (UNCONDITIONAL_JUMP)  ; LAB_00581e5f
    PUSH 0x0                            ; 0058286c
        ;   Label: LAB_0058286c
    JMP 0x00581f15                      ; 0058286e
        ;   XREF to: 00581f15 (UNCONDITIONAL_JUMP)  ; LAB_00581f15
    MOV EAX,dword ptr [EBP + 0x92]      ; 00582873
        ;   Label: LAB_00582873
    MOV EAX,dword ptr [EAX + 0x15aebc]  ; 00582879
    DEC EAX                             ; 0058287f
    MOV dword ptr [EBP + 0x72],EAX      ; 00582880
    JMP 0x00581f5e                      ; 00582883
        ;   XREF to: 00581f5e (UNCONDITIONAL_JUMP)  ; LAB_00581f5e
    MOV EBX,dword ptr [EBP + 0x72]      ; 00582888
        ;   Label: LAB_00582888
    MOV EDX,dword ptr [EBP + 0x92]      ; 0058288b
    INC EBX                             ; 00582891
    MOV ESI,dword ptr [EDX + 0x15aebc]  ; 00582892
    MOV dword ptr [EBP + 0x72],EBX      ; 00582898
    CMP EBX,ESI                         ; 0058289b
    JL 0x00581f5e                       ; 0058289d
        ;   XREF to: 00581f5e (CONDITIONAL_JUMP)  ; LAB_00581f5e
    MOV dword ptr [EBP + 0x72],EAX      ; 005828a3
    JMP 0x00581f5e                      ; 005828a6
        ;   XREF to: 00581f5e (UNCONDITIONAL_JUMP)  ; LAB_00581f5e
    PUSH 0x0                            ; 005828ab
        ;   Label: LAB_005828ab
    LEA EAX,[EBP + 0xfffffb52]          ; 005828ad
    PUSH EAX                            ; 005828b3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 005828b4
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005828b9
    JMP 0x005820cc                      ; 005828bc
        ;   XREF to: 005820cc (UNCONDITIONAL_JUMP)  ; LAB_005820cc
    PUSH 0x648b9c                       ; 005828c1 | = "Max number of rooms has been reached,..."
        ;   Label: LAB_005828c1
    MOV EBX,dword ptr [0x00678a60]      ; 005828c6 | g_CEditorToolsPtr
    PUSH EBX                            ; 005828cc | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005828cd
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005828d2
    JMP 0x005820cc                      ; 005828d5
        ;   XREF to: 005820cc (UNCONDITIONAL_JUMP)  ; LAB_005820cc
    PUSH 0x0                            ; 005828da
        ;   Label: LAB_005828da
    JMP 0x00582244                      ; 005828dc
        ;   XREF to: 00582244 (UNCONDITIONAL_JUMP)  ; LAB_00582244
    MOV ECX,dword ptr [EBP + 0x92]      ; 005828e1
        ;   Label: LAB_005828e1
    PUSH ECX                            ; 005828e7
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 005828e8
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005828ed
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005828f0
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,dword ptr [EBP + 0x92]      ; 005828f5
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 005828fb
    MOV dword ptr [EAX + 0x15ac90],0x0  ; 00582905
    MOV dword ptr [EAX + 0x15ac84],0x0  ; 0058290f
    LEA ESP,[EBP + 0x7e]                ; 00582919
    POP EBP                             ; 0058291c
    POP EDI                             ; 0058291d
    POP ESI                             ; 0058291e
    POP EBX                             ; 0058291f
    RET                                 ; 00582920

