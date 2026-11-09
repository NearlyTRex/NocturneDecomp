; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004d0c90(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0c90
        ;   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004d0c90
    PUSH ESI                            ; 004d0c91
    PUSH EDI                            ; 004d0c92
    PUSH EBP                            ; 004d0c93
    MOV EBP,dword ptr [0x006141c0]      ; 004d0c94 | DAT_006141c0
    XOR EDX,EDX                         ; 004d0c9a
    XOR EAX,EAX                         ; 004d0c9c
    MOVZX ESI,byte ptr [EAX + 0x1c35839] ; 004d0c9e
        ;   Label: LAB_004d0c9e
    XOR EBX,EBX                         ; 004d0ca5
    MOVZX EDI,byte ptr [EAX + 0x1c35838] ; 004d0ca7
    MOV BL,byte ptr [EAX + 0x1c3583a]   ; 004d0cae
    CMP EBP,0x20                        ; 004d0cb4
    JNZ 0x004d0d01                      ; 004d0cb7
        ;   XREF to: 004d0d01 (CONDITIONAL_JUMP)  ; LAB_004d0d01
    MOV CL,byte ptr [0x01c35814]        ; 004d0cb9 | DAT_01c35814
    SHL EDI,CL                          ; 004d0cbf
    MOV CL,byte ptr [0x01c35820]        ; 004d0cc1 | DAT_01c35820
    SHL ESI,CL                          ; 004d0cc7
    MOV CL,byte ptr [0x01c3582c]        ; 004d0cc9 | DAT_01c3582c
    SHL EBX,CL                          ; 004d0ccf
    OR EDI,ESI                          ; 004d0cd1
    MOV ECX,EBX                         ; 004d0cd3
    OR ECX,EDI                          ; 004d0cd5
    ADD EDX,0x4                         ; 004d0cd7
        ;   Label: LAB_004d0cd7
    ADD EAX,0x3                         ; 004d0cda
    MOV dword ptr [EDX + 0x1c34b0c],ECX ; 004d0cdd
    CMP EDX,0x400                       ; 004d0ce3
    JNZ 0x004d0c9e                      ; 004d0ce9
        ;   XREF to: 004d0c9e (CONDITIONAL_JUMP)  ; LAB_004d0c9e
    MOV dword ptr [0x006141c0],EBP      ; 004d0ceb | DAT_006141c0
    POP EBP                             ; 004d0cf1
    POP EDI                             ; 004d0cf2
    POP ESI                             ; 004d0cf3
    POP EBX                             ; 004d0cf4
    LEA EAX,[EAX]                       ; 004d0cf5
    LEA EDX,[EDX]                       ; 004d0cfb
    MOV EBX,EBX                         ; 004d0cfe
    RET                                 ; 004d0d00
    MOV ECX,EDI                         ; 004d0d01
        ;   Label: LAB_004d0d01
    SHL ESI,0x8                         ; 004d0d03
    SHL ECX,0x10                        ; 004d0d06
    OR ECX,ESI                          ; 004d0d09
    OR ECX,EBX                          ; 004d0d0b
    JMP 0x004d0cd7                      ; 004d0d0d
        ;   XREF to: 004d0cd7 (UNCONDITIONAL_JUMP)  ; LAB_004d0cd7

