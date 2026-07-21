; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flame_cpp_CFlame_ctor_FUN_0048cf60(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[4]:
;   core_bodypart.cpp_SBodyPartFire_ctor_FUN_004180a0 at 004180a8
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10 at 0043cf24
;   core_flamecan.cpp_CFlameCan_ctor_FUN_0048e370 at 0048e394
;   core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920 at 0054f944
;
; Referenced Globals:
;   undefined1* PTR_core_flame.cpp_CFlame_setup_FUN_0048d050_0059d584 = 0048d050
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048cf60
        ;   Label: core_flame.cpp_CFlame_ctor_FUN_0048cf60
    SUB ESP,0x4                         ; 0048cf61
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cf64
    PUSH EDX                            ; 0048cf68
    CALL FUN_00409d30                   ; 0048cf69
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0048cf6e
    MOV dword ptr [EAX + 0x14c],0x59d584 ; 0048cf71 | PTR_core_flame.cpp_CFlame_setup_FUN_0048d050_0059d584
    MOV EBX,EAX                         ; 0048cf7b
    MOV dword ptr [EAX + 0x150],0x3f800000 ; 0048cf7d
    PUSH 0x41000000                     ; 0048cf87
    MOV dword ptr [EAX + 0x154],0x40000000 ; 0048cf8c
    PUSH 0x0                            ; 0048cf96
    MOV dword ptr [EAX + 0x158],0x3f800000 ; 0048cf98
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048cfa2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBX + 0x1a0],0x0     ; 0048cfa7
    MOV dword ptr [EBX + 0x1a4],0x3f800000 ; 0048cfb1
    MOV dword ptr [EBX + 0x288],0x1     ; 0048cfbb
    MOV dword ptr [EBX + 0x1a8],0x0     ; 0048cfc5
    MOV byte ptr [EBX + 0x1b0],0x0      ; 0048cfcf
    MOV byte ptr [EBX + 0x214],0x0      ; 0048cfd6
    MOV dword ptr [EBX + 0x1ac],0x1     ; 0048cfdd
    MOV dword ptr [EBX + 0xfc],0x1      ; 0048cfe7
    MOV dword ptr [EBX + 0x27c],0x3d4ccccd ; 0048cff1
    MOV dword ptr [EBX + 0x278],0x3f000000 ; 0048cffb
    MOV dword ptr [EBX + 0x290],0x1     ; 0048d005
    MOV dword ptr [EBX + 0x280],0x0     ; 0048d00f
    MOV dword ptr [EBX + 0x284],0x0     ; 0048d019
    MOV dword ptr [EBX + 0x294],0x0     ; 0048d023
    MOV dword ptr [ESP + 0x8],EAX       ; 0048d02d
    MOV dword ptr [EBX + 0x298],0x0     ; 0048d031
    FLD float ptr [ESP + 0x8]           ; 0048d03b
    MOV EAX,EBX                         ; 0048d03f
    FSTP float ptr [EBX + 0x15c]        ; 0048d041
    ADD ESP,0x8                         ; 0048d047
    ADD ESP,0x4                         ; 0048d04a
    POP EBX                             ; 0048d04d
    RET                                 ; 0048d04e

