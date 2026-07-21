; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(int *param_1)
;
;
; XREF[3]:
;   FUN_00475230 at 00475240
;   shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0 at 004751fc
;   shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70 at 00474e93
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475db0
        ;   Label: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
    PUSH ESI                            ; 00475db1
    PUSH EDI                            ; 00475db2
    PUSH EBP                            ; 00475db3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00475db4
    MOV ECX,dword ptr [EAX]             ; 00475db8
    CMP ECX,dword ptr [EAX + 0x118]     ; 00475dba
    JLE 0x00475df7                      ; 00475dc0
        ;   XREF to: 00475df7 (CONDITIONAL_JUMP)  ; LAB_00475df7
    CMP dword ptr [EAX + 0x118],0x0     ; 00475dc2
        ;   Label: LAB_00475dc2
    JL 0x00475e02                       ; 00475dc9
        ;   XREF to: 00475e02 (CONDITIONAL_JUMP)  ; LAB_00475e02
    MOV ESI,dword ptr [EAX + 0x11c]     ; 00475dcb
        ;   Label: LAB_00475dcb
    TEST ESI,ESI                        ; 00475dd1
    JL 0x00475e0e                       ; 00475dd3
        ;   XREF to: 00475e0e (CONDITIONAL_JUMP)  ; LAB_00475e0e
    MOV EBP,dword ptr [EAX]             ; 00475dd5
        ;   Label: LAB_00475dd5
    MOV EDX,dword ptr [EAX + 0x11c]     ; 00475dd7
    CMP EDX,EBP                         ; 00475ddd
    JL 0x00475e1f                       ; 00475ddf
        ;   XREF to: 00475e1f (CONDITIONAL_JUMP)  ; LAB_00475e1f
    MOV EBX,dword ptr [EAX + 0x11c]     ; 00475de1
    MOV EDX,dword ptr [EAX + 0x124]     ; 00475de7
    SUB EBX,EDX                         ; 00475ded
    MOV dword ptr [EAX + 0x11c],EBX     ; 00475def
    JMP 0x00475dd5                      ; 00475df5
        ;   XREF to: 00475dd5 (UNCONDITIONAL_JUMP)  ; LAB_00475dd5
    LEA EDX,[ECX + -0x1]                ; 00475df7
        ;   Label: LAB_00475df7
    MOV dword ptr [EAX + 0x118],EDX     ; 00475dfa
    JMP 0x00475dc2                      ; 00475e00
        ;   XREF to: 00475dc2 (UNCONDITIONAL_JUMP)  ; LAB_00475dc2
    MOV dword ptr [EAX + 0x118],0x0     ; 00475e02
        ;   Label: LAB_00475e02
    JMP 0x00475dcb                      ; 00475e0c
        ;   XREF to: 00475dcb (UNCONDITIONAL_JUMP)  ; LAB_00475dcb
    MOV EDX,dword ptr [EAX + 0x124]     ; 00475e0e
        ;   Label: LAB_00475e0e
    LEA EDI,[ESI + EDX*0x1]             ; 00475e14
    MOV dword ptr [EAX + 0x11c],EDI     ; 00475e17
    JMP 0x00475dcb                      ; 00475e1d
        ;   XREF to: 00475dcb (UNCONDITIONAL_JUMP)  ; LAB_00475dcb
    TEST EDX,EDX                        ; 00475e1f
        ;   Label: LAB_00475e1f
    JL 0x00475e70                       ; 00475e21
        ;   XREF to: 00475e70 (CONDITIONAL_JUMP)  ; LAB_00475e70
    MOV ECX,dword ptr [EAX]             ; 00475e23
        ;   Label: LAB_00475e23
    CMP ECX,dword ptr [EAX + 0x118]     ; 00475e25
    JLE 0x00475ecc                      ; 00475e2b
        ;   XREF to: 00475ecc (CONDITIONAL_JUMP)  ; LAB_00475ecc
    XOR ECX,ECX                         ; 00475e31
    MOV ESI,dword ptr [EAX + 0x11c]     ; 00475e33
        ;   Label: LAB_00475e33
    CMP ESI,dword ptr [EAX + 0x118]     ; 00475e39
    JG 0x00475e7c                       ; 00475e3f
        ;   XREF to: 00475e7c (CONDITIONAL_JUMP)  ; LAB_00475e7c
    MOV ESI,dword ptr [EAX + 0x120]     ; 00475e41
        ;   Label: LAB_00475e41
    MOV EDX,dword ptr [EAX + 0x11c]     ; 00475e47
    MOV EDI,dword ptr [EAX + 0x118]     ; 00475e4d
    ADD EDX,ESI                         ; 00475e53
    CMP EDX,EDI                         ; 00475e55
    JG 0x00475ecc                       ; 00475e57
        ;   XREF to: 00475ecc (CONDITIONAL_JUMP)  ; LAB_00475ecc
    MOV EBP,dword ptr [EAX + 0x12c]     ; 00475e5d
    CMP EBP,0x1                         ; 00475e63
    JNZ 0x00475eb3                      ; 00475e66
        ;   XREF to: 00475eb3 (CONDITIONAL_JUMP)  ; LAB_00475eb3
    ADD dword ptr [EAX + 0x11c],EBP     ; 00475e68
    JMP 0x00475e41                      ; 00475e6e
        ;   XREF to: 00475e41 (UNCONDITIONAL_JUMP)  ; LAB_00475e41
    MOV dword ptr [EAX + 0x11c],0x0     ; 00475e70
        ;   Label: LAB_00475e70
    JMP 0x00475e23                      ; 00475e7a
        ;   XREF to: 00475e23 (UNCONDITIONAL_JUMP)  ; LAB_00475e23
    MOV EDI,dword ptr [EAX + 0x12c]     ; 00475e7c
        ;   Label: LAB_00475e7c
    CMP EDI,0x1                         ; 00475e82
    JNZ 0x00475ea1                      ; 00475e85
        ;   XREF to: 00475ea1 (CONDITIONAL_JUMP)  ; LAB_00475ea1
    MOV EDX,ESI                         ; 00475e87
    SUB EDX,EDI                         ; 00475e89
    MOV dword ptr [EAX + 0x11c],EDX     ; 00475e8b
    CMP ECX,dword ptr [EAX + 0x11c]     ; 00475e91
        ;   Label: LAB_00475e91
    JLE 0x00475e33                      ; 00475e97
        ;   XREF to: 00475e33 (CONDITIONAL_JUMP)  ; LAB_00475e33
    MOV dword ptr [EAX + 0x11c],ECX     ; 00475e99
    JMP 0x00475e33                      ; 00475e9f
        ;   XREF to: 00475e33 (UNCONDITIONAL_JUMP)  ; LAB_00475e33
    MOV EBP,ESI                         ; 00475ea1
        ;   Label: LAB_00475ea1
    MOV EDX,dword ptr [EAX + 0x124]     ; 00475ea3
    SUB EBP,EDX                         ; 00475ea9
    MOV dword ptr [EAX + 0x11c],EBP     ; 00475eab
    JMP 0x00475e91                      ; 00475eb1
        ;   XREF to: 00475e91 (UNCONDITIONAL_JUMP)  ; LAB_00475e91
    MOV ECX,dword ptr [EAX + 0x11c]     ; 00475eb3
        ;   Label: LAB_00475eb3
    MOV EDX,dword ptr [EAX + 0x124]     ; 00475eb9
    ADD ECX,EDX                         ; 00475ebf
    MOV dword ptr [EAX + 0x11c],ECX     ; 00475ec1
    JMP 0x00475e41                      ; 00475ec7
        ;   XREF to: 00475e41 (UNCONDITIONAL_JUMP)  ; LAB_00475e41
    CMP dword ptr [EAX + 0x12c],0x1     ; 00475ecc
        ;   Label: LAB_00475ecc
    JNZ 0x00475eef                      ; 00475ed3
        ;   XREF to: 00475eef (CONDITIONAL_JUMP)  ; LAB_00475eef
    MOV EDI,dword ptr [EAX + 0x124]     ; 00475ed5
    MOV EDX,dword ptr [EAX]             ; 00475edb
    MOV EBP,dword ptr [EAX + 0x11c]     ; 00475edd
    SUB EDX,EDI                         ; 00475ee3
    CMP EDX,EBP                         ; 00475ee5
    JGE 0x00475eef                      ; 00475ee7
        ;   XREF to: 00475eef (CONDITIONAL_JUMP)  ; LAB_00475eef
    MOV dword ptr [EAX + 0x11c],EDX     ; 00475ee9
    CMP dword ptr [EAX + 0x11c],0x0     ; 00475eef
        ;   Label: LAB_00475eef
    JL 0x00475efd                       ; 00475ef6
        ;   XREF to: 00475efd (CONDITIONAL_JUMP)  ; LAB_00475efd
    POP EBP                             ; 00475ef8
    POP EDI                             ; 00475ef9
    POP ESI                             ; 00475efa
    POP EBX                             ; 00475efb
    RET                                 ; 00475efc
    MOV dword ptr [EAX + 0x11c],0x0     ; 00475efd
        ;   Label: LAB_00475efd
    POP EBP                             ; 00475f07
    POP EDI                             ; 00475f08
    POP ESI                             ; 00475f09
    POP EBX                             ; 00475f0a
    RET                                 ; 00475f0b

