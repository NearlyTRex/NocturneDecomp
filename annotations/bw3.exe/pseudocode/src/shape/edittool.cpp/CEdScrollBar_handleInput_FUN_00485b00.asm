; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00483970 at 00483a23
;
; Referenced Globals:
;   void* switchdataD_00485ae8 = 00485d0c
;   undefined4 DAT_01c5bb78
;   undefined4 DAT_01c5bb7c
;   undefined4 DAT_01c5bb80
;   undefined4 DAT_01c5bb84
;   undefined4 DAT_01c5bb88
;   undefined4 DAT_01c5bb8c
;   undefined4 DAT_01c5bb90
;   undefined4 DAT_01c5bb94
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0
;   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004859e0
;   wincore_winrun.cpp_FUN_005806a0
;   wincore_winrun.cpp_setCursorPosition_FUN_005809d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485b00
        ;   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00
    PUSH ESI                            ; 00485b01
    PUSH EDI                            ; 00485b02
    PUSH EBP                            ; 00485b03
    MOV EBX,dword ptr [ESP + 0x14]      ; 00485b04
    PUSH EBX                            ; 00485b08
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0 ; 00485b09
        ;   XREF to: 00485ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00485b0e
    PUSH EBX                            ; 00485b11
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004859e0 ; 00485b12
        ;   XREF to: 004859e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004859e0(CEdScrollBar * this_ptr)
    MOV EDX,dword ptr [0x01c5bb78]      ; 00485b17 | DAT_01c5bb78
    ADD ESP,0x4                         ; 00485b1d
    CMP EBX,EDX                         ; 00485b20
    JNZ 0x00485d9a                      ; 00485b22
        ;   XREF to: 00485d9a (CONDITIONAL_JUMP)  ; LAB_00485d9a
    TEST byte ptr [0x01c5fae4],0x1      ; 00485b28 | DAT_01c5fae4
    JZ 0x00485bda                       ; 00485b2f
        ;   XREF to: 00485bda (CONDITIONAL_JUMP)  ; LAB_00485bda
    CMP dword ptr [0x01c5bb7c],0x0      ; 00485b35 | DAT_01c5bb7c
    JNZ 0x00485cb8                      ; 00485b3c
        ;   XREF to: 00485cb8 (CONDITIONAL_JUMP)  ; LAB_00485cb8
    CMP dword ptr [EBX + 0x10],0x0      ; 00485b42
    JZ 0x00485be7                       ; 00485b46
        ;   XREF to: 00485be7 (CONDITIONAL_JUMP)  ; LAB_00485be7
    MOV EDI,dword ptr [0x01c5bb88]      ; 00485b4c | DAT_01c5bb88
    MOV ESI,dword ptr [EBX + 0x24]      ; 00485b52
    MOV EBP,dword ptr [0x01c5bb94]      ; 00485b55 | DAT_01c5bb94
    ADD ESI,EDI                         ; 00485b5b
    MOV EAX,[0x01c5fadc]                ; 00485b5d | DAT_01c5fadc
    SUB ESI,EBP                         ; 00485b62
    MOV EDX,dword ptr [0x01c5bb8c]      ; 00485b64 | DAT_01c5bb8c
    CMP EAX,ESI                         ; 00485b6a
    JGE 0x00485b70                      ; 00485b6c
        ;   XREF to: 00485b70 (CONDITIONAL_JUMP)  ; LAB_00485b70
    MOV EAX,ESI                         ; 00485b6e
    MOV ESI,dword ptr [0x01c5bb94]      ; 00485b70 | DAT_01c5bb94
        ;   Label: LAB_00485b70
    MOV EBP,dword ptr [0x01c5bb88]      ; 00485b76 | DAT_01c5bb88
    MOV ECX,dword ptr [EBX + 0x30]      ; 00485b7c
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00485b7f
    ADD ECX,ESI                         ; 00485b82
    MOV ESI,dword ptr [EBX + 0x28]      ; 00485b84
    SUB ECX,EDI                         ; 00485b87
    ADD ESI,EBP                         ; 00485b89
    SUB ESI,ECX                         ; 00485b8b
    CMP EAX,ESI                         ; 00485b8d
    JLE 0x00485b93                      ; 00485b8f
        ;   XREF to: 00485b93 (CONDITIONAL_JUMP)  ; LAB_00485b93
    MOV EAX,ESI                         ; 00485b91
    MOV ECX,dword ptr [0x01c5bb88]      ; 00485b93 | DAT_01c5bb88
        ;   Label: LAB_00485b93
    MOV ESI,EAX                         ; 00485b99
    MOV EDI,dword ptr [0x01c5bb94]      ; 00485b9b | DAT_01c5bb94
    SUB ESI,ECX                         ; 00485ba1
    ADD ESI,EDI                         ; 00485ba3
    PUSH EDX                            ; 00485ba5
        ;   Label: LAB_00485ba5
    PUSH EAX                            ; 00485ba6
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005809d0 ; 00485ba7
        ;   XREF to: 005809d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005809d0(int x, int y)
    MOV EAX,dword ptr [EBX + 0x8]       ; 00485bac
    MOV EBP,dword ptr [EBX + 0x4]       ; 00485baf
    ADD ESP,0x8                         ; 00485bb2
    CMP EAX,EBP                         ; 00485bb5
    JL 0x00485c47                       ; 00485bb7
        ;   XREF to: 00485c47 (CONDITIONAL_JUMP)  ; LAB_00485c47
    MOV dword ptr [EBX],0x0             ; 00485bbd
        ;   Label: LAB_00485bbd
    PUSH EBX                            ; 00485bc3
        ;   Label: LAB_00485bc3
    CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0 ; 00485bc4
        ;   XREF to: 00485ec0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00485ec0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00485bc9
    PUSH EBX                            ; 00485bcc
    CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004859e0 ; 00485bcd
        ;   XREF to: 004859e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004859e0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00485bd2
    POP EBP                             ; 00485bd5
        ;   Label: LAB_00485bd5
    POP EDI                             ; 00485bd6
    POP ESI                             ; 00485bd7
    POP EBX                             ; 00485bd8
    RET                                 ; 00485bd9
    XOR EDX,EDX                         ; 00485bda
        ;   Label: LAB_00485bda
    MOV dword ptr [0x01c5bb78],EDX      ; 00485bdc | DAT_01c5bb78
    POP EBP                             ; 00485be2
    POP EDI                             ; 00485be3
    POP ESI                             ; 00485be4
    POP EBX                             ; 00485be5
    RET                                 ; 00485be6
    MOV ECX,dword ptr [0x01c5bb8c]      ; 00485be7 | DAT_01c5bb8c
        ;   Label: LAB_00485be7
    MOV ESI,dword ptr [EBX + 0x24]      ; 00485bed
    MOV EDI,dword ptr [0x01c5bb94]      ; 00485bf0 | DAT_01c5bb94
    ADD ESI,ECX                         ; 00485bf6
    MOV EDX,dword ptr [0x01c5fae0]      ; 00485bf8 | DAT_01c5fae0
    SUB ESI,EDI                         ; 00485bfe
    MOV EAX,[0x01c5bb88]                ; 00485c00 | DAT_01c5bb88
    CMP EDX,ESI                         ; 00485c05
    JGE 0x00485c0b                      ; 00485c07
        ;   XREF to: 00485c0b (CONDITIONAL_JUMP)  ; LAB_00485c0b
    MOV EDX,ESI                         ; 00485c09
    MOV ESI,dword ptr [0x01c5bb94]      ; 00485c0b | DAT_01c5bb94
        ;   Label: LAB_00485c0b
    MOV EBP,dword ptr [EBX + 0x30]      ; 00485c11
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00485c14
    ADD ESI,EBP                         ; 00485c17
    SUB ESI,ECX                         ; 00485c19
    MOV EDI,dword ptr [0x01c5bb8c]      ; 00485c1b | DAT_01c5bb8c
    MOV ECX,ESI                         ; 00485c21
    MOV ESI,dword ptr [EBX + 0x28]      ; 00485c23
    ADD ESI,EDI                         ; 00485c26
    SUB ESI,ECX                         ; 00485c28
    CMP EDX,ESI                         ; 00485c2a
    JLE 0x00485c30                      ; 00485c2c
        ;   XREF to: 00485c30 (CONDITIONAL_JUMP)  ; LAB_00485c30
    MOV EDX,ESI                         ; 00485c2e
    MOV EBP,dword ptr [0x01c5bb8c]      ; 00485c30 | DAT_01c5bb8c
        ;   Label: LAB_00485c30
    MOV ESI,EDX                         ; 00485c36
    MOV ECX,dword ptr [0x01c5bb94]      ; 00485c38 | DAT_01c5bb94
    SUB ESI,EBP                         ; 00485c3e
    ADD ESI,ECX                         ; 00485c40
    JMP 0x00485ba5                      ; 00485c42
        ;   XREF to: 00485ba5 (UNCONDITIONAL_JUMP)  ; LAB_00485ba5
    CMP EBP,0x1                         ; 00485c47
        ;   Label: LAB_00485c47
    JL 0x00485bbd                       ; 00485c4a
        ;   XREF to: 00485bbd (CONDITIONAL_JUMP)  ; LAB_00485bbd
    CMP ESI,dword ptr [0x01c5bb94]      ; 00485c50 | DAT_01c5bb94
    JNZ 0x00485c64                      ; 00485c56
        ;   XREF to: 00485c64 (CONDITIONAL_JUMP)  ; LAB_00485c64
    MOV EAX,[0x01c5bb90]                ; 00485c58 | DAT_01c5bb90
    MOV dword ptr [EBX],EAX             ; 00485c5d
    JMP 0x00485bc3                      ; 00485c5f
        ;   XREF to: 00485bc3 (UNCONDITIONAL_JUMP)  ; LAB_00485bc3
    MOV ECX,dword ptr [EBX + 0x24]      ; 00485c64
        ;   Label: LAB_00485c64
    CMP ESI,ECX                         ; 00485c67
    JLE 0x00485bbd                      ; 00485c69
        ;   XREF to: 00485bbd (CONDITIONAL_JUMP)  ; LAB_00485bbd
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00485c6f
    MOV EDX,dword ptr [EBX + 0x30]      ; 00485c72
    SUB EDX,EDI                         ; 00485c75
    MOV EBP,dword ptr [EBX + 0x28]      ; 00485c77
    LEA EAX,[ESI + EDX*0x1]             ; 00485c7a
    CMP EAX,EBP                         ; 00485c7d
    JL 0x00485c90                       ; 00485c7f
        ;   XREF to: 00485c90 (CONDITIONAL_JUMP)  ; LAB_00485c90
    MOV EDX,dword ptr [EBX + 0x8]       ; 00485c81
    MOV EAX,dword ptr [EBX + 0x4]       ; 00485c84
    SUB EAX,EDX                         ; 00485c87
    MOV dword ptr [EBX],EAX             ; 00485c89
    JMP 0x00485bc3                      ; 00485c8b
        ;   XREF to: 00485bc3 (UNCONDITIONAL_JUMP)  ; LAB_00485bc3
    MOV EAX,EBP                         ; 00485c90
        ;   Label: LAB_00485c90
    MOV EDI,dword ptr [EBX + 0x8]       ; 00485c92
    SUB EAX,ECX                         ; 00485c95
    MOV EBP,dword ptr [EBX + 0x24]      ; 00485c97
    MOV ECX,EAX                         ; 00485c9a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00485c9c
    SUB ECX,EDX                         ; 00485c9f
    MOV EDX,ESI                         ; 00485ca1
    SUB EAX,EDI                         ; 00485ca3
    SUB EDX,EBP                         ; 00485ca5
    IMUL EDX,EAX                        ; 00485ca7
    MOV EAX,EDX                         ; 00485caa
    SAR EDX,0x1f                        ; 00485cac
    IDIV ECX                            ; 00485caf
    MOV dword ptr [EBX],EAX             ; 00485cb1
    JMP 0x00485bc3                      ; 00485cb3
        ;   XREF to: 00485bc3 (UNCONDITIONAL_JUMP)  ; LAB_00485bc3
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00485cb8
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_00485cb8
    MOV ESI,dword ptr [0x01c5bb80]      ; 00485cbd | DAT_01c5bb80
    MOV EDX,EAX                         ; 00485cc3
    SUB EAX,ESI                         ; 00485cc5
    TEST EAX,EAX                        ; 00485cc7
    JL 0x00485d30                       ; 00485cc9
        ;   XREF to: 00485d30 (CONDITIONAL_JUMP)  ; LAB_00485d30
    MOV EDI,dword ptr [0x01c5bb84]      ; 00485ccb | DAT_01c5bb84
        ;   Label: LAB_00485ccb
    SUB EDI,EAX                         ; 00485cd1
    MOV dword ptr [0x01c5bb80],EDX      ; 00485cd3 | DAT_01c5bb80
    MOV dword ptr [0x01c5bb84],EDI      ; 00485cd9 | DAT_01c5bb84
    TEST EDI,EDI                        ; 00485cdf
    JG 0x00485d15                       ; 00485ce1
        ;   XREF to: 00485d15 (CONDITIONAL_JUMP)  ; default
    MOV EAX,0x9999                      ; 00485ce3
    MOV EDX,dword ptr [EBX + 0x10]      ; 00485ce8
    MOV [0x01c5bb84],EAX                ; 00485ceb | DAT_01c5bb84
    TEST EDX,EDX                        ; 00485cf0
    JZ 0x00485d34                       ; 00485cf2
        ;   XREF to: 00485d34 (CONDITIONAL_JUMP)  ; LAB_00485d34
    MOV EAX,[0x01c5fadc]                ; 00485cf4 | DAT_01c5fadc
    MOV EDX,dword ptr [0x01c5bb7c]      ; 00485cf9 | DAT_01c5bb7c
        ;   Label: LAB_00485cf9
    DEC EDX                             ; 00485cff
    CMP EDX,0x3                         ; 00485d00
    JA 0x00485d15                       ; 00485d03
        ;   XREF to: 00485d15 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x485ae8]  ; 00485d05 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV ESI,dword ptr [EBX]             ; 00485d0c
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0xc]       ; 00485d0e
    SUB ESI,EAX                         ; 00485d11
    MOV dword ptr [EBX],ESI             ; 00485d13
    MOV EDI,dword ptr [0x01c5bb8c]      ; 00485d15 | DAT_01c5bb8c
        ;   Label: default
    PUSH EDI                            ; 00485d1b
    MOV EBP,dword ptr [0x01c5bb88]      ; 00485d1c | DAT_01c5bb88
    PUSH EBP                            ; 00485d22
    CALL wincore_winrun.cpp_setCursorPosition_FUN_005809d0 ; 00485d23
        ;   XREF to: 005809d0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_005809d0(int x, int y)
    ADD ESP,0x8                         ; 00485d28
    JMP 0x00485bc3                      ; 00485d2b
        ;   XREF to: 00485bc3 (UNCONDITIONAL_JUMP)  ; LAB_00485bc3
    XOR EAX,EAX                         ; 00485d30
        ;   Label: LAB_00485d30
    JMP 0x00485ccb                      ; 00485d32
        ;   XREF to: 00485ccb (UNCONDITIONAL_JUMP)  ; LAB_00485ccb
    MOV EAX,[0x01c5fae0]                ; 00485d34 | DAT_01c5fae0
        ;   Label: LAB_00485d34
    JMP 0x00485cf9                      ; 00485d39
        ;   XREF to: 00485cf9 (UNCONDITIONAL_JUMP)  ; LAB_00485cf9
    MOV ECX,dword ptr [EBX]             ; 00485d3b
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0xc]       ; 00485d3d
    ADD ECX,EAX                         ; 00485d40
    MOV dword ptr [EBX],ECX             ; 00485d42
    JMP 0x00485d15                      ; 00485d44
        ;   XREF to: 00485d15 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00485d46
        ;   Label: caseD_3
    JGE 0x00485d56                      ; 00485d49
        ;   XREF to: 00485d56 (CONDITIONAL_JUMP)  ; LAB_00485d56
    MOV EDX,dword ptr [EBX]             ; 00485d4b
    MOV EAX,dword ptr [EBX + 0x8]       ; 00485d4d
    SUB EDX,EAX                         ; 00485d50
    MOV dword ptr [EBX],EDX             ; 00485d52
    JMP 0x00485d15                      ; 00485d54
        ;   XREF to: 00485d15 (UNCONDITIONAL_JUMP)  ; default
    MOV CL,byte ptr [0x01c5fae4]        ; 00485d56 | DAT_01c5fae4
        ;   Label: LAB_00485d56
    XOR EAX,EAX                         ; 00485d5c
    AND CL,0xfe                         ; 00485d5e
    MOV [0x01c5bb78],EAX                ; 00485d61 | DAT_01c5bb78
    MOV byte ptr [0x01c5fae4],CL        ; 00485d66 | DAT_01c5fae4
    JMP 0x00485d15                      ; 00485d6c
        ;   XREF to: 00485d15 (UNCONDITIONAL_JUMP)  ; default
    CMP EAX,dword ptr [EBX + 0x30]      ; 00485d6e
        ;   Label: caseD_4
    JLE 0x00485d7e                      ; 00485d71
        ;   XREF to: 00485d7e (CONDITIONAL_JUMP)  ; LAB_00485d7e
    MOV EDI,dword ptr [EBX]             ; 00485d73
    MOV EAX,dword ptr [EBX + 0x8]       ; 00485d75
    ADD EDI,EAX                         ; 00485d78
    MOV dword ptr [EBX],EDI             ; 00485d7a
    JMP 0x00485d15                      ; 00485d7c
        ;   XREF to: 00485d15 (UNCONDITIONAL_JUMP)  ; default
    MOV DH,byte ptr [0x01c5fae4]        ; 00485d7e | DAT_01c5fae4
        ;   Label: LAB_00485d7e
    XOR ESI,ESI                         ; 00485d84
    AND DH,0xfe                         ; 00485d86
    MOV dword ptr [0x01c5bb78],ESI      ; 00485d89 | DAT_01c5bb78
    MOV byte ptr [0x01c5fae4],DH        ; 00485d8f | DAT_01c5fae4
    JMP 0x00485d15                      ; 00485d95
        ;   XREF to: 00485d15 (UNCONDITIONAL_JUMP)  ; default
    TEST EDX,EDX                        ; 00485d9a
        ;   Label: LAB_00485d9a
    JNZ 0x00485bd5                      ; 00485d9c
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    TEST byte ptr [0x01c5fae4],0x1      ; 00485da2 | DAT_01c5fae4
    JZ 0x00485bd5                       ; 00485da9
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    MOV EAX,[0x01c5fadc]                ; 00485daf | DAT_01c5fadc
    CMP EAX,dword ptr [EBX + 0x14]      ; 00485db4
    JL 0x00485bd5                       ; 00485db7
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    MOV EAX,[0x01c5fae0]                ; 00485dbd | DAT_01c5fae0
    CMP EAX,dword ptr [EBX + 0x18]      ; 00485dc2
    JL 0x00485bd5                       ; 00485dc5
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    MOV EAX,[0x01c5fadc]                ; 00485dcb | DAT_01c5fadc
    CMP EAX,dword ptr [EBX + 0x1c]      ; 00485dd0
    JGE 0x00485bd5                      ; 00485dd3
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    MOV EAX,[0x01c5fae0]                ; 00485dd9 | DAT_01c5fae0
    CMP EAX,dword ptr [EBX + 0x20]      ; 00485dde
    JGE 0x00485bd5                      ; 00485de1
        ;   XREF to: 00485bd5 (CONDITIONAL_JUMP)  ; LAB_00485bd5
    MOV EAX,[0x01c5fadc]                ; 00485de7 | DAT_01c5fadc
    MOV [0x01c5bb88],EAX                ; 00485dec | DAT_01c5bb88
    MOV EAX,[0x01c5fae0]                ; 00485df1 | DAT_01c5fae0
    MOV [0x01c5bb8c],EAX                ; 00485df6 | DAT_01c5bb8c
    MOV EAX,dword ptr [EBX]             ; 00485dfb
    MOV dword ptr [0x01c5bb78],EBX      ; 00485dfd | DAT_01c5bb78
    MOV [0x01c5bb90],EAX                ; 00485e03 | DAT_01c5bb90
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00485e08
    MOV ECX,dword ptr [EBX + 0x10]      ; 00485e0b
    MOV [0x01c5bb94],EAX                ; 00485e0e | DAT_01c5bb94
    TEST ECX,ECX                        ; 00485e13
    JZ 0x00485e57                       ; 00485e15
        ;   XREF to: 00485e57 (CONDITIONAL_JUMP)  ; LAB_00485e57
    MOV EAX,[0x01c5fadc]                ; 00485e17 | DAT_01c5fadc
    CMP EAX,dword ptr [EBX + 0x24]      ; 00485e1c
        ;   Label: LAB_00485e1c
    JGE 0x00485e5e                      ; 00485e1f
        ;   XREF to: 00485e5e (CONDITIONAL_JUMP)  ; LAB_00485e5e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00485e21
    MOV EBP,dword ptr [EBX]             ; 00485e24
    MOV EDI,0x1                         ; 00485e26
    SUB EBP,EAX                         ; 00485e2b
    MOV dword ptr [0x01c5bb7c],EDI      ; 00485e2d | DAT_01c5bb7c
    MOV dword ptr [EBX],EBP             ; 00485e33
    CALL wincore_winrun.cpp_FUN_005806a0 ; 00485e35
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_00485e35
    MOV [0x01c5bb80],EAX                ; 00485e3a | DAT_01c5bb80
    MOV EAX,0x48000                     ; 00485e3f
    PUSH EBX                            ; 00485e44
    MOV [0x01c5bb84],EAX                ; 00485e45 | DAT_01c5bb84
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00 ; 00485e4a
        ;   XREF to: 00485b00 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00485b00(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00485e4f
    POP EBP                             ; 00485e52
    POP EDI                             ; 00485e53
    POP ESI                             ; 00485e54
    POP EBX                             ; 00485e55
    RET                                 ; 00485e56
    MOV EAX,[0x01c5fae0]                ; 00485e57 | DAT_01c5fae0
        ;   Label: LAB_00485e57
    JMP 0x00485e1c                      ; 00485e5c
        ;   XREF to: 00485e1c (UNCONDITIONAL_JUMP)  ; LAB_00485e1c
    CMP EAX,dword ptr [EBX + 0x28]      ; 00485e5e
        ;   Label: LAB_00485e5e
    JL 0x00485e79                       ; 00485e61
        ;   XREF to: 00485e79 (CONDITIONAL_JUMP)  ; LAB_00485e79
    MOV EAX,dword ptr [EBX + 0xc]       ; 00485e63
    MOV ESI,dword ptr [EBX]             ; 00485e66
    MOV ECX,0x2                         ; 00485e68
    ADD ESI,EAX                         ; 00485e6d
    MOV dword ptr [0x01c5bb7c],ECX      ; 00485e6f | DAT_01c5bb7c
    MOV dword ptr [EBX],ESI             ; 00485e75
    JMP 0x00485e35                      ; 00485e77
        ;   XREF to: 00485e35 (UNCONDITIONAL_JUMP)  ; LAB_00485e35
    CMP EAX,dword ptr [EBX + 0x2c]      ; 00485e79
        ;   Label: LAB_00485e79
    JGE 0x00485e94                      ; 00485e7c
        ;   XREF to: 00485e94 (CONDITIONAL_JUMP)  ; LAB_00485e94
    MOV EAX,dword ptr [EBX + 0x8]       ; 00485e7e
    MOV EDX,dword ptr [EBX]             ; 00485e81
    MOV EBP,0x3                         ; 00485e83
    SUB EDX,EAX                         ; 00485e88
    MOV dword ptr [0x01c5bb7c],EBP      ; 00485e8a | DAT_01c5bb7c
    MOV dword ptr [EBX],EDX             ; 00485e90
    JMP 0x00485e35                      ; 00485e92
        ;   XREF to: 00485e35 (UNCONDITIONAL_JUMP)  ; LAB_00485e35
    CMP EAX,dword ptr [EBX + 0x30]      ; 00485e94
        ;   Label: LAB_00485e94
    JL 0x00485eaf                       ; 00485e97
        ;   XREF to: 00485eaf (CONDITIONAL_JUMP)  ; LAB_00485eaf
    MOV EAX,dword ptr [EBX + 0x8]       ; 00485e99
    MOV EDI,dword ptr [EBX]             ; 00485e9c
    MOV ESI,0x4                         ; 00485e9e
    ADD EDI,EAX                         ; 00485ea3
    MOV dword ptr [0x01c5bb7c],ESI      ; 00485ea5 | DAT_01c5bb7c
    MOV dword ptr [EBX],EDI             ; 00485eab
    JMP 0x00485e35                      ; 00485ead
        ;   XREF to: 00485e35 (UNCONDITIONAL_JUMP)  ; LAB_00485e35
    XOR ECX,ECX                         ; 00485eaf
        ;   Label: LAB_00485eaf
    MOV dword ptr [0x01c5bb7c],ECX      ; 00485eb1 | DAT_01c5bb7c
    JMP 0x00485e35                      ; 00485eb7
        ;   XREF to: 00485e35 (UNCONDITIONAL_JUMP)  ; LAB_00485e35

