; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_00449e40()
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449e40
        ;   Label: core_curtain.cpp_FUN_00449e40
    PUSH ESI                            ; 00449e41
    PUSH EDI                            ; 00449e42
    PUSH EBP                            ; 00449e43
    SUB ESP,0x20                        ; 00449e44
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449e47
    MOV EDX,dword ptr [EAX + 0x204]     ; 00449e4b
    XOR ESI,ESI                         ; 00449e51
    TEST EDX,EDX                        ; 00449e53
    JLE 0x00449eeb                      ; 00449e55
        ;   XREF to: 00449eeb (CONDITIONAL_JUMP)  ; LAB_00449eeb
    MOV EBP,dword ptr [ESP + 0x34]      ; 00449e5b
    ADD EAX,0x208                       ; 00449e5f
    MOV EBX,dword ptr [ESP + 0x34]      ; 00449e64
    MOV dword ptr [ESP + 0x18],EAX      ; 00449e68
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449e6c
    ADD EBP,0x20                        ; 00449e70
    ADD EAX,0x3c                        ; 00449e73
    ADD EBX,0x228                       ; 00449e76
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449e7c
    IMUL EDI,ESI,0x74                   ; 00449e80
        ;   Label: LAB_00449e80
    ADD EDI,dword ptr [ESP + 0x18]      ; 00449e83
    PUSH EDI                            ; 00449e87
    LEA EAX,[ESP + 0x4]                 ; 00449e88
    PUSH EAX                            ; 00449e8c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00449e8d
    PUSH EDX                            ; 00449e91
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00449e92
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EAX]                 ; 00449e97
    FADD float ptr [EBP]                ; 00449e99
    ADD ESP,0xc                         ; 00449e9c
    FSTP float ptr [ESP + 0xc]          ; 00449e9f
    FLD float ptr [EAX + 0x4]           ; 00449ea3
    FADD float ptr [EBP + 0x4]          ; 00449ea6
    FSTP float ptr [ESP + 0x10]         ; 00449ea9
    FLD float ptr [EAX + 0x8]           ; 00449ead
    FADD float ptr [EBP + 0x8]          ; 00449eb0
    LEA EAX,[ESP + 0xc]                 ; 00449eb3
    FSTP float ptr [ESP + 0x14]         ; 00449eb7
    CMP EBX,EAX                         ; 00449ebb
    JNZ 0x00449ef3                      ; 00449ebd
        ;   XREF to: 00449ef3 (CONDITIONAL_JUMP)  ; LAB_00449ef3
    LEA EAX,[EDI + 0x38]                ; 00449ebf
        ;   Label: LAB_00449ebf
    LEA EDX,[EDI + 0x20]                ; 00449ec2
    CMP EAX,EDX                         ; 00449ec5
    JZ 0x00449ed9                       ; 00449ec7
        ;   XREF to: 00449ed9 (CONDITIONAL_JUMP)  ; LAB_00449ed9
    MOV ECX,dword ptr [EDX]             ; 00449ec9
    MOV dword ptr [EAX],ECX             ; 00449ecb
    MOV ECX,dword ptr [EDX + 0x4]       ; 00449ecd
    MOV dword ptr [EAX + 0x4],ECX       ; 00449ed0
    MOV ECX,dword ptr [EDX + 0x8]       ; 00449ed3
    MOV dword ptr [EAX + 0x8],ECX       ; 00449ed6
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449ed9
        ;   Label: LAB_00449ed9
    INC ESI                             ; 00449edd
    MOV ECX,dword ptr [EAX + 0x204]     ; 00449ede
    ADD EBX,0x74                        ; 00449ee4
    CMP ESI,ECX                         ; 00449ee7
    JL 0x00449e80                       ; 00449ee9
        ;   XREF to: 00449e80 (CONDITIONAL_JUMP)  ; LAB_00449e80
    ADD ESP,0x20                        ; 00449eeb
        ;   Label: LAB_00449eeb
    POP EBP                             ; 00449eee
    POP EDI                             ; 00449eef
    POP ESI                             ; 00449ef0
    POP EBX                             ; 00449ef1
    RET                                 ; 00449ef2
    MOV EAX,dword ptr [ESP + 0xc]       ; 00449ef3
        ;   Label: LAB_00449ef3
    MOV dword ptr [EBX],EAX             ; 00449ef7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00449ef9
    MOV dword ptr [EBX + 0x4],EAX       ; 00449efd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00449f00
    MOV dword ptr [EBX + 0x8],EAX       ; 00449f04
    JMP 0x00449ebf                      ; 00449f07
        ;   XREF to: 00449ebf (UNCONDITIONAL_JUMP)  ; LAB_00449ebf

