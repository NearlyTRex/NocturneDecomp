; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004ecef0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecef0
        ;   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004ecef0
    PUSH ESI                            ; 004ecef1
    PUSH EDI                            ; 004ecef2
    PUSH EBP                            ; 004ecef3
    MOV EBP,dword ptr [0x0061b4a0]      ; 004ecef4 | DAT_0061b4a0
    XOR EDX,EDX                         ; 004ecefa
    XOR EAX,EAX                         ; 004ecefc
    MOVZX ESI,byte ptr [EAX + 0x1c4e9f9] ; 004ecefe
        ;   Label: LAB_004ecefe
    XOR EBX,EBX                         ; 004ecf05
    MOVZX EDI,byte ptr [EAX + 0x1c4e9f8] ; 004ecf07
    MOV BL,byte ptr [EAX + 0x1c4e9fa]   ; 004ecf0e
    CMP EBP,0x20                        ; 004ecf14
    JNZ 0x004ecf61                      ; 004ecf17
        ;   XREF to: 004ecf61 (CONDITIONAL_JUMP)  ; LAB_004ecf61
    MOV CL,byte ptr [0x01c4e9d4]        ; 004ecf19 | DAT_01c4e9d4
    SHL EDI,CL                          ; 004ecf1f
    MOV CL,byte ptr [0x01c4e9e0]        ; 004ecf21 | DAT_01c4e9e0
    SHL ESI,CL                          ; 004ecf27
    MOV CL,byte ptr [0x01c4e9ec]        ; 004ecf29 | DAT_01c4e9ec
    SHL EBX,CL                          ; 004ecf2f
    OR EDI,ESI                          ; 004ecf31
    MOV ECX,EBX                         ; 004ecf33
    OR ECX,EDI                          ; 004ecf35
    ADD EDX,0x4                         ; 004ecf37
        ;   Label: LAB_004ecf37
    ADD EAX,0x3                         ; 004ecf3a
    MOV dword ptr [EDX + 0x1c4dccc],ECX ; 004ecf3d
    CMP EDX,0x400                       ; 004ecf43
    JNZ 0x004ecefe                      ; 004ecf49
        ;   XREF to: 004ecefe (CONDITIONAL_JUMP)  ; LAB_004ecefe
    MOV dword ptr [0x0061b4a0],EBP      ; 004ecf4b | DAT_0061b4a0
    POP EBP                             ; 004ecf51
    POP EDI                             ; 004ecf52
    POP ESI                             ; 004ecf53
    POP EBX                             ; 004ecf54
    LEA EAX,[EAX]                       ; 004ecf55
    LEA EDX,[EDX]                       ; 004ecf5b
    MOV EBX,EBX                         ; 004ecf5e
    RET                                 ; 004ecf60
    MOV ECX,EDI                         ; 004ecf61
        ;   Label: LAB_004ecf61
    SHL ESI,0x8                         ; 004ecf63
    SHL ECX,0x10                        ; 004ecf66
    OR ECX,ESI                          ; 004ecf69
    OR ECX,EBX                          ; 004ecf6b
    JMP 0x004ecf37                      ; 004ecf6d
        ;   XREF to: 004ecf37 (UNCONDITIONAL_JUMP)  ; LAB_004ecf37

