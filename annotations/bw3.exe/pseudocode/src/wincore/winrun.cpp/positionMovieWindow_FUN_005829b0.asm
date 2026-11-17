; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_positionMovieWindow_FUN_005829b0(HWND parent_window)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
;
; Referenced Globals:
;   int g_INT_02d22fa8
;   int g_INT_02d22fb0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005829b0
        ;   Label: wincore_winrun.cpp_positionMovieWindow_FUN_005829b0
    SUB ESP,0xa0                        ; 005829b1
    CMP dword ptr [0x02d22fb0],0x0      ; 005829b7 | g_INT_02d22fb0
    JNZ 0x005829c8                      ; 005829be
        ;   XREF to: 005829c8 (CONDITIONAL_JUMP)  ; LAB_005829c8
    ADD ESP,0xa0                        ; 005829c0
    POP EBP                             ; 005829c6
    RET                                 ; 005829c7
    LEA EAX,[ESP + 0x80]                ; 005829c8
        ;   Label: LAB_005829c8
    PUSH EAX                            ; 005829cf
    MOV ECX,dword ptr [ESP + 0xac]      ; 005829d0
    PUSH ECX                            ; 005829d7
    CALL dword ptr CS:[0x5b34bc]        ; 005829d8
    PUSH 0x0                            ; 005829df
    PUSH 0x80                           ; 005829e1
    LEA EAX,[ESP + 0x8]                 ; 005829e6
    PUSH EAX                            ; 005829ea
    PUSH 0x5d7ffb                       ; 005829eb
    CALL dword ptr CS:[0x5b344c]        ; 005829f0
    LEA EAX,[ESP + 0x90]                ; 005829f7
    PUSH EAX                            ; 005829fe
    CALL dword ptr CS:[0x5b3504]        ; 005829ff
    MOV DL,byte ptr [ESP]               ; 00582a06
    MOV EAX,ESP                         ; 00582a09
    CMP DL,0x20                         ; 00582a0b
    JNZ 0x00582a20                      ; 00582a0e
        ;   XREF to: 00582a20 (CONDITIONAL_JUMP)  ; LAB_00582a20
    MOV DH,byte ptr [EAX + 0x1]         ; 00582a10
        ;   Label: LAB_00582a10
    INC EAX                             ; 00582a13
    CMP DH,0x20                         ; 00582a14
    JZ 0x00582a10                       ; 00582a17
        ;   XREF to: 00582a10 (CONDITIONAL_JUMP)  ; LAB_00582a10
    LEA EAX,[EAX]                       ; 00582a19
    NOP                                 ; 00582a1f
    CMP byte ptr [EAX],0x20             ; 00582a20
        ;   Label: LAB_00582a20
    JZ 0x00582a28                       ; 00582a23
        ;   XREF to: 00582a28 (CONDITIONAL_JUMP)  ; LAB_00582a28
    INC EAX                             ; 00582a25
    JMP 0x00582a20                      ; 00582a26
        ;   XREF to: 00582a20 (UNCONDITIONAL_JUMP)  ; LAB_00582a20
    CMP byte ptr [EAX],0x20             ; 00582a28
        ;   Label: LAB_00582a28
    JNZ 0x00582a30                      ; 00582a2b
        ;   XREF to: 00582a30 (CONDITIONAL_JUMP)  ; LAB_00582a30
    INC EAX                             ; 00582a2d
    JMP 0x00582a28                      ; 00582a2e
        ;   XREF to: 00582a28 (UNCONDITIONAL_JUMP)  ; LAB_00582a28
    CMP byte ptr [EAX],0x20             ; 00582a30
        ;   Label: LAB_00582a30
    JZ 0x00582a38                       ; 00582a33
        ;   XREF to: 00582a38 (CONDITIONAL_JUMP)  ; LAB_00582a38
    INC EAX                             ; 00582a35
    JMP 0x00582a30                      ; 00582a36
        ;   XREF to: 00582a30 (UNCONDITIONAL_JUMP)  ; LAB_00582a30
    CMP byte ptr [EAX],0x20             ; 00582a38
        ;   Label: LAB_00582a38
    JNZ 0x00582a59                      ; 00582a3b
        ;   XREF to: 00582a59 (CONDITIONAL_JUMP)  ; LAB_00582a59
    INC EAX                             ; 00582a3d
    JMP 0x00582a38                      ; 00582a3e
        ;   XREF to: 00582a38 (UNCONDITIONAL_JUMP)  ; LAB_00582a38
    IMUL ECX,dword ptr [ESP + 0x98],0xa ; 00582a40
        ;   Label: LAB_00582a40
    XOR EDX,EDX                         ; 00582a48
    MOV DL,byte ptr [EAX]               ; 00582a4a
    SUB EDX,0x30                        ; 00582a4c
    ADD ECX,EDX                         ; 00582a4f
    INC EAX                             ; 00582a51
    MOV dword ptr [ESP + 0x98],ECX      ; 00582a52
    MOV DL,byte ptr [EAX]               ; 00582a59
        ;   Label: LAB_00582a59
    CMP DL,0x30                         ; 00582a5b
    JNC 0x00582a6c                      ; 00582a5e
        ;   XREF to: 00582a6c (CONDITIONAL_JUMP)  ; LAB_00582a6c
    CMP byte ptr [EAX],0x20             ; 00582a60
        ;   Label: LAB_00582a60
    JNZ 0x00582b3e                      ; 00582a63
        ;   XREF to: 00582b3e (CONDITIONAL_JUMP)  ; LAB_00582b3e
    INC EAX                             ; 00582a69
    JMP 0x00582a60                      ; 00582a6a
        ;   XREF to: 00582a60 (UNCONDITIONAL_JUMP)  ; LAB_00582a60
    CMP DL,0x39                         ; 00582a6c
        ;   Label: LAB_00582a6c
    JBE 0x00582a40                      ; 00582a6f
        ;   XREF to: 00582a40 (CONDITIONAL_JUMP)  ; LAB_00582a40
    JMP 0x00582a60                      ; 00582a71
        ;   XREF to: 00582a60 (UNCONDITIONAL_JUMP)  ; LAB_00582a60
    IMUL ECX,dword ptr [ESP + 0xa8],0xa ; 00582a73
        ;   Label: LAB_00582a73
    XOR EDX,EDX                         ; 00582a7b
    MOV DL,BH                           ; 00582a7d
    SUB EDX,0x30                        ; 00582a7f
    ADD ECX,EDX                         ; 00582a82
    INC EAX                             ; 00582a84
    MOV dword ptr [ESP + 0xa8],ECX      ; 00582a85
    MOV BH,byte ptr [EAX]               ; 00582a8c
        ;   Label: LAB_00582a8c
    CMP BH,0x30                         ; 00582a8e
    JC 0x00582a98                       ; 00582a91
        ;   XREF to: 00582a98 (CONDITIONAL_JUMP)  ; LAB_00582a98
    CMP BH,0x39                         ; 00582a93
    JBE 0x00582a73                      ; 00582a96
        ;   XREF to: 00582a73 (CONDITIONAL_JUMP)  ; LAB_00582a73
    CMP dword ptr [ESP + 0x94],0x190    ; 00582a98
        ;   Label: LAB_00582a98
    JLE 0x00582b46                      ; 00582aa3
        ;   XREF to: 00582b46 (CONDITIONAL_JUMP)  ; LAB_00582b46
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00582aa9
        ;   Label: LAB_00582aa9
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00582ab0
    ADD EAX,EAX                         ; 00582ab7
    ADD EBP,EBP                         ; 00582ab9
    MOV dword ptr [ESP + 0xa4],EAX      ; 00582abb
    MOV dword ptr [ESP + 0xa8],EBP      ; 00582ac2
    MOV EAX,dword ptr [ESP + 0x94]      ; 00582ac9
        ;   Label: LAB_00582ac9
    MOV EDX,EAX                         ; 00582ad0
    SAR EDX,0x1f                        ; 00582ad2
    SUB EAX,EDX                         ; 00582ad5
    SAR EAX,0x1                         ; 00582ad7
    MOV EBX,EAX                         ; 00582ad9
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00582adb
    MOV EDX,EAX                         ; 00582ae2
    SAR EDX,0x1f                        ; 00582ae4
    SUB EAX,EDX                         ; 00582ae7
    SAR EAX,0x1                         ; 00582ae9
    SUB EBX,EAX                         ; 00582aeb
    MOV EAX,dword ptr [ESP + 0x98]      ; 00582aed
    MOV EDX,EAX                         ; 00582af4
    SAR EDX,0x1f                        ; 00582af6
    SUB EAX,EDX                         ; 00582af9
    SAR EAX,0x1                         ; 00582afb
    MOV ECX,EAX                         ; 00582afd
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00582aff
    MOV EDX,EAX                         ; 00582b06
    SAR EDX,0x1f                        ; 00582b08
    SUB EAX,EDX                         ; 00582b0b
    SAR EAX,0x1                         ; 00582b0d
    PUSH 0x1                            ; 00582b0f
    MOV EDX,dword ptr [ESP + 0xac]      ; 00582b11
    PUSH EDX                            ; 00582b18
    MOV ESI,dword ptr [ESP + 0xac]      ; 00582b19
    PUSH ESI                            ; 00582b20
    SUB ECX,EAX                         ; 00582b21
    PUSH ECX                            ; 00582b23
    PUSH EBX                            ; 00582b24
    MOV EDI,dword ptr [0x02d22fa8]      ; 00582b25 | g_INT_02d22fa8
    PUSH EDI                            ; 00582b2b
    CALL dword ptr CS:[0x5b34dc]        ; 00582b2c
    POP EBX                             ; 00582b33
    POP ESI                             ; 00582b34
    POP EDI                             ; 00582b35
    ADD ESP,0xa0                        ; 00582b36
    POP EBP                             ; 00582b3c
    RET                                 ; 00582b3d
    PUSH EDI                            ; 00582b3e
        ;   Label: LAB_00582b3e
    PUSH ESI                            ; 00582b3f
    PUSH EBX                            ; 00582b40
    JMP 0x00582a8c                      ; 00582b41
        ;   XREF to: 00582a8c (UNCONDITIONAL_JUMP)  ; LAB_00582a8c
    CMP dword ptr [ESP + 0x98],0x12c    ; 00582b46
        ;   Label: LAB_00582b46
    JG 0x00582aa9                       ; 00582b51
        ;   XREF to: 00582aa9 (CONDITIONAL_JUMP)  ; LAB_00582aa9
    JMP 0x00582ac9                      ; 00582b57
        ;   XREF to: 00582ac9 (UNCONDITIONAL_JUMP)  ; LAB_00582ac9

