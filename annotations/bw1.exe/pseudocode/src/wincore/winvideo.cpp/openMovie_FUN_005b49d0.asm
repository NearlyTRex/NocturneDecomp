; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_openMovie_FUN_005b49d0(HWND parent_window,char *movie_filename)
;
; Parameters:
; HWND             Stack[0x4]:4   parent_window
; char *           Stack[0x8]:4   movie_filename
;
; Referenced Globals:
;   undefined4 DAT_02c9d298
;   undefined4 DAT_02c9d2a0
;   undefined4 DAT_02c9d2a8
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005c30e0
;   crt_unknown.c_FUN_005bfb40
;   wincore_winvideo.cpp_closeMovie_FUN_005b4980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b49d0
        ;   Label: wincore_winvideo.cpp_openMovie_FUN_005b49d0
    PUSH ESI                            ; 005b49d1
    PUSH EDI                            ; 005b49d2
    PUSH EBP                            ; 005b49d3
    SUB ESP,0x1a4                       ; 005b49d4
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 005b49da
    CMP dword ptr [0x02c9d2a0],0x0      ; 005b49e1 | DAT_02c9d2a0
    JZ 0x005b49f3                       ; 005b49e8
        ;   XREF to: 005b49f3 (CONDITIONAL_JUMP)  ; LAB_005b49f3
    PUSH EBX                            ; 005b49ea
    CALL wincore_winvideo.cpp_closeMovie_FUN_005b4980 ; 005b49eb
        ;   XREF to: 005b4980 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005b4980(HWND window_handle)
    ADD ESP,0x4                         ; 005b49f0
    PUSH EBX                            ; 005b49f3
        ;   Label: LAB_005b49f3
    MOV ECX,dword ptr [ESP + 0x1c0]     ; 005b49f4
    PUSH ECX                            ; 005b49fb
    PUSH 0x5f9feb                       ; 005b49fc
    LEA EAX,[ESP + 0xc]                 ; 005b4a01
    PUSH EAX                            ; 005b4a05
    CALL crt_unknown.c_FUN_005bfb40     ; 005b4a06
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005b4a0b
    PUSH 0x0                            ; 005b4a0e
    PUSH 0x0                            ; 005b4a10
    PUSH 0x0                            ; 005b4a12
    LEA EAX,[ESP + 0xc]                 ; 005b4a14
    PUSH EAX                            ; 005b4a18
    CALL dword ptr CS:[0x5d044c]        ; 005b4a19
    TEST EAX,EAX                        ; 005b4a20
    JNZ 0x005b4c30                      ; 005b4a22
        ;   XREF to: 005b4c30 (CONDITIONAL_JUMP)  ; LAB_005b4c30
    PUSH EAX                            ; 005b4a28
    PUSH 0x104                          ; 005b4a29
    LEA EAX,[ESP + 0x8]                 ; 005b4a2e
    PUSH EAX                            ; 005b4a32
    MOV ESI,0x1                         ; 005b4a33
    PUSH 0x5fa015                       ; 005b4a38
    MOV dword ptr [0x02c9d2a0],ESI      ; 005b4a3d | DAT_02c9d2a0
    CALL dword ptr CS:[0x5d044c]        ; 005b4a43
    TEST EAX,EAX                        ; 005b4a4a
    JNZ 0x005b4a7c                      ; 005b4a4c
        ;   XREF to: 005b4a7c (CONDITIONAL_JUMP)  ; LAB_005b4a7c
    MOV EAX,ESP                         ; 005b4a4e
    PUSH EAX                            ; 005b4a50
    CALL crt_stdlib.c_atoi_FUN_005c30e0 ; 005b4a51
        ;   XREF to: 005c30e0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005c30e0(char * string_ptr)
    ADD ESP,0x4                         ; 005b4a56
    MOV [0x02c9d298],EAX                ; 005b4a59 | DAT_02c9d298
    MOV EDI,dword ptr [0x02c9d2a8]      ; 005b4a5e | DAT_02c9d2a8
        ;   Label: LAB_005b4a5e
    TEST EDI,EDI                        ; 005b4a64
    JNZ 0x005b4a71                      ; 005b4a66
        ;   XREF to: 005b4a71 (CONDITIONAL_JUMP)  ; LAB_005b4a71
    CMP dword ptr [0x02c9d2a0],0x0      ; 005b4a68 | DAT_02c9d2a0
    JNZ 0x005b4aa1                      ; 005b4a6f
        ;   XREF to: 005b4aa1 (CONDITIONAL_JUMP)  ; LAB_005b4aa1
    ADD ESP,0x1a4                       ; 005b4a71
        ;   Label: LAB_005b4a71
    POP EBP                             ; 005b4a77
    POP EDI                             ; 005b4a78
    POP ESI                             ; 005b4a79
    POP EBX                             ; 005b4a7a
    RET                                 ; 005b4a7b
    PUSH 0x104                          ; 005b4a7c
        ;   Label: LAB_005b4a7c
    LEA EDX,[ESP + 0x4]                 ; 005b4a81
    PUSH EDX                            ; 005b4a85
    PUSH EAX                            ; 005b4a86
    CALL dword ptr CS:[0x5d0444]        ; 005b4a87
    PUSH 0x30                           ; 005b4a8e
    PUSH 0x0                            ; 005b4a90
    LEA EAX,[ESP + 0x8]                 ; 005b4a92
    PUSH EAX                            ; 005b4a96
    PUSH EBX                            ; 005b4a97
    CALL dword ptr CS:[0x5d04dc]        ; 005b4a98
    JMP 0x005b4a5e                      ; 005b4a9f
        ;   XREF to: 005b4a5e (UNCONDITIONAL_JUMP)  ; LAB_005b4a5e
    LEA EAX,[ESP + 0x194]               ; 005b4aa1
        ;   Label: LAB_005b4aa1
    PUSH EAX                            ; 005b4aa8
    PUSH EBX                            ; 005b4aa9
    CALL dword ptr CS:[0x5d04bc]        ; 005b4aaa
    PUSH EDI                            ; 005b4ab1
    PUSH 0x80                           ; 005b4ab2
    LEA EAX,[ESP + 0x10c]               ; 005b4ab7
    PUSH EAX                            ; 005b4abe
    PUSH 0x5f9fd0                       ; 005b4abf
    CALL dword ptr CS:[0x5d044c]        ; 005b4ac4
    LEA EAX,[ESP + 0x184]               ; 005b4acb
    PUSH EAX                            ; 005b4ad2
    CALL dword ptr CS:[0x5d0508]        ; 005b4ad3
    MOV DL,byte ptr [ESP + 0x104]       ; 005b4ada
    LEA EAX,[ESP + 0x104]               ; 005b4ae1
    CMP DL,0x20                         ; 005b4ae8
    JNZ 0x005b4b00                      ; 005b4aeb
        ;   XREF to: 005b4b00 (CONDITIONAL_JUMP)  ; LAB_005b4b00
    MOV DH,byte ptr [EAX + 0x1]         ; 005b4aed
        ;   Label: LAB_005b4aed
    INC EAX                             ; 005b4af0
    CMP DH,0x20                         ; 005b4af1
    JZ 0x005b4aed                       ; 005b4af4
        ;   XREF to: 005b4aed (CONDITIONAL_JUMP)  ; LAB_005b4aed
    LEA EAX,[EAX]                       ; 005b4af6
    LEA EDX,[EDX]                       ; 005b4afc
    CMP byte ptr [EAX],0x20             ; 005b4b00
        ;   Label: LAB_005b4b00
    JZ 0x005b4b08                       ; 005b4b03
        ;   XREF to: 005b4b08 (CONDITIONAL_JUMP)  ; LAB_005b4b08
    INC EAX                             ; 005b4b05
    JMP 0x005b4b00                      ; 005b4b06
        ;   XREF to: 005b4b00 (UNCONDITIONAL_JUMP)  ; LAB_005b4b00
    CMP byte ptr [EAX],0x20             ; 005b4b08
        ;   Label: LAB_005b4b08
    JNZ 0x005b4b10                      ; 005b4b0b
        ;   XREF to: 005b4b10 (CONDITIONAL_JUMP)  ; LAB_005b4b10
    INC EAX                             ; 005b4b0d
    JMP 0x005b4b08                      ; 005b4b0e
        ;   XREF to: 005b4b08 (UNCONDITIONAL_JUMP)  ; LAB_005b4b08
    CMP byte ptr [EAX],0x20             ; 005b4b10
        ;   Label: LAB_005b4b10
    JZ 0x005b4b18                       ; 005b4b13
        ;   XREF to: 005b4b18 (CONDITIONAL_JUMP)  ; LAB_005b4b18
    INC EAX                             ; 005b4b15
    JMP 0x005b4b10                      ; 005b4b16
        ;   XREF to: 005b4b10 (UNCONDITIONAL_JUMP)  ; LAB_005b4b10
    CMP byte ptr [EAX],0x20             ; 005b4b18
        ;   Label: LAB_005b4b18
    JNZ 0x005b4b39                      ; 005b4b1b
        ;   XREF to: 005b4b39 (CONDITIONAL_JUMP)  ; LAB_005b4b39
    INC EAX                             ; 005b4b1d
    JMP 0x005b4b18                      ; 005b4b1e
        ;   XREF to: 005b4b18 (UNCONDITIONAL_JUMP)  ; LAB_005b4b18
    IMUL EDX,dword ptr [ESP + 0x18c],0xa ; 005b4b20
        ;   Label: LAB_005b4b20
    XOR ECX,ECX                         ; 005b4b28
    MOV CL,byte ptr [EAX]               ; 005b4b2a
    SUB ECX,0x30                        ; 005b4b2c
    ADD EDX,ECX                         ; 005b4b2f
    INC EAX                             ; 005b4b31
    MOV dword ptr [ESP + 0x18c],EDX     ; 005b4b32
    MOV DL,byte ptr [EAX]               ; 005b4b39
        ;   Label: LAB_005b4b39
    CMP DL,0x30                         ; 005b4b3b
    JNC 0x005b4b48                      ; 005b4b3e
        ;   XREF to: 005b4b48 (CONDITIONAL_JUMP)  ; LAB_005b4b48
    CMP byte ptr [EAX],0x20             ; 005b4b40
        ;   Label: LAB_005b4b40
    JNZ 0x005b4b68                      ; 005b4b43
        ;   XREF to: 005b4b68 (CONDITIONAL_JUMP)  ; LAB_005b4b68
    INC EAX                             ; 005b4b45
    JMP 0x005b4b40                      ; 005b4b46
        ;   XREF to: 005b4b40 (UNCONDITIONAL_JUMP)  ; LAB_005b4b40
    CMP DL,0x39                         ; 005b4b48
        ;   Label: LAB_005b4b48
    JBE 0x005b4b20                      ; 005b4b4b
        ;   XREF to: 005b4b20 (CONDITIONAL_JUMP)  ; LAB_005b4b20
    JMP 0x005b4b40                      ; 005b4b4d
        ;   XREF to: 005b4b40 (UNCONDITIONAL_JUMP)  ; LAB_005b4b40
    IMUL ECX,dword ptr [ESP + 0x190],0xa ; 005b4b4f
        ;   Label: LAB_005b4b4f
    XOR EDX,EDX                         ; 005b4b57
    MOV DL,byte ptr [EAX]               ; 005b4b59
    SUB EDX,0x30                        ; 005b4b5b
    ADD ECX,EDX                         ; 005b4b5e
    INC EAX                             ; 005b4b60
    MOV dword ptr [ESP + 0x190],ECX     ; 005b4b61
    MOV BH,byte ptr [EAX]               ; 005b4b68
        ;   Label: LAB_005b4b68
    CMP BH,0x30                         ; 005b4b6a
    JC 0x005b4b74                       ; 005b4b6d
        ;   XREF to: 005b4b74 (CONDITIONAL_JUMP)  ; LAB_005b4b74
    CMP BH,0x39                         ; 005b4b6f
    JBE 0x005b4b4f                      ; 005b4b72
        ;   XREF to: 005b4b4f (CONDITIONAL_JUMP)  ; LAB_005b4b4f
    CMP dword ptr [ESP + 0x19c],0x190   ; 005b4b74
        ;   Label: LAB_005b4b74
    JLE 0x005b4c1a                      ; 005b4b7f
        ;   XREF to: 005b4c1a (CONDITIONAL_JUMP)  ; LAB_005b4c1a
    MOV EBP,dword ptr [ESP + 0x18c]     ; 005b4b85
        ;   Label: LAB_005b4b85
    MOV EDI,dword ptr [ESP + 0x190]     ; 005b4b8c
    ADD EBP,EBP                         ; 005b4b93
    ADD EDI,EDI                         ; 005b4b95
    MOV dword ptr [ESP + 0x18c],EBP     ; 005b4b97
    MOV dword ptr [ESP + 0x190],EDI     ; 005b4b9e
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005b4ba5
        ;   Label: LAB_005b4ba5
    MOV EDX,EAX                         ; 005b4bac
    SAR EDX,0x1f                        ; 005b4bae
    SUB EAX,EDX                         ; 005b4bb1
    SAR EAX,0x1                         ; 005b4bb3
    MOV EBX,EAX                         ; 005b4bb5
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005b4bb7
    MOV EDX,EAX                         ; 005b4bbe
    SAR EDX,0x1f                        ; 005b4bc0
    SUB EAX,EDX                         ; 005b4bc3
    SAR EAX,0x1                         ; 005b4bc5
    SUB EBX,EAX                         ; 005b4bc7
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005b4bc9
    MOV EDX,EAX                         ; 005b4bd0
    SAR EDX,0x1f                        ; 005b4bd2
    SUB EAX,EDX                         ; 005b4bd5
    SAR EAX,0x1                         ; 005b4bd7
    MOV ECX,EAX                         ; 005b4bd9
    MOV EAX,dword ptr [ESP + 0x190]     ; 005b4bdb
    MOV EDX,EAX                         ; 005b4be2
    SAR EDX,0x1f                        ; 005b4be4
    SUB EAX,EDX                         ; 005b4be7
    SAR EAX,0x1                         ; 005b4be9
    PUSH 0x1                            ; 005b4beb
    SUB ECX,EAX                         ; 005b4bed
    MOV EAX,dword ptr [ESP + 0x194]     ; 005b4bef
    PUSH EAX                            ; 005b4bf6
    MOV EDX,dword ptr [ESP + 0x194]     ; 005b4bf7
    PUSH EDX                            ; 005b4bfe
    PUSH ECX                            ; 005b4bff
    PUSH EBX                            ; 005b4c00
    MOV ECX,dword ptr [0x02c9d298]      ; 005b4c01 | DAT_02c9d298
    PUSH ECX                            ; 005b4c07
    CALL dword ptr CS:[0x5d04e0]        ; 005b4c08
    ADD ESP,0x1a4                       ; 005b4c0f
    POP EBP                             ; 005b4c15
    POP EDI                             ; 005b4c16
    POP ESI                             ; 005b4c17
    POP EBX                             ; 005b4c18
    RET                                 ; 005b4c19
    CMP dword ptr [ESP + 0x1a0],0x12c   ; 005b4c1a
        ;   Label: LAB_005b4c1a
    JG 0x005b4b85                       ; 005b4c25
        ;   XREF to: 005b4b85 (CONDITIONAL_JUMP)  ; LAB_005b4b85
    JMP 0x005b4ba5                      ; 005b4c2b
        ;   XREF to: 005b4ba5 (UNCONDITIONAL_JUMP)  ; LAB_005b4ba5
    PUSH 0x30                           ; 005b4c30
        ;   Label: LAB_005b4c30
    PUSH 0x0                            ; 005b4c32
    PUSH 0x5fa02e                       ; 005b4c34
    PUSH EBX                            ; 005b4c39
    XOR EBX,EBX                         ; 005b4c3a
    CALL dword ptr CS:[0x5d04dc]        ; 005b4c3c
    MOV dword ptr [0x02c9d2a0],EBX      ; 005b4c43 | DAT_02c9d2a0
    ADD ESP,0x1a4                       ; 005b4c49
    POP EBP                             ; 005b4c4f
    POP EDI                             ; 005b4c50
    POP ESI                             ; 005b4c51
    POP EBX                             ; 005b4c52
    RET                                 ; 005b4c53

