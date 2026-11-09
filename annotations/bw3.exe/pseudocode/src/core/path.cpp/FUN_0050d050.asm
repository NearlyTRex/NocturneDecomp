; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_0050d050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec1518
;
; Called Functions:
;   core_dtrace.cpp_FUN_00477ac0
;   core_main.c_FUN_004e4330
;   core_path.cpp_FUN_0050c980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d050
        ;   Label: core_path.cpp_FUN_0050d050
    PUSH ESI                            ; 0050d051
    PUSH EDI                            ; 0050d052
    PUSH EBP                            ; 0050d053
    SUB ESP,0x18                        ; 0050d054
    MOV EBP,dword ptr [ESP + 0x34]      ; 0050d057
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0050d05b
    PUSH EDX                            ; 0050d05f
    PUSH 0x203b37c                      ; 0050d060
    LEA ESI,[ESP + 0x14]                ; 0050d065
    LEA EDI,[ESP + 0x8]                 ; 0050d069
    CALL core_dtrace.cpp_FUN_00477ac0   ; 0050d06d
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477ac0()
    LEA ESI,[ESP + 0x14]                ; 0050d072
    ADD ESP,0x8                         ; 0050d076
    MOVSD ES:EDI,ESI                    ; 0050d079
    MOVSD ES:EDI,ESI                    ; 0050d07a
    MOVSD ES:EDI,ESI                    ; 0050d07b
    MOV ECX,dword ptr [0x01ec1518]      ; 0050d07c | DAT_01ec1518
    XOR ESI,ESI                         ; 0050d082
    TEST ECX,ECX                        ; 0050d084
    JLE 0x0050d0b3                      ; 0050d086
        ;   XREF to: 0050d0b3 (CONDITIONAL_JUMP)  ; LAB_0050d0b3
    XOR EBX,EBX                         ; 0050d088
    CMP dword ptr [EBX + 0x1ec151c],0x0 ; 0050d08a
        ;   Label: LAB_0050d08a
    JZ 0x0050d0bb                       ; 0050d091
        ;   XREF to: 0050d0bb (CONDITIONAL_JUMP)  ; LAB_0050d0bb
    MOV EDX,dword ptr [EBX + 0x1ec151c] ; 0050d093
        ;   Label: LAB_0050d093
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 0050d099
    JLE 0x0050d0e0                      ; 0050d0a3
        ;   XREF to: 0050d0e0 (CONDITIONAL_JUMP)  ; LAB_0050d0e0
    MOV EDI,dword ptr [0x01ec1518]      ; 0050d0a5 | DAT_01ec1518
        ;   Label: LAB_0050d0a5
    INC ESI                             ; 0050d0ab
    ADD EBX,0x4                         ; 0050d0ac
    CMP ESI,EDI                         ; 0050d0af
    JL 0x0050d08a                       ; 0050d0b1
        ;   XREF to: 0050d08a (CONDITIONAL_JUMP)  ; LAB_0050d08a
    ADD ESP,0x18                        ; 0050d0b3
        ;   Label: LAB_0050d0b3
    POP EBP                             ; 0050d0b6
    POP EDI                             ; 0050d0b7
    POP ESI                             ; 0050d0b8
    POP EBX                             ; 0050d0b9
    RET                                 ; 0050d0ba
    MOV EDX,0x5cb96c                    ; 0050d0bb
        ;   Label: LAB_0050d0bb
    MOV ECX,0x6b6                       ; 0050d0c0
    PUSH 0x5cb97d                       ; 0050d0c5
    MOV dword ptr [0x01d71de0],EDX      ; 0050d0ca | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050d0d0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050d0d6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050d0db
    JMP 0x0050d093                      ; 0050d0de
        ;   XREF to: 0050d093 (UNCONDITIONAL_JUMP)  ; LAB_0050d093
    MOV ECX,dword ptr [ESP]             ; 0050d0e0
        ;   Label: LAB_0050d0e0
    CMP ECX,dword ptr [EDX + 0xc]       ; 0050d0e3
    JNZ 0x0050d0a5                      ; 0050d0e6
        ;   XREF to: 0050d0a5 (CONDITIONAL_JUMP)  ; LAB_0050d0a5
    MOV EDI,dword ptr [ESP + 0x4]       ; 0050d0e8
    CMP EDI,dword ptr [EDX + 0x10]      ; 0050d0ec
    JNZ 0x0050d0a5                      ; 0050d0ef
        ;   XREF to: 0050d0a5 (CONDITIONAL_JUMP)  ; LAB_0050d0a5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050d0f1
    CMP ECX,dword ptr [EDX + 0x14]      ; 0050d0f5
    JNZ 0x0050d0a5                      ; 0050d0f8
        ;   XREF to: 0050d0a5 (CONDITIONAL_JUMP)  ; LAB_0050d0a5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0050d0fa
    PUSH EDI                            ; 0050d0fe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050d0ff
    PUSH EAX                            ; 0050d103
    PUSH EBP                            ; 0050d104
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0050d105
    PUSH ECX                            ; 0050d109
    PUSH EDX                            ; 0050d10a
    CALL core_path.cpp_FUN_0050c980     ; 0050d10b
        ;   XREF to: 0050c980 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_0050c980()
    ADD ESP,0x14                        ; 0050d110
    JMP 0x0050d0a5                      ; 0050d113
        ;   XREF to: 0050d0a5 (UNCONDITIONAL_JUMP)  ; LAB_0050d0a5

