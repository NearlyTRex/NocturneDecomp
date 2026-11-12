; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_menu_cpp_FUN_004eece0(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b7140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eece0
        ;   Label: core_menu.cpp_FUN_004eece0
    PUSH ESI                            ; 004eece1
    MOV EAX,[0x00616494]                ; 004eece2 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 004eece7
    JZ 0x004eed15                       ; 004eecee
        ;   XREF to: 004eed15 (CONDITIONAL_JUMP)  ; LAB_004eed15
    MOV ESI,0xffffffff                  ; 004eecf0
        ;   Label: LAB_004eecf0
    XOR EBX,EBX                         ; 004eecf5
    PUSH EBX                            ; 004eecf7
        ;   Label: LAB_004eecf7
    MOV EAX,[0x00617dd4]                ; 004eecf8 | DAT_00617dd4
    PUSH EAX                            ; 004eecfd
    MOV EDX,dword ptr [EAX]             ; 004eecfe
    CALL dword ptr [EDX]                ; 004eed00
    ADD ESP,0x8                         ; 004eed02
    TEST EAX,EAX                        ; 004eed05
    JZ 0x004eed20                       ; 004eed07
        ;   XREF to: 004eed20 (CONDITIONAL_JUMP)  ; LAB_004eed20
    TEST ESI,ESI                        ; 004eed09
    JL 0x004eed2e                       ; 004eed0b
        ;   XREF to: 004eed2e (CONDITIONAL_JUMP)  ; LAB_004eed2e
    MOV EAX,0xfffffffe                  ; 004eed0d
    POP ESI                             ; 004eed12
    POP EBX                             ; 004eed13
    RET                                 ; 004eed14
    PUSH EAX                            ; 004eed15
        ;   Label: LAB_004eed15
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b7140 ; 004eed16
        ;   XREF to: 004b7140 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b7140(CGame * this_ptr)
    ADD ESP,0x4                         ; 004eed1b
    JMP 0x004eecf0                      ; 004eed1e
        ;   XREF to: 004eecf0 (UNCONDITIONAL_JUMP)  ; LAB_004eecf0
    INC EBX                             ; 004eed20
        ;   Label: LAB_004eed20
    CMP EBX,0x258                       ; 004eed21
    JL 0x004eecf7                       ; 004eed27
        ;   XREF to: 004eecf7 (CONDITIONAL_JUMP)  ; LAB_004eecf7
    MOV EAX,ESI                         ; 004eed29
    POP ESI                             ; 004eed2b
    POP EBX                             ; 004eed2c
    RET                                 ; 004eed2d
    MOV ESI,EBX                         ; 004eed2e
        ;   Label: LAB_004eed2e
    INC EBX                             ; 004eed30
    CMP EBX,0x258                       ; 004eed31
    JL 0x004eecf7                       ; 004eed37
        ;   XREF to: 004eecf7 (CONDITIONAL_JUMP)  ; LAB_004eecf7
    MOV EAX,ESI                         ; 004eed39
    POP ESI                             ; 004eed3b
    POP EBX                             ; 004eed3c
    RET                                 ; 004eed3d

