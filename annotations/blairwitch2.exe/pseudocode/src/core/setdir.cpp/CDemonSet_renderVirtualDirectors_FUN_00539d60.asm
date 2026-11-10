; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f8d7
;
; Referenced Globals:
;   undefined4 DAT_005e609c
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_020b1528
;   undefined4 DAT_020b152c
;
; Called Functions:
;   core_setdir.cpp_CZThumb_render_FUN_00538a60
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539d60
        ;   Label: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60
    PUSH ESI                            ; 00539d61
    PUSH EDI                            ; 00539d62
    PUSH EBP                            ; 00539d63
    SUB ESP,0x88                        ; 00539d64
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00539d6a
    MOV EDX,dword ptr [EDI]             ; 00539d71
    XOR EAX,EAX                         ; 00539d73
    TEST EDX,EDX                        ; 00539d75
    JLE 0x00539d90                      ; 00539d77
        ;   XREF to: 00539d90 (CONDITIONAL_JUMP)  ; LAB_00539d90
    XOR EBP,EBP                         ; 00539d79
    MOV dword ptr [EBP + 0x20b1524],EAX ; 00539d7b | DAT_020b1528
        ;   Label: LAB_00539d7b
    INC EAX                             ; 00539d81
    MOV ECX,dword ptr [EDI]             ; 00539d82
    ADD EBP,0x4                         ; 00539d84
    CMP EAX,ECX                         ; 00539d87
    JL 0x00539d7b                       ; 00539d89
        ;   XREF to: 00539d7b (CONDITIONAL_JUMP)  ; LAB_00539d7b
    LEA EAX,[EAX]                       ; 00539d8b
    MOV ECX,ECX                         ; 00539d8e
    XOR EBP,EBP                         ; 00539d90
        ;   Label: LAB_00539d90
    MOV dword ptr [ESP + 0x70],EBP      ; 00539d92
    MOV EAX,dword ptr [EDI]             ; 00539d96
        ;   Label: LAB_00539d96
    DEC EAX                             ; 00539d98
    CMP EBP,EAX                         ; 00539d99
    JGE 0x00539dfe                      ; 00539d9b
        ;   XREF to: 00539dfe (CONDITIONAL_JUMP)  ; LAB_00539dfe
    LEA ECX,[EBP + 0x1]                 ; 00539d9d
    CMP ECX,dword ptr [EDI]             ; 00539da0
    JGE 0x00539df0                      ; 00539da2
        ;   XREF to: 00539df0 (CONDITIONAL_JUMP)  ; LAB_00539df0
    MOV EBX,dword ptr [ESP + 0x70]      ; 00539da4
    LEA EDX,[ECX*0x4 + 0x0]             ; 00539da8
    MOV EAX,dword ptr [EBX + 0x20b1524] ; 00539daf | DAT_020b1528
        ;   Label: LAB_00539daf
    MOV ESI,dword ptr [EDX + 0x20b1524] ; 00539db5 | DAT_020b1528 | DAT_020b152c
    FLD float ptr [EAX*0x4 + 0x209394c] ; 00539dbb
    FCOMP float ptr [ESI*0x4 + 0x209394c] ; 00539dc2
    FNSTSW AX                           ; 00539dc9
    SAHF                                ; 00539dcb
    JNC 0x00539de6                      ; 00539dcc
        ;   XREF to: 00539de6 (CONDITIONAL_JUMP)  ; LAB_00539de6
    MOV EAX,dword ptr [EDX + 0x20b1524] ; 00539dce | DAT_020b1528 | DAT_020b152c
    MOV ESI,dword ptr [EBX + 0x20b1524] ; 00539dd4
    MOV dword ptr [EBX + 0x20b1524],EAX ; 00539dda
    MOV dword ptr [EDX + 0x20b1524],ESI ; 00539de0 | DAT_020b1528 | DAT_020b152c
    INC ECX                             ; 00539de6
        ;   Label: LAB_00539de6
    MOV EAX,dword ptr [EDI]             ; 00539de7
    ADD EDX,0x4                         ; 00539de9
    CMP ECX,EAX                         ; 00539dec
    JL 0x00539daf                       ; 00539dee
        ;   XREF to: 00539daf (CONDITIONAL_JUMP)  ; LAB_00539daf
    MOV EDX,dword ptr [ESP + 0x70]      ; 00539df0
        ;   Label: LAB_00539df0
    ADD EDX,0x4                         ; 00539df4
    INC EBP                             ; 00539df7
    MOV dword ptr [ESP + 0x70],EDX      ; 00539df8
    JMP 0x00539d96                      ; 00539dfc
        ;   XREF to: 00539d96 (UNCONDITIONAL_JUMP)  ; LAB_00539d96
    MOV EBX,0x2                         ; 00539dfe
        ;   Label: LAB_00539dfe
    MOV ECX,0x9                         ; 00539e03
    MOV ESI,dword ptr [0x006141bc]      ; 00539e08 | DAT_006141bc
    MOV EBP,dword ptr [EDI]             ; 00539e0e
    SUB ESI,0xb2                        ; 00539e10
    CMP EBP,ECX                         ; 00539e16
    JGE 0x00539e1c                      ; 00539e18
        ;   XREF to: 00539e1c (CONDITIONAL_JUMP)  ; LAB_00539e1c
    MOV ECX,EBP                         ; 00539e1a
    TEST ECX,ECX                        ; 00539e1c
        ;   Label: LAB_00539e1c
    JLE 0x00539f65                      ; 00539e1e
        ;   XREF to: 00539f65 (CONDITIONAL_JUMP)  ; LAB_00539f65
    LEA EAX,[EDI + 0x4]                 ; 00539e24
    SHL ECX,0x2                         ; 00539e27
    XOR EBP,EBP                         ; 00539e2a
    MOV dword ptr [ESP + 0x64],EAX      ; 00539e2c
    LEA EAX,[ESI + -0xb]                ; 00539e30
    MOV dword ptr [ESP + 0x7c],EBP      ; 00539e33
    MOV dword ptr [ESP + 0x78],EAX      ; 00539e37
    LEA EAX,[ESI + 0x9a]                ; 00539e3b
    MOV dword ptr [ESP + 0x68],ECX      ; 00539e41
    MOV dword ptr [ESP + 0x74],EAX      ; 00539e45
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00539e49
        ;   Label: LAB_00539e49
    MOV EAX,dword ptr [EAX + 0x20b1524] ; 00539e4d | DAT_020b1528
    MOV ECX,EAX                         ; 00539e53
    MOV dword ptr [ESP + 0x84],EAX      ; 00539e55
    IMUL EAX,EAX,0x1a4                  ; 00539e5c
    IMUL EBP,ECX,0xf0                   ; 00539e62
    MOV EDX,0x2093d34                   ; 00539e68
    ADD EDX,EBP                         ; 00539e6d
    MOV dword ptr [ESP + 0x80],EDX      ; 00539e6f
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x144] ; 00539e76
    MOV dword ptr [ESP + 0x6c],EBX      ; 00539e7d
    TEST EDX,EDX                        ; 00539e81
    JNZ 0x00539f70                      ; 00539e83
        ;   XREF to: 00539f70 (CONDITIONAL_JUMP)  ; LAB_00539f70
    PUSH ESI                            ; 00539e89
    PUSH EBX                            ; 00539e8a
    MOV ECX,dword ptr [ESP + 0x88]      ; 00539e8b
    PUSH ECX                            ; 00539e92
    CALL core_setdir.cpp_CZThumb_render_FUN_00538a60 ; 00539e93
        ;   XREF to: 00538a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_render_FUN_00538a60(CZThumb * this_ptr, int screen_x, int screen_y)
    MOV EAX,dword ptr [EBP + 0x2093d34] ; 00539e98
    SUB EAX,0x2                         ; 00539e9e
        ;   Label: LAB_00539e9e
    ADD ESP,0xc                         ; 00539ea1
    ADD EBX,EAX                         ; 00539ea4
    MOV EAX,dword ptr [ESP + 0x84]      ; 00539ea6
    SUB ESP,0x8                         ; 00539ead
    FLD float ptr [EAX*0x4 + 0x209394c] ; 00539eb0
    FSTP double ptr [ESP]               ; 00539eb7
    PUSH 0x5e609c                       ; 00539eba | DAT_005e609c
    LEA EAX,[ESP + 0xc]                 ; 00539ebf
    PUSH EAX                            ; 00539ec3
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00539ec4
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00539ec9
    IMUL EAX,dword ptr [ESP + 0x84],0xf0 ; 00539ecc
    MOV EAX,dword ptr [EAX + 0x2093d38] ; 00539ed7
    ADD EAX,ESI                         ; 00539edd
    PUSH EAX                            ; 00539edf
    MOV ECX,dword ptr [ESP + 0x70]      ; 00539ee0
    PUSH ECX                            ; 00539ee4
    LEA EAX,[ESP + 0x8]                 ; 00539ee5
    PUSH EAX                            ; 00539ee9
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00539eea
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00539eef
    MOV EBP,dword ptr [ESP + 0x78]      ; 00539ef2
    PUSH EBP                            ; 00539ef6
    MOV EAX,dword ptr [ESP + 0x70]      ; 00539ef7
    MOV EDX,dword ptr [ESP + 0x88]      ; 00539efb
    PUSH EAX                            ; 00539f02
    IMUL EAX,EDX,0x1a4                  ; 00539f03
    ADD EAX,dword ptr [ESP + 0x6c]      ; 00539f09
    PUSH EAX                            ; 00539f0d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00539f0e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EBP,dword ptr [0x006141b8]      ; 00539f13 | DAT_006141b8
    LEA EAX,[EBX + 0x42]                ; 00539f19
    ADD ESP,0xc                         ; 00539f1c
    ADD EBX,0x2                         ; 00539f1f
    CMP EAX,EBP                         ; 00539f22
    JLE 0x00539f4e                      ; 00539f24
        ;   XREF to: 00539f4e (CONDITIONAL_JUMP)  ; LAB_00539f4e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00539f26
    MOV EDX,dword ptr [ESP + 0x78]      ; 00539f2a
    MOV EBX,0x2                         ; 00539f2e
    MOV EBP,dword ptr [0x006141bc]      ; 00539f33 | DAT_006141bc
    ADD ESI,0x58                        ; 00539f39
    ADD EDX,0x58                        ; 00539f3c
    LEA ECX,[EAX + 0x58]                ; 00539f3f
    MOV dword ptr [ESP + 0x78],EDX      ; 00539f42
    MOV dword ptr [ESP + 0x74],ECX      ; 00539f46
    CMP EAX,EBP                         ; 00539f4a
    JG 0x00539f65                       ; 00539f4c
        ;   XREF to: 00539f65 (CONDITIONAL_JUMP)  ; LAB_00539f65
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00539f4e
        ;   Label: LAB_00539f4e
    ADD EDX,0x4                         ; 00539f52
    MOV ECX,dword ptr [ESP + 0x68]      ; 00539f55
    MOV dword ptr [ESP + 0x7c],EDX      ; 00539f59
    CMP EDX,ECX                         ; 00539f5d
    JL 0x00539e49                       ; 00539f5f
        ;   XREF to: 00539e49 (CONDITIONAL_JUMP)  ; LAB_00539e49
    ADD ESP,0x88                        ; 00539f65
        ;   Label: LAB_00539f65
    POP EBP                             ; 00539f6b
    POP EDI                             ; 00539f6c
    POP ESI                             ; 00539f6d
    POP EBX                             ; 00539f6e
    RET                                 ; 00539f6f
    PUSH ESI                            ; 00539f70
        ;   Label: LAB_00539f70
    MOV EAX,dword ptr [ESP + 0x84]      ; 00539f71
    PUSH EBX                            ; 00539f78
    ADD EAX,0x78                        ; 00539f79
    PUSH EAX                            ; 00539f7c
    CALL core_setdir.cpp_CZThumb_render_FUN_00538a60 ; 00539f7d
        ;   XREF to: 00538a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_render_FUN_00538a60(CZThumb * this_ptr, int screen_x, int screen_y)
    MOV EAX,dword ptr [EBP + 0x2093dac] ; 00539f82
    ADD ESP,0xc                         ; 00539f88
    SUB EAX,0x2                         ; 00539f8b
    PUSH ESI                            ; 00539f8e
    ADD EBX,EAX                         ; 00539f8f
    PUSH EBX                            ; 00539f91
    MOV EAX,dword ptr [ESP + 0x88]      ; 00539f92
    PUSH EAX                            ; 00539f99
    CALL core_setdir.cpp_CZThumb_render_FUN_00538a60 ; 00539f9a
        ;   XREF to: 00538a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_render_FUN_00538a60(CZThumb * this_ptr, int screen_x, int screen_y)
    MOV EAX,dword ptr [EBP + 0x2093d34] ; 00539f9f
    ADD ESP,0xc                         ; 00539fa5
    SUB EAX,0x2                         ; 00539fa8
    PUSH ESI                            ; 00539fab
    ADD EBX,EAX                         ; 00539fac
    MOV EAX,dword ptr [ESP + 0x84]      ; 00539fae
    PUSH EBX                            ; 00539fb5
    ADD EAX,0x50                        ; 00539fb6
    PUSH EAX                            ; 00539fb9
    CALL core_setdir.cpp_CZThumb_render_FUN_00538a60 ; 00539fba
        ;   XREF to: 00538a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_render_FUN_00538a60(CZThumb * this_ptr, int screen_x, int screen_y)
    MOV EAX,dword ptr [EBP + 0x2093d84] ; 00539fbf
    ADD ESP,0xc                         ; 00539fc5
    SUB EAX,0x2                         ; 00539fc8
    PUSH ESI                            ; 00539fcb
    ADD EBX,EAX                         ; 00539fcc
    MOV EAX,dword ptr [ESP + 0x84]      ; 00539fce
    PUSH EBX                            ; 00539fd5
    ADD EAX,0x28                        ; 00539fd6
    PUSH EAX                            ; 00539fd9
    CALL core_setdir.cpp_CZThumb_render_FUN_00538a60 ; 00539fda
        ;   XREF to: 00538a60 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_render_FUN_00538a60(CZThumb * this_ptr, int screen_x, int screen_y)
    MOV EAX,dword ptr [EBP + 0x2093d5c] ; 00539fdf
    JMP 0x00539e9e                      ; 00539fe5
        ;   XREF to: 00539e9e (UNCONDITIONAL_JUMP)  ; LAB_00539e9e

