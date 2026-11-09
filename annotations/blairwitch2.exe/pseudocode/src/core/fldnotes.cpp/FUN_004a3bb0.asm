; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a3bb0(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a3a60 at 004a3b32
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a3ca0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004a3bb0
        ;   Label: core_fldnotes.cpp_FUN_004a3bb0
    SUB ESP,0x10                        ; 004a3bb1
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a3bb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a3bb8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a3bbc
    CMP EDX,dword ptr [EAX + 0x964]     ; 004a3bc0
    JNZ 0x004a3bdc                      ; 004a3bc6
        ;   XREF to: 004a3bdc (CONDITIONAL_JUMP)  ; LAB_004a3bdc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a3bc8
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a3bcc
    CMP ECX,dword ptr [EAX + 0x968]     ; 004a3bd0
    JZ 0x004a3c65                       ; 004a3bd6
        ;   XREF to: 004a3c65 (CONDITIONAL_JUMP)  ; LAB_004a3c65
    PUSH EDI                            ; 004a3bdc
        ;   Label: LAB_004a3bdc
    PUSH ESI                            ; 004a3bdd
    PUSH EBX                            ; 004a3bde
    MOV EDI,EBP                         ; 004a3bdf
    IMUL EDI,EBP                        ; 004a3be1
    MOV EBX,EBP                         ; 004a3be4
    MOV dword ptr [ESP + 0x10],EBP      ; 004a3be6
    NEG EBX                             ; 004a3bea
    MOV dword ptr [ESP + 0x10],EBX      ; 004a3bec
    CMP EBP,EBX                         ; 004a3bf0
    JL 0x004a3c4a                       ; 004a3bf2
        ;   XREF to: 004a3c4a (CONDITIONAL_JUMP)  ; LAB_004a3c4a
    MOV EAX,EBX                         ; 004a3bf4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004a3bf6
    ADD EAX,EBX                         ; 004a3bfa
    MOV dword ptr [ESP + 0xc],EAX       ; 004a3bfc
    MOV EBX,EBP                         ; 004a3c00
        ;   Label: LAB_004a3c00
    NEG EBX                             ; 004a3c02
    CMP EBX,EBP                         ; 004a3c04
    JG 0x004a3c34                       ; 004a3c06
        ;   XREF to: 004a3c34 (CONDITIONAL_JUMP)  ; LAB_004a3c34
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a3c08
    MOV dword ptr [ESP + 0x14],EAX      ; 004a3c0c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a3c10
    IMUL EAX,EAX                        ; 004a3c14
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a3c17
    ADD ESI,EBX                         ; 004a3c1b
    MOV dword ptr [ESP + 0x18],EAX      ; 004a3c1d
    MOV EDX,EBX                         ; 004a3c21
        ;   Label: LAB_004a3c21
    IMUL EDX,EBX                        ; 004a3c23
    ADD EDX,dword ptr [ESP + 0x18]      ; 004a3c26
    CMP EDX,EDI                         ; 004a3c2a
    JLE 0x004a3c6a                      ; 004a3c2c
        ;   XREF to: 004a3c6a (CONDITIONAL_JUMP)  ; LAB_004a3c6a
    INC EBX                             ; 004a3c2e
        ;   Label: LAB_004a3c2e
    INC ESI                             ; 004a3c2f
    CMP EBX,EBP                         ; 004a3c30
    JLE 0x004a3c21                      ; 004a3c32
        ;   XREF to: 004a3c21 (CONDITIONAL_JUMP)  ; LAB_004a3c21
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a3c34
        ;   Label: LAB_004a3c34
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a3c38
    INC EAX                             ; 004a3c3c
    INC EDX                             ; 004a3c3d
    MOV dword ptr [ESP + 0xc],EAX       ; 004a3c3e
    MOV dword ptr [ESP + 0x10],EDX      ; 004a3c42
    CMP EBP,EDX                         ; 004a3c46
    JGE 0x004a3c00                      ; 004a3c48
        ;   XREF to: 004a3c00 (CONDITIONAL_JUMP)  ; LAB_004a3c00
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a3c4a
        ;   Label: LAB_004a3c4a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a3c4e
    MOV dword ptr [EDX + 0x964],EAX     ; 004a3c52
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a3c58
    MOV dword ptr [EDX + 0x968],EAX     ; 004a3c5c
    POP EBX                             ; 004a3c62
    POP ESI                             ; 004a3c63
    POP EDI                             ; 004a3c64
    ADD ESP,0x10                        ; 004a3c65
        ;   Label: LAB_004a3c65
    POP EBP                             ; 004a3c68
    RET                                 ; 004a3c69
    IMUL EDX,EDX,0xff                   ; 004a3c6a
        ;   Label: LAB_004a3c6a
    MOV EAX,EDX                         ; 004a3c70
    SAR EDX,0x1f                        ; 004a3c72
    IDIV EDI                            ; 004a3c75
    MOV EDX,0xff                        ; 004a3c77
    SUB EDX,EAX                         ; 004a3c7c
    PUSH EDX                            ; 004a3c7e
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a3c7f
    PUSH EDX                            ; 004a3c83
    PUSH ESI                            ; 004a3c84
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a3c85
    PUSH ECX                            ; 004a3c89
    CALL core_fldnotes.cpp_FUN_004a3ca0 ; 004a3c8a
        ;   XREF to: 004a3ca0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3ca0()
    ADD ESP,0x10                        ; 004a3c8f
    JMP 0x004a3c2e                      ; 004a3c92
        ;   XREF to: 004a3c2e (UNCONDITIONAL_JUMP)  ; LAB_004a3c2e

