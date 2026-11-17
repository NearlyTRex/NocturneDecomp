; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_positionMovieWindow_FUN_00590c90(HWND parent_window)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
;
; Referenced Globals:
;   int g_INT_02665a48
;   int g_INT_02665a50
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00590c90
        ;   Label: wincore_winrun.cpp_positionMovieWindow_FUN_00590c90
    SUB ESP,0xa0                        ; 00590c91
    CMP dword ptr [0x02665a50],0x0      ; 00590c97 | g_INT_02665a50
    JNZ 0x00590ca8                      ; 00590c9e
        ;   XREF to: 00590ca8 (CONDITIONAL_JUMP)  ; LAB_00590ca8
    ADD ESP,0xa0                        ; 00590ca0
    POP EBP                             ; 00590ca6
    RET                                 ; 00590ca7
    LEA EAX,[ESP + 0x80]                ; 00590ca8
        ;   Label: LAB_00590ca8
    PUSH EAX                            ; 00590caf
    MOV ECX,dword ptr [ESP + 0xac]      ; 00590cb0
    PUSH ECX                            ; 00590cb7
    CALL dword ptr CS:[0x5c84ac]        ; 00590cb8
    PUSH 0x0                            ; 00590cbf
    PUSH 0x80                           ; 00590cc1
    LEA EAX,[ESP + 0x8]                 ; 00590cc6
    PUSH EAX                            ; 00590cca
    PUSH 0x5eebfe                       ; 00590ccb
    CALL dword ptr CS:[0x5c8440]        ; 00590cd0
    LEA EAX,[ESP + 0x90]                ; 00590cd7
    PUSH EAX                            ; 00590cde
    CALL dword ptr CS:[0x5c84f8]        ; 00590cdf
    MOV DL,byte ptr [ESP]               ; 00590ce6
    MOV EAX,ESP                         ; 00590ce9
    CMP DL,0x20                         ; 00590ceb
    JNZ 0x00590d00                      ; 00590cee
        ;   XREF to: 00590d00 (CONDITIONAL_JUMP)  ; LAB_00590d00
    MOV DH,byte ptr [EAX + 0x1]         ; 00590cf0
        ;   Label: LAB_00590cf0
    INC EAX                             ; 00590cf3
    CMP DH,0x20                         ; 00590cf4
    JZ 0x00590cf0                       ; 00590cf7
        ;   XREF to: 00590cf0 (CONDITIONAL_JUMP)  ; LAB_00590cf0
    LEA EAX,[EAX]                       ; 00590cf9
    NOP                                 ; 00590cff
    CMP byte ptr [EAX],0x20             ; 00590d00
        ;   Label: LAB_00590d00
    JZ 0x00590d08                       ; 00590d03
        ;   XREF to: 00590d08 (CONDITIONAL_JUMP)  ; LAB_00590d08
    INC EAX                             ; 00590d05
    JMP 0x00590d00                      ; 00590d06
        ;   XREF to: 00590d00 (UNCONDITIONAL_JUMP)  ; LAB_00590d00
    CMP byte ptr [EAX],0x20             ; 00590d08
        ;   Label: LAB_00590d08
    JNZ 0x00590d10                      ; 00590d0b
        ;   XREF to: 00590d10 (CONDITIONAL_JUMP)  ; LAB_00590d10
    INC EAX                             ; 00590d0d
    JMP 0x00590d08                      ; 00590d0e
        ;   XREF to: 00590d08 (UNCONDITIONAL_JUMP)  ; LAB_00590d08
    CMP byte ptr [EAX],0x20             ; 00590d10
        ;   Label: LAB_00590d10
    JZ 0x00590d18                       ; 00590d13
        ;   XREF to: 00590d18 (CONDITIONAL_JUMP)  ; LAB_00590d18
    INC EAX                             ; 00590d15
    JMP 0x00590d10                      ; 00590d16
        ;   XREF to: 00590d10 (UNCONDITIONAL_JUMP)  ; LAB_00590d10
    CMP byte ptr [EAX],0x20             ; 00590d18
        ;   Label: LAB_00590d18
    JNZ 0x00590d39                      ; 00590d1b
        ;   XREF to: 00590d39 (CONDITIONAL_JUMP)  ; LAB_00590d39
    INC EAX                             ; 00590d1d
    JMP 0x00590d18                      ; 00590d1e
        ;   XREF to: 00590d18 (UNCONDITIONAL_JUMP)  ; LAB_00590d18
    IMUL ECX,dword ptr [ESP + 0x98],0xa ; 00590d20
        ;   Label: LAB_00590d20
    XOR EDX,EDX                         ; 00590d28
    MOV DL,byte ptr [EAX]               ; 00590d2a
    SUB EDX,0x30                        ; 00590d2c
    ADD ECX,EDX                         ; 00590d2f
    INC EAX                             ; 00590d31
    MOV dword ptr [ESP + 0x98],ECX      ; 00590d32
    MOV DL,byte ptr [EAX]               ; 00590d39
        ;   Label: LAB_00590d39
    CMP DL,0x30                         ; 00590d3b
    JNC 0x00590d4c                      ; 00590d3e
        ;   XREF to: 00590d4c (CONDITIONAL_JUMP)  ; LAB_00590d4c
    CMP byte ptr [EAX],0x20             ; 00590d40
        ;   Label: LAB_00590d40
    JNZ 0x00590e1e                      ; 00590d43
        ;   XREF to: 00590e1e (CONDITIONAL_JUMP)  ; LAB_00590e1e
    INC EAX                             ; 00590d49
    JMP 0x00590d40                      ; 00590d4a
        ;   XREF to: 00590d40 (UNCONDITIONAL_JUMP)  ; LAB_00590d40
    CMP DL,0x39                         ; 00590d4c
        ;   Label: LAB_00590d4c
    JBE 0x00590d20                      ; 00590d4f
        ;   XREF to: 00590d20 (CONDITIONAL_JUMP)  ; LAB_00590d20
    JMP 0x00590d40                      ; 00590d51
        ;   XREF to: 00590d40 (UNCONDITIONAL_JUMP)  ; LAB_00590d40
    IMUL ECX,dword ptr [ESP + 0xa8],0xa ; 00590d53
        ;   Label: LAB_00590d53
    XOR EDX,EDX                         ; 00590d5b
    MOV DL,BH                           ; 00590d5d
    SUB EDX,0x30                        ; 00590d5f
    ADD ECX,EDX                         ; 00590d62
    INC EAX                             ; 00590d64
    MOV dword ptr [ESP + 0xa8],ECX      ; 00590d65
    MOV BH,byte ptr [EAX]               ; 00590d6c
        ;   Label: LAB_00590d6c
    CMP BH,0x30                         ; 00590d6e
    JC 0x00590d78                       ; 00590d71
        ;   XREF to: 00590d78 (CONDITIONAL_JUMP)  ; LAB_00590d78
    CMP BH,0x39                         ; 00590d73
    JBE 0x00590d53                      ; 00590d76
        ;   XREF to: 00590d53 (CONDITIONAL_JUMP)  ; LAB_00590d53
    CMP dword ptr [ESP + 0x94],0x190    ; 00590d78
        ;   Label: LAB_00590d78
    JLE 0x00590e26                      ; 00590d83
        ;   XREF to: 00590e26 (CONDITIONAL_JUMP)  ; LAB_00590e26
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00590d89
        ;   Label: LAB_00590d89
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00590d90
    ADD EAX,EAX                         ; 00590d97
    ADD EBP,EBP                         ; 00590d99
    MOV dword ptr [ESP + 0xa4],EAX      ; 00590d9b
    MOV dword ptr [ESP + 0xa8],EBP      ; 00590da2
    MOV EAX,dword ptr [ESP + 0x94]      ; 00590da9
        ;   Label: LAB_00590da9
    MOV EDX,EAX                         ; 00590db0
    SAR EDX,0x1f                        ; 00590db2
    SUB EAX,EDX                         ; 00590db5
    SAR EAX,0x1                         ; 00590db7
    MOV EBX,EAX                         ; 00590db9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00590dbb
    MOV EDX,EAX                         ; 00590dc2
    SAR EDX,0x1f                        ; 00590dc4
    SUB EAX,EDX                         ; 00590dc7
    SAR EAX,0x1                         ; 00590dc9
    SUB EBX,EAX                         ; 00590dcb
    MOV EAX,dword ptr [ESP + 0x98]      ; 00590dcd
    MOV EDX,EAX                         ; 00590dd4
    SAR EDX,0x1f                        ; 00590dd6
    SUB EAX,EDX                         ; 00590dd9
    SAR EAX,0x1                         ; 00590ddb
    MOV ECX,EAX                         ; 00590ddd
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00590ddf
    MOV EDX,EAX                         ; 00590de6
    SAR EDX,0x1f                        ; 00590de8
    SUB EAX,EDX                         ; 00590deb
    SAR EAX,0x1                         ; 00590ded
    PUSH 0x1                            ; 00590def
    MOV EDX,dword ptr [ESP + 0xac]      ; 00590df1
    PUSH EDX                            ; 00590df8
    MOV ESI,dword ptr [ESP + 0xac]      ; 00590df9
    PUSH ESI                            ; 00590e00
    SUB ECX,EAX                         ; 00590e01
    PUSH ECX                            ; 00590e03
    PUSH EBX                            ; 00590e04
    MOV EDI,dword ptr [0x02665a48]      ; 00590e05 | g_INT_02665a48
    PUSH EDI                            ; 00590e0b
    CALL dword ptr CS:[0x5c84d0]        ; 00590e0c
    POP EBX                             ; 00590e13
    POP ESI                             ; 00590e14
    POP EDI                             ; 00590e15
    ADD ESP,0xa0                        ; 00590e16
    POP EBP                             ; 00590e1c
    RET                                 ; 00590e1d
    PUSH EDI                            ; 00590e1e
        ;   Label: LAB_00590e1e
    PUSH ESI                            ; 00590e1f
    PUSH EBX                            ; 00590e20
    JMP 0x00590d6c                      ; 00590e21
        ;   XREF to: 00590d6c (UNCONDITIONAL_JUMP)  ; LAB_00590d6c
    CMP dword ptr [ESP + 0x98],0x12c    ; 00590e26
        ;   Label: LAB_00590e26
    JG 0x00590d89                       ; 00590e31
        ;   XREF to: 00590d89 (CONDITIONAL_JUMP)  ; LAB_00590d89
    JMP 0x00590da9                      ; 00590e37
        ;   XREF to: 00590da9 (UNCONDITIONAL_JUMP)  ; LAB_00590da9

