; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004c15e0(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ghoul.cpp_factoryFuncGhoul_FUN_004c15b0 at 004c15c3
;
; Referenced Globals:
;   undefined4 DAT_005d8e97
;   undefined4 DAT_005f78d0
;   undefined4 DAT_005f78d4
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040cfc0
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c15e0
        ;   Label: core_ghoul.cpp_CGhoul_ctor_FUN_004c15e0
    SUB ESP,0x4                         ; 004c15e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c15e4
    PUSH EDX                            ; 004c15e8
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 004c15e9
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004c15ee
    PUSH 0x5d8e8e                       ; 004c15f1
    MOV EBX,EAX                         ; 004c15f6
    ADD EAX,0x2b4                       ; 004c15f8
    PUSH EAX                            ; 004c15fd
    MOV dword ptr [EAX + -0x4],0x5f78e4 ; 004c15fe
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004c1605
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004c160a
    PUSH 0x420c0000                     ; 004c160d
    PUSH 0x41a00000                     ; 004c1612
    CALL core_actor.cpp_FUN_0040cf60    ; 004c1617
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 004c161c
    FLD float ptr [ESP + 0x8]           ; 004c1620
    ADD ESP,0x8                         ; 004c1624
    FMUL double ptr [0x005d8e97]        ; 004c1627 | DAT_005d8e97
    PUSH 0x41200000                     ; 004c162d
    PUSH 0x40800000                     ; 004c1632
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c1637
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x10afc]     ; 004c163c
    CALL core_actor.cpp_FUN_0040cf60    ; 004c1642
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [EBX + 0x10b04],0xa0000 ; 004c1647
    MOV dword ptr [ESP + 0x8],EAX       ; 004c1651
    MOV dword ptr [EBX + 0x10b08],0xffffffff ; 004c1655
    FLD float ptr [ESP + 0x8]           ; 004c165f
    FMUL double ptr [0x005d8e97]        ; 004c1663 | DAT_005d8e97
    MOV dword ptr [EBX + 0x10b0c],0x0   ; 004c1669
    ADD ESP,0x8                         ; 004c1673
    MOV dword ptr [EBX + 0x10b18],0x2   ; 004c1676
    PUSH 0x3                            ; 004c1680
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c1682
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH 0x1                            ; 004c1687
    FISTP dword ptr [EBX + 0x10b00]     ; 004c1689
    CALL core_actor.cpp_FUN_0040cfc0    ; 004c168f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cfc0(int min_value, int max_value)
    MOV dword ptr [EBX + 0x3430],0x3f400000 ; 004c1694
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 004c169e
    MOV dword ptr [EBX + 0x10b54],0x0   ; 004c16a8
    MOV dword ptr [EBX + 0x10b58],0x0   ; 004c16b2
    MOV dword ptr [EBX + 0x10b5c],0x0   ; 004c16bc
    MOV dword ptr [EBX + 0x10b60],0x0   ; 004c16c6
    MOV dword ptr [EBX + 0x10b64],0x0   ; 004c16d0
    FLD float ptr [0x005f78d0]          ; 004c16da | DAT_005f78d0
    MOV dword ptr [EBX + 0x259c],0x3fc90fdb ; 004c16e0
    FLD float ptr [0x005f78d4]          ; 004c16ea | DAT_005f78d4
    MOV dword ptr [EBX + 0x10b14],EAX   ; 004c16f0
    ADD ESP,0x8                         ; 004c16f6
    FXCH                                ; 004c16f9
    FSTP float ptr [EBX + 0x3438]       ; 004c16fb
    FSTP float ptr [EBX + 0x343c]       ; 004c1701
    MOV EAX,EBX                         ; 004c1707
    ADD ESP,0x4                         ; 004c1709
    POP EBX                             ; 004c170c
    RET                                 ; 004c170d

