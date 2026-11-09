; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_emitter_cpp_FUN_0049ff00(CDemonActor *param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ff00
        ;   Label: core_emitter.cpp_FUN_0049ff00
    SUB ESP,0x30                        ; 0049ff01
    MOV EBX,dword ptr [ESP + 0x38]      ; 0049ff04
    CMP dword ptr [ESP + 0x3c],0x0      ; 0049ff08
    JNZ 0x0049ff14                      ; 0049ff0d
        ;   XREF to: 0049ff14 (CONDITIONAL_JUMP)  ; LAB_0049ff14
    ADD ESP,0x30                        ; 0049ff0f
    POP EBX                             ; 0049ff12
    RET                                 ; 0049ff13
    PUSH EDI                            ; 0049ff14
        ;   Label: LAB_0049ff14
    PUSH ESI                            ; 0049ff15
    PUSH EBX                            ; 0049ff16
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0049ff17
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0049ff1c
    PUSH 0x0                            ; 0049ff1f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049ff21
    PUSH EBX                            ; 0049ff27
    LEA ESI,[ESP + 0x10]                ; 0049ff28
    LEA EDI,[ESP + 0x28]                ; 0049ff2c
    CALL dword ptr [EAX + 0x1c]         ; 0049ff30
    MOV ECX,0x6                         ; 0049ff33
    ADD ESP,0x4                         ; 0049ff38
    LEA EAX,[ESP + 0x24]                ; 0049ff3b
    LEA ESI,[ESP + 0xc]                 ; 0049ff3f
    PUSH EAX                            ; 0049ff43
    MOVSD.REP ES:EDI,ESI                ; 0049ff44
    CALL core_box.cpp_FUN_004207b0      ; 0049ff46
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0049ff4b
    PUSH EBX                            ; 0049ff4e
    MOV dword ptr [EBX + 0x4b0],EAX     ; 0049ff4f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0049ff55
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0049ff5a
    POP ESI                             ; 0049ff5d
    POP EDI                             ; 0049ff5e
    ADD ESP,0x30                        ; 0049ff5f
    POP EBX                             ; 0049ff62
    RET                                 ; 0049ff63

