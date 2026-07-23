; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(int param_1)
;
;
; XREF[39]:
;   FUN_0040fa20 at 0040fad8
;   FUN_00418a00 at 00418f92
;   FUN_0041fe40 at 00420888
;   FUN_00439f50 at 0043a17b
;   FUN_00497900 at 0049791c
;   FUN_004a9270 at 004a94fe
;   FUN_004b32d0 at 004b34f8
;   FUN_004b6d80 at 004b72a8
;   FUN_004b9fe0 at 004ba281
;   FUN_004c4970 at 004c4bc0
;   ... and 29 more
;
; Referenced Globals:
;   double DOUBLE_00591b63 = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b8a1
    PUSH -0x1                           ; 0051b8a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051b8a7
    PUSH dword ptr [EBX + 0x8]          ; 0051b8aa
    PUSH EDX                            ; 0051b8ad
    PUSH EBX                            ; 0051b8ae
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 0051b8af
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920()
    FLD float ptr [EBX + 0x14]          ; 0051b8b4
    ADD ESP,0x10                        ; 0051b8b7
    FCOMP double ptr [0x00591b63]       ; 0051b8ba | DOUBLE_00591b63
    FNSTSW AX                           ; 0051b8c0
    SAHF                                ; 0051b8c2
    JA 0x0051b8c7                       ; 0051b8c3
        ;   XREF to: 0051b8c7 (CONDITIONAL_JUMP)  ; LAB_0051b8c7
    POP EBX                             ; 0051b8c5
    RET                                 ; 0051b8c6
    PUSH 0x51b650                       ; 0051b8c7 | LAB_0051b650
        ;   Label: LAB_0051b8c7
    PUSH -0x1                           ; 0051b8cc
    PUSH dword ptr [EBX + 0x14]         ; 0051b8ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 0051b8d1
    PUSH dword ptr [EBX + 0x1c]         ; 0051b8d4
    PUSH ECX                            ; 0051b8d7
    PUSH EBX                            ; 0051b8d8
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 0051b8d9
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    ADD ESP,0x18                        ; 0051b8de
    POP EBX                             ; 0051b8e1
    RET                                 ; 0051b8e2

