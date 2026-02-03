; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flamecan_cpp_CFlameCan_FUN_004cb340(CFlameCan *this_ptr)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040aa8b
;   core_fire.cpp_CGunFlame_FUN_004c4c00 at 004c4d3c
;   core_flamecan.cpp_CFlameCan_process_FUN_004cb390 at 004cb3c1
;   core_gun.cpp_CGun_FUN_004f0350 at 004f0814
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056bc89
;   core_tommygun.cpp_FUN_005ddb30 at 005de014
;   core_turret.cpp_FUN_005e3750 at 005e3c1c
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb340
        ;   Label: core_flamecan.cpp_CFlameCan_FUN_004cb340
    PUSH ESI                            ; 004cb341
    PUSH EDI                            ; 004cb342
    MOV EDI,dword ptr [ESP + 0x10]      ; 004cb343
    LEA ESI,[EDI + 0x360]               ; 004cb347
    MOV dword ptr [EDI + 0x2d4],0x1     ; 004cb34d
    XOR EBX,EBX                         ; 004cb357
    PUSH 0xffff                         ; 004cb359
        ;   Label: LAB_004cb359
    PUSH 0x0                            ; 004cb35e
    PUSH 0x4000                         ; 004cb360
    PUSH 0x4000                         ; 004cb365
    PUSH 0x0                            ; 004cb36a
    PUSH ESI                            ; 004cb36c
    MOV EDX,dword ptr [0x0067a3d0]      ; 004cb36d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004cb373 | g_CFireEffectInstance
    INC EBX                             ; 004cb374
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004cb375
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004cb37a
    CMP EBX,0x5                         ; 004cb37d
    JL 0x004cb359                       ; 004cb380
        ;   XREF to: 004cb359 (CONDITIONAL_JUMP)  ; LAB_004cb359
    MOV dword ptr [EDI + 0x4f4],0x1     ; 004cb382
    POP EDI                             ; 004cb38c
    POP ESI                             ; 004cb38d
    POP EBX                             ; 004cb38e
    RET                                 ; 004cb38f

