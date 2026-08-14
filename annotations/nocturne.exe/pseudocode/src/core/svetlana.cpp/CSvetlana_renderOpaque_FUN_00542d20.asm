; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00542d20(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;   undefined4 g_CGame_01c775ec.render_mode
;   undefined4 g_CDemonSet_01e57284.skip_normal_normalization
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;   core_cloth.cpp_CCloth_render_FUN_00437db0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542d20
        ;   Label: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00542d20
    PUSH ESI                            ; 00542d21
    PUSH EBP                            ; 00542d22
    SUB ESP,0x78                        ; 00542d23
    MOV ESI,dword ptr [ESP + 0x88]      ; 00542d26
    MOV EAX,[0x005be368]                ; 00542d2d | g_CDemonSet_PTR_005be368
    MOV EDX,ESI                         ; 00542d32
    MOV dword ptr [EAX + 0x15aa9c],0x1  ; 00542d34 | g_CDemonSet_01e57284.skip_normal_normalization
    XOR EAX,EAX                         ; 00542d3e
    INC EAX                             ; 00542d40
        ;   Label: LAB_00542d40
    MOV ECX,dword ptr [EDX + 0x2290]    ; 00542d41
    ADD EDX,0x4                         ; 00542d47
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 00542d4a
    CMP EAX,0x1e                        ; 00542d4e
    JL 0x00542d40                       ; 00542d51
        ;   XREF to: 00542d40 (CONDITIONAL_JUMP)  ; LAB_00542d40
    PUSH ESI                            ; 00542d53
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 00542d54
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00542d59
    MOV EDX,dword ptr [0x005ae704]      ; 00542d5c | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00542d62 | DAT_01b4d738
    MOV EBX,EAX                         ; 00542d63
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00542d65
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00542d6a
    TEST EAX,EAX                        ; 00542d6d
    JNZ 0x00542e20                      ; 00542d6f
        ;   XREF to: 00542e20 (CONDITIONAL_JUMP)  ; LAB_00542e20
    CMP dword ptr [0x01c038f4],0x4000   ; 00542d75 | DAT_01c038f4
    JGE 0x00542e20                      ; 00542d7f
        ;   XREF to: 00542e20 (CONDITIONAL_JUMP)  ; LAB_00542e20
    MOV EAX,ESI                         ; 00542d85
    LEA EDX,[ESI + 0x78]                ; 00542d87
    ADD EAX,0x4                         ; 00542d8a
        ;   Label: LAB_00542d8a
    MOV dword ptr [EAX + 0x228c],0x0    ; 00542d8d
    CMP EAX,EDX                         ; 00542d97
    JNZ 0x00542d8a                      ; 00542d99
        ;   XREF to: 00542d8a (CONDITIONAL_JUMP)  ; LAB_00542d8a
    PUSH EDI                            ; 00542d9b
    MOV EAX,dword ptr [ESI + 0x950b8]   ; 00542d9c
    MOV dword ptr [ESI + EAX*0x4 + 0x2290],0x1 ; 00542da2
    MOV EAX,dword ptr [ESI + 0x950bc]   ; 00542dad
    PUSH 0x0                            ; 00542db3
    MOV EBP,dword ptr [0x005ae704]      ; 00542db5 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESI + EAX*0x4 + 0x2290],0x1 ; 00542dbb
    MOV EAX,[0x005b9354]                ; 00542dc6 | g_CGame_PTR_005b9354
    PUSH EBP                            ; 00542dcb | DAT_01b4d738
    MOV EDI,dword ptr [EAX + 0x1f4]     ; 00542dcc | g_CGame_01c775ec.render_mode
    MOV dword ptr [EAX + 0x1f4],0x2     ; 00542dd2 | g_CGame_01c775ec.render_mode
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00542ddc
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00542de1
    PUSH 0xbb80                         ; 00542de4
    MOV EAX,[0x005ae704]                ; 00542de9 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00542dee | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00542def
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00542df4
    TEST EBX,EBX                        ; 00542df7
    JNZ 0x00542e3c                      ; 00542df9
        ;   XREF to: 00542e3c (CONDITIONAL_JUMP)  ; LAB_00542e3c
    MOV EAX,[0x005b9354]                ; 00542dfb | g_CGame_PTR_005b9354
        ;   Label: LAB_00542dfb
    MOV EDX,ESI                         ; 00542e00
    MOV dword ptr [EAX + 0x1f4],EDI     ; 00542e02 | g_CGame_01c775ec.render_mode
    XOR EAX,EAX                         ; 00542e08
    POP EDI                             ; 00542e0a
    ADD EDX,0x4                         ; 00542e0b
        ;   Label: LAB_00542e0b
    MOV ECX,dword ptr [ESP + EAX*0x4]   ; 00542e0e
    INC EAX                             ; 00542e11
    MOV dword ptr [EDX + 0x228c],ECX    ; 00542e12
    CMP EAX,0x1e                        ; 00542e18
    JL 0x00542e0b                       ; 00542e1b
        ;   XREF to: 00542e0b (CONDITIONAL_JUMP)  ; LAB_00542e0b
    LEA EAX,[EAX]                       ; 00542e1d
    MOV EAX,[0x005be368]                ; 00542e20 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_00542e20
    MOV dword ptr [EAX + 0x15aa9c],0x0  ; 00542e25 | g_CDemonSet_01e57284.skip_normal_normalization
    TEST EBX,EBX                        ; 00542e2f
    JNZ 0x00542e47                      ; 00542e31
        ;   XREF to: 00542e47 (CONDITIONAL_JUMP)  ; LAB_00542e47
    MOV EAX,EBX                         ; 00542e33
    ADD ESP,0x78                        ; 00542e35
    POP EBP                             ; 00542e38
    POP ESI                             ; 00542e39
    POP EBX                             ; 00542e3a
    RET                                 ; 00542e3b
    PUSH ESI                            ; 00542e3c
        ;   Label: LAB_00542e3c
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 00542e3d
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00542e42
    JMP 0x00542dfb                      ; 00542e45
        ;   XREF to: 00542dfb (UNCONDITIONAL_JUMP)  ; LAB_00542dfb
    PUSH ESI                            ; 00542e47
        ;   Label: LAB_00542e47
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00542e48
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00542e4d
    PUSH 0x0                            ; 00542e50
    LEA EAX,[ESI + 0x1fa44]             ; 00542e52
    PUSH EAX                            ; 00542e58
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 00542e59
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00437db0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 00542e5e
    PUSH 0x0                            ; 00542e61
    LEA EAX,[ESI + 0x5a574]             ; 00542e63
    PUSH EAX                            ; 00542e69
    CALL core_cloth.cpp_CCloth_render_FUN_00437db0 ; 00542e6a
        ;   XREF to: 00437db0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00437db0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 00542e6f
    PUSH ESI                            ; 00542e72
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00542e73
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00542e78
    MOV EAX,EBX                         ; 00542e7b
    ADD ESP,0x78                        ; 00542e7d
    POP EBP                             ; 00542e80
    POP ESI                             ; 00542e81
    POP EBX                             ; 00542e82
    RET                                 ; 00542e83

