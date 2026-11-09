; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_actor.cpp_FUN_0040a050 at 0040ac1c
;   core_elephant.cpp_FUN_00485b40 at 004862f3
;   core_fire.cpp_FUN_00499fe0 at 0049a143
;   core_flamecan.cpp_FUN_004a0920 at 004a0951
;   core_gun.cpp_FUN_004cbdc0 at 004cc318
;   core_set.cpp_FUN_0052e940 at 0052edbf
;   core_shotgun.cpp_FUN_0053f170 at 0053f926
;   core_tommygun.cpp_FUN_00575800 at 00575d96
;   core_turret.cpp_FUN_0057fc20 at 0058018d
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_fire.cpp_FUN_0049d090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a08d0
        ;   Label: core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
    PUSH ESI                            ; 004a08d1
    PUSH EDI                            ; 004a08d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a08d3
    LEA ESI,[EDI + 0x4bc]               ; 004a08d7
    MOV dword ptr [EDI + 0x430],0x1     ; 004a08dd
    XOR EBX,EBX                         ; 004a08e7
    PUSH 0xffff                         ; 004a08e9
        ;   Label: LAB_004a08e9
    PUSH 0x0                            ; 004a08ee
    PUSH 0x4000                         ; 004a08f0
    PUSH 0x4000                         ; 004a08f5
    PUSH 0x0                            ; 004a08fa
    PUSH ESI                            ; 004a08fc
    MOV EDX,dword ptr [0x00614d30]      ; 004a08fd | DAT_00614d30
    PUSH EDX                            ; 004a0903
    INC EBX                             ; 004a0904
    CALL core_fire.cpp_FUN_0049d090     ; 004a0905
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a090a
    CMP EBX,0x5                         ; 004a090d
    JL 0x004a08e9                       ; 004a0910
        ;   XREF to: 004a08e9 (CONDITIONAL_JUMP)  ; LAB_004a08e9
    MOV dword ptr [EDI + 0x7ac],0x1     ; 004a0912
    POP EDI                             ; 004a091c
    POP ESI                             ; 004a091d
    POP EBX                             ; 004a091e
    RET                                 ; 004a091f

