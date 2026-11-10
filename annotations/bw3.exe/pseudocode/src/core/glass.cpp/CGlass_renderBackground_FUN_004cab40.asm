; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004cab40(CGlass *this_ptr,int layer_flag)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 DAT_005e0bc0
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004cab40
        ;   Label: core_glass.cpp_CGlass_renderBackground_FUN_004cab40
    PUSH EDI                            ; 004cab41
    PUSH EBP                            ; 004cab42
    SUB ESP,0x30                        ; 004cab43
    MOV EBP,dword ptr [ESP + 0x40]      ; 004cab46
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cab4a
    CMP dword ptr [EBP + 0x3a0],0x0     ; 004cab4e
    JZ 0x004cacd3                       ; 004cab55
        ;   XREF to: 004cacd3 (CONDITIONAL_JUMP)  ; LAB_004cacd3
    TEST EAX,EAX                        ; 004cab5b
    JNZ 0x004cab6c                      ; 004cab5d
        ;   XREF to: 004cab6c (CONDITIONAL_JUMP)  ; LAB_004cab6c
    CMP dword ptr [EBP + 0xb6c],0x0     ; 004cab5f
    JZ 0x004cacba                       ; 004cab66
        ;   XREF to: 004cacba (CONDITIONAL_JUMP)  ; LAB_004cacba
    PUSH EBP                            ; 004cab6c
        ;   Label: LAB_004cab6c
    MOV dword ptr [EBP + 0xb6c],0x0     ; 004cab6d
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004cab77
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cab7c
    PUSH 0x0                            ; 004cab7f
    MOV EDX,dword ptr [EBP + 0x154]     ; 004cab81
    PUSH EBP                            ; 004cab87
    LEA ESI,[ESP + 0x20]                ; 004cab88
    LEA EDI,[ESP + 0x8]                 ; 004cab8c
    CALL dword ptr [EDX + 0x1c]         ; 004cab90
    MOV ECX,0x6                         ; 004cab93
    ADD ESP,0x4                         ; 004cab98
    LEA EDX,[ESP + 0x4]                 ; 004cab9b
    LEA ESI,[ESP + 0x1c]                ; 004cab9f
    PUSH EDX                            ; 004caba3
    MOVSD.REP ES:EDI,ESI                ; 004caba4
    CALL core_box.cpp_FUN_0041daf0      ; 004caba6
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    MOV EDI,dword ptr [EBP + 0x1b0]     ; 004cabab
    ADD ESP,0x8                         ; 004cabb1
    TEST EDI,EDI                        ; 004cabb4
    JZ 0x004cacc1                       ; 004cabb6
        ;   XREF to: 004cacc1 (CONDITIONAL_JUMP)  ; LAB_004cacc1
    LEA EDX,[EBP + 0x3a4]               ; 004cabbc
    PUSH EDX                            ; 004cabc2
    MOV EDX,dword ptr [0x005f2afc]      ; 004cabc3 | DAT_005f2afc
    PUSH EDX                            ; 004cabc9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cabca
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004cabca
    ADD ESP,0x8                         ; 004cabcf
    PUSH EBX                            ; 004cabd2
    LEA ECX,[EBP + 0x3bc]               ; 004cabd3
    MOV EBX,dword ptr [EBP + 0xb64]     ; 004cabd9
    LEA EDI,[EBP + 0x4e8]               ; 004cabdf
    XOR ESI,ESI                         ; 004cabe5
    MOV EDX,EDI                         ; 004cabe7
    TEST EBX,EBX                        ; 004cabe9
    JLE 0x004cac30                      ; 004cabeb
        ;   XREF to: 004cac30 (CONDITIONAL_JUMP)  ; LAB_004cac30
    MOV EBX,EDX                         ; 004cabed
        ;   Label: LAB_004cabed
    MOV EAX,ECX                         ; 004cabef
    FLD float ptr [EAX]                 ; 004cabf1
    FMUL float ptr [0x005e0bc0]         ; 004cabf3 | DAT_005e0bc0
    FISTP dword ptr [EBX]               ; 004cabf9
    FLD float ptr [EAX + 0x4]           ; 004cabfb
    FMUL float ptr [0x005e0bc0]         ; 004cabfe | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x4]         ; 004cac04
    FLD float ptr [EAX + 0x8]           ; 004cac07
    FMUL float ptr [0x005e0bc0]         ; 004cac0a | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x8]         ; 004cac10
    INC ESI                             ; 004cac13
    ADD ECX,0xc                         ; 004cac14
    MOV EAX,dword ptr [EBP + 0xb64]     ; 004cac17
    ADD EDX,0xc                         ; 004cac1d
    CMP ESI,EAX                         ; 004cac20
    JL 0x004cabed                       ; 004cac22
        ;   XREF to: 004cabed (CONDITIONAL_JUMP)  ; LAB_004cabed
    LEA EAX,[EAX]                       ; 004cac24
    LEA EDX,[EDX]                       ; 004cac2a
    PUSH EDI                            ; 004cac30
        ;   Label: LAB_004cac30
    MOV EDX,dword ptr [EBP + 0xb64]     ; 004cac31
    PUSH EDX                            ; 004cac37
    MOV ECX,dword ptr [0x00603b28]      ; 004cac38 | g_CDemonSetPtr
    PUSH ECX                            ; 004cac3e | g_CDemonSetInstance
    XOR EDI,EDI                         ; 004cac3f
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 004cac41
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EBX,dword ptr [EBP + 0xb68]     ; 004cac46
    ADD ESP,0xc                         ; 004cac4c
    TEST EBX,EBX                        ; 004cac4f
    JLE 0x004cacb0                      ; 004cac51
        ;   XREF to: 004cacb0 (CONDITIONAL_JUMP)  ; LAB_004cacb0
    LEA ESI,[EBP + 0x6dc]               ; 004cac53
    MOV EBX,EBP                         ; 004cac59
    PUSH 0xc1                           ; 004cac5b
        ;   Label: LAB_004cac5b
    MOV dword ptr [EBX + 0x6e4],0x0     ; 004cac60
    MOV EAX,[0x005f2afc]                ; 004cac6a | DAT_005f2afc
    MOV dword ptr [EBX + 0x6e8],0x0     ; 004cac6f
    PUSH ESI                            ; 004cac79
    INC EDI                             ; 004cac7a
    MOV dword ptr [EBX + 0x6ec],0x0     ; 004cac7b
    PUSH EAX                            ; 004cac85 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x6f0],0x0     ; 004cac86
    ADD EBX,0x48                        ; 004cac90
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 004cac93
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESI,0x48                        ; 004cac98
    MOV EDX,dword ptr [EBP + 0xb68]     ; 004cac9b
    ADD ESP,0xc                         ; 004caca1
    CMP EDI,EDX                         ; 004caca4
    JL 0x004cac5b                       ; 004caca6
        ;   XREF to: 004cac5b (CONDITIONAL_JUMP)  ; LAB_004cac5b
    LEA EAX,[EAX]                       ; 004caca8
    MOV EDX,EDX                         ; 004cacae
    PUSH EBP                            ; 004cacb0
        ;   Label: LAB_004cacb0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004cacb1
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cacb6
    POP EBX                             ; 004cacb9
    ADD ESP,0x30                        ; 004cacba
        ;   Label: LAB_004cacba
    POP EBP                             ; 004cacbd
    POP EDI                             ; 004cacbe
    POP ESI                             ; 004cacbf
    RET                                 ; 004cacc0
    LEA EDX,[EBP + 0x164]               ; 004cacc1
        ;   Label: LAB_004cacc1
    PUSH EDX                            ; 004cacc7
    MOV EAX,[0x005f2afc]                ; 004cacc8 | DAT_005f2afc
    PUSH EAX                            ; 004caccd | DAT_01bdd7e4
    JMP 0x004cabca                      ; 004cacce
        ;   XREF to: 004cabca (UNCONDITIONAL_JUMP)  ; LAB_004cabca
    TEST EAX,EAX                        ; 004cacd3
        ;   Label: LAB_004cacd3
    JZ 0x004cacba                       ; 004cacd5
        ;   XREF to: 004cacba (CONDITIONAL_JUMP)  ; LAB_004cacba
    CMP dword ptr [EBP + 0x1b0],0x0     ; 004cacd7
    JZ 0x004cacba                       ; 004cacde
        ;   XREF to: 004cacba (CONDITIONAL_JUMP)  ; LAB_004cacba
    CMP dword ptr [EBP + 0x218],0x0     ; 004cace0
    JZ 0x004cacba                       ; 004cace7
        ;   XREF to: 004cacba (CONDITIONAL_JUMP)  ; LAB_004cacba
    PUSH EBP                            ; 004cace9
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940 ; 004cacea
        ;   XREF to: 004ca940 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004cacef
    ADD ESP,0x30                        ; 004cacf2
    POP EBP                             ; 004cacf5
    POP EDI                             ; 004cacf6
    POP ESI                             ; 004cacf7
    RET                                 ; 004cacf8

