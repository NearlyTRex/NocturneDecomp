; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_FUN_004e1db0(CGlass *this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[2]:
;   core_glass.cpp_FUN_004e1fb0 at 004e215a
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e53e
;
; Referenced Globals:
;   undefined4 DAT_00601450
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1db0
        ;   Label: core_glass.cpp_FUN_004e1db0
    PUSH EDI                            ; 004e1db1
    PUSH EBP                            ; 004e1db2
    SUB ESP,0x3c                        ; 004e1db3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004e1db6
    PUSH EDX                            ; 004e1dba
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004e1dbb
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1dc0
    PUSH 0x0                            ; 004e1dc3
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e1dc5
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1dc9
    PUSH ECX                            ; 004e1dcd
    MOV EAX,dword ptr [EAX + 0x154]     ; 004e1dce
    LEA ESI,[ESP + 0x20]                ; 004e1dd4
    LEA EDI,[ESP + 0x8]                 ; 004e1dd8
    CALL dword ptr [EAX + 0x1c]         ; 004e1ddc
    MOV ECX,0x6                         ; 004e1ddf
    ADD ESP,0x4                         ; 004e1de4
    LEA EAX,[ESP + 0x4]                 ; 004e1de7
    LEA ESI,[ESP + 0x1c]                ; 004e1deb
    PUSH EAX                            ; 004e1def
    MOVSD.REP ES:EDI,ESI                ; 004e1df0
    CALL core_box.cpp_FUN_004207b0      ; 004e1df2
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004e1df7
    TEST EAX,EAX                        ; 004e1dfa
    JZ 0x004e1f85                       ; 004e1dfc
        ;   XREF to: 004e1f85 (CONDITIONAL_JUMP)  ; LAB_004e1f85
    PUSH EBX                            ; 004e1e02
    MOV EBX,dword ptr [0x00612560]      ; 004e1e03 | DAT_00612560
    PUSH EBX                            ; 004e1e09 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004e1e0a
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e1e0f
    MOV EBX,dword ptr [ESP + 0x50]      ; 004e1e12
    ADD EBX,0x374                       ; 004e1e16
    TEST EAX,EAX                        ; 004e1e1c
    JZ 0x004e1f99                       ; 004e1e1e
        ;   XREF to: 004e1f99 (CONDITIONAL_JUMP)  ; LAB_004e1f99
    PUSH 0x0                            ; 004e1e24
    MOV EDI,dword ptr [0x00612560]      ; 004e1e26 | DAT_00612560
    PUSH EDI                            ; 004e1e2c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 004e1e2d
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004e1e32
    PUSH EBX                            ; 004e1e35
    MOV EBP,dword ptr [0x00612560]      ; 004e1e36 | DAT_00612560
    PUSH EBP                            ; 004e1e3c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e1e3d
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004e1e42
    PUSH 0x1                            ; 004e1e45
    MOV EAX,[0x00612560]                ; 004e1e47 | DAT_00612560
    PUSH EAX                            ; 004e1e4c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 004e1e4d
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004e1e52
        ;   Label: LAB_004e1e52
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1e55
    MOV EDX,dword ptr [EAX + 0xb34]     ; 004e1e59
    XOR EBP,EBP                         ; 004e1e5f
    TEST EDX,EDX                        ; 004e1e61
    JLE 0x004e1ef0                      ; 004e1e63
        ;   XREF to: 004e1ef0 (CONDITIONAL_JUMP)  ; LAB_004e1ef0
    LEA EDI,[EAX + 0x38c]               ; 004e1e69
    XOR ESI,ESI                         ; 004e1e6f
    LEA EBX,[ESP + 0x34]                ; 004e1e71
        ;   Label: LAB_004e1e71
    MOV EAX,EDI                         ; 004e1e75
    MOV EDX,dword ptr [0x00612560]      ; 004e1e77 | DAT_00612560
    FLD float ptr [EAX]                 ; 004e1e7d
    FMUL float ptr [0x00601450]         ; 004e1e7f | DAT_00601450
    FISTP dword ptr [EBX]               ; 004e1e85
    FLD float ptr [EAX + 0x4]           ; 004e1e87
    FMUL float ptr [0x00601450]         ; 004e1e8a | DAT_00601450
    FISTP dword ptr [EBX + 0x4]         ; 004e1e90
    FLD float ptr [EAX + 0x8]           ; 004e1e93
    FMUL float ptr [0x00601450]         ; 004e1e96 | DAT_00601450
    FISTP dword ptr [EBX + 0x8]         ; 004e1e9c
    LEA EAX,[ESP + 0x34]                ; 004e1e9f
    PUSH EAX                            ; 004e1ea3
    MOV EAX,dword ptr [EDX]             ; 004e1ea4 | DAT_01bc120c
    ADD EAX,ESI                         ; 004e1ea6
    PUSH EAX                            ; 004e1ea8
    CALL engine_special.cpp_FUN_00580173 ; 004e1ea9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004e1eae | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 004e1eb3 | DAT_01bc120c
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004e1eb5
    MOV EBX,dword ptr [EAX]             ; 004e1ebd | DAT_01bc120c
    MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff ; 004e1ebf
    MOV EAX,dword ptr [EAX]             ; 004e1ec7 | DAT_01bc120c
    ADD ESP,0x8                         ; 004e1ec9
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 004e1ecc
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1ed4
    INC EBP                             ; 004e1ed8
    ADD EDI,0xc                         ; 004e1ed9
    MOV EBX,dword ptr [EAX + 0xb34]     ; 004e1edc
    ADD ESI,0x30                        ; 004e1ee2
    CMP EBP,EBX                         ; 004e1ee5
    JL 0x004e1e71                       ; 004e1ee7
        ;   XREF to: 004e1e71 (CONDITIONAL_JUMP)  ; LAB_004e1e71
    LEA EAX,[EAX]                       ; 004e1ee9
    NOP                                 ; 004e1eef
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1ef0
        ;   Label: LAB_004e1ef0
    MOV ESI,dword ptr [EAX + 0x17c]     ; 004e1ef4
    PUSH ESI                            ; 004e1efa
    MOV EDI,dword ptr [0x00612560]      ; 004e1efb | DAT_00612560
    PUSH EDI                            ; 004e1f01 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e1f02
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e1f07
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1f0a
    MOV EBP,dword ptr [EAX + 0xb38]     ; 004e1f0e
    XOR EBX,EBX                         ; 004e1f14
    TEST EBP,EBP                        ; 004e1f16
    JLE 0x004e1f70                      ; 004e1f18
        ;   XREF to: 004e1f70 (CONDITIONAL_JUMP)  ; LAB_004e1f70
    LEA EDI,[EAX + 0x6ac]               ; 004e1f1a
    MOV ESI,EAX                         ; 004e1f20
    MOV dword ptr [ESI + 0x6b4],0x0     ; 004e1f22
        ;   Label: LAB_004e1f22
    PUSH EDI                            ; 004e1f2c
    MOV dword ptr [ESI + 0x6b8],0x0     ; 004e1f2d
    MOV EAX,[0x00612560]                ; 004e1f37 | DAT_00612560
    MOV dword ptr [ESI + 0x6bc],0x0     ; 004e1f3c
    PUSH EAX                            ; 004e1f46 | DAT_01bc120c
    MOV dword ptr [ESI + 0x6c0],0x0     ; 004e1f47
    CALL engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0 ; 004e1f51
        ;   XREF to: 004828b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_004828b0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004e1f56
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e1f59
    ADD ESI,0x48                        ; 004e1f5d
    INC EBX                             ; 004e1f60
    MOV EDX,dword ptr [EAX + 0xb38]     ; 004e1f61
    ADD EDI,0x48                        ; 004e1f67
    CMP EBX,EDX                         ; 004e1f6a
    JL 0x004e1f22                       ; 004e1f6c
        ;   XREF to: 004e1f22 (CONDITIONAL_JUMP)  ; LAB_004e1f22
    MOV EAX,EAX                         ; 004e1f6e
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e1f70
        ;   Label: LAB_004e1f70
    PUSH ECX                            ; 004e1f74
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e1f75
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1f7a
    POP EBX                             ; 004e1f7d
    ADD ESP,0x3c                        ; 004e1f7e
    POP EBP                             ; 004e1f81
    POP EDI                             ; 004e1f82
    POP ESI                             ; 004e1f83
    RET                                 ; 004e1f84
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004e1f85
        ;   Label: LAB_004e1f85
    PUSH ECX                            ; 004e1f89
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e1f8a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1f8f
    ADD ESP,0x3c                        ; 004e1f92
    POP EBP                             ; 004e1f95
    POP EDI                             ; 004e1f96
    POP ESI                             ; 004e1f97
    RET                                 ; 004e1f98
    PUSH EBX                            ; 004e1f99
        ;   Label: LAB_004e1f99
    MOV ESI,dword ptr [0x00612560]      ; 004e1f9a | DAT_00612560
    PUSH ESI                            ; 004e1fa0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e1fa1
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    JMP 0x004e1e52                      ; 004e1fa6
        ;   XREF to: 004e1e52 (UNCONDITIONAL_JUMP)  ; LAB_004e1e52

