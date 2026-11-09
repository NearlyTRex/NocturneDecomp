; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00410980 at 00410985
;   core_lantern.cpp_FUN_0059d000 at 0059d015
;   unkafter_cross.cpp_FUN_005a6ba0 at 005a6ba5
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589b90
        ;   Label: core_weapon.cpp_CWeapon_renderOpaque_FUN_00589b90
    PUSH ESI                            ; 00589b91
    PUSH EDI                            ; 00589b92
    SUB ESP,0x30                        ; 00589b93
    MOV EBX,dword ptr [ESP + 0x40]      ; 00589b96
    PUSH EBX                            ; 00589b9a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00589b9b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00589ba0
    PUSH 0x0                            ; 00589ba3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00589ba5
    PUSH EBX                            ; 00589bab
    LEA ESI,[ESP + 0x8]                 ; 00589bac
    LEA EDI,[ESP + 0x20]                ; 00589bb0
    CALL dword ptr [EAX + 0x24]         ; 00589bb4
    MOV ECX,0x6                         ; 00589bb7
    ADD ESP,0x4                         ; 00589bbc
    LEA EAX,[ESP + 0x1c]                ; 00589bbf
    LEA ESI,[ESP + 0x4]                 ; 00589bc3
    PUSH EAX                            ; 00589bc7
    MOVSD.REP ES:EDI,ESI                ; 00589bc8
    CALL core_box.cpp_FUN_0041a840      ; 00589bca
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00589bcf
    MOV ESI,EAX                         ; 00589bd2
    TEST EAX,EAX                        ; 00589bd4
    JZ 0x00589beb                       ; 00589bd6
        ;   XREF to: 00589beb (CONDITIONAL_JUMP)  ; LAB_00589beb
    PUSH -0x1                           ; 00589bd8
    LEA EAX,[EBX + 0x2b4]               ; 00589bda
    PUSH 0x0                            ; 00589be0
    PUSH EAX                            ; 00589be2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00589be3
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00589be8
    PUSH EBX                            ; 00589beb
        ;   Label: LAB_00589beb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00589bec
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00589bf1
    MOV EDX,dword ptr [0x0060b280]      ; 00589bf4 | DAT_0060b280
    PUSH EDX                            ; 00589bfa
    MOV dword ptr [EBX + 0x6d0],0x0     ; 00589bfb
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00589c05
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00589c0a
    TEST EAX,EAX                        ; 00589c0d
    JNZ 0x00589c15                      ; 00589c0f
        ;   XREF to: 00589c15 (CONDITIONAL_JUMP)  ; LAB_00589c15
    TEST ESI,ESI                        ; 00589c11
    JNZ 0x00589c1e                      ; 00589c13
        ;   XREF to: 00589c1e (CONDITIONAL_JUMP)  ; LAB_00589c1e
    MOV EAX,ESI                         ; 00589c15
        ;   Label: LAB_00589c15
    ADD ESP,0x30                        ; 00589c17
    POP EDI                             ; 00589c1a
    POP ESI                             ; 00589c1b
    POP EBX                             ; 00589c1c
    RET                                 ; 00589c1d
    MOV dword ptr [EBX + 0x6d0],0x1     ; 00589c1e
        ;   Label: LAB_00589c1e
    MOV EAX,ESI                         ; 00589c28
    ADD ESP,0x30                        ; 00589c2a
    POP EDI                             ; 00589c2d
    POP ESI                             ; 00589c2e
    POP EBX                             ; 00589c2f
    RET                                 ; 00589c30

