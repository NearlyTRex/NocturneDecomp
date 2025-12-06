; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_emitter.cpp_FUN_004a8a80()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8a80
        ;   Label: core_emitter.cpp_FUN_004a8a80
    SUB ESP,0x18                        ; 004a8a81
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a8a84
    CMP dword ptr [ESP + 0x24],0x0      ; 004a8a88
    JNZ 0x004a8a94                      ; 004a8a8d | LAB_004a8a94
        ;   XREF to: 004a8a94 (CONDITIONAL_JUMP)
    ADD ESP,0x18                        ; 004a8a8f
    POP EBX                             ; 004a8a92
    RET                                 ; 004a8a93
    PUSH EBX                            ; 004a8a94
        ;   Label: LAB_004a8a94
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004a8a95 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a8a9a
    MOV EDX,ESP                         ; 004a8a9d
    PUSH EDX                            ; 004a8a9f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a8aa0
    PUSH EBX                            ; 004a8aa6
    CALL dword ptr [EAX + 0x14]         ; 004a8aa7
    ADD ESP,0x8                         ; 004a8aaa
    PUSH EAX                            ; 004a8aad
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004a8aae | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a8ab3
    PUSH EBX                            ; 004a8ab6
    MOV dword ptr [EBX + 0x48c],EAX     ; 004a8ab7
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004a8abd | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a8ac2
    ADD ESP,0x18                        ; 004a8ac5
    POP EBX                             ; 004a8ac8
    RET                                 ; 004a8ac9

