; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_marquee_cpp_CMarquee_renderOpaque_FUN_00506c10(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506c10
        ;   Label: core_marquee.cpp_CMarquee_renderOpaque_FUN_00506c10
    SUB ESP,0x30                        ; 00506c11
    MOV EBX,dword ptr [ESP + 0x38]      ; 00506c14
    MOV EDX,dword ptr [0x00612560]      ; 00506c18 | DAT_00612560
    PUSH EDX                            ; 00506c1e
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00506c1f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00506c24
    TEST EAX,EAX                        ; 00506c27
    JZ 0x00506c32                       ; 00506c29
        ;   XREF to: 00506c32 (CONDITIONAL_JUMP)  ; LAB_00506c32
    XOR EAX,EAX                         ; 00506c2b
    ADD ESP,0x30                        ; 00506c2d
    POP EBX                             ; 00506c30
    RET                                 ; 00506c31
    PUSH EDI                            ; 00506c32
        ;   Label: LAB_00506c32
    PUSH ESI                            ; 00506c33
    PUSH EBX                            ; 00506c34
    MOV dword ptr [EBX + 0x19c],EAX     ; 00506c35
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00506c3b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506c40
    PUSH 0x0                            ; 00506c43
    MOV EAX,dword ptr [EBX + 0x154]     ; 00506c45
    PUSH EBX                            ; 00506c4b
    LEA ESI,[ESP + 0x28]                ; 00506c4c
    LEA EDI,[ESP + 0x10]                ; 00506c50
    CALL dword ptr [EAX + 0x1c]         ; 00506c54
    MOV ECX,0x6                         ; 00506c57
    ADD ESP,0x4                         ; 00506c5c
    LEA EAX,[ESP + 0xc]                 ; 00506c5f
    LEA ESI,[ESP + 0x24]                ; 00506c63
    PUSH EAX                            ; 00506c67
    MOVSD.REP ES:EDI,ESI                ; 00506c68
    CALL core_box.cpp_FUN_004207b0      ; 00506c6a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00506c6f
    PUSH EBX                            ; 00506c72
    MOV dword ptr [EBX + 0x19c],EAX     ; 00506c73
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00506c79
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506c7e
    MOV EAX,dword ptr [EBX + 0x19c]     ; 00506c81
    POP ESI                             ; 00506c87
    POP EDI                             ; 00506c88
    ADD ESP,0x30                        ; 00506c89
    POP EBX                             ; 00506c8c
    RET                                 ; 00506c8d

