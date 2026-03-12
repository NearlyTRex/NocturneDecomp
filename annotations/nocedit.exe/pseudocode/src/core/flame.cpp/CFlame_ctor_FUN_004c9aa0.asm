; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620 at 0041b628
;   core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70 at 00448c84
;   core_flame.cpp_factoryFunc_FUN_004c9a60 at 004c9a7a
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160 at 004cb184
;   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 at 005e8e84
;
; Referenced Globals:
;   CDemonActor_vtable g_CFlameVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9aa0
        ;   Label: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
    SUB ESP,0x4                         ; 004c9aa1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9aa4
    PUSH EDX                            ; 004c9aa8
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 004c9aa9
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c9aae
    MOV dword ptr [EAX + 0x154],0x65e034 ; 004c9ab1 | g_CFlameVTable
    MOV EBX,EAX                         ; 004c9abb
    MOV dword ptr [EAX + 0x158],0x3f800000 ; 004c9abd
    PUSH 0x41000000                     ; 004c9ac7
    MOV dword ptr [EAX + 0x15c],0x40000000 ; 004c9acc
    PUSH 0x0                            ; 004c9ad6
    MOV dword ptr [EAX + 0x160],0x3f800000 ; 004c9ad8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004c9ae2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

