; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_menu_cpp_FUN_0050d5b0(void)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f2a4
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d5b0
        ;   Label: core_menu.cpp_FUN_0050d5b0
    PUSH ESI                            ; 0050d5b1
    MOV EAX,[0x0061d95c]                ; 0050d5b2 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x2      ; 0050d5b7
    JZ 0x0050d5e5                       ; 0050d5be
        ;   XREF to: 0050d5e5 (CONDITIONAL_JUMP)  ; LAB_0050d5e5
    MOV ESI,0xffffffff                  ; 0050d5c0
        ;   Label: LAB_0050d5c0
    XOR EBX,EBX                         ; 0050d5c5
    PUSH EBX                            ; 0050d5c7
        ;   Label: LAB_0050d5c7
    MOV EAX,[0x0061f2a4]                ; 0050d5c8 | DAT_0061f2a4
    PUSH EAX                            ; 0050d5cd
    MOV EDX,dword ptr [EAX]             ; 0050d5ce
    CALL dword ptr [EDX]                ; 0050d5d0
    ADD ESP,0x8                         ; 0050d5d2
    TEST EAX,EAX                        ; 0050d5d5
    JZ 0x0050d5f0                       ; 0050d5d7
        ;   XREF to: 0050d5f0 (CONDITIONAL_JUMP)  ; LAB_0050d5f0
    TEST ESI,ESI                        ; 0050d5d9
    JL 0x0050d61f                       ; 0050d5db
        ;   XREF to: 0050d61f (CONDITIONAL_JUMP)  ; LAB_0050d61f
    MOV EAX,0xfffffffe                  ; 0050d5dd
    POP ESI                             ; 0050d5e2
    POP EBX                             ; 0050d5e3
    RET                                 ; 0050d5e4
    PUSH EAX                            ; 0050d5e5
        ;   Label: LAB_0050d5e5
    CALL core_game.cpp_CGame_resetKeyState_FUN_004d0960 ; 0050d5e6
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004d0960(CGame * this_ptr)
    ADD ESP,0x4                         ; 0050d5eb
    JMP 0x0050d5c0                      ; 0050d5ee
        ;   XREF to: 0050d5c0 (UNCONDITIONAL_JUMP)  ; LAB_0050d5c0
    INC EBX                             ; 0050d5f0
        ;   Label: LAB_0050d5f0
    CMP EBX,0x258                       ; 0050d5f1
    JL 0x0050d5c7                       ; 0050d5f7
        ;   XREF to: 0050d5c7 (CONDITIONAL_JUMP)  ; LAB_0050d5c7
    MOV EAX,[0x0061d95c]                ; 0050d5f9 | g_CGamePtr
    CMP dword ptr [EAX + 0xd0],0x3      ; 0050d5fe
    JNZ 0x0050d623                      ; 0050d605
        ;   XREF to: 0050d623 (CONDITIONAL_JUMP)  ; LAB_0050d623
    CMP ESI,0x200                       ; 0050d607
    JZ 0x0050d617                       ; 0050d60d
        ;   XREF to: 0050d617 (CONDITIONAL_JUMP)  ; LAB_0050d617
    CMP ESI,0x201                       ; 0050d60f
    JNZ 0x0050d623                      ; 0050d615
        ;   XREF to: 0050d623 (CONDITIONAL_JUMP)  ; LAB_0050d623
    MOV EAX,0xfffffffd                  ; 0050d617
        ;   Label: LAB_0050d617
    POP ESI                             ; 0050d61c
    POP EBX                             ; 0050d61d
    RET                                 ; 0050d61e
    MOV ESI,EBX                         ; 0050d61f
        ;   Label: LAB_0050d61f
    JMP 0x0050d5f0                      ; 0050d621
        ;   XREF to: 0050d5f0 (UNCONDITIONAL_JUMP)  ; LAB_0050d5f0
    MOV EAX,ESI                         ; 0050d623
        ;   Label: LAB_0050d623
    POP ESI                             ; 0050d625
    POP EBX                             ; 0050d626
    RET                                 ; 0050d627

