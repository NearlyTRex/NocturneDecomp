; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00514b6e(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;   undefined4 DAT_01d2ae00
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00511850
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00514b6e
        ;   Label: engine_mini3d.cpp_FUN_00514b6e
    PUSH EBX                            ; 00514b70
    PUSH EDI                            ; 00514b71
    SUB ESP,0x4                         ; 00514b72
    MOV EDI,dword ptr [ESP + 0x10]      ; 00514b75
    MOV EBX,dword ptr [ESP + 0x14]      ; 00514b79
    CMP dword ptr [ESP + 0x1c],0x0      ; 00514b7d
    SETNZ AL                            ; 00514b82
    AND EAX,0xff                        ; 00514b85
    INC EAX                             ; 00514b8a
    MOV [0x01d25f14],EAX                ; 00514b8b | DAT_01d25f14
    LEA EAX,[EBX + -0x1]                ; 00514b90
    MOV dword ptr [ESP],EAX             ; 00514b93
    FILD dword ptr [ESP]                ; 00514b96
    LEA EAX,[EDI + -0x1]                ; 00514b99
    SUB ESP,0x4                         ; 00514b9c
    MOV dword ptr [ESP + 0x4],EAX       ; 00514b9f
    FSTP float ptr [ESP]                ; 00514ba3
    FILD dword ptr [ESP + 0x4]          ; 00514ba6
    SUB ESP,0x4                         ; 00514baa
    FSTP float ptr [ESP]                ; 00514bad
    PUSH 0x0                            ; 00514bb0
    PUSH 0x0                            ; 00514bb2
    CALL engine_mini3d.cpp_FUN_00511850 ; 00514bb4
        ;   XREF to: 00511850 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00511850()
    ADD ESP,0x10                        ; 00514bb9
    MOV dword ptr [0x01d2ae00],EBX      ; 00514bbc | DAT_01d2ae00
    TEST EBX,EBX                        ; 00514bc2
    JLE 0x00514bf8                      ; 00514bc4
        ;   XREF to: 00514bf8 (CONDITIONAL_JUMP)  ; LAB_00514bf8
    PUSH ESI                            ; 00514bc6
    LEA ESI,[EDI*0x4 + 0x0]             ; 00514bc7
    IMUL EDX,EDI,0x0                    ; 00514bce
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00514bd1
    SHL EBX,0x2                         ; 00514bd5
    XOR EAX,EAX                         ; 00514bd8
    ADD EDX,ECX                         ; 00514bda
    ADD EAX,0x4                         ; 00514bdc
        ;   Label: LAB_00514bdc
    MOV ECX,dword ptr [EAX + 0x1c43548] ; 00514bdf
    MOV dword ptr [EAX + 0x1d2ae00],ECX ; 00514be5
    MOV dword ptr [EAX + 0x1c43548],EDX ; 00514beb
    ADD EDX,ESI                         ; 00514bf1
    CMP EAX,EBX                         ; 00514bf3
    JL 0x00514bdc                       ; 00514bf5
        ;   XREF to: 00514bdc (CONDITIONAL_JUMP)  ; LAB_00514bdc
    POP ESI                             ; 00514bf7
    ADD ESP,0x4                         ; 00514bf8
        ;   Label: LAB_00514bf8
    POP EDI                             ; 00514bfb
    POP EBX                             ; 00514bfc
    RET                                 ; 00514bfd

