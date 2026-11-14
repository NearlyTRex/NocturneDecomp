; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_menu_cpp_FUN_004eadf0(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b93e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eadf0
        ;   Label: core_menu.cpp_FUN_004eadf0
    PUSH ESI                            ; 004eadf1
    MOV EAX,[0x005fe9dc]                ; 004eadf2 | g_CGamePtr
    CMP dword ptr [EAX + 0xd4],0x2      ; 004eadf7
    JZ 0x004eae25                       ; 004eadfe
        ;   XREF to: 004eae25 (CONDITIONAL_JUMP)  ; LAB_004eae25
    MOV ESI,0xffffffff                  ; 004eae00
        ;   Label: LAB_004eae00
    XOR EBX,EBX                         ; 004eae05
    PUSH EBX                            ; 004eae07
        ;   Label: LAB_004eae07
    MOV EAX,[0x00600284]                ; 004eae08 | DAT_00600284
    PUSH EAX                            ; 004eae0d
    MOV EDX,dword ptr [EAX]             ; 004eae0e
    CALL dword ptr [EDX]                ; 004eae10
    ADD ESP,0x8                         ; 004eae12
    TEST EAX,EAX                        ; 004eae15
    JZ 0x004eae30                       ; 004eae17
        ;   XREF to: 004eae30 (CONDITIONAL_JUMP)  ; LAB_004eae30
    TEST ESI,ESI                        ; 004eae19
    JL 0x004eae5f                       ; 004eae1b
        ;   XREF to: 004eae5f (CONDITIONAL_JUMP)  ; LAB_004eae5f
    MOV EAX,0xfffffffe                  ; 004eae1d
    POP ESI                             ; 004eae22
    POP EBX                             ; 004eae23
    RET                                 ; 004eae24
    PUSH EAX                            ; 004eae25
        ;   Label: LAB_004eae25
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b93e0 ; 004eae26
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b93e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004eae2b
    JMP 0x004eae00                      ; 004eae2e
        ;   XREF to: 004eae00 (UNCONDITIONAL_JUMP)  ; LAB_004eae00
    INC EBX                             ; 004eae30
        ;   Label: LAB_004eae30
    CMP EBX,0x258                       ; 004eae31
    JL 0x004eae07                       ; 004eae37
        ;   XREF to: 004eae07 (CONDITIONAL_JUMP)  ; LAB_004eae07
    MOV EAX,[0x005fe9dc]                ; 004eae39 | g_CGamePtr
    CMP dword ptr [EAX + 0xd4],0x3      ; 004eae3e
    JNZ 0x004eae63                      ; 004eae45
        ;   XREF to: 004eae63 (CONDITIONAL_JUMP)  ; LAB_004eae63
    CMP ESI,0x200                       ; 004eae47
    JZ 0x004eae57                       ; 004eae4d
        ;   XREF to: 004eae57 (CONDITIONAL_JUMP)  ; LAB_004eae57
    CMP ESI,0x201                       ; 004eae4f
    JNZ 0x004eae63                      ; 004eae55
        ;   XREF to: 004eae63 (CONDITIONAL_JUMP)  ; LAB_004eae63
    MOV EAX,0xfffffffd                  ; 004eae57
        ;   Label: LAB_004eae57
    POP ESI                             ; 004eae5c
    POP EBX                             ; 004eae5d
    RET                                 ; 004eae5e
    MOV ESI,EBX                         ; 004eae5f
        ;   Label: LAB_004eae5f
    JMP 0x004eae30                      ; 004eae61
        ;   XREF to: 004eae30 (UNCONDITIONAL_JUMP)  ; LAB_004eae30
    MOV EAX,ESI                         ; 004eae63
        ;   Label: LAB_004eae63
    POP ESI                             ; 004eae65
    POP EBX                             ; 004eae66
    RET                                 ; 004eae67

