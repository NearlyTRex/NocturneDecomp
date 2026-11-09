; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_openMovie_FUN_00582bb0(HWND parent_window,char *movie_filename)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
; char *           Stack[0x8]:4   movie_filename
;
; Referenced Globals:
;   undefined4 DAT_02d22fa8
;   undefined4 DAT_02d22fb0
;   undefined4 DAT_02d22fb8
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005a5f50
;   crt_unknown.c_FUN_005a28c0
;   wincore_winvideo.cpp_closeMovie_FUN_00582b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582bb0
        ;   Label: wincore_winvideo.cpp_openMovie_FUN_00582bb0
    PUSH ESI                            ; 00582bb1
    PUSH EDI                            ; 00582bb2
    PUSH EBP                            ; 00582bb3
    SUB ESP,0x1a4                       ; 00582bb4
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 00582bba
    CMP dword ptr [0x02d22fb0],0x0      ; 00582bc1 | DAT_02d22fb0
    JZ 0x00582bd3                       ; 00582bc8
        ;   XREF to: 00582bd3 (CONDITIONAL_JUMP)  ; LAB_00582bd3
    PUSH EBX                            ; 00582bca
    CALL wincore_winvideo.cpp_closeMovie_FUN_00582b60 ; 00582bcb
        ;   XREF to: 00582b60 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_00582b60(HWND window_handle)
    ADD ESP,0x4                         ; 00582bd0
    PUSH EBX                            ; 00582bd3
        ;   Label: LAB_00582bd3
    MOV ECX,dword ptr [ESP + 0x1c0]     ; 00582bd4
    PUSH ECX                            ; 00582bdb
    PUSH 0x5d8016                       ; 00582bdc
    LEA EAX,[ESP + 0xc]                 ; 00582be1
    PUSH EAX                            ; 00582be5
    CALL crt_unknown.c_FUN_005a28c0     ; 00582be6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00582beb
    PUSH 0x0                            ; 00582bee
    PUSH 0x0                            ; 00582bf0
    PUSH 0x0                            ; 00582bf2
    LEA EAX,[ESP + 0xc]                 ; 00582bf4
    PUSH EAX                            ; 00582bf8
    CALL dword ptr CS:[0x5b344c]        ; 00582bf9
    TEST EAX,EAX                        ; 00582c00
    JNZ 0x00582e10                      ; 00582c02
        ;   XREF to: 00582e10 (CONDITIONAL_JUMP)  ; LAB_00582e10
    PUSH EAX                            ; 00582c08
    PUSH 0x104                          ; 00582c09
    LEA EAX,[ESP + 0x8]                 ; 00582c0e
    PUSH EAX                            ; 00582c12
    MOV ESI,0x1                         ; 00582c13
    PUSH 0x5d8040                       ; 00582c18
    MOV dword ptr [0x02d22fb0],ESI      ; 00582c1d | DAT_02d22fb0
    CALL dword ptr CS:[0x5b344c]        ; 00582c23
    TEST EAX,EAX                        ; 00582c2a
    JNZ 0x00582c5c                      ; 00582c2c
        ;   XREF to: 00582c5c (CONDITIONAL_JUMP)  ; LAB_00582c5c
    MOV EAX,ESP                         ; 00582c2e
    PUSH EAX                            ; 00582c30
    CALL crt_stdlib.c_atoi_FUN_005a5f50 ; 00582c31
        ;   XREF to: 005a5f50 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005a5f50(char * string_ptr)
    ADD ESP,0x4                         ; 00582c36
    MOV [0x02d22fa8],EAX                ; 00582c39 | DAT_02d22fa8
    MOV EDI,dword ptr [0x02d22fb8]      ; 00582c3e | DAT_02d22fb8
        ;   Label: LAB_00582c3e
    TEST EDI,EDI                        ; 00582c44
    JNZ 0x00582c51                      ; 00582c46
        ;   XREF to: 00582c51 (CONDITIONAL_JUMP)  ; LAB_00582c51
    CMP dword ptr [0x02d22fb0],0x0      ; 00582c48 | DAT_02d22fb0
    JNZ 0x00582c81                      ; 00582c4f
        ;   XREF to: 00582c81 (CONDITIONAL_JUMP)  ; LAB_00582c81
    ADD ESP,0x1a4                       ; 00582c51
        ;   Label: LAB_00582c51
    POP EBP                             ; 00582c57
    POP EDI                             ; 00582c58
    POP ESI                             ; 00582c59
    POP EBX                             ; 00582c5a
    RET                                 ; 00582c5b
    PUSH 0x104                          ; 00582c5c
        ;   Label: LAB_00582c5c
    LEA EDX,[ESP + 0x4]                 ; 00582c61
    PUSH EDX                            ; 00582c65
    PUSH EAX                            ; 00582c66
    CALL dword ptr CS:[0x5b3444]        ; 00582c67
    PUSH 0x30                           ; 00582c6e
    PUSH 0x0                            ; 00582c70
    LEA EAX,[ESP + 0x8]                 ; 00582c72
    PUSH EAX                            ; 00582c76
    PUSH EBX                            ; 00582c77
    CALL dword ptr CS:[0x5b34d8]        ; 00582c78
    JMP 0x00582c3e                      ; 00582c7f
        ;   XREF to: 00582c3e (UNCONDITIONAL_JUMP)  ; LAB_00582c3e
    LEA EAX,[ESP + 0x194]               ; 00582c81
        ;   Label: LAB_00582c81
    PUSH EAX                            ; 00582c88
    PUSH EBX                            ; 00582c89
    CALL dword ptr CS:[0x5b34bc]        ; 00582c8a
    PUSH EDI                            ; 00582c91
    PUSH 0x80                           ; 00582c92
    LEA EAX,[ESP + 0x10c]               ; 00582c97
    PUSH EAX                            ; 00582c9e
    PUSH 0x5d7ffb                       ; 00582c9f
    CALL dword ptr CS:[0x5b344c]        ; 00582ca4
    LEA EAX,[ESP + 0x184]               ; 00582cab
    PUSH EAX                            ; 00582cb2
    CALL dword ptr CS:[0x5b3504]        ; 00582cb3
    MOV DL,byte ptr [ESP + 0x104]       ; 00582cba
    LEA EAX,[ESP + 0x104]               ; 00582cc1
    CMP DL,0x20                         ; 00582cc8
    JNZ 0x00582ce0                      ; 00582ccb
        ;   XREF to: 00582ce0 (CONDITIONAL_JUMP)  ; LAB_00582ce0
    MOV DH,byte ptr [EAX + 0x1]         ; 00582ccd
        ;   Label: LAB_00582ccd
    INC EAX                             ; 00582cd0
    CMP DH,0x20                         ; 00582cd1
    JZ 0x00582ccd                       ; 00582cd4
        ;   XREF to: 00582ccd (CONDITIONAL_JUMP)  ; LAB_00582ccd
    LEA EAX,[EAX]                       ; 00582cd6
    LEA EDX,[EDX]                       ; 00582cdc
    CMP byte ptr [EAX],0x20             ; 00582ce0
        ;   Label: LAB_00582ce0
    JZ 0x00582ce8                       ; 00582ce3
        ;   XREF to: 00582ce8 (CONDITIONAL_JUMP)  ; LAB_00582ce8
    INC EAX                             ; 00582ce5
    JMP 0x00582ce0                      ; 00582ce6
        ;   XREF to: 00582ce0 (UNCONDITIONAL_JUMP)  ; LAB_00582ce0
    CMP byte ptr [EAX],0x20             ; 00582ce8
        ;   Label: LAB_00582ce8
    JNZ 0x00582cf0                      ; 00582ceb
        ;   XREF to: 00582cf0 (CONDITIONAL_JUMP)  ; LAB_00582cf0
    INC EAX                             ; 00582ced
    JMP 0x00582ce8                      ; 00582cee
        ;   XREF to: 00582ce8 (UNCONDITIONAL_JUMP)  ; LAB_00582ce8
    CMP byte ptr [EAX],0x20             ; 00582cf0
        ;   Label: LAB_00582cf0
    JZ 0x00582cf8                       ; 00582cf3
        ;   XREF to: 00582cf8 (CONDITIONAL_JUMP)  ; LAB_00582cf8
    INC EAX                             ; 00582cf5
    JMP 0x00582cf0                      ; 00582cf6
        ;   XREF to: 00582cf0 (UNCONDITIONAL_JUMP)  ; LAB_00582cf0
    CMP byte ptr [EAX],0x20             ; 00582cf8
        ;   Label: LAB_00582cf8
    JNZ 0x00582d19                      ; 00582cfb
        ;   XREF to: 00582d19 (CONDITIONAL_JUMP)  ; LAB_00582d19
    INC EAX                             ; 00582cfd
    JMP 0x00582cf8                      ; 00582cfe
        ;   XREF to: 00582cf8 (UNCONDITIONAL_JUMP)  ; LAB_00582cf8
    IMUL EDX,dword ptr [ESP + 0x18c],0xa ; 00582d00
        ;   Label: LAB_00582d00
    XOR ECX,ECX                         ; 00582d08
    MOV CL,byte ptr [EAX]               ; 00582d0a
    SUB ECX,0x30                        ; 00582d0c
    ADD EDX,ECX                         ; 00582d0f
    INC EAX                             ; 00582d11
    MOV dword ptr [ESP + 0x18c],EDX     ; 00582d12
    MOV DL,byte ptr [EAX]               ; 00582d19
        ;   Label: LAB_00582d19
    CMP DL,0x30                         ; 00582d1b
    JNC 0x00582d28                      ; 00582d1e
        ;   XREF to: 00582d28 (CONDITIONAL_JUMP)  ; LAB_00582d28
    CMP byte ptr [EAX],0x20             ; 00582d20
        ;   Label: LAB_00582d20
    JNZ 0x00582d48                      ; 00582d23
        ;   XREF to: 00582d48 (CONDITIONAL_JUMP)  ; LAB_00582d48
    INC EAX                             ; 00582d25
    JMP 0x00582d20                      ; 00582d26
        ;   XREF to: 00582d20 (UNCONDITIONAL_JUMP)  ; LAB_00582d20
    CMP DL,0x39                         ; 00582d28
        ;   Label: LAB_00582d28
    JBE 0x00582d00                      ; 00582d2b
        ;   XREF to: 00582d00 (CONDITIONAL_JUMP)  ; LAB_00582d00
    JMP 0x00582d20                      ; 00582d2d
        ;   XREF to: 00582d20 (UNCONDITIONAL_JUMP)  ; LAB_00582d20
    IMUL ECX,dword ptr [ESP + 0x190],0xa ; 00582d2f
        ;   Label: LAB_00582d2f
    XOR EDX,EDX                         ; 00582d37
    MOV DL,byte ptr [EAX]               ; 00582d39
    SUB EDX,0x30                        ; 00582d3b
    ADD ECX,EDX                         ; 00582d3e
    INC EAX                             ; 00582d40
    MOV dword ptr [ESP + 0x190],ECX     ; 00582d41
    MOV BH,byte ptr [EAX]               ; 00582d48
        ;   Label: LAB_00582d48
    CMP BH,0x30                         ; 00582d4a
    JC 0x00582d54                       ; 00582d4d
        ;   XREF to: 00582d54 (CONDITIONAL_JUMP)  ; LAB_00582d54
    CMP BH,0x39                         ; 00582d4f
    JBE 0x00582d2f                      ; 00582d52
        ;   XREF to: 00582d2f (CONDITIONAL_JUMP)  ; LAB_00582d2f
    CMP dword ptr [ESP + 0x19c],0x190   ; 00582d54
        ;   Label: LAB_00582d54
    JLE 0x00582dfa                      ; 00582d5f
        ;   XREF to: 00582dfa (CONDITIONAL_JUMP)  ; LAB_00582dfa
    MOV EBP,dword ptr [ESP + 0x18c]     ; 00582d65
        ;   Label: LAB_00582d65
    MOV EDI,dword ptr [ESP + 0x190]     ; 00582d6c
    ADD EBP,EBP                         ; 00582d73
    ADD EDI,EDI                         ; 00582d75
    MOV dword ptr [ESP + 0x18c],EBP     ; 00582d77
    MOV dword ptr [ESP + 0x190],EDI     ; 00582d7e
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00582d85
        ;   Label: LAB_00582d85
    MOV EDX,EAX                         ; 00582d8c
    SAR EDX,0x1f                        ; 00582d8e
    SUB EAX,EDX                         ; 00582d91
    SAR EAX,0x1                         ; 00582d93
    MOV EBX,EAX                         ; 00582d95
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00582d97
    MOV EDX,EAX                         ; 00582d9e
    SAR EDX,0x1f                        ; 00582da0
    SUB EAX,EDX                         ; 00582da3
    SAR EAX,0x1                         ; 00582da5
    SUB EBX,EAX                         ; 00582da7
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00582da9
    MOV EDX,EAX                         ; 00582db0
    SAR EDX,0x1f                        ; 00582db2
    SUB EAX,EDX                         ; 00582db5
    SAR EAX,0x1                         ; 00582db7
    MOV ECX,EAX                         ; 00582db9
    MOV EAX,dword ptr [ESP + 0x190]     ; 00582dbb
    MOV EDX,EAX                         ; 00582dc2
    SAR EDX,0x1f                        ; 00582dc4
    SUB EAX,EDX                         ; 00582dc7
    SAR EAX,0x1                         ; 00582dc9
    PUSH 0x1                            ; 00582dcb
    SUB ECX,EAX                         ; 00582dcd
    MOV EAX,dword ptr [ESP + 0x194]     ; 00582dcf
    PUSH EAX                            ; 00582dd6
    MOV EDX,dword ptr [ESP + 0x194]     ; 00582dd7
    PUSH EDX                            ; 00582dde
    PUSH ECX                            ; 00582ddf
    PUSH EBX                            ; 00582de0
    MOV ECX,dword ptr [0x02d22fa8]      ; 00582de1 | DAT_02d22fa8
    PUSH ECX                            ; 00582de7
    CALL dword ptr CS:[0x5b34dc]        ; 00582de8
    ADD ESP,0x1a4                       ; 00582def
    POP EBP                             ; 00582df5
    POP EDI                             ; 00582df6
    POP ESI                             ; 00582df7
    POP EBX                             ; 00582df8
    RET                                 ; 00582df9
    CMP dword ptr [ESP + 0x1a0],0x12c   ; 00582dfa
        ;   Label: LAB_00582dfa
    JG 0x00582d65                       ; 00582e05
        ;   XREF to: 00582d65 (CONDITIONAL_JUMP)  ; LAB_00582d65
    JMP 0x00582d85                      ; 00582e0b
        ;   XREF to: 00582d85 (UNCONDITIONAL_JUMP)  ; LAB_00582d85
    PUSH 0x30                           ; 00582e10
        ;   Label: LAB_00582e10
    PUSH 0x0                            ; 00582e12
    PUSH 0x5d8059                       ; 00582e14
    PUSH EBX                            ; 00582e19
    XOR EBX,EBX                         ; 00582e1a
    CALL dword ptr CS:[0x5b34d8]        ; 00582e1c
    MOV dword ptr [0x02d22fb0],EBX      ; 00582e23 | DAT_02d22fb0
    ADD ESP,0x1a4                       ; 00582e29
    POP EBP                             ; 00582e2f
    POP EDI                             ; 00582e30
    POP ESI                             ; 00582e31
    POP EBX                             ; 00582e32
    RET                                 ; 00582e33

