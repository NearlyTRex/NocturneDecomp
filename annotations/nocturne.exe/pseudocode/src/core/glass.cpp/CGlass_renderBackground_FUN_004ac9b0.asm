; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004ac9b0(CGlass *this_ptr,int layer_flag)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_0059e390
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_glass.cpp_CGlass_FUN_004ac7c0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004ac9b0
        ;   Label: core_glass.cpp_CGlass_renderBackground_FUN_004ac9b0
    PUSH EBP                            ; 004ac9b1
    SUB ESP,0x18                        ; 004ac9b2
    MOV EBP,dword ptr [ESP + 0x24]      ; 004ac9b5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ac9b9
    CMP dword ptr [EBP + 0x368],0x0     ; 004ac9bd
    JZ 0x004acb33                       ; 004ac9c4
        ;   XREF to: 004acb33 (CONDITIONAL_JUMP)  ; LAB_004acb33
    TEST EAX,EAX                        ; 004ac9ca
    JNZ 0x004ac9db                      ; 004ac9cc
        ;   XREF to: 004ac9db (CONDITIONAL_JUMP)  ; LAB_004ac9db
    CMP dword ptr [EBP + 0xb34],0x0     ; 004ac9ce
    JZ 0x004acb1b                       ; 004ac9d5
        ;   XREF to: 004acb1b (CONDITIONAL_JUMP)  ; LAB_004acb1b
    PUSH EBP                            ; 004ac9db
        ;   Label: LAB_004ac9db
    MOV dword ptr [EBP + 0xb34],0x0     ; 004ac9dc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004ac9e6
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac9eb
    PUSH 0x0                            ; 004ac9ee
    LEA EAX,[ESP + 0x4]                 ; 004ac9f0
    PUSH EAX                            ; 004ac9f4
    MOV EDX,dword ptr [EBP + 0x14c]     ; 004ac9f5
    PUSH EBP                            ; 004ac9fb
    CALL dword ptr [EDX + 0x14]         ; 004ac9fc
    ADD ESP,0x8                         ; 004ac9ff
    PUSH EAX                            ; 004aca02
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004aca03
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    MOV EDI,dword ptr [EBP + 0x178]     ; 004aca08
    ADD ESP,0x8                         ; 004aca0e
    TEST EDI,EDI                        ; 004aca11
    JZ 0x004acb21                       ; 004aca13
        ;   XREF to: 004acb21 (CONDITIONAL_JUMP)  ; LAB_004acb21
    LEA EAX,[EBP + 0x36c]               ; 004aca19
    PUSH EAX                            ; 004aca1f
    MOV EDX,dword ptr [0x005ae704]      ; 004aca20 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004aca26 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004aca27
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004aca27
    ADD ESP,0x8                         ; 004aca2c
    PUSH ESI                            ; 004aca2f
    PUSH EBX                            ; 004aca30
    LEA ECX,[EBP + 0x384]               ; 004aca31
    MOV EBX,dword ptr [EBP + 0xb2c]     ; 004aca37
    LEA EDI,[EBP + 0x4b0]               ; 004aca3d
    XOR ESI,ESI                         ; 004aca43
    MOV EDX,EDI                         ; 004aca45
    TEST EBX,EBX                        ; 004aca47
    JLE 0x004aca90                      ; 004aca49
        ;   XREF to: 004aca90 (CONDITIONAL_JUMP)  ; LAB_004aca90
    MOV EBX,EDX                         ; 004aca4b
        ;   Label: LAB_004aca4b
    MOV EAX,ECX                         ; 004aca4d
    FLD float ptr [EAX]                 ; 004aca4f
    FMUL float ptr [0x0059e390]         ; 004aca51 | DAT_0059e390
    FISTP dword ptr [EBX]               ; 004aca57
    FLD float ptr [EAX + 0x4]           ; 004aca59
    FMUL float ptr [0x0059e390]         ; 004aca5c | DAT_0059e390
    FISTP dword ptr [EBX + 0x4]         ; 004aca62
    FLD float ptr [EAX + 0x8]           ; 004aca65
    FMUL float ptr [0x0059e390]         ; 004aca68 | DAT_0059e390
    FISTP dword ptr [EBX + 0x8]         ; 004aca6e
    INC ESI                             ; 004aca71
    ADD ECX,0xc                         ; 004aca72
    MOV EAX,dword ptr [EBP + 0xb2c]     ; 004aca75
    ADD EDX,0xc                         ; 004aca7b
    CMP ESI,EAX                         ; 004aca7e
    JL 0x004aca4b                       ; 004aca80
        ;   XREF to: 004aca4b (CONDITIONAL_JUMP)  ; LAB_004aca4b
    LEA EAX,[EAX]                       ; 004aca82
    LEA EDX,[EDX]                       ; 004aca88
    MOV EAX,EAX                         ; 004aca8e
    PUSH EDI                            ; 004aca90
        ;   Label: LAB_004aca90
    MOV EDX,dword ptr [EBP + 0xb2c]     ; 004aca91
    PUSH EDX                            ; 004aca97
    MOV ECX,dword ptr [0x005be368]      ; 004aca98 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004aca9e | g_CDemonSet_01e57284
    XOR EDI,EDI                         ; 004aca9f
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 004acaa1
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EBX,dword ptr [EBP + 0xb30]     ; 004acaa6
    ADD ESP,0xc                         ; 004acaac
    TEST EBX,EBX                        ; 004acaaf
    JLE 0x004acb10                      ; 004acab1
        ;   XREF to: 004acb10 (CONDITIONAL_JUMP)  ; LAB_004acb10
    LEA ESI,[EBP + 0x6a4]               ; 004acab3
    MOV EBX,EBP                         ; 004acab9
    PUSH 0xc1                           ; 004acabb
        ;   Label: LAB_004acabb
    MOV dword ptr [EBX + 0x6ac],0x0     ; 004acac0
    MOV EAX,[0x005ae704]                ; 004acaca | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [EBX + 0x6b0],0x0     ; 004acacf
    PUSH ESI                            ; 004acad9
    INC EDI                             ; 004acada
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004acadb
    PUSH EAX                            ; 004acae5 | DAT_01b4d738
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004acae6
    ADD EBX,0x48                        ; 004acaf0
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 004acaf3
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESI,0x48                        ; 004acaf8
    MOV EDX,dword ptr [EBP + 0xb30]     ; 004acafb
    ADD ESP,0xc                         ; 004acb01
    CMP EDI,EDX                         ; 004acb04
    JL 0x004acabb                       ; 004acb06
        ;   XREF to: 004acabb (CONDITIONAL_JUMP)  ; LAB_004acabb
    LEA EAX,[EAX]                       ; 004acb08
    MOV EDX,EDX                         ; 004acb0e
    PUSH EBP                            ; 004acb10
        ;   Label: LAB_004acb10
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004acb11
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004acb16
    POP EBX                             ; 004acb19
    POP ESI                             ; 004acb1a
    ADD ESP,0x18                        ; 004acb1b
        ;   Label: LAB_004acb1b
    POP EBP                             ; 004acb1e
    POP EDI                             ; 004acb1f
    RET                                 ; 004acb20
    LEA EAX,[EBP + 0x15c]               ; 004acb21
        ;   Label: LAB_004acb21
    PUSH EAX                            ; 004acb27
    MOV EAX,[0x005ae704]                ; 004acb28 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004acb2d | DAT_01b4d738
    JMP 0x004aca27                      ; 004acb2e
        ;   XREF to: 004aca27 (UNCONDITIONAL_JUMP)  ; LAB_004aca27
    TEST EAX,EAX                        ; 004acb33
        ;   Label: LAB_004acb33
    JZ 0x004acb1b                       ; 004acb35
        ;   XREF to: 004acb1b (CONDITIONAL_JUMP)  ; LAB_004acb1b
    CMP dword ptr [EBP + 0x178],0x0     ; 004acb37
    JZ 0x004acb1b                       ; 004acb3e
        ;   XREF to: 004acb1b (CONDITIONAL_JUMP)  ; LAB_004acb1b
    CMP dword ptr [EBP + 0x1e0],0x0     ; 004acb40
    JZ 0x004acb1b                       ; 004acb47
        ;   XREF to: 004acb1b (CONDITIONAL_JUMP)  ; LAB_004acb1b
    PUSH EBP                            ; 004acb49
    CALL core_glass.cpp_CGlass_FUN_004ac7c0 ; 004acb4a
        ;   XREF to: 004ac7c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_FUN_004ac7c0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004acb4f
    ADD ESP,0x18                        ; 004acb52
    POP EBP                             ; 004acb55
    POP EDI                             ; 004acb56
    RET                                 ; 004acb57

