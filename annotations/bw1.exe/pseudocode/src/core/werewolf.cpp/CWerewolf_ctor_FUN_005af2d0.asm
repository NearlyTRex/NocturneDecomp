; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_werewolf.cpp_factoryFuncWerewolf_FUN_005af2a0 at 005af2b3
;
; Referenced Globals:
;   undefined4 DAT_00607fd0
;   undefined4 DAT_00607fd4
;   undefined4 DAT_00607fd8
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af2d0
        ;   Label: core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005af2d1
    PUSH EDX                            ; 005af2d5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 005af2d6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005af2db
    PUSH 0x5f99d4                       ; 005af2de
    MOV EBX,EAX                         ; 005af2e3
    ADD EAX,0x158                       ; 005af2e5
    PUSH EAX                            ; 005af2ea
    MOV dword ptr [EAX + -0x4],0x607ff4 ; 005af2eb
    CALL core_skeleton.cpp_FUN_00569f50 ; 005af2f2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    MOV dword ptr [EBX + 0x2fec],0x3f800000 ; 005af2f7
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 005af301
    MOV dword ptr [EBX + 0xc268],0x0    ; 005af30b
    MOV dword ptr [EBX + 0xc280],0x1    ; 005af315
    MOV dword ptr [EBX + 0xc294],0x0    ; 005af31f
    FLD float ptr [0x00607fd0]          ; 005af329 | DAT_00607fd0
    MOV dword ptr [EBX + 0xc298],0x40a00000 ; 005af32f
    FLD float ptr [0x00607fd4]          ; 005af339 | DAT_00607fd4
    MOV dword ptr [EBX + 0xc29c],0x0    ; 005af33f
    FLD float ptr [0x00607fd8]          ; 005af349 | DAT_00607fd8
    MOV dword ptr [EBX + 0xc2a0],0x0    ; 005af34f
    ADD ESP,0x8                         ; 005af359
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 005af35c
    MOV EAX,EBX                         ; 005af366
    FXCH ST2                            ; 005af368
    FSTP float ptr [EBX + 0x2ff4]       ; 005af36a
    FSTP float ptr [EBX + 0x2ff8]       ; 005af370
    FSTP float ptr [EBX + 0xc2a8]       ; 005af376
    POP EBX                             ; 005af37c
    RET                                 ; 005af37d

