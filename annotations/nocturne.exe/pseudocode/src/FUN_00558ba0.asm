; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00558ba0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004a0550 at 004a1ea2
;
; Referenced Globals:
;   undefined4 DAT_02de07f4
;   undefined4 DAT_02de0848
;   undefined4 DAT_02de084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558ba0
        ;   Label: FUN_00558ba0
    MOV EDX,dword ptr [0x02de084c]      ; 00558ba1 | DAT_02de084c
    MOV ECX,dword ptr [0x02de0848]      ; 00558ba7 | DAT_02de0848
    INC EDX                             ; 00558bad
    MOV EBX,dword ptr [ESP + 0x8]       ; 00558bae
    MOV dword ptr [EDX*0x4 + 0x2de07f4],EBX ; 00558bb2 | DAT_02de07f4
    CMP EDX,0x14                        ; 00558bb9
    JL 0x00558bc0                       ; 00558bbc
        ;   XREF to: 00558bc0 (CONDITIONAL_JUMP)  ; LAB_00558bc0
    XOR EDX,EDX                         ; 00558bbe
    CMP EDX,ECX                         ; 00558bc0
        ;   Label: LAB_00558bc0
    JNZ 0x00558bcc                      ; 00558bc2
        ;   XREF to: 00558bcc (CONDITIONAL_JUMP)  ; LAB_00558bcc
    INC ECX                             ; 00558bc4
    CMP ECX,0x14                        ; 00558bc5
    JL 0x00558bcc                       ; 00558bc8
        ;   XREF to: 00558bcc (CONDITIONAL_JUMP)  ; LAB_00558bcc
    XOR ECX,ECX                         ; 00558bca
    MOV dword ptr [0x02de0848],ECX      ; 00558bcc | DAT_02de0848
        ;   Label: LAB_00558bcc
    MOV dword ptr [0x02de084c],EDX      ; 00558bd2 | DAT_02de084c
    POP EBX                             ; 00558bd8
    RET                                 ; 00558bd9

