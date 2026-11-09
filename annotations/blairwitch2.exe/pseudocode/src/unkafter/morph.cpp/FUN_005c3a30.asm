; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c3a30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061ee9d
;   undefined4 DAT_0061f458
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005c51be
;   unkafter_2d.cpp_FUN_005c53c4
;   unkafter_2d.cpp_FUN_005c5581
;   unkafter_2d.cpp_FUN_005c571e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3a30
        ;   Label: unkafter_morph.cpp_FUN_005c3a30
    SUB ESP,0x10                        ; 005c3a31
    MOV dword ptr [ESP + 0x8],0xc0000000 ; 005c3a34
    MOV dword ptr [ESP + 0xc],0x4150017e ; 005c3a3c
    MOV dword ptr [ESP],0x80000000      ; 005c3a44
    MOV dword ptr [ESP + 0x4],0x4147ffff ; 005c3a4b
    CMP byte ptr [0x0061ee9d],0x3       ; 005c3a53 | DAT_0061ee9d
    JC 0x005c3aa5                       ; 005c3a5a
        ;   XREF to: 005c3aa5 (CONDITIONAL_JUMP)  ; LAB_005c3aa5
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c3a5c
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3a60
    MOV EBX,dword ptr [ESP]             ; 005c3a64
    MOV ECX,dword ptr [ESP + 0x4]       ; 005c3a67
    CALL unkafter_2d.cpp_FUN_005c51be   ; 005c3a6b
        ;   XREF to: 005c51be (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c51be()
    MOV EBX,dword ptr [ESP]             ; 005c3a70
    MOV ECX,dword ptr [ESP + 0x4]       ; 005c3a73
    CALL unkafter_2d.cpp_FUN_005c5581   ; 005c3a77
        ;   XREF to: 005c5581 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c5581()
    MOV EBX,EAX                         ; 005c3a7c
    MOV ECX,EDX                         ; 005c3a7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c3a80
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c3a84
    CALL unkafter_2d.cpp_FUN_005c53c4   ; 005c3a88
        ;   XREF to: 005c53c4 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c53c4()
    MOV EBX,0xe2308c3a                  ; 005c3a8d
    MOV ECX,0x3e45798e                  ; 005c3a92
    CALL unkafter_2d.cpp_FUN_005c571e   ; 005c3a97
        ;   XREF to: 005c571e (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c571e()
    JLE 0x005c3aa5                      ; 005c3a9c
        ;   XREF to: 005c3aa5 (CONDITIONAL_JUMP)  ; LAB_005c3aa5
    OR byte ptr [0x0061f458],0x1        ; 005c3a9e | DAT_0061f458
    ADD ESP,0x10                        ; 005c3aa5
        ;   Label: LAB_005c3aa5
    POP EBX                             ; 005c3aa8
    RET                                 ; 005c3aa9

