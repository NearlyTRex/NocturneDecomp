; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_00512200 at 0051221c
;   engine_texture.cpp_FUN_00597d6e at 005981e8
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;   undefined4 DAT_02c8a67c
;   undefined4 DAT_02c8a680
;
; Called Functions:
;   engine_texture.cpp_FUN_00596e60
;   engine_texture.cpp_FUN_00596f30
;   engine_texture.cpp_FUN_005970b0
;   engine_texture.cpp_FUN_00597140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597ac0
        ;   Label: engine_texture.cpp_FUN_00597ac0
    PUSH EBP                            ; 00597ac1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597ac2
    CMP dword ptr [0x00713a74],0x0      ; 00597ac6 | DAT_00713a74
    JNZ 0x00597ad5                      ; 00597acd
        ;   XREF to: 00597ad5 (CONDITIONAL_JUMP)  ; LAB_00597ad5
    CMP byte ptr [EBX + 0x8],0x0        ; 00597acf
    JNZ 0x00597ad8                      ; 00597ad3
        ;   XREF to: 00597ad8 (CONDITIONAL_JUMP)  ; LAB_00597ad8
    POP EBP                             ; 00597ad5
        ;   Label: LAB_00597ad5
    POP EBX                             ; 00597ad6
    RET                                 ; 00597ad7
    PUSH EDI                            ; 00597ad8
        ;   Label: LAB_00597ad8
    PUSH ESI                            ; 00597ad9
    LEA EDI,[EBX + 0x8]                 ; 00597ada
    MOV ESI,dword ptr [EBX + 0x4]       ; 00597add
    PUSH EDI                            ; 00597ae0
    AND ESI,0xffff                      ; 00597ae1
    PUSH ESI                            ; 00597ae7
    MOV ECX,dword ptr [0x02c8a680]      ; 00597ae8 | DAT_02c8a680
    PUSH ECX                            ; 00597aee
    CALL engine_texture.cpp_FUN_005970b0 ; 00597aef
        ;   XREF to: 005970b0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005970b0()
    ADD ESP,0xc                         ; 00597af4
    MOV ESI,EAX                         ; 00597af7
    CMP EAX,-0x1                        ; 00597af9
    JNZ 0x00597b48                      ; 00597afc
        ;   XREF to: 00597b48 (CONDITIONAL_JUMP)  ; LAB_00597b48
    MOV ESI,dword ptr [ESP + 0x24]      ; 00597afe
    PUSH ESI                            ; 00597b02
    MOV EBP,dword ptr [ESP + 0x24]      ; 00597b03
    PUSH EBP                            ; 00597b07
    MOV EAX,dword ptr [ESP + 0x24]      ; 00597b08
    PUSH EAX                            ; 00597b0c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00597b0d
    PUSH EDX                            ; 00597b11
    PUSH EDI                            ; 00597b12
    MOV ECX,dword ptr [0x02c8a680]      ; 00597b13 | DAT_02c8a680
    PUSH ECX                            ; 00597b19
    CALL engine_texture.cpp_FUN_00596e60 ; 00597b1a
        ;   XREF to: 00596e60 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596e60()
    ADD ESP,0x18                        ; 00597b1f
    MOV ESI,EAX                         ; 00597b22
    MOV dword ptr [EBX + 0x4],EAX       ; 00597b24
    MOV EAX,0x1                         ; 00597b27
    PUSH EAX                            ; 00597b2c
        ;   Label: LAB_00597b2c
    PUSH EBX                            ; 00597b2d
    MOV EBX,dword ptr [0x02c8a680]      ; 00597b2e | DAT_02c8a680
    PUSH EBX                            ; 00597b34
    MOV dword ptr [0x02c8a67c],ESI      ; 00597b35 | DAT_02c8a67c
    CALL engine_texture.cpp_FUN_00597140 ; 00597b3b
        ;   XREF to: 00597140 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597140()
    ADD ESP,0xc                         ; 00597b40
    POP ESI                             ; 00597b43
    POP EDI                             ; 00597b44
    POP EBP                             ; 00597b45
    POP EBX                             ; 00597b46
    RET                                 ; 00597b47
    MOV EDI,dword ptr [ESP + 0x24]      ; 00597b48
        ;   Label: LAB_00597b48
    PUSH EDI                            ; 00597b4c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00597b4d
    PUSH EBP                            ; 00597b51
    MOV dword ptr [EBX + 0x4],EAX       ; 00597b52
    MOV EAX,dword ptr [ESP + 0x24]      ; 00597b55
    PUSH EAX                            ; 00597b59
    MOV EDX,dword ptr [ESP + 0x24]      ; 00597b5a
    PUSH EDX                            ; 00597b5e
    PUSH EBX                            ; 00597b5f
    MOV ECX,dword ptr [0x02c8a680]      ; 00597b60 | DAT_02c8a680
    PUSH ECX                            ; 00597b66
    CALL engine_texture.cpp_FUN_00596f30 ; 00597b67
        ;   XREF to: 00596f30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00596f30()
    MOV EAX,0x1                         ; 00597b6c
    ADD ESP,0x18                        ; 00597b71
    JMP 0x00597b2c                      ; 00597b74
        ;   XREF to: 00597b2c (UNCONDITIONAL_JUMP)  ; LAB_00597b2c

