; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005519c0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005519c0
        ;   Label: FUN_005519c0
    PUSH ESI                            ; 005519c1
    PUSH EDI                            ; 005519c2
    PUSH EBP                            ; 005519c3
    SUB ESP,0x20                        ; 005519c4
    MOV EAX,dword ptr [ESP + 0x34]      ; 005519c7
    MOV EDX,dword ptr [EAX + 0x290]     ; 005519cb
    XOR EDI,EDI                         ; 005519d1
    TEST EDX,EDX                        ; 005519d3
    JLE 0x00551a52                      ; 005519d5
        ;   XREF to: 00551a52 (CONDITIONAL_JUMP)  ; LAB_00551a52
    MOV EBP,dword ptr [ESP + 0x34]      ; 005519db
    ADD EAX,0x294                       ; 005519df
    MOV EBX,dword ptr [ESP + 0x34]      ; 005519e4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005519e8
    MOV EAX,dword ptr [ESP + 0x34]      ; 005519ec
    ADD EBP,0x20                        ; 005519f0
    ADD EAX,0x3c                        ; 005519f3
    ADD EBX,0x2a0                       ; 005519f6
    MOV dword ptr [ESP + 0x18],EAX      ; 005519fc
    FLD float ptr [EBX]                 ; 00551a00
        ;   Label: LAB_00551a00
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00551a02
    MOV EDX,dword ptr [ESP + 0x18]      ; 00551a06
    MOV ESI,EDI                         ; 00551a0a
    FSUB float ptr [EBP]                ; 00551a0c
    SHL ESI,0x5                         ; 00551a0f
    FSTP float ptr [ESP]                ; 00551a12
    FLD float ptr [EBX + 0x4]           ; 00551a15
    ADD ESI,EAX                         ; 00551a18
    FSUB float ptr [EBP + 0x4]          ; 00551a1a
    MOV EAX,ESP                         ; 00551a1d
    FSTP float ptr [ESP + 0x4]          ; 00551a1f
    PUSH EAX                            ; 00551a23
    LEA EAX,[ESP + 0x10]                ; 00551a24
    FLD float ptr [EBX + 0x8]           ; 00551a28
    PUSH EAX                            ; 00551a2b
    FSUB float ptr [EBP + 0x8]          ; 00551a2c
    PUSH EDX                            ; 00551a2f
    FSTP float ptr [ESP + 0x14]         ; 00551a30
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 00551a34
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 00551a39
    CMP ESI,EAX                         ; 00551a3c
    JNZ 0x00551a5a                      ; 00551a3e
        ;   XREF to: 00551a5a (CONDITIONAL_JUMP)  ; LAB_00551a5a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00551a40
        ;   Label: LAB_00551a40
    INC EDI                             ; 00551a44
    MOV ECX,dword ptr [EAX + 0x290]     ; 00551a45
    ADD EBX,0x20                        ; 00551a4b
    CMP EDI,ECX                         ; 00551a4e
    JL 0x00551a00                       ; 00551a50
        ;   XREF to: 00551a00 (CONDITIONAL_JUMP)  ; LAB_00551a00
    ADD ESP,0x20                        ; 00551a52
        ;   Label: LAB_00551a52
    POP EBP                             ; 00551a55
    POP EDI                             ; 00551a56
    POP ESI                             ; 00551a57
    POP EBX                             ; 00551a58
    RET                                 ; 00551a59
    MOV EDX,dword ptr [EAX]             ; 00551a5a
        ;   Label: LAB_00551a5a
    MOV dword ptr [ESI],EDX             ; 00551a5c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00551a5e
    MOV dword ptr [ESI + 0x4],EDX       ; 00551a61
    MOV EDX,dword ptr [EAX + 0x8]       ; 00551a64
    MOV dword ptr [ESI + 0x8],EDX       ; 00551a67
    JMP 0x00551a40                      ; 00551a6a
        ;   XREF to: 00551a40 (UNCONDITIONAL_JUMP)  ; LAB_00551a40

