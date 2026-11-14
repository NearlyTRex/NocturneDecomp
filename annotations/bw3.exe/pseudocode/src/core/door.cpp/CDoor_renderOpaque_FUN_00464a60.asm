; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00464a60(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464a60
        ;   Label: core_door.cpp_CDoor_renderOpaque_FUN_00464a60
    PUSH EBP                            ; 00464a61
    SUB ESP,0x60                        ; 00464a62
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00464a65
    CMP dword ptr [EBX + 0x9c8],0x2     ; 00464a69
    JLE 0x00464a7a                      ; 00464a70
        ;   XREF to: 00464a7a (CONDITIONAL_JUMP)  ; LAB_00464a7a
    XOR EAX,EAX                         ; 00464a72
    ADD ESP,0x60                        ; 00464a74
    POP EBP                             ; 00464a77
    POP EBX                             ; 00464a78
    RET                                 ; 00464a79
    PUSH EDI                            ; 00464a7a
        ;   Label: LAB_00464a7a
    PUSH ESI                            ; 00464a7b
    PUSH EBX                            ; 00464a7c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00464a7d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464a82
    PUSH 0x0                            ; 00464a85
    MOV EAX,dword ptr [EBX + 0x154]     ; 00464a87
    PUSH EBX                            ; 00464a8d
    LEA ESI,[ESP + 0x58]                ; 00464a8e
    LEA EDI,[ESP + 0x28]                ; 00464a92
    CALL dword ptr [EAX + 0x1c]         ; 00464a96
    MOV ECX,0x6                         ; 00464a99
    ADD ESP,0x4                         ; 00464a9e
    LEA EAX,[ESP + 0x24]                ; 00464aa1
    LEA ESI,[ESP + 0x54]                ; 00464aa5
    PUSH EAX                            ; 00464aa9
    MOVSD.REP ES:EDI,ESI                ; 00464aaa
    CALL core_box.cpp_FUN_0041daf0      ; 00464aac
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00464ab1
    MOV EBP,EAX                         ; 00464ab4
    TEST EAX,EAX                        ; 00464ab6
    JZ 0x00464b03                       ; 00464ab8
        ;   XREF to: 00464b03 (CONDITIONAL_JUMP)  ; LAB_00464b03
    CMP dword ptr [EBX + 0x9d4],0x0     ; 00464aba
    JZ 0x00464b16                       ; 00464ac1
        ;   XREF to: 00464b16 (CONDITIONAL_JUMP)  ; LAB_00464b16
    MOV ESI,dword ptr [0x005f2afc]      ; 00464ac3 | DAT_005f2afc
    PUSH ESI                            ; 00464ac9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00464aca
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00464acf
    TEST EAX,EAX                        ; 00464ad2
    JZ 0x00464b16                       ; 00464ad4
        ;   XREF to: 00464b16 (CONDITIONAL_JUMP)  ; LAB_00464b16
    PUSH EBX                            ; 00464ad6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00464ad7
    LEA ESI,[ESP + 0xc]                 ; 00464add
    LEA EDI,[ESP + 0x3c]                ; 00464ae1
    CALL dword ptr [EAX + 0x1c]         ; 00464ae5
    MOV ECX,0x6                         ; 00464ae8
    ADD ESP,0x4                         ; 00464aed
    LEA EAX,[ESP + 0x38]                ; 00464af0
    LEA ESI,[ESP + 0x8]                 ; 00464af4
    PUSH EAX                            ; 00464af8
    MOVSD.REP ES:EDI,ESI                ; 00464af9
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0 ; 00464afb
        ;   XREF to: 0041e9b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041e9b0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00464b00
    PUSH EBX                            ; 00464b03
        ;   Label: LAB_00464b03
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00464b04
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464b09
    MOV EAX,EBP                         ; 00464b0c
    POP ESI                             ; 00464b0e
    POP EDI                             ; 00464b0f
    ADD ESP,0x60                        ; 00464b10
    POP EBP                             ; 00464b13
    POP EBX                             ; 00464b14
    RET                                 ; 00464b15
    PUSH -0x1                           ; 00464b16
        ;   Label: LAB_00464b16
    LEA EAX,[EBX + 0x158]               ; 00464b18
    PUSH 0x0                            ; 00464b1e
    PUSH EAX                            ; 00464b20
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00464b21
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00464b26
    PUSH EBX                            ; 00464b29
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00464b2a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464b2f
    MOV EAX,EBP                         ; 00464b32
    POP ESI                             ; 00464b34
    POP EDI                             ; 00464b35
    ADD ESP,0x60                        ; 00464b36
    POP EBP                             ; 00464b39
    POP EBX                             ; 00464b3a
    RET                                 ; 00464b3b

