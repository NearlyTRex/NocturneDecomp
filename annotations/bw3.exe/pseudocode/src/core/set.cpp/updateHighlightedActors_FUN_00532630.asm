; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_updateHighlightedActors_FUN_00532630(void)
;
;
; Referenced Globals:
;   double g_DOUBLE_005d010f = 2.25
;   CGame* g_CGamePtr = 01d2130c
;   int g_INT_01d5ba14
;   int g_INT_0207bab8
;   int g_INT_0207babc
;   float g_FLOAT_0207bac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532630
        ;   Label: core_set.cpp_updateHighlightedActors_FUN_00532630
    PUSH ESI                            ; 00532631
    MOV EAX,[0x005fe9dc]                ; 00532632 | g_CGamePtr
    XOR ECX,ECX                         ; 00532637
    MOV EBX,dword ptr [EAX + 0x24c]     ; 00532639
    MOV dword ptr [0x0207babc],ECX      ; 0053263f | g_INT_0207babc
    TEST EBX,EBX                        ; 00532645
    JNZ 0x0053269b                      ; 00532647
        ;   XREF to: 0053269b (CONDITIONAL_JUMP)  ; LAB_0053269b
    MOV EAX,[0x01d5ba14]                ; 00532649 | g_INT_01d5ba14
    SHL EAX,0x2                         ; 0053264e
    MOV ESI,dword ptr [EAX + 0x1d5ba04] ; 00532651
    TEST ESI,ESI                        ; 00532657
    JZ 0x0053269b                       ; 00532659
        ;   XREF to: 0053269b (CONDITIONAL_JUMP)  ; LAB_0053269b
    PUSH EDI                            ; 0053265b
    MOV EDI,dword ptr [ESI + 0x20b68]   ; 0053265c
    MOV EAX,ESI                         ; 00532662
    TEST EDI,EDI                        ; 00532664
    JZ 0x0053266e                       ; 00532666
        ;   XREF to: 0053266e (CONDITIONAL_JUMP)  ; LAB_0053266e
    MOV ECX,dword ptr [ESI + 0x20b70]   ; 00532668
    MOV EAX,[0x01d5ba14]                ; 0053266e | g_INT_01d5ba14
        ;   Label: LAB_0053266e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00532673
    FLD float ptr [EAX + 0x20b90]       ; 0053267a
    MOV EDX,dword ptr [EAX + 0x20b8c]   ; 00532680
    FCOS                                ; 00532686
    FADD double ptr [0x005d010f]        ; 00532688 | g_DOUBLE_005d010f
    MOV dword ptr [0x0207babc],EDX      ; 0053268e | g_INT_0207babc
    FSTP float ptr [0x0207bac0]         ; 00532694 | g_FLOAT_0207bac0
    POP EDI                             ; 0053269a
    MOV dword ptr [0x0207bab8],ECX      ; 0053269b | g_INT_0207bab8
        ;   Label: LAB_0053269b
    POP ESI                             ; 005326a1
    POP EBX                             ; 005326a2
    RET                                 ; 005326a3

