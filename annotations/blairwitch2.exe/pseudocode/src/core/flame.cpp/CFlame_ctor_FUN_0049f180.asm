; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_0049f180(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bodypart.cpp_SBodyPartFire_ctor_FUN_00417cb0 at 00417cb8
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0 at 0043a4d4
;   core_flame.cpp_factoryFuncFlame_FUN_0049f150 at 0049f163
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004a06c0 at 004a06e4
;   core_vessel.cpp_CCryptVessel_ctor_FUN_00584ed0 at 00584ef4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f180
        ;   Label: core_flame.cpp_CFlame_ctor_FUN_0049f180
    SUB ESP,0x4                         ; 0049f181
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f184
    PUSH EDX                            ; 0049f188
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 0049f189
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0049f18e
    MOV dword ptr [EAX + 0x2b0],0x5f6914 ; 0049f191
    MOV EBX,EAX                         ; 0049f19b
    MOV dword ptr [EAX + 0x2b4],0x3f800000 ; 0049f19d
    PUSH 0x41000000                     ; 0049f1a7
    MOV dword ptr [EAX + 0x2b8],0x40000000 ; 0049f1ac
    PUSH 0x0                            ; 0049f1b6
    MOV dword ptr [EAX + 0x2bc],0x3f800000 ; 0049f1b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049f1c2
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBX + 0x304],0x0     ; 0049f1c7
    MOV dword ptr [EBX + 0x308],0x3f800000 ; 0049f1d1
    MOV dword ptr [EBX + 0x3ec],0x1     ; 0049f1db
    MOV dword ptr [EBX + 0x30c],0x0     ; 0049f1e5
    MOV byte ptr [EBX + 0x314],0x0      ; 0049f1ef
    MOV byte ptr [EBX + 0x378],0x0      ; 0049f1f6
    MOV dword ptr [EBX + 0x310],0x1     ; 0049f1fd
    MOV dword ptr [EBX + 0xfc],0x1      ; 0049f207
    MOV dword ptr [EBX + 0x3e0],0x3d4ccccd ; 0049f211
    MOV dword ptr [EBX + 0x3dc],0x3f000000 ; 0049f21b
    MOV dword ptr [EBX + 0x3f4],0x1     ; 0049f225
    MOV dword ptr [EBX + 0x3e4],0x0     ; 0049f22f
    MOV dword ptr [EBX + 0x3e8],0x0     ; 0049f239
    MOV dword ptr [EBX + 0x3f8],0x0     ; 0049f243
    MOV dword ptr [ESP + 0x8],EAX       ; 0049f24d
    MOV dword ptr [EBX + 0x3fc],0x0     ; 0049f251
    FLD float ptr [ESP + 0x8]           ; 0049f25b
    MOV EAX,EBX                         ; 0049f25f
    FSTP float ptr [EBX + 0x2c0]        ; 0049f261
    ADD ESP,0x8                         ; 0049f267
    ADD ESP,0x4                         ; 0049f26a
    POP EBX                             ; 0049f26d
    RET                                 ; 0049f26e

