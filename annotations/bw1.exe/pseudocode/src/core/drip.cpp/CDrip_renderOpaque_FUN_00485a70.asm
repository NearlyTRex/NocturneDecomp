; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_drip_cpp_CDrip_renderOpaque_FUN_00485a70(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485a70
        ;   Label: core_drip.cpp_CDrip_renderOpaque_FUN_00485a70
    PUSH ESI                            ; 00485a71
    PUSH EDI                            ; 00485a72
    SUB ESP,0x30                        ; 00485a73
    MOV EBX,dword ptr [ESP + 0x40]      ; 00485a76
    PUSH EBX                            ; 00485a7a
    MOV dword ptr [EBX + 0x338],0x0     ; 00485a7b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00485a85
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00485a8a
    PUSH 0x0                            ; 00485a8d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485a8f
    PUSH EBX                            ; 00485a95
    LEA ESI,[ESP + 0x8]                 ; 00485a96
    LEA EDI,[ESP + 0x20]                ; 00485a9a
    CALL dword ptr [EAX + 0x1c]         ; 00485a9e
    MOV ECX,0x6                         ; 00485aa1
    ADD ESP,0x4                         ; 00485aa6
    LEA EAX,[ESP + 0x1c]                ; 00485aa9
    LEA ESI,[ESP + 0x4]                 ; 00485aad
    PUSH EAX                            ; 00485ab1
    MOVSD.REP ES:EDI,ESI                ; 00485ab2
    CALL core_box.cpp_FUN_004207b0      ; 00485ab4
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00485ab9
    MOV ESI,EAX                         ; 00485abc
    TEST EAX,EAX                        ; 00485abe
    JNZ 0x00485ad4                      ; 00485ac0
        ;   XREF to: 00485ad4 (CONDITIONAL_JUMP)  ; LAB_00485ad4
    PUSH EBX                            ; 00485ac2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00485ac3
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00485ac8
    MOV EAX,ESI                         ; 00485acb
    ADD ESP,0x30                        ; 00485acd
    POP EDI                             ; 00485ad0
    POP ESI                             ; 00485ad1
    POP EBX                             ; 00485ad2
    RET                                 ; 00485ad3
    PUSH -0x1                           ; 00485ad4
        ;   Label: LAB_00485ad4
    LEA EAX,[EBX + 0x158]               ; 00485ad6
    PUSH 0x0                            ; 00485adc
    PUSH EAX                            ; 00485ade
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00485adf
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00485ae4
    MOV dword ptr [EBX + 0x338],0x1     ; 00485ae7
    PUSH EBX                            ; 00485af1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00485af2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00485af7
    MOV EAX,ESI                         ; 00485afa
    ADD ESP,0x30                        ; 00485afc
    POP EDI                             ; 00485aff
    POP ESI                             ; 00485b00
    POP EBX                             ; 00485b01
    RET                                 ; 00485b02

