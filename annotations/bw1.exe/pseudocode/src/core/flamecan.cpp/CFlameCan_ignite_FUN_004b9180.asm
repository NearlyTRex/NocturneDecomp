; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_actor.cpp_FUN_00409f20 at 0040a930
;   core_elephant.cpp_FUN_0049e1a0 at 0049e953
;   core_fire.cpp_FUN_004b2980 at 004b2ae3
;   core_flamecan.cpp_FUN_004b91d0 at 004b9201
;   core_gun.cpp_FUN_004e8630 at 004e8b7f
;   core_rifle.cpp_FUN_00540080 at 00540717
;   core_set.cpp_FUN_0054fc20 at 0055009f
;   core_shotgun.cpp_FUN_00561760 at 00561f16
;   core_tommygun.cpp_FUN_00598420 at 005989b6
;   core_turret.cpp_FUN_005a3870 at 005a3ddd
;
; Referenced Globals:
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9180
        ;   Label: core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
    PUSH ESI                            ; 004b9181
    PUSH EDI                            ; 004b9182
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b9183
    LEA ESI,[EDI + 0x360]               ; 004b9187
    MOV dword ptr [EDI + 0x2d4],0x1     ; 004b918d
    XOR EBX,EBX                         ; 004b9197
    PUSH 0xffff                         ; 004b9199
        ;   Label: LAB_004b9199
    PUSH 0x0                            ; 004b919e
    PUSH 0x4000                         ; 004b91a0
    PUSH 0x4000                         ; 004b91a5
    PUSH 0x0                            ; 004b91aa
    PUSH ESI                            ; 004b91ac
    MOV EDX,dword ptr [0x0061c010]      ; 004b91ad | DAT_0061c010
    PUSH EDX                            ; 004b91b3
    INC EBX                             ; 004b91b4
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004b91b5
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004b91ba
    CMP EBX,0x5                         ; 004b91bd
    JL 0x004b9199                       ; 004b91c0
        ;   XREF to: 004b9199 (CONDITIONAL_JUMP)  ; LAB_004b9199
    MOV dword ptr [EDI + 0x4f4],0x1     ; 004b91c2
    POP EDI                             ; 004b91cc
    POP ESI                             ; 004b91cd
    POP EBX                             ; 004b91ce
    RET                                 ; 004b91cf

