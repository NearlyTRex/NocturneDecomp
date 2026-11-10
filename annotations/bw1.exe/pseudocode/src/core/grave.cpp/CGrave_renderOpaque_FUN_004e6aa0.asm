; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_grave_cpp_CGrave_renderOpaque_FUN_004e6aa0(CGrave *this_ptr)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6aa0
        ;   Label: core_grave.cpp_CGrave_renderOpaque_FUN_004e6aa0
    SUB ESP,0x30                        ; 004e6aa1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e6aa4
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004e6aa8
    JNZ 0x004e6b3e                      ; 004e6aaf
        ;   XREF to: 004e6b3e (CONDITIONAL_JUMP)  ; LAB_004e6b3e
    MOV EAX,[0x0061f650]                ; 004e6ab5 | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 004e6aba | DAT_01d2d908
    JNZ 0x004e6ad5                      ; 004e6ac1
        ;   XREF to: 004e6ad5 (CONDITIONAL_JUMP)  ; LAB_004e6ad5
    CMP dword ptr [EBX + 0x2e4],0x0     ; 004e6ac3
    JZ 0x004e6ad5                       ; 004e6aca
        ;   XREF to: 004e6ad5 (CONDITIONAL_JUMP)  ; LAB_004e6ad5
    CMP dword ptr [EBX + 0x2e0],0x0     ; 004e6acc
    JZ 0x004e6b3e                       ; 004e6ad3
        ;   XREF to: 004e6b3e (CONDITIONAL_JUMP)  ; LAB_004e6b3e
    PUSH EDI                            ; 004e6ad5
        ;   Label: LAB_004e6ad5
    PUSH ESI                            ; 004e6ad6
    PUSH EBX                            ; 004e6ad7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004e6ad8
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e6add
    PUSH 0x0                            ; 004e6ae0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6ae2
    PUSH EBX                            ; 004e6ae8
    LEA ESI,[ESP + 0x10]                ; 004e6ae9
    LEA EDI,[ESP + 0x28]                ; 004e6aed
    CALL dword ptr [EAX + 0x1c]         ; 004e6af1
    MOV ECX,0x6                         ; 004e6af4
    ADD ESP,0x4                         ; 004e6af9
    LEA EAX,[ESP + 0x24]                ; 004e6afc
    LEA ESI,[ESP + 0xc]                 ; 004e6b00
    PUSH EAX                            ; 004e6b04
    MOVSD.REP ES:EDI,ESI                ; 004e6b05
    CALL core_box.cpp_FUN_004207b0      ; 004e6b07
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004e6b0c
    MOV ESI,EAX                         ; 004e6b0f
    TEST EAX,EAX                        ; 004e6b11
    JZ 0x004e6b2c                       ; 004e6b13
        ;   XREF to: 004e6b2c (CONDITIONAL_JUMP)  ; LAB_004e6b2c
    PUSH -0x1                           ; 004e6b15
    LEA EAX,[EBX + 0x158]               ; 004e6b17
    PUSH dword ptr [EBX + 0x2d4]        ; 004e6b1d
    PUSH EAX                            ; 004e6b23
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004e6b24
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e6b29
    PUSH EBX                            ; 004e6b2c
        ;   Label: LAB_004e6b2c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e6b2d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e6b32
    MOV EAX,ESI                         ; 004e6b35
    POP ESI                             ; 004e6b37
    POP EDI                             ; 004e6b38
    ADD ESP,0x30                        ; 004e6b39
    POP EBX                             ; 004e6b3c
    RET                                 ; 004e6b3d
    XOR EAX,EAX                         ; 004e6b3e
        ;   Label: LAB_004e6b3e
    ADD ESP,0x30                        ; 004e6b40
    POP EBX                             ; 004e6b43
    RET                                 ; 004e6b44

