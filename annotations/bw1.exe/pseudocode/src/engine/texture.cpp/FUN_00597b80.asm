; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597b80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;   undefined4 DAT_02c8a67c
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_FUN_00596ed0
;   engine_texture.cpp_FUN_00597000
;   engine_texture.cpp_FUN_005970b0
;   engine_texture.cpp_FUN_00597140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597b80
        ;   Label: engine_texture.cpp_FUN_00597b80
    PUSH EBP                            ; 00597b81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597b82
    CMP dword ptr [0x00713a74],0x0      ; 00597b86 | DAT_00713a74
    JNZ 0x00597b95                      ; 00597b8d
        ;   XREF to: 00597b95 (CONDITIONAL_JUMP)  ; LAB_00597b95
    CMP byte ptr [EBX + 0x8],0x0        ; 00597b8f
    JNZ 0x00597b98                      ; 00597b93
        ;   XREF to: 00597b98 (CONDITIONAL_JUMP)  ; LAB_00597b98
    POP EBP                             ; 00597b95
        ;   Label: LAB_00597b95
    POP EBX                             ; 00597b96
    RET                                 ; 00597b97
    PUSH EDI                            ; 00597b98
        ;   Label: LAB_00597b98
    PUSH ESI                            ; 00597b99
    LEA EDI,[EBX + 0x8]                 ; 00597b9a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00597b9d
    PUSH EDI                            ; 00597ba0
    AND ESI,0xffff                      ; 00597ba1
    PUSH ESI                            ; 00597ba7
    MOV ECX,dword ptr [0x02c8a680]      ; 00597ba8 | DAT_02c8a680
    PUSH ECX                            ; 00597bae
    CALL engine_texture.cpp_FUN_005970b0 ; 00597baf
        ;   XREF to: 005970b0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005970b0()
    ADD ESP,0xc                         ; 00597bb4
    MOV ESI,EAX                         ; 00597bb7
    CMP EAX,-0x1                        ; 00597bb9
    JNZ 0x00597bfe                      ; 00597bbc
        ;   XREF to: 00597bfe (CONDITIONAL_JUMP)  ; LAB_00597bfe
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00597bbe
    PUSH EDX                            ; 00597bc2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00597bc3
    PUSH ECX                            ; 00597bc7
    PUSH EDI                            ; 00597bc8
    MOV ESI,dword ptr [0x02c8a680]      ; 00597bc9 | DAT_02c8a680
    PUSH ESI                            ; 00597bcf
    CALL engine_texture.cpp_FUN_00596ed0 ; 00597bd0
        ;   XREF to: 00596ed0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596ed0()
    ADD ESP,0x10                        ; 00597bd5
    MOV ESI,EAX                         ; 00597bd8
    MOV dword ptr [EBX + 0x4],EAX       ; 00597bda
    MOV EAX,0x2                         ; 00597bdd
    PUSH EAX                            ; 00597be2
        ;   Label: LAB_00597be2
    PUSH EBX                            ; 00597be3
    MOV EDI,dword ptr [0x02c8a680]      ; 00597be4 | DAT_02c8a680
    PUSH EDI                            ; 00597bea
    MOV dword ptr [0x02c8a67c],ESI      ; 00597beb | DAT_02c8a67c
    CALL engine_texture.cpp_FUN_00597140 ; 00597bf1
        ;   XREF to: 00597140 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597140()
    ADD ESP,0xc                         ; 00597bf6
    POP ESI                             ; 00597bf9
    POP EDI                             ; 00597bfa
    POP EBP                             ; 00597bfb
    POP EBX                             ; 00597bfc
    RET                                 ; 00597bfd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00597bfe
        ;   Label: LAB_00597bfe
    PUSH EDI                            ; 00597c02
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00597c03
    PUSH EBP                            ; 00597c07
    PUSH EBX                            ; 00597c08
    MOV dword ptr [EBX + 0x4],EAX       ; 00597c09
    MOV EAX,[0x02c8a680]                ; 00597c0c | DAT_02c8a680
    PUSH EAX                            ; 00597c11
    CALL engine_texture.cpp_FUN_00597000 ; 00597c12
        ;   XREF to: 00597000 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597000()
    MOV EAX,0x2                         ; 00597c17
    ADD ESP,0x10                        ; 00597c1c
    JMP 0x00597be2                      ; 00597c1f
        ;   XREF to: 00597be2 (UNCONDITIONAL_JUMP)  ; LAB_00597be2

