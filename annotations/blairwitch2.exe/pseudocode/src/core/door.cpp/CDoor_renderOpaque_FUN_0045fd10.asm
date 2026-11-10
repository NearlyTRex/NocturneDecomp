; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_0045fd10(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041b700
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fd10
        ;   Label: core_door.cpp_CDoor_renderOpaque_FUN_0045fd10
    PUSH EBP                            ; 0045fd11
    SUB ESP,0x60                        ; 0045fd12
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0045fd15
    CMP dword ptr [EBX + 0xb24],0x2     ; 0045fd19
    JLE 0x0045fd2a                      ; 0045fd20
        ;   XREF to: 0045fd2a (CONDITIONAL_JUMP)  ; LAB_0045fd2a
    XOR EAX,EAX                         ; 0045fd22
    ADD ESP,0x60                        ; 0045fd24
    POP EBP                             ; 0045fd27
    POP EBX                             ; 0045fd28
    RET                                 ; 0045fd29
    PUSH EDI                            ; 0045fd2a
        ;   Label: LAB_0045fd2a
    PUSH ESI                            ; 0045fd2b
    PUSH EBX                            ; 0045fd2c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0045fd2d
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045fd32
    PUSH 0x0                            ; 0045fd35
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045fd37
    PUSH EBX                            ; 0045fd3d
    LEA ESI,[ESP + 0x58]                ; 0045fd3e
    LEA EDI,[ESP + 0x28]                ; 0045fd42
    CALL dword ptr [EAX + 0x24]         ; 0045fd46
    MOV ECX,0x6                         ; 0045fd49
    ADD ESP,0x4                         ; 0045fd4e
    LEA EAX,[ESP + 0x24]                ; 0045fd51
    LEA ESI,[ESP + 0x54]                ; 0045fd55
    PUSH EAX                            ; 0045fd59
    MOVSD.REP ES:EDI,ESI                ; 0045fd5a
    CALL core_box.cpp_FUN_0041a840      ; 0045fd5c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0045fd61
    MOV EBP,EAX                         ; 0045fd64
    TEST EAX,EAX                        ; 0045fd66
    JZ 0x0045fdb3                       ; 0045fd68
        ;   XREF to: 0045fdb3 (CONDITIONAL_JUMP)  ; LAB_0045fdb3
    CMP dword ptr [EBX + 0xb30],0x0     ; 0045fd6a
    JZ 0x0045fdc6                       ; 0045fd71
        ;   XREF to: 0045fdc6 (CONDITIONAL_JUMP)  ; LAB_0045fdc6
    MOV ESI,dword ptr [0x0060b280]      ; 0045fd73 | DAT_0060b280
    PUSH ESI                            ; 0045fd79 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0045fd7a
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045fd7f
    TEST EAX,EAX                        ; 0045fd82
    JZ 0x0045fdc6                       ; 0045fd84
        ;   XREF to: 0045fdc6 (CONDITIONAL_JUMP)  ; LAB_0045fdc6
    PUSH EBX                            ; 0045fd86
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045fd87
    LEA ESI,[ESP + 0xc]                 ; 0045fd8d
    LEA EDI,[ESP + 0x3c]                ; 0045fd91
    CALL dword ptr [EAX + 0x24]         ; 0045fd95
    MOV ECX,0x6                         ; 0045fd98
    ADD ESP,0x4                         ; 0045fd9d
    LEA EAX,[ESP + 0x38]                ; 0045fda0
    LEA ESI,[ESP + 0x8]                 ; 0045fda4
    PUSH EAX                            ; 0045fda8
    MOVSD.REP ES:EDI,ESI                ; 0045fda9
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041b700 ; 0045fdab
        ;   XREF to: 0041b700 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041b700(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0045fdb0
    PUSH EBX                            ; 0045fdb3
        ;   Label: LAB_0045fdb3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0045fdb4
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045fdb9
    MOV EAX,EBP                         ; 0045fdbc
    POP ESI                             ; 0045fdbe
    POP EDI                             ; 0045fdbf
    ADD ESP,0x60                        ; 0045fdc0
    POP EBP                             ; 0045fdc3
    POP EBX                             ; 0045fdc4
    RET                                 ; 0045fdc5
    PUSH -0x1                           ; 0045fdc6
        ;   Label: LAB_0045fdc6
    LEA EAX,[EBX + 0x2b4]               ; 0045fdc8
    PUSH 0x0                            ; 0045fdce
    PUSH EAX                            ; 0045fdd0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0045fdd1
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0045fdd6
    PUSH EBX                            ; 0045fdd9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0045fdda
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045fddf
    MOV EAX,EBP                         ; 0045fde2
    POP ESI                             ; 0045fde4
    POP EDI                             ; 0045fde5
    ADD ESP,0x60                        ; 0045fde6
    POP EBP                             ; 0045fde9
    POP EBX                             ; 0045fdea
    RET                                 ; 0045fdeb

