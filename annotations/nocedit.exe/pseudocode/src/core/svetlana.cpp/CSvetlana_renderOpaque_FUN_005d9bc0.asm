; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_005d9bc0(CSvetlana *this_ptr)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; Local Variables:
; int[30]          Stack[-0x84]:120  local_84
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   int g_PerspectiveReciprocal
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.render_mode
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.skip_normal_normalization
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;   core_cloth.cpp_CCloth_render_FUN_0043bae0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9bc0
        ;   Label: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0
    PUSH ESI                            ; 005d9bc1
    PUSH EBP                            ; 005d9bc2
    SUB ESP,0x78                        ; 005d9bc3
    MOV ESI,dword ptr [ESP + 0x88]      ; 005d9bc6
    MOV EAX,[0x006810c8]                ; 005d9bcd | g_CDemonSetInstance | g_CDemonSetPtr
    MOV EDX,ESI                         ; 005d9bd2
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 005d9bd4 | g_CDemonSetInstance.skip_normal_normalization
    XOR EAX,EAX                         ; 005d9bde
    INC EAX                             ; 005d9be0
        ;   Label: LAB_005d9be0
    MOV ECX,dword ptr [EDX + 0x2298]    ; 005d9be1
    ADD EDX,0x4                         ; 005d9be7
    MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX ; 005d9bea
    CMP EAX,0x1e                        ; 005d9bee
    JL 0x005d9be0                       ; 005d9bf1
        ;   XREF to: 005d9be0 (CONDITIONAL_JUMP)  ; LAB_005d9be0
    PUSH ESI                            ; 005d9bf3
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 005d9bf4
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005d9bf9
    MOV EDX,dword ptr [0x006703ec]      ; 005d9bfc | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005d9c02 | g_CDemonRendererInstance
    MOV EBX,EAX                         ; 005d9c03
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005d9c05
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005d9c0a
    TEST EAX,EAX                        ; 005d9c0d
    JNZ 0x005d9cc0                      ; 005d9c0f
        ;   XREF to: 005d9cc0 (CONDITIONAL_JUMP)  ; LAB_005d9cc0
    CMP dword ptr [0x02d051f4],0x4000   ; 005d9c15 | g_PerspectiveReciprocal
    JGE 0x005d9cc0                      ; 005d9c1f
        ;   XREF to: 005d9cc0 (CONDITIONAL_JUMP)  ; LAB_005d9cc0
    MOV EAX,ESI                         ; 005d9c25
    LEA EDX,[ESI + 0x78]                ; 005d9c27
    ADD EAX,0x4                         ; 005d9c2a
        ;   Label: LAB_005d9c2a
    MOV dword ptr [EAX + 0x2294],0x0    ; 005d9c2d
    CMP EAX,EDX                         ; 005d9c37
    JNZ 0x005d9c2a                      ; 005d9c39
        ;   XREF to: 005d9c2a (CONDITIONAL_JUMP)  ; LAB_005d9c2a
    PUSH EDI                            ; 005d9c3b
    MOV EAX,dword ptr [ESI + 0x9f8d0]   ; 005d9c3c
    MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1 ; 005d9c42
    MOV EAX,dword ptr [ESI + 0x9f8d4]   ; 005d9c4d
    PUSH 0x0                            ; 005d9c53
    MOV EBP,dword ptr [0x006703ec]      ; 005d9c55 | g_CDemonRendererPtr2
    MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1 ; 005d9c5b
    MOV EAX,[0x0067b654]                ; 005d9c66 | g_CGameInstance | g_CGamePtr
    PUSH EBP                            ; 005d9c6b | g_CDemonRendererInstance
    MOV EDI,dword ptr [EAX + 0x1f4]     ; 005d9c6c | g_CGameInstance.render_mode
    MOV dword ptr [EAX + 0x1f4],0x2     ; 005d9c72 | g_CGameInstance.render_mode
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005d9c7c
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005d9c81
    PUSH 0xbb80                         ; 005d9c84
    MOV EAX,[0x006703ec]                ; 005d9c89 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005d9c8e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005d9c8f
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005d9c94
    TEST EBX,EBX                        ; 005d9c97
    JNZ 0x005d9cdc                      ; 005d9c99
        ;   XREF to: 005d9cdc (CONDITIONAL_JUMP)  ; LAB_005d9cdc
    MOV EAX,[0x0067b654]                ; 005d9c9b | g_CGamePtr
        ;   Label: LAB_005d9c9b
    MOV EDX,ESI                         ; 005d9ca0
    MOV dword ptr [EAX + 0x1f4],EDI     ; 005d9ca2 | g_CGameInstance.render_mode
    XOR EAX,EAX                         ; 005d9ca8
    POP EDI                             ; 005d9caa
    ADD EDX,0x4                         ; 005d9cab
        ;   Label: LAB_005d9cab
    MOV ECX,dword ptr [ESP + EAX*0x4]   ; 005d9cae
    INC EAX                             ; 005d9cb1
    MOV dword ptr [EDX + 0x2294],ECX    ; 005d9cb2
    CMP EAX,0x1e                        ; 005d9cb8
    JL 0x005d9cab                       ; 005d9cbb
        ;   XREF to: 005d9cab (CONDITIONAL_JUMP)  ; LAB_005d9cab
    LEA EAX,[EAX]                       ; 005d9cbd
    MOV EAX,[0x006810c8]                ; 005d9cc0 | g_CDemonSetPtr
        ;   Label: LAB_005d9cc0
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 005d9cc5 | g_CDemonSetInstance.skip_normal_normalization
    TEST EBX,EBX                        ; 005d9ccf
    JNZ 0x005d9ce7                      ; 005d9cd1
        ;   XREF to: 005d9ce7 (CONDITIONAL_JUMP)  ; LAB_005d9ce7
    MOV EAX,EBX                         ; 005d9cd3
    ADD ESP,0x78                        ; 005d9cd5
    POP EBP                             ; 005d9cd8
    POP ESI                             ; 005d9cd9
    POP EBX                             ; 005d9cda
    RET                                 ; 005d9cdb
    PUSH ESI                            ; 005d9cdc
        ;   Label: LAB_005d9cdc
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 005d9cdd
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005d9ce2
    JMP 0x005d9c9b                      ; 005d9ce5
        ;   XREF to: 005d9c9b (UNCONDITIONAL_JUMP)  ; LAB_005d9c9b
    PUSH ESI                            ; 005d9ce7
        ;   Label: LAB_005d9ce7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005d9ce8
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005d9ced
    PUSH 0x0                            ; 005d9cf0
    LEA EAX,[ESI + 0x1fbdc]             ; 005d9cf2
    PUSH EAX                            ; 005d9cf8
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 005d9cf9
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 005d9cfe
    PUSH 0x0                            ; 005d9d01
    LEA EAX,[ESI + 0x5fa4c]             ; 005d9d03
    PUSH EAX                            ; 005d9d09
    CALL core_cloth.cpp_CCloth_render_FUN_0043bae0 ; 005d9d0a
        ;   XREF to: 0043bae0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_0043bae0(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 005d9d0f
    PUSH ESI                            ; 005d9d12
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005d9d13
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005d9d18
    MOV EAX,EBX                         ; 005d9d1b
    ADD ESP,0x78                        ; 005d9d1d
    POP EBP                             ; 005d9d20
    POP ESI                             ; 005d9d21
    POP EBX                             ; 005d9d22
    RET                                 ; 005d9d23

