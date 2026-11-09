; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004a59b0(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_bodypart.cpp_SBodyPartFire_ctor_FUN_00416d60 at 00416d68
;   core_flame.cpp_factoryFuncFlame_FUN_004a5980 at 004a5993
;   core_flamecan.cpp_CFlameCan_ctor_FUN_004a6f00 at 004a6f24
;   core_vessel.cpp_CCryptVessel_ctor_FUN_00576350 at 00576374
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_actor.cpp_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a59b0
        ;   Label: core_flame.cpp_CFlame_ctor_FUN_004a59b0
    SUB ESP,0x4                         ; 004a59b1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a59b4
    PUSH EDX                            ; 004a59b8
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004a59b9
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a59be
    MOV dword ptr [EAX + 0x154],0x5dfe74 ; 004a59c1
    MOV EBX,EAX                         ; 004a59cb
    MOV dword ptr [EAX + 0x158],0x3f800000 ; 004a59cd
    PUSH 0x41000000                     ; 004a59d7
    MOV dword ptr [EAX + 0x15c],0x40000000 ; 004a59dc
    PUSH 0x0                            ; 004a59e6
    MOV dword ptr [EAX + 0x160],0x3f800000 ; 004a59e8
    CALL core_actor.cpp_FUN_0040ce40    ; 004a59f2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBX + 0x1a8],0x0     ; 004a59f7
    MOV dword ptr [EBX + 0x1ac],0x3f800000 ; 004a5a01
    MOV dword ptr [EBX + 0x290],0x1     ; 004a5a0b
    MOV dword ptr [EBX + 0x1b0],0x0     ; 004a5a15
    MOV byte ptr [EBX + 0x1b8],0x0      ; 004a5a1f
    MOV byte ptr [EBX + 0x21c],0x0      ; 004a5a26
    MOV dword ptr [EBX + 0x1b4],0x1     ; 004a5a2d
    MOV dword ptr [EBX + 0xfc],0x1      ; 004a5a37
    MOV dword ptr [EBX + 0x284],0x3d4ccccd ; 004a5a41
    MOV dword ptr [EBX + 0x280],0x3f000000 ; 004a5a4b
    MOV dword ptr [EBX + 0x298],0x1     ; 004a5a55
    MOV dword ptr [EBX + 0x288],0x0     ; 004a5a5f
    MOV dword ptr [EBX + 0x28c],0x0     ; 004a5a69
    MOV dword ptr [EBX + 0x29c],0x0     ; 004a5a73
    MOV dword ptr [ESP + 0x8],EAX       ; 004a5a7d
    MOV dword ptr [EBX + 0x2a0],0x0     ; 004a5a81
    FLD float ptr [ESP + 0x8]           ; 004a5a8b
    MOV EAX,EBX                         ; 004a5a8f
    FSTP float ptr [EBX + 0x164]        ; 004a5a91
    ADD ESP,0x8                         ; 004a5a97
    ADD ESP,0x4                         ; 004a5a9a
    POP EBX                             ; 004a5a9d
    RET                                 ; 004a5a9e

