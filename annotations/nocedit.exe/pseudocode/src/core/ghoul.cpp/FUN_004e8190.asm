; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ghoul_cpp_FUN_004e8190(void)
;
;
; Called Functions:
;   core_enemy.cpp_CEnemy_FUN_004a9fa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e8190
        ;   Label: core_ghoul.cpp_FUN_004e8190
    CMP dword ptr [EAX + 0xbedc],0x0    ; 004e8194
    JNZ 0x004e81a6                      ; 004e819b
        ;   XREF to: 004e81a6 (CONDITIONAL_JUMP)  ; LAB_004e81a6
    CMP dword ptr [EAX + 0xbed8],0x0    ; 004e819d
    JLE 0x004e81a7                      ; 004e81a4
        ;   XREF to: 004e81a7 (CONDITIONAL_JUMP)  ; LAB_004e81a7
    RET                                 ; 004e81a6
        ;   Label: LAB_004e81a6
    PUSH EBX                            ; 004e81a7
        ;   Label: LAB_004e81a7
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e81a8
    PUSH EBX                            ; 004e81ac
    PUSH EAX                            ; 004e81ad
    CALL core_enemy.cpp_CEnemy_FUN_004a9fa0 ; 004e81ae
        ;   XREF to: 004a9fa0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fa0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 004e81b3
    POP EBX                             ; 004e81b6
    RET                                 ; 004e81b7

