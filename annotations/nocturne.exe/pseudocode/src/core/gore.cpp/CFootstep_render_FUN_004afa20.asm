; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_render_FUN_004afa20(CFootstep *this_ptr,int expire_flag)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004afe80 at 004aff4e
;
; Referenced Globals:
;   float FLOAT_0059e4d4 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   SMRGLTextureBasic g_FootstepTexture
;   SRenderVertex[20000] g_SRenderVertex_ARRAY_005c5014
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].v
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[0].b
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].projected_vertex.transformed_x
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].u
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].v
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].r
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].g
;   undefined4 g_SRenderVertex_ARRAY_005c5014[1].b
;   ... and 20 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afa20
        ;   Label: core_gore.cpp_CFootstep_render_FUN_004afa20
    PUSH ESI                            ; 004afa21
    PUSH EDI                            ; 004afa22
    PUSH EBP                            ; 004afa23
    SUB ESP,0xc                         ; 004afa24
    MOV EDX,0x4                         ; 004afa27
    MOV EBX,0x1                         ; 004afa2c
    MOV ESI,0x2                         ; 004afa31
    MOV EDI,0x3                         ; 004afa36
    MOV EBP,0x80000                     ; 004afa3b
    XOR ECX,ECX                         ; 004afa40
    MOV dword ptr [0x01c78cc4],EDX      ; 004afa42 | g_SMRGLHeaderPrimitive_01c78cc0.base.count
    MOV dword ptr [0x01c78cd8],ECX      ; 004afa48 | DAT_01c78cd8
    MOV dword ptr [0x01c78cdc],EBX      ; 004afa4e | DAT_01c78cdc
    MOV dword ptr [0x01c78ce0],ESI      ; 004afa54 | DAT_01c78ce0
    MOV dword ptr [0x01c78ce4],EDI      ; 004afa5a | DAT_01c78ce4
    MOV dword ptr [0x005c502c],EBP      ; 004afa60 | g_SRenderVertex_ARRAY_005c5014[0].u
    MOV dword ptr [0x005c5030],EBP      ; 004afa66 | g_SRenderVertex_ARRAY_005c5014[0].v
    MOV EDX,0xf80000                    ; 004afa6c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afa71
    MOV dword ptr [0x005c505c],EDX      ; 004afa75 | g_SRenderVertex_ARRAY_005c5014[1].u
    MOV dword ptr [0x005c508c],EDX      ; 004afa7b | g_SRenderVertex_ARRAY_005c5014[2].u
    MOV dword ptr [0x005c5090],EDX      ; 004afa81 | g_SRenderVertex_ARRAY_005c5014[2].v
    MOV EAX,dword ptr [EBX + 0x38]      ; 004afa87
    MOV dword ptr [0x005c50c0],EDX      ; 004afa8a | g_SRenderVertex_ARRAY_005c5014[3].v
    PUSH EAX                            ; 004afa90
    MOV EDX,dword ptr [0x005ae704]      ; 004afa91 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [0x005c5060],EBP      ; 004afa97 | g_SRenderVertex_ARRAY_005c5014[1].v
    PUSH EDX                            ; 004afa9d | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x005c50bc],EBP      ; 004afa9e | g_SRenderVertex_ARRAY_005c5014[3].u
    MOV EDI,0x5c5014                    ; 004afaa4 | g_SRenderVertex_ARRAY_005c5014
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004afaa9
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004afaae
    MOV EBP,dword ptr [0x005ae704]      ; 004afab1 | g_CDemonRenderer_PTR_005ae704
    XOR ECX,ECX                         ; 004afab7
    PUSH 0x5ba84c                       ; 004afab9 | g_FootstepTexture
    MOV dword ptr [0x01c78cc8],ECX      ; 004afabe | g_SMRGLHeaderPrimitive_01c78cc0.surface_normal.A
    MOV dword ptr [0x01c78ccc],ECX      ; 004afac4 | g_SMRGLHeaderPrimitive_01c78cc0.surface_normal.B
    PUSH EBP                            ; 004afaca | g_CDemonRenderer_01b4d738
    MOV dword ptr [0x01c78cd0],ECX      ; 004afacb | g_SMRGLHeaderPrimitive_01c78cc0.surface_normal.C
    MOV dword ptr [0x01c78cd4],ECX      ; 004afad1 | g_SMRGLHeaderPrimitive_01c78cc0.surface_normal.D
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004afad7
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBP,[EBX + 0x8]                 ; 004afadc
    ADD ESP,0x8                         ; 004afadf
    MOV ESI,EBP                         ; 004afae2
    ADD EBP,0x30                        ; 004afae4
    MOV EBX,ESP                         ; 004afae7
        ;   Label: LAB_004afae7
    MOV EAX,ESI                         ; 004afae9
    FLD float ptr [EAX]                 ; 004afaeb
    FMUL float ptr [0x0059e4d4]         ; 004afaed | FLOAT_0059e4d4
    FISTP dword ptr [EBX]               ; 004afaf3
    FLD float ptr [EAX + 0x4]           ; 004afaf5
    FMUL float ptr [0x0059e4d4]         ; 004afaf8 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x4]         ; 004afafe
    FLD float ptr [EAX + 0x8]           ; 004afb01
    FMUL float ptr [0x0059e4d4]         ; 004afb04 | FLOAT_0059e4d4
    FISTP dword ptr [EBX + 0x8]         ; 004afb0a
    MOV EBX,ESP                         ; 004afb0d
    PUSH EBX                            ; 004afb0f
    PUSH EDI                            ; 004afb10 | g_SRenderVertex_ARRAY_005c5014 | g_SRenderVertex_ARRAY_005c5014[1].projected_vertex.transformed_x
    ADD ESI,0xc                         ; 004afb11
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004afb14
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004afb19
    ADD EDI,0x30                        ; 004afb1c
    CMP ESI,EBP                         ; 004afb1f
    JNZ 0x004afae7                      ; 004afb21
        ;   XREF to: 004afae7 (CONDITIONAL_JUMP)  ; LAB_004afae7
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb23
    CMP dword ptr [EBX + 0x3c],0x0      ; 004afb27
    JZ 0x004afc37                       ; 004afb2b
        ;   XREF to: 004afc37 (CONDITIONAL_JUMP)  ; LAB_004afc37
    MOV EDI,0x5c5034                    ; 004afb31 | g_SRenderVertex_ARRAY_005c5014[0].r
    MOV EBP,0x5c5038                    ; 004afb36 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afb3b
    MOV ESI,0x5c503c                    ; 004afb3e | g_SRenderVertex_ARRAY_005c5014[0].b
    CMP EBX,0x1                         ; 004afb43
    JC 0x004afca4                       ; 004afb46
        ;   XREF to: 004afca4 (CONDITIONAL_JUMP)  ; LAB_004afca4
    JA 0x004afc9f                       ; 004afb4c
        ;   XREF to: 004afc9f (CONDITIONAL_JUMP)  ; LAB_004afc9f
    MOV EDI,0x7f80                      ; 004afb52
    XOR ESI,ESI                         ; 004afb57
    MOV dword ptr [0x005c5038],EDI      ; 004afb59 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [0x005c503c],ESI      ; 004afb5f | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV dword ptr [0x005c5034],ESI      ; 004afb65 | g_SRenderVertex_ARRAY_005c5014[0].r
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb6b
        ;   Label: LAB_004afb6b
    MOV EBP,0x5c5064                    ; 004afb6f | g_SRenderVertex_ARRAY_005c5014[1].r
    MOV ESI,0x5c5068                    ; 004afb74 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afb79
    MOV EDI,0x5c506c                    ; 004afb7c | g_SRenderVertex_ARRAY_005c5014[1].b
    CMP EBX,0x1                         ; 004afb81
    JNC 0x004afcf0                      ; 004afb84
        ;   XREF to: 004afcf0 (CONDITIONAL_JUMP)  ; LAB_004afcf0
    MOV dword ptr [EBP],0x2000          ; 004afb8a | g_SRenderVertex_ARRAY_005c5014[1].r
        ;   Label: LAB_004afb8a
    MOV dword ptr [ESI],0x0             ; 004afb91 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV dword ptr [EDI],0x0             ; 004afb97 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afb9d
        ;   Label: LAB_004afb9d
    MOV EBP,0x5c5094                    ; 004afba1 | g_SRenderVertex_ARRAY_005c5014[2].r
    MOV ESI,0x5c5098                    ; 004afba6 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afbab
    MOV EDI,0x5c509c                    ; 004afbae | g_SRenderVertex_ARRAY_005c5014[2].b
    CMP EBX,0x1                         ; 004afbb3
    JNC 0x004afd33                      ; 004afbb6
        ;   XREF to: 004afd33 (CONDITIONAL_JUMP)  ; LAB_004afd33
    MOV dword ptr [EBP],0x2000          ; 004afbbc | g_SRenderVertex_ARRAY_005c5014[2].r
        ;   Label: LAB_004afbbc
    MOV dword ptr [ESI],0x0             ; 004afbc3 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [EDI],0x0             ; 004afbc9 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afbcf
        ;   Label: LAB_004afbcf
    MOV EBP,0x5c50c4                    ; 004afbd3 | g_SRenderVertex_ARRAY_005c5014[3].r
    MOV EDI,0x5c50c8                    ; 004afbd8 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV EBX,dword ptr [EBX + 0x4]       ; 004afbdd
    MOV ESI,0x5c50cc                    ; 004afbe0 | g_SRenderVertex_ARRAY_005c5014[3].b
    CMP EBX,0x1                         ; 004afbe5
    JC 0x004afd3f                       ; 004afbe8
        ;   XREF to: 004afd3f (CONDITIONAL_JUMP)  ; LAB_004afd3f
    JBE 0x004afd57                      ; 004afbee
        ;   XREF to: 004afd57 (CONDITIONAL_JUMP)  ; LAB_004afd57
    CMP EBX,0x2                         ; 004afbf4
    JNZ 0x004afd3f                      ; 004afbf7
        ;   XREF to: 004afd3f (CONDITIONAL_JUMP)  ; LAB_004afd3f
    XOR EDI,EDI                         ; 004afbfd
    MOV dword ptr [0x005c50c8],EDI      ; 004afbff | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [0x005c50cc],EDI      ; 004afc05 | g_SRenderVertex_ARRAY_005c5014[3].b
    MOV dword ptr [0x005c50c4],EDI      ; 004afc0b | g_SRenderVertex_ARRAY_005c5014[3].r
    PUSH 0x1c78cc0                      ; 004afc11
        ;   Label: LAB_004afc11
    MOV ECX,dword ptr [0x005ae704]      ; 004afc16 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004afc1c | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 004afc1d
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004afc22
    MOV EBX,dword ptr [ESP + 0x20]      ; 004afc25
    MOV dword ptr [EBX],0x1             ; 004afc29
    ADD ESP,0xc                         ; 004afc2f
    POP EBP                             ; 004afc32
    POP EDI                             ; 004afc33
    POP ESI                             ; 004afc34
    POP EBX                             ; 004afc35
    RET                                 ; 004afc36
    MOV ESI,0x7ff                       ; 004afc37
        ;   Label: LAB_004afc37
    MOV dword ptr [0x005c5038],ESI      ; 004afc3c | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [0x005c503c],ESI      ; 004afc42 | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV dword ptr [0x005c5064],ESI      ; 004afc48 | g_SRenderVertex_ARRAY_005c5014[1].r
    MOV dword ptr [0x005c5068],ESI      ; 004afc4e | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV dword ptr [0x005c506c],ESI      ; 004afc54 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV dword ptr [0x005c5094],ESI      ; 004afc5a | g_SRenderVertex_ARRAY_005c5014[2].r
    MOV dword ptr [0x005c5098],ESI      ; 004afc60 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [0x005c509c],ESI      ; 004afc66 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV dword ptr [0x005c50c4],ESI      ; 004afc6c | g_SRenderVertex_ARRAY_005c5014[3].r
    MOV dword ptr [0x005c50c8],ESI      ; 004afc72 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [0x005c50cc],ESI      ; 004afc78 | g_SRenderVertex_ARRAY_005c5014[3].b
    MOV dword ptr [0x005c5034],ESI      ; 004afc7e | g_SRenderVertex_ARRAY_005c5014[0].r
    JMP 0x004afc11                      ; 004afc84
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11
    XOR EDX,EDX                         ; 004afc86
        ;   Label: LAB_004afc86
    MOV dword ptr [0x005c5038],EDX      ; 004afc88 | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [0x005c503c],EDX      ; 004afc8e | g_SRenderVertex_ARRAY_005c5014[0].b
    MOV dword ptr [0x005c5034],EDX      ; 004afc94 | g_SRenderVertex_ARRAY_005c5014[0].r
    JMP 0x004afb6b                      ; 004afc9a
        ;   XREF to: 004afb6b (UNCONDITIONAL_JUMP)  ; LAB_004afb6b
    CMP EBX,0x2                         ; 004afc9f
        ;   Label: LAB_004afc9f
    JZ 0x004afc86                       ; 004afca2
        ;   XREF to: 004afc86 (CONDITIONAL_JUMP)  ; LAB_004afc86
    MOV dword ptr [EDI],0x2000          ; 004afca4 | g_SRenderVertex_ARRAY_005c5014[0].r
        ;   Label: LAB_004afca4
    MOV dword ptr [EBP],0x0             ; 004afcaa | g_SRenderVertex_ARRAY_005c5014[0].g
    MOV dword ptr [ESI],0x0             ; 004afcb1 | g_SRenderVertex_ARRAY_005c5014[0].b
    JMP 0x004afb6b                      ; 004afcb7
        ;   XREF to: 004afb6b (UNCONDITIONAL_JUMP)  ; LAB_004afb6b
    MOV ESI,0x7f80                      ; 004afcbc
        ;   Label: LAB_004afcbc
    XOR EBX,EBX                         ; 004afcc1
    MOV dword ptr [0x005c5068],ESI      ; 004afcc3 | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV dword ptr [0x005c506c],EBX      ; 004afcc9 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV dword ptr [0x005c5064],EBX      ; 004afccf | g_SRenderVertex_ARRAY_005c5014[1].r
    JMP 0x004afb9d                      ; 004afcd5
        ;   XREF to: 004afb9d (UNCONDITIONAL_JUMP)  ; LAB_004afb9d
    XOR EAX,EAX                         ; 004afcda
        ;   Label: LAB_004afcda
    MOV [0x005c5068],EAX                ; 004afcdc | g_SRenderVertex_ARRAY_005c5014[1].g
    MOV [0x005c506c],EAX                ; 004afce1 | g_SRenderVertex_ARRAY_005c5014[1].b
    MOV [0x005c5064],EAX                ; 004afce6 | g_SRenderVertex_ARRAY_005c5014[1].r
    JMP 0x004afb9d                      ; 004afceb
        ;   XREF to: 004afb9d (UNCONDITIONAL_JUMP)  ; LAB_004afb9d
    JBE 0x004afcbc                      ; 004afcf0
        ;   XREF to: 004afcbc (CONDITIONAL_JUMP)  ; LAB_004afcbc
        ;   Label: LAB_004afcf0
    CMP EBX,0x2                         ; 004afcf2
    JZ 0x004afcda                       ; 004afcf5
        ;   XREF to: 004afcda (CONDITIONAL_JUMP)  ; LAB_004afcda
    JMP 0x004afb8a                      ; 004afcf7
        ;   XREF to: 004afb8a (UNCONDITIONAL_JUMP)  ; LAB_004afb8a
    MOV EBX,0x7f80                      ; 004afcfc
        ;   Label: LAB_004afcfc
    XOR ECX,ECX                         ; 004afd01
    MOV dword ptr [0x005c5098],EBX      ; 004afd03 | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [0x005c509c],ECX      ; 004afd09 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV dword ptr [0x005c5094],ECX      ; 004afd0f | g_SRenderVertex_ARRAY_005c5014[2].r
    JMP 0x004afbcf                      ; 004afd15
        ;   XREF to: 004afbcf (UNCONDITIONAL_JUMP)  ; LAB_004afbcf
    XOR EBP,EBP                         ; 004afd1a
        ;   Label: LAB_004afd1a
    MOV dword ptr [0x005c5098],EBP      ; 004afd1c | g_SRenderVertex_ARRAY_005c5014[2].g
    MOV dword ptr [0x005c509c],EBP      ; 004afd22 | g_SRenderVertex_ARRAY_005c5014[2].b
    MOV dword ptr [0x005c5094],EBP      ; 004afd28 | g_SRenderVertex_ARRAY_005c5014[2].r
    JMP 0x004afbcf                      ; 004afd2e
        ;   XREF to: 004afbcf (UNCONDITIONAL_JUMP)  ; LAB_004afbcf
    JBE 0x004afcfc                      ; 004afd33
        ;   XREF to: 004afcfc (CONDITIONAL_JUMP)  ; LAB_004afcfc
        ;   Label: LAB_004afd33
    CMP EBX,0x2                         ; 004afd35
    JZ 0x004afd1a                       ; 004afd38
        ;   XREF to: 004afd1a (CONDITIONAL_JUMP)  ; LAB_004afd1a
    JMP 0x004afbbc                      ; 004afd3a
        ;   XREF to: 004afbbc (UNCONDITIONAL_JUMP)  ; LAB_004afbbc
    MOV dword ptr [EBP],0x2000          ; 004afd3f | g_SRenderVertex_ARRAY_005c5014[3].r
        ;   Label: LAB_004afd3f
    MOV dword ptr [EDI],0x0             ; 004afd46 | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [ESI],0x0             ; 004afd4c | g_SRenderVertex_ARRAY_005c5014[3].b
    JMP 0x004afc11                      ; 004afd52
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11
    MOV ECX,0x7f80                      ; 004afd57
        ;   Label: LAB_004afd57
    XOR EDX,EDX                         ; 004afd5c
    MOV dword ptr [0x005c50c8],ECX      ; 004afd5e | g_SRenderVertex_ARRAY_005c5014[3].g
    MOV dword ptr [0x005c50cc],EDX      ; 004afd64 | g_SRenderVertex_ARRAY_005c5014[3].b
    MOV dword ptr [0x005c50c4],EDX      ; 004afd6a | g_SRenderVertex_ARRAY_005c5014[3].r
    JMP 0x004afc11                      ; 004afd70
        ;   XREF to: 004afc11 (UNCONDITIONAL_JUMP)  ; LAB_004afc11

