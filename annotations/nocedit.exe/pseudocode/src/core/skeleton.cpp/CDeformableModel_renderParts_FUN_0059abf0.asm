; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderParts_FUN_0059abf0(CDeformableModel *this_ptr,int lod_index,byte *part_visibility_flags,int *texture_set_indices,int render_flags,int special_render_mode)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; byte *           Stack[0xc]:4   part_visibility_flags
; int *            Stack[0x10]:4   texture_set_indices
; int              Stack[0x14]:4   render_flags
; int              Stack[0x18]:4   special_render_mode
; Local Variables:
; undefined4       Stack[-0x130]:4  local_130
; undefined1       Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
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
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 at 005a0379
;
; Referenced Globals:
;   float g_NormalVisualizationBias = 127
;   double g_NormalVisualizationScale = 127
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   undefined4 g_InverseMatrix[1][1]
;   undefined4 g_InverseMatrix[1][2]
;   undefined4 g_InverseMatrix[2][0]
;   undefined4 g_InverseMatrix[2][1]
;   undefined4 g_InverseMatrix[2][2]
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570870
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059abf0
        ;   Label: core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0
    PUSH ESI                            ; 0059abf1
    PUSH EDI                            ; 0059abf2
    PUSH EBP                            ; 0059abf3
    MOV EBP,ESP                         ; 0059abf4
    SUB ESP,0x120                       ; 0059abf6
    AND ESP,0xfffffff8                  ; 0059abfc
    MOV EDX,dword ptr [0x006703ec]      ; 0059abff | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0059ac05 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0059ac06
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0059ac0b
    MOV dword ptr [ESP + 0xac],EAX      ; 0059ac0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059ac15
    MOV ECX,dword ptr [EBP + 0x14]      ; 0059ac18
    SHL EAX,0x3                         ; 0059ac1b
    ADD EAX,ECX                         ; 0059ac1e
    MOV EAX,dword ptr [EAX + 0x8]       ; 0059ac20
    MOV dword ptr [ESP + 0xb0],EAX      ; 0059ac23
    TEST EAX,EAX                        ; 0059ac2a
    JZ 0x0059ac32                       ; 0059ac2c
        ;   XREF to: 0059ac32 (CONDITIONAL_JUMP)  ; LAB_0059ac32
    AND byte ptr [EBP + 0x24],0xfe      ; 0059ac2e
    PUSH 0x1                            ; 0059ac32
        ;   Label: LAB_0059ac32
    MOV ESI,dword ptr [0x006703ec]      ; 0059ac34 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0059ac3a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0059ac3b
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0059ac40
    XOR EDI,EDI                         ; 0059ac43
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ac45
    MOV dword ptr [ESP + 0x80],EDI      ; 0059ac48
    MOV EDX,dword ptr [EAX + 0x7140]    ; 0059ac4f
    MOV dword ptr [ESP + 0x74],EDI      ; 0059ac55
    TEST EDX,EDX                        ; 0059ac59
    JLE 0x0059ad6f                      ; 0059ac5b
        ;   XREF to: 0059ad6f (CONDITIONAL_JUMP)  ; LAB_0059ad6f
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059ac61
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ac64
    SHL EAX,0x2                         ; 0059ac67
    ADD EDX,EAX                         ; 0059ac6a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0059ac6c
    MOV dword ptr [ESP + 0xa0],EDX      ; 0059ac6f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ac76
    ADD EAX,EDI                         ; 0059ac79
    ADD EDX,0xc0                        ; 0059ac7b
    MOV dword ptr [ESP + 0x68],EAX      ; 0059ac81
    MOV dword ptr [ESP + 0x9c],EDX      ; 0059ac85
    MOV EDX,dword ptr [ESP + 0xa0]      ; 0059ac8c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0059ac93
    MOV dword ptr [ESP + 0x90],EDX      ; 0059ac96
    MOV dword ptr [ESP + 0x84],EDX      ; 0059ac9d
    MOV dword ptr [ESP + 0x88],EDX      ; 0059aca4
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0059acab
    MOV dword ptr [ESP + 0x78],EAX      ; 0059acae
    MOV dword ptr [ESP + 0x6c],EDX      ; 0059acb2
    MOV EAX,dword ptr [ESP + 0x68]      ; 0059acb6
        ;   Label: LAB_0059acb6
    MOV EDI,dword ptr [ESP + 0x80]      ; 0059acba
    MOV EDX,dword ptr [EAX + 0x7164]    ; 0059acc1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0059acc7
    ADD EDI,EDX                         ; 0059accb
    TEST byte ptr [EAX],0x1             ; 0059accd
    JZ 0x0059ad2d                       ; 0059acd0
        ;   XREF to: 0059ad2d (CONDITIONAL_JUMP)  ; LAB_0059ad2d
    CMP dword ptr [ESP + 0xac],0x0      ; 0059acd2
    JZ 0x0059aeec                       ; 0059acda
        ;   XREF to: 0059aeec (CONDITIONAL_JUMP)  ; LAB_0059aeec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ace0
        ;   Label: LAB_0059ace0
    CMP dword ptr [EAX + 0xbc],0x1      ; 0059ace3
    JNZ 0x0059b3ba                      ; 0059acea
        ;   XREF to: 0059b3ba (CONDITIONAL_JUMP)  ; LAB_0059b3ba
    CMP dword ptr [ESP + 0xac],0x0      ; 0059acf0
        ;   Label: LAB_0059acf0
    JZ 0x0059b4c3                       ; 0059acf8
        ;   XREF to: 0059b4c3 (CONDITIONAL_JUMP)  ; LAB_0059b4c3
    MOV ESI,dword ptr [EBP + 0x24]      ; 0059acfe
        ;   Label: LAB_0059acfe
    MOV EDX,dword ptr [ESP + 0x80]      ; 0059ad01
    MOV EAX,EDI                         ; 0059ad08
    PUSH ESI                            ; 0059ad0a
    SUB EAX,EDX                         ; 0059ad0b
    PUSH EAX                            ; 0059ad0d
    IMUL EAX,EDX,0x12                   ; 0059ad0e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0059ad11
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0059ad18
    ADD EAX,EDX                         ; 0059ad1b
    PUSH EAX                            ; 0059ad1d
    MOV EBX,dword ptr [0x006810c8]      ; 0059ad1e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0059ad24 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570870 ; 0059ad25
        ;   XREF to: 00570870 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0059ad2a
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0059ad2d
        ;   Label: LAB_0059ad2d
    MOV EBX,dword ptr [ESP + 0x68]      ; 0059ad31
    MOV ESI,dword ptr [ESP + 0x78]      ; 0059ad35
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ad39
    MOV dword ptr [ESP + 0x80],EDI      ; 0059ad3c
    MOV EDI,dword ptr [ESP + 0x74]      ; 0059ad43
    ADD ECX,0x4                         ; 0059ad47
    ADD EBX,0x60                        ; 0059ad4a
    ADD ESI,0x4                         ; 0059ad4d
    MOV dword ptr [ESP + 0x6c],ECX      ; 0059ad50
    MOV dword ptr [ESP + 0x68],EBX      ; 0059ad54
    MOV dword ptr [ESP + 0x78],ESI      ; 0059ad58
    INC EDI                             ; 0059ad5c
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0059ad5d
    MOV dword ptr [ESP + 0x74],EDI      ; 0059ad63
    CMP EDI,ECX                         ; 0059ad67
    JL 0x0059acb6                       ; 0059ad69
        ;   XREF to: 0059acb6 (CONDITIONAL_JUMP)  ; LAB_0059acb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059ad6f
        ;   Label: LAB_0059ad6f
    XOR EBX,EBX                         ; 0059ad72
    MOV ESI,dword ptr [EAX + 0x7140]    ; 0059ad74
    MOV dword ptr [ESP + 0x7c],EBX      ; 0059ad7a
    TEST ESI,ESI                        ; 0059ad7e
    JLE 0x0059aec3                      ; 0059ad80
        ;   XREF to: 0059aec3 (CONDITIONAL_JUMP)  ; LAB_0059aec3
    ADD EAX,0xc0                        ; 0059ad86
    MOV ESI,dword ptr [EBP + 0x14]      ; 0059ad8b
    MOV dword ptr [ESP + 0x8c],EAX      ; 0059ad8e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0059ad95
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0059ad98
    SHL EAX,0x2                         ; 0059ad9b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059ad9e
    ADD ESI,EAX                         ; 0059ada1
    ADD EAX,EBX                         ; 0059ada3
    MOV dword ptr [ESP + 0x64],EDX      ; 0059ada5
    MOV dword ptr [ESP + 0x70],EAX      ; 0059ada9
    MOV EDX,dword ptr [ESP + 0x70]      ; 0059adad
        ;   Label: LAB_0059adad
    MOV EAX,dword ptr [ESP + 0x80]      ; 0059adb1
    MOV EDI,dword ptr [EDX + 0x7178]    ; 0059adb8
    ADD EAX,EDI                         ; 0059adbe
    MOV dword ptr [ESP + 0xa8],EAX      ; 0059adc0
    MOV EAX,0xffffffff                  ; 0059adc7
    MOV EDX,dword ptr [ESP + 0x64]      ; 0059adcc
    MOV dword ptr [ESP + 0xcc],EAX      ; 0059add0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059add7
    MOV BL,byte ptr [EDX]               ; 0059addb
    SHL EAX,0x2                         ; 0059addd
    TEST BL,0x1                         ; 0059ade0
    JZ 0x0059ae85                       ; 0059ade3
        ;   XREF to: 0059ae85 (CONDITIONAL_JUMP)  ; LAB_0059ae85
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0059ade9
    MOV EBX,dword ptr [ESP + 0x80]      ; 0059adf0
    CMP EBX,ECX                         ; 0059adf7
    JGE 0x0059ae85                      ; 0059adf9
        ;   XREF to: 0059ae85 (CONDITIONAL_JUMP)  ; LAB_0059ae85
    MOV EDX,dword ptr [EBP + 0x20]      ; 0059adff
    ADD EDX,EAX                         ; 0059ae02
    IMUL EAX,EBX,0x12                   ; 0059ae04
    MOV dword ptr [ESP + 0xe8],EAX      ; 0059ae07
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059ae0e
    MOV dword ptr [ESP + 0x94],EDX      ; 0059ae15
    MOV dword ptr [ESP + 0xe4],EAX      ; 0059ae1c
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0059ae23
        ;   Label: LAB_0059ae23
    MOV EAX,dword ptr [ESI + 0x7c]      ; 0059ae2a
    MOV EDI,dword ptr [ESI + 0x54]      ; 0059ae2d
    ADD EDX,EAX                         ; 0059ae30
    MOV EAX,EBX                         ; 0059ae32
    SUB EAX,EDI                         ; 0059ae34
    MOV EDI,dword ptr [ESI + 0xa4]      ; 0059ae36
    MOV dword ptr [ESP + 0xc4],EDX      ; 0059ae3c
    MOV EAX,dword ptr [EDI + EAX*0x4]   ; 0059ae43
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0059ae46
    SHL EAX,0x2                         ; 0059ae49
    ADD EAX,EDX                         ; 0059ae4c
    TEST byte ptr [EAX],0x1             ; 0059ae4e
    JZ 0x0059b512                       ; 0059ae51
        ;   XREF to: 0059b512 (CONDITIONAL_JUMP)  ; LAB_0059b512
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0059ae57
        ;   Label: LAB_0059ae57
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0059ae5e
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0059ae65
    INC EBX                             ; 0059ae6c
    ADD EDI,0x12                        ; 0059ae6d
    ADD EAX,0x4                         ; 0059ae70
    MOV dword ptr [ESP + 0xe8],EDI      ; 0059ae73
    MOV dword ptr [ESP + 0xe4],EAX      ; 0059ae7a
    CMP EBX,EDX                         ; 0059ae81
    JL 0x0059ae23                       ; 0059ae83
        ;   XREF to: 0059ae23 (CONDITIONAL_JUMP)  ; LAB_0059ae23
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0059ae85
        ;   Label: LAB_0059ae85
    MOV EBX,dword ptr [ESP + 0x64]      ; 0059ae8c
    MOV EDI,dword ptr [ESP + 0x70]      ; 0059ae90
    MOV EDX,dword ptr [EBP + 0x14]      ; 0059ae94
    MOV dword ptr [ESP + 0x80],EAX      ; 0059ae97
    ADD EBX,0x4                         ; 0059ae9e
    ADD EDI,0x60                        ; 0059aea1
    MOV ECX,dword ptr [EDX + 0x7140]    ; 0059aea4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0059aeaa
    MOV dword ptr [ESP + 0x64],EBX      ; 0059aeae
    INC EAX                             ; 0059aeb2
    MOV dword ptr [ESP + 0x70],EDI      ; 0059aeb3
    MOV dword ptr [ESP + 0x7c],EAX      ; 0059aeb7
    CMP EAX,ECX                         ; 0059aebb
    JL 0x0059adad                       ; 0059aebd
        ;   XREF to: 0059adad (CONDITIONAL_JUMP)  ; LAB_0059adad
    PUSH 0x0                            ; 0059aec3
        ;   Label: LAB_0059aec3
    MOV EDX,dword ptr [0x006703ec]      ; 0059aec5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0059aecb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0059aecc
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0059aed1
    PUSH 0x1                            ; 0059aed4
    MOV ECX,dword ptr [0x006703ec]      ; 0059aed6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0059aedc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0059aedd
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0059aee2
    MOV ESP,EBP                         ; 0059aee5
    POP EBP                             ; 0059aee7
    POP EDI                             ; 0059aee8
    POP ESI                             ; 0059aee9
    POP EBX                             ; 0059aeea
    RET                                 ; 0059aeeb
    CMP dword ptr [ESP + 0xb0],0x0      ; 0059aeec
        ;   Label: LAB_0059aeec
    JZ 0x0059ace0                       ; 0059aef4
        ;   XREF to: 0059ace0 (CONDITIONAL_JUMP)  ; LAB_0059ace0
    PUSH 0x1                            ; 0059aefa
    MOV ESI,dword ptr [0x006703ec]      ; 0059aefc | g_CDemonRendererPtr2
    PUSH ESI                            ; 0059af02 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0059af03
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0059af08
    MOV EAX,dword ptr [ESP + 0x80]      ; 0059af0b
    CMP EDI,EAX                         ; 0059af12
    JLE 0x0059ad2d                      ; 0059af14
        ;   XREF to: 0059ad2d (CONDITIONAL_JUMP)  ; LAB_0059ad2d
    IMUL EAX,EAX,0x12                   ; 0059af1a
    MOV dword ptr [ESP + 0xec],EAX      ; 0059af1d
    IMUL EAX,EDI,0x12                   ; 0059af24
    MOV dword ptr [ESP + 0xa4],EAX      ; 0059af27
    MOV EAX,dword ptr [ESP + 0x88]      ; 0059af2e
        ;   Label: LAB_0059af2e
    MOV ESI,dword ptr [EAX + 0x7c]      ; 0059af35
    ADD ESI,dword ptr [ESP + 0xec]      ; 0059af38
    XOR ECX,ECX                         ; 0059af3f
    MOV CX,word ptr [ESI + 0x2]         ; 0059af41
    IMUL ECX,ECX,0x30                   ; 0059af45
    XOR EAX,EAX                         ; 0059af48
    MOV AX,word ptr [ESI]               ; 0059af4a
    IMUL EDX,EAX,0x30                   ; 0059af4d
    MOV EAX,[0x006703ec]                ; 0059af50 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 0059af55 | g_CDemonRendererInstance
    ADD EDX,EAX                         ; 0059af57
    LEA EBX,[EAX + ECX*0x1]             ; 0059af59
    XOR ECX,ECX                         ; 0059af5c
    MOV CX,word ptr [ESI + 0x4]         ; 0059af5e
    IMUL ECX,ECX,0x30                   ; 0059af62
    ADD EAX,ECX                         ; 0059af65
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059af67
    IMUL ECX,dword ptr [0x02f0d370]     ; 0059af6a | g_InverseMatrix[1][0]
    MOV dword ptr [ESP + 0x100],ECX     ; 0059af71
    MOV ECX,dword ptr [EDX]             ; 0059af78
    IMUL ECX,dword ptr [0x02f0d364]     ; 0059af7a | g_InverseMatrix
    ADD ECX,dword ptr [ESP + 0x100]     ; 0059af81
    MOV dword ptr [ESP + 0x104],ECX     ; 0059af88
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059af8f
    IMUL ECX,dword ptr [0x02f0d37c]     ; 0059af92 | g_InverseMatrix[2][0]
    MOV dword ptr [ESP + 0x100],ECX     ; 0059af99
    MOV ECX,dword ptr [ESP + 0x104]     ; 0059afa0
    ADD ECX,dword ptr [ESP + 0x100]     ; 0059afa7
    MOV dword ptr [ESP + 0x100],ECX     ; 0059afae
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059afb5
    IMUL ECX,dword ptr [0x02f0d374]     ; 0059afb8 | g_InverseMatrix[1][1]
    MOV dword ptr [ESP + 0x104],ECX     ; 0059afbf
    MOV ECX,dword ptr [EDX]             ; 0059afc6
    IMUL ECX,dword ptr [0x02f0d368]     ; 0059afc8 | g_InverseMatrix[0][1]
    ADD ECX,dword ptr [ESP + 0x104]     ; 0059afcf
    MOV dword ptr [ESP + 0x108],ECX     ; 0059afd6
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059afdd
    IMUL ECX,dword ptr [0x02f0d380]     ; 0059afe0 | g_InverseMatrix[2][1]
    MOV dword ptr [ESP + 0x104],ECX     ; 0059afe7
    MOV ECX,dword ptr [ESP + 0x108]     ; 0059afee
    ADD ECX,dword ptr [ESP + 0x104]     ; 0059aff5
    MOV dword ptr [ESP + 0x104],ECX     ; 0059affc
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059b003
    IMUL ECX,dword ptr [0x02f0d378]     ; 0059b006 | g_InverseMatrix[1][2]
    MOV dword ptr [ESP + 0x108],ECX     ; 0059b00d
    MOV ECX,dword ptr [EDX]             ; 0059b014
    IMUL ECX,dword ptr [0x02f0d36c]     ; 0059b016 | g_InverseMatrix[0][2]
    ADD ECX,dword ptr [ESP + 0x108]     ; 0059b01d
    MOV EDX,dword ptr [EDX + 0x8]       ; 0059b024
    MOV dword ptr [ESP + 0x108],ECX     ; 0059b027
    IMUL EDX,dword ptr [0x02f0d384]     ; 0059b02e | g_InverseMatrix[2][2]
    ADD EDX,dword ptr [ESP + 0x108]     ; 0059b035
    MOV ECX,dword ptr [0x02f0d370]      ; 0059b03c | g_InverseMatrix[1][0]
    MOV dword ptr [ESP + 0x108],EDX     ; 0059b042
    IMUL ECX,dword ptr [EBX + 0x4]      ; 0059b049
    MOV EDX,dword ptr [EBX]             ; 0059b04d
    IMUL EDX,dword ptr [0x02f0d364]     ; 0059b04f | g_InverseMatrix
    ADD EDX,ECX                         ; 0059b056
    MOV ECX,dword ptr [0x02f0d37c]      ; 0059b058 | g_InverseMatrix[2][0]
    MOV dword ptr [ESP + 0x10c],EDX     ; 0059b05e
    MOV EDX,dword ptr [EBX + 0x8]       ; 0059b065
    IMUL EDX,ECX                        ; 0059b068
    ADD EDX,dword ptr [ESP + 0x10c]     ; 0059b06b
    MOV ECX,dword ptr [0x02f0d374]      ; 0059b072 | g_InverseMatrix[1][1]
    MOV dword ptr [ESP + 0x10c],EDX     ; 0059b078
    MOV EDX,dword ptr [EBX + 0x4]       ; 0059b07f
    IMUL EDX,ECX                        ; 0059b082
    MOV ECX,dword ptr [EBX]             ; 0059b085
    IMUL ECX,dword ptr [0x02f0d368]     ; 0059b087 | g_InverseMatrix[0][1]
    ADD EDX,ECX                         ; 0059b08e
    MOV ECX,dword ptr [EBX + 0x8]       ; 0059b090
    IMUL ECX,dword ptr [0x02f0d380]     ; 0059b093 | g_InverseMatrix[2][1]
    ADD EDX,ECX                         ; 0059b09a
    MOV ECX,dword ptr [0x02f0d378]      ; 0059b09c | g_InverseMatrix[1][2]
    MOV dword ptr [ESP + 0x110],EDX     ; 0059b0a2
    MOV EDX,dword ptr [EBX + 0x4]       ; 0059b0a9
    IMUL EDX,ECX                        ; 0059b0ac
    MOV ECX,dword ptr [EBX]             ; 0059b0af
    IMUL ECX,dword ptr [0x02f0d36c]     ; 0059b0b1 | g_InverseMatrix[0][2]
    ADD ECX,EDX                         ; 0059b0b8
    MOV EDX,dword ptr [EBX + 0x8]       ; 0059b0ba
    IMUL EDX,dword ptr [0x02f0d384]     ; 0059b0bd | g_InverseMatrix[2][2]
    ADD EDX,ECX                         ; 0059b0c4
    MOV EBX,dword ptr [0x02f0d370]      ; 0059b0c6 | g_InverseMatrix[1][0]
    MOV dword ptr [ESP + 0x114],EDX     ; 0059b0cc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059b0d3
    IMUL EDX,EBX                        ; 0059b0d6
    MOV ECX,dword ptr [0x02f0d364]      ; 0059b0d9 | g_InverseMatrix
    MOV EBX,dword ptr [EAX]             ; 0059b0df
    IMUL EBX,ECX                        ; 0059b0e1
    MOV ECX,dword ptr [0x02f0d37c]      ; 0059b0e4 | g_InverseMatrix[2][0]
    ADD EBX,EDX                         ; 0059b0ea
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059b0ec
    IMUL EDX,ECX                        ; 0059b0ef
    ADD EDX,EBX                         ; 0059b0f2
    MOV dword ptr [ESP + 0x118],EDX     ; 0059b0f4
    MOV EBX,dword ptr [EAX + 0x4]       ; 0059b0fb
    IMUL EBX,dword ptr [0x02f0d374]     ; 0059b0fe | g_InverseMatrix[1][1]
    MOV ECX,dword ptr [0x02f0d368]      ; 0059b105 | g_InverseMatrix[0][1]
    MOV EDX,dword ptr [EAX]             ; 0059b10b
    IMUL EDX,ECX                        ; 0059b10d
    MOV ECX,dword ptr [0x02f0d380]      ; 0059b110 | g_InverseMatrix[2][1]
    ADD EBX,EDX                         ; 0059b116
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059b118
    IMUL EDX,ECX                        ; 0059b11b
    ADD EBX,EDX                         ; 0059b11e
    MOV EDX,dword ptr [0x02f0d378]      ; 0059b120 | g_InverseMatrix[1][2]
    MOV dword ptr [ESP + 0x11c],EBX     ; 0059b126
    MOV EBX,dword ptr [EAX + 0x4]       ; 0059b12d
    IMUL EBX,EDX                        ; 0059b130
    MOV ECX,dword ptr [0x02f0d36c]      ; 0059b133 | g_InverseMatrix[0][2]
    MOV EDX,dword ptr [EAX]             ; 0059b139
    IMUL EDX,ECX                        ; 0059b13b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0059b13e
    ADD EBX,EDX                         ; 0059b141
    IMUL EAX,dword ptr [0x02f0d384]     ; 0059b143 | g_InverseMatrix[2][2]
    FILD dword ptr [ESP + 0x100]        ; 0059b14a
    FILD dword ptr [ESP + 0x104]        ; 0059b151
    FILD dword ptr [ESP + 0x108]        ; 0059b158
    FSTP float ptr [ESP + 0xb8]         ; 0059b15f
    FILD dword ptr [ESP + 0x10c]        ; 0059b166
    FST float ptr [ESP + 0xdc]          ; 0059b16d
    FSUBRP ST2,ST0                      ; 0059b174
    FILD dword ptr [ESP + 0x110]        ; 0059b176
    FST float ptr [ESP + 0xd0]          ; 0059b17d
    FSUBRP                              ; 0059b184
    FXCH                                ; 0059b186
    FSTP float ptr [ESP + 0xe0]         ; 0059b188
    FSTP float ptr [ESP + 0xd8]         ; 0059b18f
    FILD dword ptr [ESP + 0x114]        ; 0059b196
    FSTP float ptr [ESP + 0xd4]         ; 0059b19d
    FILD dword ptr [ESP + 0x118]        ; 0059b1a4
    FSTP float ptr [ESP + 0xb4]         ; 0059b1ab
    ADD EBX,EAX                         ; 0059b1b2
    FILD dword ptr [ESP + 0x11c]        ; 0059b1b4
    MOV dword ptr [ESP + 0x11c],EBX     ; 0059b1bb
    FSTP float ptr [ESP + 0xbc]         ; 0059b1c2
    FILD dword ptr [ESP + 0x11c]        ; 0059b1c9
    FSTP float ptr [ESP + 0xc0]         ; 0059b1d0
    FLD float ptr [ESP + 0xd8]          ; 0059b1d7
    FLD float ptr [ESP + 0xd4]          ; 0059b1de
    FLD float ptr [ESP + 0xc0]          ; 0059b1e5
    FSUB ST0,ST1                        ; 0059b1ec
    FSTP float ptr [ESP + 0x60]         ; 0059b1ee
    FXCH                                ; 0059b1f2
    FMUL float ptr [ESP + 0x60]         ; 0059b1f4
    FLD float ptr [ESP + 0xbc]          ; 0059b1f8
    FSUB float ptr [ESP + 0xd0]         ; 0059b1ff
    FLD float ptr [ESP + 0xe0]          ; 0059b206
    FMUL ST1                            ; 0059b20d
    FLD float ptr [ESP + 0xb4]          ; 0059b20f
    FXCH ST4                            ; 0059b216
    FSUB float ptr [ESP + 0xb8]         ; 0059b218
    FXCH ST4                            ; 0059b21f
    FSUB float ptr [ESP + 0xdc]         ; 0059b221
    FLD ST0                             ; 0059b228
    FMUL ST5                            ; 0059b22a
    FXCH ST3                            ; 0059b22c
    FMULP ST5                           ; 0059b22e
    FMUL float ptr [ESP + 0xd8]         ; 0059b230
    FLD float ptr [ESP + 0xe0]          ; 0059b237
    FXCH ST5                            ; 0059b23e
    FSUBP ST4,ST0                       ; 0059b240
    FXCH ST4                            ; 0059b242
    FMUL float ptr [ESP + 0x60]         ; 0059b244
    FXCH ST3                            ; 0059b248
    FSTP float ptr [ESP + 0xfc]         ; 0059b24a
    FXCH ST2                            ; 0059b251
    FSUBP                               ; 0059b253
    FLD float ptr [ESP + 0xfc]          ; 0059b255
    FMUL ST0                            ; 0059b25c
    FXCH                                ; 0059b25e
    FST float ptr [ESP + 0xf4]          ; 0059b260
    FMUL float ptr [ESP + 0xf4]         ; 0059b267
    FXCH ST3                            ; 0059b26e
    FSUBP ST2,ST0                       ; 0059b270
    FADDP ST2,ST0                       ; 0059b272
    FST float ptr [ESP + 0xf8]          ; 0059b274
    FMUL float ptr [ESP + 0xf8]         ; 0059b27b
    FADDP                               ; 0059b282
    FLDZ                                ; 0059b284
    FXCH                                ; 0059b286
    FSTP float ptr [ESP]                ; 0059b288
    FCOMP float ptr [ESP]               ; 0059b28b
    FNSTSW AX                           ; 0059b28e
    SAHF                                ; 0059b290
    JNC 0x0059b3ae                      ; 0059b291
        ;   XREF to: 0059b3ae (CONDITIONAL_JUMP)  ; LAB_0059b3ae
    FLD float ptr [ESP]                 ; 0059b297
    FSQRT                               ; 0059b29a
    FDIVR double ptr [0x0064e858]       ; 0059b29c | g_NormalVisualizationScale
    FSTP float ptr [ESP]                ; 0059b2a2
    FLD float ptr [ESP]                 ; 0059b2a5
        ;   Label: LAB_0059b2a5
    FLD float ptr [ESP + 0xfc]          ; 0059b2a8
    FMUL ST1                            ; 0059b2af
    FLD float ptr [ESP + 0xf4]          ; 0059b2b1
    FMUL ST2                            ; 0059b2b8
    FLD float ptr [ESP + 0xf8]          ; 0059b2ba
    FMULP ST3                           ; 0059b2c1
    FXCH                                ; 0059b2c3
    FSTP float ptr [ESP + 0xfc]         ; 0059b2c5
    FSTP float ptr [ESP + 0xf4]         ; 0059b2cc
    FST float ptr [ESP + 0xf8]          ; 0059b2d3
    FLD float ptr [ESP + 0xf4]          ; 0059b2da
    FLD float ptr [ESP + 0xfc]          ; 0059b2e1
    FXCH ST2                            ; 0059b2e8
    FLD float ptr [0x0064e850]          ; 0059b2ea | g_NormalVisualizationBias
    FXCH                                ; 0059b2f0
    FADD ST0,ST1                        ; 0059b2f2
    FXCH ST2                            ; 0059b2f4
    FADD ST0,ST1                        ; 0059b2f6
    FXCH ST3                            ; 0059b2f8
    FADDP                               ; 0059b2fa
    FXCH                                ; 0059b2fc
    CALL crt_math.c_round_FUN_005fe6b0  ; 0059b2fe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0059b303
    CALL crt_math.c_round_FUN_005fe6b0  ; 0059b305
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0059b30a
    FISTP dword ptr [ESP + 0x104]       ; 0059b30c
    FXCH                                ; 0059b313
    FISTP dword ptr [ESP + 0x100]       ; 0059b315
    MOV EAX,dword ptr [ESP + 0x104]     ; 0059b31c
    MOV EDX,dword ptr [ESP + 0x100]     ; 0059b323
    PUSH EAX                            ; 0059b32a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0059b32b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EDX                            ; 0059b330
    FISTP dword ptr [ESP + 0x108]       ; 0059b331
    MOV ECX,dword ptr [ESP + 0x108]     ; 0059b338
    PUSH ECX                            ; 0059b33f
    MOV EBX,dword ptr [0x006703ec]      ; 0059b340 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0059b346 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 0059b347
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,0x3                         ; 0059b34c
    ADD ESP,0x10                        ; 0059b351
    MOV dword ptr [ESP + 0x8],EAX       ; 0059b354
    XOR EAX,EAX                         ; 0059b358
    MOV AX,word ptr [ESI]               ; 0059b35a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059b35d
    XOR EAX,EAX                         ; 0059b361
    MOV AX,word ptr [ESI + 0x2]         ; 0059b363
    MOV dword ptr [ESP + 0x28],EAX      ; 0059b367
    XOR EAX,EAX                         ; 0059b36b
    MOV AX,word ptr [ESI + 0x4]         ; 0059b36d
    MOV dword ptr [ESP + 0x34],EAX      ; 0059b371
    LEA EAX,[ESP + 0x4]                 ; 0059b375
    PUSH EAX                            ; 0059b379
    MOV EDX,dword ptr [0x006703ec]      ; 0059b37a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0059b380 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 ; 0059b381
        ;   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0059b386
    MOV ECX,dword ptr [ESP + 0xec]      ; 0059b389
    ADD ECX,0x12                        ; 0059b390
    MOV EBX,dword ptr [ESP + 0xa4]      ; 0059b393
    MOV dword ptr [ESP + 0xec],ECX      ; 0059b39a
    CMP ECX,EBX                         ; 0059b3a1
    JGE 0x0059ad2d                      ; 0059b3a3
        ;   XREF to: 0059ad2d (CONDITIONAL_JUMP)  ; LAB_0059ad2d
    JMP 0x0059af2e                      ; 0059b3a9
        ;   XREF to: 0059af2e (UNCONDITIONAL_JUMP)  ; LAB_0059af2e
    MOV dword ptr [ESP],0x42fe0000      ; 0059b3ae
        ;   Label: LAB_0059b3ae
    JMP 0x0059b2a5                      ; 0059b3b5
        ;   XREF to: 0059b2a5 (UNCONDITIONAL_JUMP)  ; LAB_0059b2a5
    CMP dword ptr [ESP + 0xac],0x0      ; 0059b3ba
        ;   Label: LAB_0059b3ba
    JNZ 0x0059acf0                      ; 0059b3c2
        ;   XREF to: 0059acf0 (CONDITIONAL_JUMP)  ; LAB_0059acf0
    CMP dword ptr [EBP + 0x28],0x0      ; 0059b3c8
    JNZ 0x0059acf0                      ; 0059b3cc
        ;   XREF to: 0059acf0 (CONDITIONAL_JUMP)  ; LAB_0059acf0
    CMP dword ptr [ESP + 0xb0],0x0      ; 0059b3d2
    JNZ 0x0059acf0                      ; 0059b3da
        ;   XREF to: 0059acf0 (CONDITIONAL_JUMP)  ; LAB_0059acf0
    MOV dword ptr [ESP + 0xc8],0xffffffff ; 0059b3e0
    MOV EAX,dword ptr [ESP + 0x80]      ; 0059b3eb
    MOV dword ptr [ESP + 0xf0],EAX      ; 0059b3f2
    CMP EDI,EAX                         ; 0059b3f9
    JLE 0x0059ad2d                      ; 0059b3fb
        ;   XREF to: 0059ad2d (CONDITIONAL_JUMP)  ; LAB_0059ad2d
    MOV EAX,dword ptr [ESP + 0x78]      ; 0059b401
    MOV dword ptr [ESP + 0x98],EAX      ; 0059b405
    MOV EDX,dword ptr [ESP + 0x84]      ; 0059b40c
        ;   Label: LAB_0059b40c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0059b413
    MOV EDX,dword ptr [EDX + 0x90]      ; 0059b41a
    LEA EBX,[EAX + 0x1]                 ; 0059b420
    MOV ESI,dword ptr [EDX + EAX*0x4]   ; 0059b423
    CMP EBX,EDI                         ; 0059b426
    JGE 0x0059b448                      ; 0059b428
        ;   XREF to: 0059b448 (CONDITIONAL_JUMP)  ; LAB_0059b448
    MOV EDX,dword ptr [ESP + 0x90]      ; 0059b42a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059b431
    MOV EDX,dword ptr [EDX + 0x90]      ; 0059b438
    ADD EAX,EDX                         ; 0059b43e
    CMP ESI,dword ptr [EAX]             ; 0059b440
        ;   Label: LAB_0059b440
    JZ 0x0059b501                       ; 0059b442
        ;   XREF to: 0059b501 (CONDITIONAL_JUMP)  ; LAB_0059b501
    CMP ESI,dword ptr [ESP + 0xc8]      ; 0059b448
        ;   Label: LAB_0059b448
    JZ 0x0059b480                       ; 0059b44f
        ;   XREF to: 0059b480 (CONDITIONAL_JUMP)  ; LAB_0059b480
    MOV EAX,dword ptr [ESP + 0x98]      ; 0059b451
    IMUL EAX,dword ptr [EAX],0x1680     ; 0059b458
    IMUL EDX,ESI,0x48                   ; 0059b45e
    ADD EAX,dword ptr [ESP + 0x9c]      ; 0059b461
    ADD EAX,EDX                         ; 0059b468
    PUSH EAX                            ; 0059b46a
    MOV EAX,[0x006703ec]                ; 0059b46b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0059b470 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0059b471
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0059b476
    MOV dword ptr [ESP + 0xc8],ESI      ; 0059b479
    MOV EAX,dword ptr [EBP + 0x24]      ; 0059b480
        ;   Label: LAB_0059b480
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0059b483
    PUSH EAX                            ; 0059b48a
    MOV EAX,EBX                         ; 0059b48b
    SUB EAX,EDX                         ; 0059b48d
    PUSH EAX                            ; 0059b48f
    IMUL EAX,EDX,0x12                   ; 0059b490
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0059b493
    MOV EDX,dword ptr [EDX + 0x7c]      ; 0059b49a
    ADD EAX,EDX                         ; 0059b49d
    PUSH EAX                            ; 0059b49f
    MOV ESI,dword ptr [0x006810c8]      ; 0059b4a0 | g_CDemonSetPtr
    PUSH ESI                            ; 0059b4a6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570870 ; 0059b4a7
        ;   XREF to: 00570870 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0059b4ac
    MOV dword ptr [ESP + 0xf0],EBX      ; 0059b4af
    CMP EBX,EDI                         ; 0059b4b6
    JL 0x0059b40c                       ; 0059b4b8
        ;   XREF to: 0059b40c (CONDITIONAL_JUMP)  ; LAB_0059b40c
    JMP 0x0059ad2d                      ; 0059b4be
        ;   XREF to: 0059ad2d (UNCONDITIONAL_JUMP)  ; LAB_0059ad2d
    CMP dword ptr [EBP + 0x28],0x0      ; 0059b4c3
        ;   Label: LAB_0059b4c3
    JNZ 0x0059acfe                      ; 0059b4c7
        ;   XREF to: 0059acfe (CONDITIONAL_JUMP)  ; LAB_0059acfe
    CMP dword ptr [ESP + 0xb0],0x0      ; 0059b4cd
    JNZ 0x0059acfe                      ; 0059b4d5
        ;   XREF to: 0059acfe (CONDITIONAL_JUMP)  ; LAB_0059acfe
    MOV EAX,dword ptr [ESP + 0x78]      ; 0059b4db
    IMUL EAX,dword ptr [EAX],0x1680     ; 0059b4df
    ADD EAX,dword ptr [ESP + 0x9c]      ; 0059b4e5
    PUSH EAX                            ; 0059b4ec
    MOV EBX,dword ptr [0x006703ec]      ; 0059b4ed | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0059b4f3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0059b4f4
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0059b4f9
    JMP 0x0059acfe                      ; 0059b4fc
        ;   XREF to: 0059acfe (UNCONDITIONAL_JUMP)  ; LAB_0059acfe
    INC EBX                             ; 0059b501
        ;   Label: LAB_0059b501
    ADD EAX,0x4                         ; 0059b502
    CMP EBX,EDI                         ; 0059b505
    JL 0x0059b440                       ; 0059b507
        ;   XREF to: 0059b440 (CONDITIONAL_JUMP)  ; LAB_0059b440
    JMP 0x0059b448                      ; 0059b50d
        ;   XREF to: 0059b448 (UNCONDITIONAL_JUMP)  ; LAB_0059b448
    CMP dword ptr [ESP + 0xac],0x0      ; 0059b512
        ;   Label: LAB_0059b512
    JNZ 0x0059b577                      ; 0059b51a
        ;   XREF to: 0059b577 (CONDITIONAL_JUMP)  ; LAB_0059b577
    CMP dword ptr [EBP + 0x28],0x0      ; 0059b51c
    JNZ 0x0059b577                      ; 0059b520
        ;   XREF to: 0059b577 (CONDITIONAL_JUMP)  ; LAB_0059b577
    CMP dword ptr [ESP + 0xb0],0x0      ; 0059b522
    JNZ 0x0059b577                      ; 0059b52a
        ;   XREF to: 0059b577 (CONDITIONAL_JUMP)  ; LAB_0059b577
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0059b52c
    MOV EAX,dword ptr [ESI + 0x90]      ; 0059b533
    ADD EAX,EDX                         ; 0059b539
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0059b53b
    MOV EDI,dword ptr [EAX]             ; 0059b542
    CMP EDI,ECX                         ; 0059b544
    JZ 0x0059b577                       ; 0059b546
        ;   XREF to: 0059b577 (CONDITIONAL_JUMP)  ; LAB_0059b577
    MOV EAX,dword ptr [ESP + 0x94]      ; 0059b548
    IMUL EAX,dword ptr [EAX],0x1680     ; 0059b54f
    IMUL EDX,EDI,0x48                   ; 0059b555
    ADD EAX,dword ptr [ESP + 0x8c]      ; 0059b558
    ADD EAX,EDX                         ; 0059b55f
    PUSH EAX                            ; 0059b561
    MOV EAX,[0x006703ec]                ; 0059b562 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0059b567 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0059b568
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0059b56d
    MOV dword ptr [ESP + 0xcc],EDI      ; 0059b570
    MOV EDX,dword ptr [EBP + 0x24]      ; 0059b577
        ;   Label: LAB_0059b577
    PUSH EDX                            ; 0059b57a
    PUSH 0x1                            ; 0059b57b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 0059b57d
    PUSH ECX                            ; 0059b584
    MOV EDI,dword ptr [0x006810c8]      ; 0059b585 | g_CDemonSetPtr
    PUSH EDI                            ; 0059b58b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_00570870 ; 0059b58c
        ;   XREF to: 00570870 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570870(CDemonSet * this_ptr)
    ADD ESP,0x10                        ; 0059b591
    JMP 0x0059ae57                      ; 0059b594
        ;   XREF to: 0059ae57 (UNCONDITIONAL_JUMP)  ; LAB_0059ae57

