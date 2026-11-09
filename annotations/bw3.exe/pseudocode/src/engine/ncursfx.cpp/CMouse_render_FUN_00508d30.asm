; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_00508d30(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; Called Functions:
;   engine_3d.c_FUN_00406c40
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508d30
        ;   Label: engine_ncursfx.cpp_CMouse_render_FUN_00508d30
    PUSH EDI                            ; 00508d31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00508d32
    MOV EDX,dword ptr [0x01c5fae0]      ; 00508d36 | DAT_01c5fae0
    MOV EAX,[0x01c5fadc]                ; 00508d3c | DAT_01c5fadc
    MOV ECX,dword ptr [EBX + 0x25c]     ; 00508d41
    SUB EDX,0xc                         ; 00508d47
    SUB EAX,0xd                         ; 00508d4a
    CMP ECX,0x1                         ; 00508d4d
    JZ 0x00508de4                       ; 00508d50
        ;   XREF to: 00508de4 (CONDITIONAL_JUMP)  ; LAB_00508de4
    CMP ECX,0x2                         ; 00508d56
    JNZ 0x00508e14                      ; 00508d59
        ;   XREF to: 00508e14 (CONDITIONAL_JUMP)  ; LAB_00508e14
    PUSH 0xffff                         ; 00508d5f
    PUSH EDX                            ; 00508d64
    PUSH EAX                            ; 00508d65
    MOV EAX,dword ptr [EBX + 0x258]     ; 00508d66
    MOV EDX,EAX                         ; 00508d6c
    SAR EDX,0x1f                        ; 00508d6e
    SHL EDX,0x10                        ; 00508d71
    SBB EAX,EDX                         ; 00508d74
    SAR EAX,0x10                        ; 00508d76
    MOV EDX,EAX                         ; 00508d79
    SHL EAX,0x2                         ; 00508d7b
    ADD EDX,EAX                         ; 00508d7e
    SHL EDX,0x2                         ; 00508d80
    LEA EAX,[EBX + 0x12c]               ; 00508d83
    ADD EAX,EDX                         ; 00508d89
    PUSH EAX                            ; 00508d8b
        ;   Label: LAB_00508d8b
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00508d8c
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   Label: LAB_00508d8c
    ADD ESP,0x10                        ; 00508d91
    MOV EDI,dword ptr [EBX + 0x25c]     ; 00508d94
    TEST EDI,EDI                        ; 00508d9a
    JZ 0x00508de1                       ; 00508d9c
        ;   XREF to: 00508de1 (CONDITIONAL_JUMP)  ; LAB_00508de1
    CMP EDI,0x2                         ; 00508d9e
    JNZ 0x00508e21                      ; 00508da1
        ;   XREF to: 00508e21 (CONDITIONAL_JUMP)  ; LAB_00508e21
    MOV EAX,[0x01c5fad0]                ; 00508da7 | DAT_01c5fad0
        ;   Label: LAB_00508da7
    MOV EDX,dword ptr [EBX + 0x258]     ; 00508dac
    SHL EAX,0x5                         ; 00508db2
    MOV ECX,dword ptr [EBX + 0x25c]     ; 00508db5
    ADD EDX,EAX                         ; 00508dbb
    MOV EAX,0x7                         ; 00508dbd
    MOV dword ptr [EBX + 0x258],EDX     ; 00508dc2
    CMP ECX,0x2                         ; 00508dc8
    JNZ 0x00508dd2                      ; 00508dcb
        ;   XREF to: 00508dd2 (CONDITIONAL_JUMP)  ; LAB_00508dd2
    MOV EAX,0xf                         ; 00508dcd
    SHL EAX,0x10                        ; 00508dd2
        ;   Label: LAB_00508dd2
    CMP EAX,dword ptr [EBX + 0x258]     ; 00508dd5
    JLE 0x00508e7f                      ; 00508ddb
        ;   XREF to: 00508e7f (CONDITIONAL_JUMP)  ; LAB_00508e7f
    POP EDI                             ; 00508de1
        ;   Label: LAB_00508de1
    POP EBX                             ; 00508de2
    RET                                 ; 00508de3
    PUSH 0xffff                         ; 00508de4
        ;   Label: LAB_00508de4
    PUSH EDX                            ; 00508de9
    PUSH EAX                            ; 00508dea
    MOV EAX,dword ptr [EBX + 0x258]     ; 00508deb
    MOV EDX,EAX                         ; 00508df1
    SAR EDX,0x1f                        ; 00508df3
    SHL EDX,0x10                        ; 00508df6
    SBB EAX,EDX                         ; 00508df9
    SAR EAX,0x10                        ; 00508dfb
    LEA EDX,[EAX + ECX*0x1]             ; 00508dfe
    LEA EAX,[EDX*0x4 + 0x0]             ; 00508e01
    ADD EAX,EDX                         ; 00508e08
    SHL EAX,0x2                         ; 00508e0a
    ADD EAX,EBX                         ; 00508e0d
    JMP 0x00508d8b                      ; 00508e0f
        ;   XREF to: 00508d8b (UNCONDITIONAL_JUMP)  ; LAB_00508d8b
    PUSH 0xffff                         ; 00508e14
        ;   Label: LAB_00508e14
    PUSH EDX                            ; 00508e19
    PUSH EAX                            ; 00508e1a
    PUSH EBX                            ; 00508e1b
    JMP 0x00508d8c                      ; 00508e1c
        ;   XREF to: 00508d8c (UNCONDITIONAL_JUMP)  ; LAB_00508d8c
    PUSH 0x1                            ; 00508e21
        ;   Label: LAB_00508e21
    CALL engine_3d.c_FUN_00406c40       ; 00508e23
        ;   XREF to: 00406c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_FUN_00406c40(int blend_mode)
    ADD ESP,0x4                         ; 00508e28
    MOV EAX,[0x01c5fae0]                ; 00508e2b | DAT_01c5fae0
    PUSH 0x8000                         ; 00508e30
    SUB EAX,0xc                         ; 00508e35
    PUSH EAX                            ; 00508e38
    MOV EAX,[0x01c5fadc]                ; 00508e39 | DAT_01c5fadc
    SUB EAX,0xd                         ; 00508e3e
    PUSH EAX                            ; 00508e41
    MOV EAX,dword ptr [EBX + 0x258]     ; 00508e42
    MOV EDX,EAX                         ; 00508e48
    SAR EDX,0x1f                        ; 00508e4a
    SHL EDX,0x10                        ; 00508e4d
    SBB EAX,EDX                         ; 00508e50
    SAR EAX,0x10                        ; 00508e52
    MOV EDX,EAX                         ; 00508e55
    SHL EAX,0x2                         ; 00508e57
    ADD EDX,EAX                         ; 00508e5a
    SHL EDX,0x2                         ; 00508e5c
    LEA EAX,[EBX + 0xa0]                ; 00508e5f
    ADD EAX,EDX                         ; 00508e65
    PUSH EAX                            ; 00508e67
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 00508e68
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 00508e6d
    PUSH 0x0                            ; 00508e70
    CALL engine_3d.c_FUN_00406c40       ; 00508e72
        ;   XREF to: 00406c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_FUN_00406c40(int blend_mode)
    ADD ESP,0x4                         ; 00508e77
    JMP 0x00508da7                      ; 00508e7a
        ;   XREF to: 00508da7 (UNCONDITIONAL_JUMP)  ; LAB_00508da7
    MOV dword ptr [EBX + 0x25c],0x0     ; 00508e7f
        ;   Label: LAB_00508e7f
    MOV dword ptr [EBX + 0x258],0x0     ; 00508e89
    POP EDI                             ; 00508e93
    POP EBX                             ; 00508e94
    RET                                 ; 00508e95

