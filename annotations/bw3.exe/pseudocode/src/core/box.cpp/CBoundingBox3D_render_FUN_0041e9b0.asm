; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_render_FUN_0041e9b0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x6c]:1  local_6c
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
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_curtain.cpp_CCurtain_renderMesh_FUN_00448060 at 00448254
;   core_door.cpp_CDoor_renderOpaque_FUN_00464a60 at 00464afb
;   core_platfrm.cpp_CPlatform_renderOpaque_FUN_005120b0 at 0051219f
;
; Referenced Globals:
;   undefined4 DAT_005dc948
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6ced0
;   undefined4 DAT_01c6ced4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_FUN_0041d8b0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e9b0
        ;   Label: core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0
    PUSH ESI                            ; 0041e9b1
    PUSH EDI                            ; 0041e9b2
    PUSH EBP                            ; 0041e9b3
    SUB ESP,0xbc                        ; 0041e9b4
    MOV EAX,ESP                         ; 0041e9ba
    XOR EBP,EBP                         ; 0041e9bc
    MOV dword ptr [ESP + 0xb8],EAX      ; 0041e9be
    PUSH EBP                            ; 0041e9c5
        ;   Label: LAB_0041e9c5
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0041e9c6
    PUSH EDX                            ; 0041e9cd
    LEA ESI,[ESP + 0x9c]                ; 0041e9ce
    LEA EDI,[ESP + 0xb4]                ; 0041e9d5
    CALL core_box.cpp_FUN_0041d8b0      ; 0041e9dc
        ;   XREF to: 0041d8b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041d8b0()
    LEA ESI,[ESP + 0x9c]                ; 0041e9e1
    ADD ESP,0x8                         ; 0041e9e8
    LEA EAX,[ESP + 0xac]                ; 0041e9eb
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0041e9f2
    MOVSD ES:EDI,ESI                    ; 0041e9f9
    MOVSD ES:EDI,ESI                    ; 0041e9fa
    MOVSD ES:EDI,ESI                    ; 0041e9fb
    FLD float ptr [EAX]                 ; 0041e9fc
    FMUL float ptr [0x005dc948]         ; 0041e9fe | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041ea04
    FLD float ptr [EAX + 0x4]           ; 0041ea06
    FMUL float ptr [0x005dc948]         ; 0041ea09 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041ea0f
    FLD float ptr [EAX + 0x8]           ; 0041ea12
    FMUL float ptr [0x005dc948]         ; 0041ea15 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041ea1b
    LEA ECX,[EBX + 0xc]                 ; 0041ea1e
    INC EBP                             ; 0041ea21
    MOV dword ptr [ESP + 0xb8],ECX      ; 0041ea22
    CMP EBP,0x8                         ; 0041ea29
    JL 0x0041e9c5                       ; 0041ea2c
        ;   XREF to: 0041e9c5 (CONDITIONAL_JUMP)  ; LAB_0041e9c5
    MOV EAX,ESP                         ; 0041ea2e
    PUSH EAX                            ; 0041ea30
    PUSH 0x8                            ; 0041ea31
    MOV EBX,dword ptr [0x00603b28]      ; 0041ea33 | g_CDemonSetPtr
    PUSH EBX                            ; 0041ea39 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 0041ea3a
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 0041ea3f
    PUSH 0x1                            ; 0041ea42
    MOV EDI,dword ptr [0x005f2afc]      ; 0041ea44 | DAT_005f2afc
    MOV ESI,0x4                         ; 0041ea4a
    PUSH EDI                            ; 0041ea4f | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x6c],ESI      ; 0041ea50
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450 ; 0041ea54
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0041ea59
    PUSH 0x0                            ; 0041ea5c
    MOV EBP,dword ptr [0x005f2afc]      ; 0041ea5e | DAT_005f2afc
    PUSH EBP                            ; 0041ea64 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0041ea65
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0041ea6a
    LEA EBX,[ESP + 0x88]                ; 0041ea6d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041ea74
    FLD float ptr [EAX]                 ; 0041ea7b
    FMUL float ptr [0x005dc948]         ; 0041ea7d | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041ea83
    FLD float ptr [EAX + 0x4]           ; 0041ea85
    FMUL float ptr [0x005dc948]         ; 0041ea88 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041ea8e
    FLD float ptr [EAX + 0x8]           ; 0041ea91
    FMUL float ptr [0x005dc948]         ; 0041ea94 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041ea9a
    LEA EBX,[ESP + 0xa0]                ; 0041ea9d
    ADD EAX,0xc                         ; 0041eaa4
    FLD float ptr [EAX]                 ; 0041eaa7
    FMUL float ptr [0x005dc948]         ; 0041eaa9 | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041eaaf
    FLD float ptr [EAX + 0x4]           ; 0041eab1
    FMUL float ptr [0x005dc948]         ; 0041eab4 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041eaba
    FLD float ptr [EAX + 0x8]           ; 0041eabd
    FMUL float ptr [0x005dc948]         ; 0041eac0 | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041eac6
    MOV EAX,[0x005f2afc]                ; 0041eac9 | DAT_005f2afc
    PUSH EAX                            ; 0041eace | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0041eacf
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041ead4
    TEST EAX,EAX                        ; 0041ead7
    JNZ 0x0041ebce                      ; 0041ead9
        ;   XREF to: 0041ebce (CONDITIONAL_JUMP)  ; LAB_0041ebce
    MOV [0x01c6ced4],EAX                ; 0041eadf | DAT_01c6ced4
    MOV [0x01c6ced0],EAX                ; 0041eae4 | DAT_01c6ced0
    MOV EAX,[0x005f2afc]                ; 0041eae9 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0041eaee | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x20],0x7fff   ; 0041eaf0
    MOV EBX,dword ptr [EAX]             ; 0041eaf7 | DAT_01bdd7e4
    XOR EDX,EDX                         ; 0041eaf9
    MOV dword ptr [EBX + 0x24],EDX      ; 0041eafb
    MOV EBX,dword ptr [EAX]             ; 0041eafe | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x28],EDX      ; 0041eb00
    MOV EBX,dword ptr [EAX]             ; 0041eb03 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x50],EDX      ; 0041eb05
    MOV EBX,dword ptr [EAX]             ; 0041eb08 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x54],0x7fff   ; 0041eb0a
    MOV EBX,dword ptr [EAX]             ; 0041eb11 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x58],EDX      ; 0041eb13
    MOV EBX,dword ptr [EAX]             ; 0041eb16 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x80],EDX      ; 0041eb18
    MOV EBX,dword ptr [EAX]             ; 0041eb1e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x84],EDX      ; 0041eb20
    MOV EBX,dword ptr [EAX]             ; 0041eb26 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x88],0x7fff   ; 0041eb28
    MOV EBX,dword ptr [EAX]             ; 0041eb32 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb0],0x7fff   ; 0041eb34
    MOV EBX,dword ptr [EAX]             ; 0041eb3e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb4],0x7fff   ; 0041eb40
    MOV EBX,dword ptr [EAX]             ; 0041eb4a | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb8],EDX      ; 0041eb4c
    MOV EBX,dword ptr [EAX]             ; 0041eb52 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xe0],EDX      ; 0041eb54
    MOV EBX,dword ptr [EAX]             ; 0041eb5a | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xe4],0x7fff   ; 0041eb5c
    MOV EBX,dword ptr [EAX]             ; 0041eb66 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xe8],0x7fff   ; 0041eb68
    MOV EBX,dword ptr [EAX]             ; 0041eb72 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x110],0x7fff  ; 0041eb74
    MOV EBX,dword ptr [EAX]             ; 0041eb7e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x114],EDX     ; 0041eb80
    MOV EBX,dword ptr [EAX]             ; 0041eb86 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x118],0x7fff  ; 0041eb88
    MOV EBX,dword ptr [EAX]             ; 0041eb92 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x140],0x7fff  ; 0041eb94
    MOV EBX,dword ptr [EAX]             ; 0041eb9e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x144],0x7fff  ; 0041eba0
    MOV EBX,dword ptr [EAX]             ; 0041ebaa | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x148],0x7fff  ; 0041ebac
    MOV EBX,dword ptr [EAX]             ; 0041ebb6 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x170],EDX     ; 0041ebb8
    MOV EBX,dword ptr [EAX]             ; 0041ebbe | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x174],EDX     ; 0041ebc0
    MOV EAX,dword ptr [EAX]             ; 0041ebc6 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x178],EDX     ; 0041ebc8
    MOV EBX,0xffffffff                  ; 0041ebce
        ;   Label: LAB_0041ebce
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041ebd3
    MOV EDX,0x4                         ; 0041ebda
    MOV ECX,0x6                         ; 0041ebdf
    PUSH 0x2c4                          ; 0041ebe4
    MOV EDI,0x1                         ; 0041ebe9
    XOR ESI,ESI                         ; 0041ebee
    MOV dword ptr [ESP + 0x6c],EBX      ; 0041ebf0
    MOV dword ptr [ESP + 0x70],ESI      ; 0041ebf4
    MOV dword ptr [ESP + 0x74],ESI      ; 0041ebf8
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ebfc
    MOV EBP,EAX                         ; 0041ec00
    MOV dword ptr [ESP + 0x7c],ESI      ; 0041ec02
    MOV dword ptr [ESP + 0x80],EDX      ; 0041ec06
    MOV dword ptr [ESP + 0x84],ECX      ; 0041ec0d
    MOV EBX,0x2                         ; 0041ec14
    LEA EAX,[ESP + 0x64]                ; 0041ec19
    NEG EBP                             ; 0041ec1d
    PUSH EAX                            ; 0041ec1f
    MOV ESI,dword ptr [0x005f2afc]      ; 0041ec20 | DAT_005f2afc
    MOV dword ptr [ESP + 0x7c],EBP      ; 0041ec26
    PUSH ESI                            ; 0041ec2a | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x90],EBX      ; 0041ec2b
    MOV EBX,0x7                         ; 0041ec32
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041ec37
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    XOR EBP,EBP                         ; 0041ec3c
    MOV ECX,0x3                         ; 0041ec3e
    ADD ESP,0xc                         ; 0041ec43
    MOV ESI,0x5                         ; 0041ec46
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041ec4b
    PUSH 0x2c4                          ; 0041ec52
    MOV dword ptr [ESP + 0x6c],EDI      ; 0041ec57
    MOV dword ptr [ESP + 0x70],EBP      ; 0041ec5b
    MOV dword ptr [ESP + 0x74],EBP      ; 0041ec5f
    MOV dword ptr [ESP + 0x7c],EDI      ; 0041ec63
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ec67
    LEA EAX,[ESP + 0x64]                ; 0041ec6b
    MOV dword ptr [ESP + 0x80],ECX      ; 0041ec6f
    PUSH EAX                            ; 0041ec76
    MOV EDI,dword ptr [0x005f2afc]      ; 0041ec77 | DAT_005f2afc
    MOV dword ptr [ESP + 0x88],EBX      ; 0041ec7d
    PUSH EDI                            ; 0041ec84 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x90],ESI      ; 0041ec85
    MOV ESI,0x1                         ; 0041ec8c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041ec91
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0041ec96
    MOV EAX,0xffffffff                  ; 0041ec99
    MOV EDI,0x5                         ; 0041ec9e
    PUSH 0x2c4                          ; 0041eca3
    MOV dword ptr [ESP + 0x6c],EBP      ; 0041eca8
    MOV dword ptr [ESP + 0x70],EAX      ; 0041ecac
    MOV dword ptr [ESP + 0x74],EBP      ; 0041ecb0
    MOV dword ptr [ESP + 0x7c],EBP      ; 0041ecb4
    MOV dword ptr [ESP + 0x80],ESI      ; 0041ecb8
    MOV dword ptr [ESP + 0x84],EDI      ; 0041ecbf
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041ecc6
    MOV EBP,0x4                         ; 0041eccd
    MOV EDI,0x6                         ; 0041ecd2
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ecd7
    MOV ECX,EAX                         ; 0041ecdb
    LEA EAX,[ESP + 0x64]                ; 0041ecdd
    MOV dword ptr [ESP + 0x88],EBP      ; 0041ece1
    PUSH EAX                            ; 0041ece8
    MOV EAX,[0x005f2afc]                ; 0041ece9 | DAT_005f2afc
    NEG ECX                             ; 0041ecee
    PUSH EAX                            ; 0041ecf0 | DAT_01bdd7e4
    MOV EBP,0x1                         ; 0041ecf1
    MOV dword ptr [ESP + 0x80],ECX      ; 0041ecf6
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041ecfd
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0041ed02
    XOR EDX,EDX                         ; 0041ed05
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0041ed07
    PUSH 0x2c4                          ; 0041ed0e
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041ed13
    MOV dword ptr [ESP + 0x70],ESI      ; 0041ed17
    MOV dword ptr [ESP + 0x74],EDX      ; 0041ed1b
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ed1f
    MOV EAX,0x3                         ; 0041ed23
    MOV dword ptr [ESP + 0x80],EDI      ; 0041ed28
    MOV dword ptr [ESP + 0x88],EAX      ; 0041ed2f
    LEA EAX,[ESP + 0x64]                ; 0041ed36
    MOV dword ptr [ESP + 0x84],EBX      ; 0041ed3a
    PUSH EAX                            ; 0041ed41
    MOV EDX,dword ptr [0x005f2afc]      ; 0041ed42 | DAT_005f2afc
    MOV ESI,0x2                         ; 0041ed48
    PUSH EDX                            ; 0041ed4d | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x84],ESI      ; 0041ed4e
    MOV ESI,0xffffffff                  ; 0041ed55
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041ed5a
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    MOV EDX,0x3                         ; 0041ed5f
    MOV EBX,dword ptr [0x005f2afc]      ; 0041ed64 | DAT_005f2afc
    ADD ESP,0xc                         ; 0041ed6a
    XOR ECX,ECX                         ; 0041ed6d
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041ed6f
    PUSH 0x2c4                          ; 0041ed76
    MOV dword ptr [ESP + 0x6c],ECX      ; 0041ed7b
    MOV dword ptr [ESP + 0x70],ECX      ; 0041ed7f
    MOV dword ptr [ESP + 0x74],ESI      ; 0041ed83
    MOV dword ptr [ESP + 0x7c],ECX      ; 0041ed87
    MOV dword ptr [ESP + 0x78],EAX      ; 0041ed8b
    MOV EDI,EAX                         ; 0041ed8f
    MOV EAX,0x2                         ; 0041ed91
    MOV dword ptr [ESP + 0x84],EDX      ; 0041ed96
    MOV dword ptr [ESP + 0x80],EAX      ; 0041ed9d
    LEA EAX,[ESP + 0x64]                ; 0041eda4
    MOV ECX,0x1                         ; 0041eda8
    PUSH EAX                            ; 0041edad
    XOR ESI,ESI                         ; 0041edae
    NEG EDI                             ; 0041edb0
    PUSH EBX                            ; 0041edb2 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x90],ECX      ; 0041edb3
    MOV dword ptr [ESP + 0x80],EDI      ; 0041edba
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041edc1
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0041edc6
    MOV EDX,0x5                         ; 0041edc9
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0041edce
    MOV dword ptr [ESP + 0x68],ESI      ; 0041edd5
    MOV dword ptr [ESP + 0x6c],ESI      ; 0041edd9
    MOV dword ptr [ESP + 0x70],EBP      ; 0041eddd
    MOV dword ptr [ESP + 0x74],EAX      ; 0041ede1
    MOV EAX,0x4                         ; 0041ede5
    MOV dword ptr [ESP + 0x7c],EDX      ; 0041edea
    MOV dword ptr [ESP + 0x78],EAX      ; 0041edee
    PUSH 0x2c4                          ; 0041edf2
    LEA EAX,[ESP + 0x64]                ; 0041edf7
    MOV ECX,0x7                         ; 0041edfb
    PUSH EAX                            ; 0041ee00
    MOV ESI,dword ptr [0x005f2afc]      ; 0041ee01 | DAT_005f2afc
    MOV EBX,0x6                         ; 0041ee07
    PUSH ESI                            ; 0041ee0c | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x8c],ECX      ; 0041ee0d
    MOV dword ptr [ESP + 0x90],EBX      ; 0041ee14
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0041ee1b
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0041ee20
    ADD ESP,0xbc                        ; 0041ee23
    POP EBP                             ; 0041ee29
    POP EDI                             ; 0041ee2a
    POP ESI                             ; 0041ee2b
    POP EBX                             ; 0041ee2c
    RET                                 ; 0041ee2d

