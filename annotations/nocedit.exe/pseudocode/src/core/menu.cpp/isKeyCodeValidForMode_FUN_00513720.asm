; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_menu.cpp_isKeyCodeValidForMode_FUN_00513720(int * key_code_ptr, char * description)
;
; Parameters:
; int *            Stack[0x4]:4   key_code_ptr
; char *           Stack[0x8]:4   description
;
; XREF[1]:
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514ea0
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.game_control
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00513720
        ;   Label: core_menu.cpp_isKeyCodeValidForMode_FUN_00513720
    MOV EAX,[0x0067b654]                ; 00513724 | CGame * g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xbc]      ; 00513729 | g_CGameInstance.game_control
    TEST ECX,ECX                        ; 0051372f
    JNZ 0x0051379a                      ; 00513731 | LAB_0051379a
        ;   XREF to: 0051379a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 00513737
    CMP EAX,0x209                       ; 00513739
    JNC 0x0051375b                      ; 0051373e | LAB_0051375b
        ;   XREF to: 0051375b (CONDITIONAL_JUMP)
    CMP EAX,0x204                       ; 00513740
    JNC 0x00513755                      ; 00513745 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x201                       ; 00513747
    JNC 0x00513755                      ; 0051374c | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x200                       ; 0051374e
    JNZ 0x0051377b                      ; 00513753 | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00513755
        ;   Label: LAB_00513755
    RET                                 ; 0051375a
    JBE 0x00513755                      ; 0051375b | LAB_00513755
        ;   Label: LAB_0051375b
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x252                       ; 0051375d
    JNC 0x0051377e                      ; 00513762 | LAB_0051377e
        ;   XREF to: 0051377e (CONDITIONAL_JUMP)
    CMP EAX,0x20b                       ; 00513764
    JC 0x00513755                       ; 00513769 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 0051376b | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x20c                       ; 0051376d
    JBE 0x00513755                      ; 00513772 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x251                       ; 00513774
    JZ 0x00513755                       ; 00513779 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051377b
        ;   Label: LAB_0051377b
    RET                                 ; 0051377d
    JBE 0x00513755                      ; 0051377e | LAB_00513755
        ;   Label: LAB_0051377e
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x254                       ; 00513780
    JC 0x00513755                       ; 00513785 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 00513787 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x255                       ; 00513789
    JBE 0x00513755                      ; 0051378e | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x256                       ; 00513790
    JZ 0x00513755                       ; 00513795 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00513797
    RET                                 ; 00513799
    CMP ECX,0x1                         ; 0051379a
        ;   Label: LAB_0051379a
    JNZ 0x00513805                      ; 0051379d | LAB_00513805
        ;   XREF to: 00513805 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 005137a3
    CMP EAX,0x208                       ; 005137a5
    JNC 0x005137c0                      ; 005137aa | LAB_005137c0
        ;   XREF to: 005137c0 (CONDITIONAL_JUMP)
    CMP EAX,0x204                       ; 005137ac
    JNC 0x00513755                      ; 005137b1 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x202                       ; 005137b3
    JC 0x0051377b                       ; 005137b8 | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005137ba
    RET                                 ; 005137bf
    JBE 0x00513755                      ; 005137c0 | LAB_00513755
        ;   Label: LAB_005137c0
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x251                       ; 005137c2
    JNC 0x005137e0                      ; 005137c7 | LAB_005137e0
        ;   XREF to: 005137e0 (CONDITIONAL_JUMP)
    CMP EAX,0x20a                       ; 005137c9
    JC 0x00513755                       ; 005137ce | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 005137d0 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x20b                       ; 005137d2
    JZ 0x00513755                       ; 005137d7 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005137dd
    RET                                 ; 005137df
    JBE 0x00513755                      ; 005137e0 | LAB_00513755
        ;   Label: LAB_005137e0
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x253                       ; 005137e6
    JC 0x00513755                       ; 005137eb | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 005137f1 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x254                       ; 005137f7
    JZ 0x00513755                       ; 005137fc | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00513802
    RET                                 ; 00513804
    CMP ECX,0x2                         ; 00513805
        ;   Label: LAB_00513805
    JNZ 0x0051377b                      ; 00513808 | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0051380e
    CMP EAX,0x20c                       ; 00513810
    JNC 0x00513839                      ; 00513815 | LAB_00513839
        ;   XREF to: 00513839 (CONDITIONAL_JUMP)
    CMP EAX,0x200                       ; 00513817
    JC 0x0051377b                       ; 0051381c | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 00513822 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x201                       ; 00513828
    JNZ 0x0051377b                      ; 0051382d | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00513833
    RET                                 ; 00513838
    JBE 0x00513755                      ; 00513839 | LAB_00513755
        ;   Label: LAB_00513839
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x255                       ; 0051383f
    JC 0x0051377b                       ; 00513844 | LAB_0051377b
        ;   XREF to: 0051377b (CONDITIONAL_JUMP)
    JBE 0x00513755                      ; 0051384a | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    CMP EAX,0x256                       ; 00513850
    JZ 0x00513755                       ; 00513855 | LAB_00513755
        ;   XREF to: 00513755 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051385b
    RET                                 ; 0051385d

