; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004790f0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004790f0
        ;   Label: FUN_004790f0
    SUB ESP,0x18                        ; 004790f1
    MOV EBX,dword ptr [ESP + 0x20]      ; 004790f4
    CMP dword ptr [ESP + 0x24],0x0      ; 004790f8
    JNZ 0x00479104                      ; 004790fd
        ;   XREF to: 00479104 (CONDITIONAL_JUMP)  ; LAB_00479104
    ADD ESP,0x18                        ; 004790ff
    POP EBX                             ; 00479102
    RET                                 ; 00479103
    PUSH EBX                            ; 00479104
        ;   Label: LAB_00479104
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00479105
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 0047910a
    PUSH 0x0                            ; 0047910d
    LEA EDX,[ESP + 0x4]                 ; 0047910f
    PUSH EDX                            ; 00479113
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479114
    PUSH EBX                            ; 0047911a
    CALL dword ptr [EAX + 0x14]         ; 0047911b
    ADD ESP,0x8                         ; 0047911e
    PUSH EAX                            ; 00479121
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00479122
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00479127
    PUSH EBX                            ; 0047912a
    MOV dword ptr [EBX + 0x484],EAX     ; 0047912b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00479131
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00479136
    ADD ESP,0x18                        ; 00479139
    POP EBX                             ; 0047913c
    RET                                 ; 0047913d

