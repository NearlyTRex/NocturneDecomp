; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d4e30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4e30
        ;   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004d4e30
    PUSH ESI                            ; 004d4e31
    PUSH EDI                            ; 004d4e32
    PUSH EBP                            ; 004d4e33
    MOV EBP,dword ptr [0x005fba20]      ; 004d4e34 | DAT_005fba20
    XOR EDX,EDX                         ; 004d4e3a
    XOR EAX,EAX                         ; 004d4e3c
    MOVZX ESI,byte ptr [EAX + 0x1c6af99] ; 004d4e3e
        ;   Label: LAB_004d4e3e
    XOR EBX,EBX                         ; 004d4e45
    MOVZX EDI,byte ptr [EAX + 0x1c6af98] ; 004d4e47
    MOV BL,byte ptr [EAX + 0x1c6af9a]   ; 004d4e4e
    CMP EBP,0x20                        ; 004d4e54
    JNZ 0x004d4ea1                      ; 004d4e57
        ;   XREF to: 004d4ea1 (CONDITIONAL_JUMP)  ; LAB_004d4ea1
    MOV CL,byte ptr [0x01c6af74]        ; 004d4e59 | DAT_01c6af74
    SHL EDI,CL                          ; 004d4e5f
    MOV CL,byte ptr [0x01c6af80]        ; 004d4e61 | DAT_01c6af80
    SHL ESI,CL                          ; 004d4e67
    MOV CL,byte ptr [0x01c6af8c]        ; 004d4e69 | DAT_01c6af8c
    SHL EBX,CL                          ; 004d4e6f
    OR EDI,ESI                          ; 004d4e71
    MOV ECX,EBX                         ; 004d4e73
    OR ECX,EDI                          ; 004d4e75
    ADD EDX,0x4                         ; 004d4e77
        ;   Label: LAB_004d4e77
    ADD EAX,0x3                         ; 004d4e7a
    MOV dword ptr [EDX + 0x1c6a26c],ECX ; 004d4e7d
    CMP EDX,0x400                       ; 004d4e83
    JNZ 0x004d4e3e                      ; 004d4e89
        ;   XREF to: 004d4e3e (CONDITIONAL_JUMP)  ; LAB_004d4e3e
    MOV dword ptr [0x005fba20],EBP      ; 004d4e8b | DAT_005fba20
    POP EBP                             ; 004d4e91
    POP EDI                             ; 004d4e92
    POP ESI                             ; 004d4e93
    POP EBX                             ; 004d4e94
    LEA EAX,[EAX]                       ; 004d4e95
    LEA EDX,[EDX]                       ; 004d4e9b
    MOV EBX,EBX                         ; 004d4e9e
    RET                                 ; 004d4ea0
    MOV ECX,EDI                         ; 004d4ea1
        ;   Label: LAB_004d4ea1
    SHL ESI,0x8                         ; 004d4ea3
    SHL ECX,0x10                        ; 004d4ea6
    OR ECX,ESI                          ; 004d4ea9
    OR ECX,EBX                          ; 004d4eab
    JMP 0x004d4e77                      ; 004d4ead
        ;   XREF to: 004d4e77 (UNCONDITIONAL_JUMP)  ; LAB_004d4e77

