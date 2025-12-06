; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_beast.cpp_FUN_00418380()
;
;
; Called Functions:
;   core_enemy.cpp_FUN_004a9f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00418380
        ;   Label: core_beast.cpp_FUN_00418380
    PUSH EAX                            ; 00418384
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418385
    PUSH EDX                            ; 00418389
    MOV dword ptr [EAX + 0x4],0x0       ; 0041838a
    CALL core_enemy.cpp_FUN_004a9f10    ; 00418391 | undefined core_enemy.cpp_FUN_004a9f10()
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418396
    RET                                 ; 00418399

