; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_00412a60(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_007dffb8
;   undefined4 DAT_01c5fadc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412a60
        ;   Label: core_bmppuzzl.cpp_CAudioRecPuzzle_moveTransportSwitch_FUN_00412a60
    PUSH ESI                            ; 00412a61
    PUSH EDI                            ; 00412a62
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412a63
    MOV EAX,0x2                         ; 00412a67
    CMP EAX,dword ptr [EDX + 0x20]      ; 00412a6c
    JZ 0x00412a7c                       ; 00412a6f
        ;   XREF to: 00412a7c (CONDITIONAL_JUMP)  ; LAB_00412a7c
    INC EAX                             ; 00412a71
        ;   Label: LAB_00412a71
    CMP EAX,0x5                         ; 00412a72
    JGE 0x00412ace                      ; 00412a75
        ;   XREF to: 00412ace (CONDITIONAL_JUMP)  ; LAB_00412ace
    CMP EAX,dword ptr [EDX + 0x20]      ; 00412a77
    JNZ 0x00412a71                      ; 00412a7a
        ;   XREF to: 00412a71 (CONDITIONAL_JUMP)  ; LAB_00412a71
    MOV ECX,EAX                         ; 00412a7c
        ;   Label: LAB_00412a7c
    SHL EAX,0x2                         ; 00412a7e
    SUB EAX,ECX                         ; 00412a81
    SHL EAX,0x2                         ; 00412a83
    SUB EAX,ECX                         ; 00412a86
    MOV ESI,dword ptr [0x007dffb8]      ; 00412a88 | DAT_007dffb8
    MOV dword ptr [EDX + EAX*0x4 + 0x7c],0x0 ; 00412a8e
    CMP ESI,dword ptr [0x01c5fadc]      ; 00412a96 | DAT_01c5fadc
    JGE 0x00412ad2                      ; 00412a9c
        ;   XREF to: 00412ad2 (CONDITIONAL_JUMP)  ; LAB_00412ad2
    MOV EAX,dword ptr [EDX + 0x34]      ; 00412a9e
    INC EAX                             ; 00412aa1
    MOV dword ptr [EDX + 0x34],EAX      ; 00412aa2
    CMP EAX,0x2                         ; 00412aa5
    JLE 0x00412ab1                      ; 00412aa8
        ;   XREF to: 00412ab1 (CONDITIONAL_JUMP)  ; LAB_00412ab1
    MOV dword ptr [EDX + 0x34],0x2      ; 00412aaa
    MOV EAX,[0x01c5fadc]                ; 00412ab1 | DAT_01c5fadc
        ;   Label: LAB_00412ab1
    MOV EBX,dword ptr [EDX + 0x34]      ; 00412ab6
    MOV [0x007dffb8],EAX                ; 00412ab9 | DAT_007dffb8
    CMP EBX,0x2                         ; 00412abe
    JGE 0x00412ae6                      ; 00412ac1
        ;   XREF to: 00412ae6 (CONDITIONAL_JUMP)  ; LAB_00412ae6
    TEST EBX,EBX                        ; 00412ac3
    JLE 0x00412ae6                      ; 00412ac5
        ;   XREF to: 00412ae6 (CONDITIONAL_JUMP)  ; LAB_00412ae6
    MOV dword ptr [EDX + 0x18],0x1      ; 00412ac7
    POP EDI                             ; 00412ace
        ;   Label: LAB_00412ace
    POP ESI                             ; 00412acf
    POP EBX                             ; 00412ad0
    RET                                 ; 00412ad1
    MOV EDI,dword ptr [EDX + 0x34]      ; 00412ad2
        ;   Label: LAB_00412ad2
    DEC EDI                             ; 00412ad5
    MOV dword ptr [EDX + 0x34],EDI      ; 00412ad6
    TEST EDI,EDI                        ; 00412ad9
    JGE 0x00412ab1                      ; 00412adb
        ;   XREF to: 00412ab1 (CONDITIONAL_JUMP)  ; LAB_00412ab1
    MOV dword ptr [EDX + 0x34],0x0      ; 00412add
    JMP 0x00412ab1                      ; 00412ae4
        ;   XREF to: 00412ab1 (UNCONDITIONAL_JUMP)  ; LAB_00412ab1
    MOV EDI,dword ptr [EDX + 0x34]      ; 00412ae6
        ;   Label: LAB_00412ae6
    CMP EDI,0x2                         ; 00412ae9
    JNZ 0x00412af5                      ; 00412aec
        ;   XREF to: 00412af5 (CONDITIONAL_JUMP)  ; LAB_00412af5
    MOV dword ptr [EDX + 0x18],EDI      ; 00412aee
    POP EDI                             ; 00412af1
    POP ESI                             ; 00412af2
    POP EBX                             ; 00412af3
    RET                                 ; 00412af4
    MOV dword ptr [EDX + 0x18],0x3      ; 00412af5
        ;   Label: LAB_00412af5
    POP EDI                             ; 00412afc
    POP ESI                             ; 00412afd
    POP EBX                             ; 00412afe
    RET                                 ; 00412aff

