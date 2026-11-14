; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004b7a30(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b130 at 0041b138
;   core_crossbow.cpp_CCrossbow_ctor_FUN_00449770 at 00449784
;   core_flame.cpp_factoryFuncFlame_FUN_004b7a00 at 004b7a13
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004b8f70 at 004b8f94
;   core_vessel.cpp_CCryptVessel_ctor_FUN_005a8b00 at 005a8b24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7a30
        ;   Label: core_flame.cpp_CFlame_ctor_FUN_004b7a30
    SUB ESP,0x4                         ; 004b7a31
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7a34
    PUSH EDX                            ; 004b7a38
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 004b7a39
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b7a3e
    MOV dword ptr [EAX + 0x154],0x6003a4 ; 004b7a41
    MOV EBX,EAX                         ; 004b7a4b
    MOV dword ptr [EAX + 0x158],0x3f800000 ; 004b7a4d
    PUSH 0x41000000                     ; 004b7a57
    MOV dword ptr [EAX + 0x15c],0x40000000 ; 004b7a5c
    PUSH 0x0                            ; 004b7a66
    MOV dword ptr [EAX + 0x160],0x3f800000 ; 004b7a68
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b7a72
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBX + 0x1a8],0x0     ; 004b7a77
    MOV dword ptr [EBX + 0x1ac],0x3f800000 ; 004b7a81
    MOV dword ptr [EBX + 0x290],0x1     ; 004b7a8b
    MOV dword ptr [EBX + 0x1b0],0x0     ; 004b7a95
    MOV byte ptr [EBX + 0x1b8],0x0      ; 004b7a9f
    MOV byte ptr [EBX + 0x21c],0x0      ; 004b7aa6
    MOV dword ptr [EBX + 0x1b4],0x1     ; 004b7aad
    MOV dword ptr [EBX + 0xfc],0x1      ; 004b7ab7
    MOV dword ptr [EBX + 0x284],0x3d4ccccd ; 004b7ac1
    MOV dword ptr [EBX + 0x280],0x3f000000 ; 004b7acb
    MOV dword ptr [EBX + 0x298],0x1     ; 004b7ad5
    MOV dword ptr [EBX + 0x288],0x0     ; 004b7adf
    MOV dword ptr [EBX + 0x28c],0x0     ; 004b7ae9
    MOV dword ptr [EBX + 0x29c],0x0     ; 004b7af3
    MOV dword ptr [ESP + 0x8],EAX       ; 004b7afd
    MOV dword ptr [EBX + 0x2a0],0x0     ; 004b7b01
    FLD float ptr [ESP + 0x8]           ; 004b7b0b
    MOV EAX,EBX                         ; 004b7b0f
    FSTP float ptr [EBX + 0x164]        ; 004b7b11
    ADD ESP,0x8                         ; 004b7b17
    ADD ESP,0x4                         ; 004b7b1a
    POP EBX                             ; 004b7b1d
    RET                                 ; 004b7b1e

