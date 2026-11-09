; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005491b0(void)
;
;
; XREF[1]:
;   core_mission.cpp_FUN_004fc350 at 004fc48a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00541160
;   core_skeleton.cpp_FUN_00540980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005491b0
        ;   Label: core_skeleton.cpp_FUN_005491b0
    PUSH ESI                            ; 005491b1
    MOV ESI,0x20ccff4                   ; 005491b2
    XOR EBX,EBX                         ; 005491b7
    CMP dword ptr [EBX + 0x2177ff4],0x0 ; 005491b9
        ;   Label: LAB_005491b9
    JZ 0x005491f7                       ; 005491c0
        ;   XREF to: 005491f7 (CONDITIONAL_JUMP)  ; LAB_005491f7
    ADD EBX,0x4                         ; 005491c2
        ;   Label: LAB_005491c2
    ADD ESI,0x2ac0                      ; 005491c5
    CMP EBX,0x100                       ; 005491cb
    JNZ 0x005491b9                      ; 005491d1
        ;   XREF to: 005491b9 (CONDITIONAL_JUMP)  ; LAB_005491b9
    MOV ESI,0x21780f4                   ; 005491d3
    XOR EBX,EBX                         ; 005491d8
    CMP dword ptr [EBX + 0x2628554],0x0 ; 005491da
        ;   Label: LAB_005491da
    JZ 0x00549202                       ; 005491e1
        ;   XREF to: 00549202 (CONDITIONAL_JUMP)  ; LAB_00549202
    ADD EBX,0x4                         ; 005491e3
        ;   Label: LAB_005491e3
    ADD ESI,0x1e01c                     ; 005491e6
    CMP EBX,0xa0                        ; 005491ec
    JNZ 0x005491da                      ; 005491f2
        ;   XREF to: 005491da (CONDITIONAL_JUMP)  ; LAB_005491da
    POP ESI                             ; 005491f4
    POP EBX                             ; 005491f5
    RET                                 ; 005491f6
    PUSH ESI                            ; 005491f7
        ;   Label: LAB_005491f7
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00541160 ; 005491f8
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00541160(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005491fd
    JMP 0x005491c2                      ; 00549200
        ;   XREF to: 005491c2 (UNCONDITIONAL_JUMP)  ; LAB_005491c2
    PUSH 0x1                            ; 00549202
        ;   Label: LAB_00549202
    PUSH ESI                            ; 00549204
    CALL core_skeleton.cpp_FUN_00540980 ; 00549205
        ;   XREF to: 00540980 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00540980()
    ADD ESP,0x8                         ; 0054920a
    JMP 0x005491e3                      ; 0054920d
        ;   XREF to: 005491e3 (UNCONDITIONAL_JUMP)  ; LAB_005491e3

