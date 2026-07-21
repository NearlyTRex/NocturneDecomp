; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   FUN_00409d30 at 00409da4
;   FUN_0041fe40 at 004207c1
;   FUN_00439f50 at 0043a0f8
;   FUN_004950a0 at 004950d3
;   FUN_00495a20 at 0049636c
;   FUN_004980d0 at 00498342
;   FUN_004b32d0 at 004b347b
;   FUN_004b6d80 at 004b74ee
;   FUN_004b9fe0 at 004ba1bc
;   FUN_004c45a0 at 004c4693
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a000
        ;   Label: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
    SUB ESP,0x4                         ; 0040a001
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a004
    PUSH dword ptr [EBX + 0x30]         ; 0040a008
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0040a00b
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a010
    FLD float ptr [ESP + 0x4]           ; 0040a014
    ADD ESP,0x4                         ; 0040a018
    PUSH dword ptr [EBX + 0x38]         ; 0040a01b
    FSTP float ptr [EBX + 0x30]         ; 0040a01e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0040a021
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a026
    FLD float ptr [ESP + 0x4]           ; 0040a02a
    ADD ESP,0x4                         ; 0040a02e
    PUSH dword ptr [EBX + 0x34]         ; 0040a031
    FSTP float ptr [EBX + 0x38]         ; 0040a034
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0040a037
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040a03c
    FLD float ptr [ESP + 0x4]           ; 0040a040
    ADD ESP,0x4                         ; 0040a044
    LEA EAX,[EBX + 0x30]                ; 0040a047
    PUSH EAX                            ; 0040a04a
    ADD EBX,0x3c                        ; 0040a04b
    PUSH EBX                            ; 0040a04e
    FSTP float ptr [EBX + -0x8]         ; 0040a04f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0040a052
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 0040a057
    ADD ESP,0x4                         ; 0040a05a
    POP EBX                             ; 0040a05d
    RET                                 ; 0040a05e

