; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_drip_cpp_CDrip_renderOpaque_FUN_0046f150(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f150
        ;   Label: core_drip.cpp_CDrip_renderOpaque_FUN_0046f150
    PUSH ESI                            ; 0046f151
    PUSH EDI                            ; 0046f152
    SUB ESP,0x30                        ; 0046f153
    MOV EBX,dword ptr [ESP + 0x40]      ; 0046f156
    PUSH EBX                            ; 0046f15a
    MOV dword ptr [EBX + 0x338],0x0     ; 0046f15b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0046f165
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046f16a
    PUSH 0x0                            ; 0046f16d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046f16f
    PUSH EBX                            ; 0046f175
    LEA ESI,[ESP + 0x8]                 ; 0046f176
    LEA EDI,[ESP + 0x20]                ; 0046f17a
    CALL dword ptr [EAX + 0x1c]         ; 0046f17e
    MOV ECX,0x6                         ; 0046f181
    ADD ESP,0x4                         ; 0046f186
    LEA EAX,[ESP + 0x1c]                ; 0046f189
    LEA ESI,[ESP + 0x4]                 ; 0046f18d
    PUSH EAX                            ; 0046f191
    MOVSD.REP ES:EDI,ESI                ; 0046f192
    CALL core_box.cpp_FUN_0041daf0      ; 0046f194
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0046f199
    MOV ESI,EAX                         ; 0046f19c
    TEST EAX,EAX                        ; 0046f19e
    JNZ 0x0046f1b4                      ; 0046f1a0
        ;   XREF to: 0046f1b4 (CONDITIONAL_JUMP)  ; LAB_0046f1b4
    PUSH EBX                            ; 0046f1a2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0046f1a3
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046f1a8
    MOV EAX,ESI                         ; 0046f1ab
    ADD ESP,0x30                        ; 0046f1ad
    POP EDI                             ; 0046f1b0
    POP ESI                             ; 0046f1b1
    POP EBX                             ; 0046f1b2
    RET                                 ; 0046f1b3
    PUSH -0x1                           ; 0046f1b4
        ;   Label: LAB_0046f1b4
    LEA EAX,[EBX + 0x158]               ; 0046f1b6
    PUSH 0x0                            ; 0046f1bc
    PUSH EAX                            ; 0046f1be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0046f1bf
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0046f1c4
    MOV dword ptr [EBX + 0x338],0x1     ; 0046f1c7
    PUSH EBX                            ; 0046f1d1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0046f1d2
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046f1d7
    MOV EAX,ESI                         ; 0046f1da
    ADD ESP,0x30                        ; 0046f1dc
    POP EDI                             ; 0046f1df
    POP ESI                             ; 0046f1e0
    POP EBX                             ; 0046f1e1
    RET                                 ; 0046f1e2

