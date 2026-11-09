; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTheHand * core_thehand_cpp_CTheHand_ctor_FUN_0056c060(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_thehand.cpp_factoryFuncTheHand_FUN_0056c030 at 0056c043
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c060
        ;   Label: core_thehand.cpp_CTheHand_ctor_FUN_0056c060
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056c061
    PUSH EDX                            ; 0056c065
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0056c066
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0056c06b
    PUSH 0x5d64c4                       ; 0056c06e
    MOV EBX,EAX                         ; 0056c073
    ADD EAX,0x158                       ; 0056c075
    PUSH EAX                            ; 0056c07a
    MOV dword ptr [EAX + -0x4],0x5e5504 ; 0056c07b
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0056c082
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x3274],0x42480000 ; 0056c087
    MOV dword ptr [EBX + 0x3278],0x42c80000 ; 0056c091
    ADD ESP,0x8                         ; 0056c09b
    MOV dword ptr [EBX + 0xd054],0x0    ; 0056c09e
    MOV EAX,EBX                         ; 0056c0a8
    MOV dword ptr [EBX + 0xd058],0x0    ; 0056c0aa
    POP EBX                             ; 0056c0b4
    RET                                 ; 0056c0b5

