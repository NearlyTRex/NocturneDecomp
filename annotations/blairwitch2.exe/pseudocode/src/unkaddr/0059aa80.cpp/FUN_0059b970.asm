; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059aa80_cpp_FUN_0059b970(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_026677e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b970
        ;   Label: unkaddr_0059aa80.cpp_FUN_0059b970
    PUSH ESI                            ; 0059b971
    PUSH EDI                            ; 0059b972
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059b973
    MOV EAX,0x2                         ; 0059b977
    CMP EAX,dword ptr [EDX + 0x20]      ; 0059b97c
    JZ 0x0059b98c                       ; 0059b97f
        ;   XREF to: 0059b98c (CONDITIONAL_JUMP)  ; LAB_0059b98c
    INC EAX                             ; 0059b981
        ;   Label: LAB_0059b981
    CMP EAX,0x5                         ; 0059b982
    JGE 0x0059b9de                      ; 0059b985
        ;   XREF to: 0059b9de (CONDITIONAL_JUMP)  ; LAB_0059b9de
    CMP EAX,dword ptr [EDX + 0x20]      ; 0059b987
    JNZ 0x0059b981                      ; 0059b98a
        ;   XREF to: 0059b981 (CONDITIONAL_JUMP)  ; LAB_0059b981
    MOV ECX,EAX                         ; 0059b98c
        ;   Label: LAB_0059b98c
    SHL EAX,0x2                         ; 0059b98e
    SUB EAX,ECX                         ; 0059b991
    SHL EAX,0x2                         ; 0059b993
    SUB EAX,ECX                         ; 0059b996
    MOV ESI,dword ptr [0x026677e4]      ; 0059b998 | DAT_026677e4
    MOV dword ptr [EDX + EAX*0x4 + 0x74],0x0 ; 0059b99e
    CMP ESI,dword ptr [0x01c2a37c]      ; 0059b9a6 | DAT_01c2a37c
    JGE 0x0059b9e2                      ; 0059b9ac
        ;   XREF to: 0059b9e2 (CONDITIONAL_JUMP)  ; LAB_0059b9e2
    MOV EAX,dword ptr [EDX + 0x30]      ; 0059b9ae
    INC EAX                             ; 0059b9b1
    MOV dword ptr [EDX + 0x30],EAX      ; 0059b9b2
    CMP EAX,0x2                         ; 0059b9b5
    JLE 0x0059b9c1                      ; 0059b9b8
        ;   XREF to: 0059b9c1 (CONDITIONAL_JUMP)  ; LAB_0059b9c1
    MOV dword ptr [EDX + 0x30],0x2      ; 0059b9ba
    MOV EAX,[0x01c2a37c]                ; 0059b9c1 | DAT_01c2a37c
        ;   Label: LAB_0059b9c1
    MOV EBX,dword ptr [EDX + 0x30]      ; 0059b9c6
    MOV [0x026677e4],EAX                ; 0059b9c9 | DAT_026677e4
    CMP EBX,0x2                         ; 0059b9ce
    JGE 0x0059b9f6                      ; 0059b9d1
        ;   XREF to: 0059b9f6 (CONDITIONAL_JUMP)  ; LAB_0059b9f6
    TEST EBX,EBX                        ; 0059b9d3
    JLE 0x0059b9f6                      ; 0059b9d5
        ;   XREF to: 0059b9f6 (CONDITIONAL_JUMP)  ; LAB_0059b9f6
    MOV dword ptr [EDX + 0x18],0x1      ; 0059b9d7
    POP EDI                             ; 0059b9de
        ;   Label: LAB_0059b9de
    POP ESI                             ; 0059b9df
    POP EBX                             ; 0059b9e0
    RET                                 ; 0059b9e1
    MOV EDI,dword ptr [EDX + 0x30]      ; 0059b9e2
        ;   Label: LAB_0059b9e2
    DEC EDI                             ; 0059b9e5
    MOV dword ptr [EDX + 0x30],EDI      ; 0059b9e6
    TEST EDI,EDI                        ; 0059b9e9
    JGE 0x0059b9c1                      ; 0059b9eb
        ;   XREF to: 0059b9c1 (CONDITIONAL_JUMP)  ; LAB_0059b9c1
    MOV dword ptr [EDX + 0x30],0x0      ; 0059b9ed
    JMP 0x0059b9c1                      ; 0059b9f4
        ;   XREF to: 0059b9c1 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c1
    MOV EDI,dword ptr [EDX + 0x30]      ; 0059b9f6
        ;   Label: LAB_0059b9f6
    CMP EDI,0x2                         ; 0059b9f9
    JNZ 0x0059ba05                      ; 0059b9fc
        ;   XREF to: 0059ba05 (CONDITIONAL_JUMP)  ; LAB_0059ba05
    MOV dword ptr [EDX + 0x18],EDI      ; 0059b9fe
    POP EDI                             ; 0059ba01
    POP ESI                             ; 0059ba02
    POP EBX                             ; 0059ba03
    RET                                 ; 0059ba04
    MOV dword ptr [EDX + 0x18],0x3      ; 0059ba05
        ;   Label: LAB_0059ba05
    POP EDI                             ; 0059ba0c
    POP ESI                             ; 0059ba0d
    POP EBX                             ; 0059ba0e
    RET                                 ; 0059ba0f

