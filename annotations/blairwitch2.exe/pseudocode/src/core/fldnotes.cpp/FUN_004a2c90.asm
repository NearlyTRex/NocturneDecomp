; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a2c90(int param_1)
;
;
; XREF[4]:
;   core_fldnotes.cpp_FUN_004a28b0 at 004a29ea
;   core_fldnotes.cpp_FUN_004a2ad0 at 004a2b23
;   core_fldnotes.cpp_FUN_004a2bf0 at 004a2c67
;   core_fldnotes.cpp_FUN_004a2cc0 at 004a2d4f
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a2b30
;   core_fldnotes.cpp_FUN_004a31c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2c90
        ;   Label: core_fldnotes.cpp_FUN_004a2c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2c91
    PUSH EBX                            ; 004a2c95
    CALL core_fldnotes.cpp_FUN_004a2b30 ; 004a2c96
        ;   XREF to: 004a2b30 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2b30()
    ADD ESP,0x4                         ; 004a2c9b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2c9e
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a2ca1
    MOV dword ptr [EBX + 0x14],EAX      ; 004a2ca4
    INC EDX                             ; 004a2ca7
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a2ca8
    MOV dword ptr [EBX + 0x10],EDX      ; 004a2cab
    PUSH EBX                            ; 004a2cae
    MOV dword ptr [EBX + 0x18],EAX      ; 004a2caf
    CALL core_fldnotes.cpp_FUN_004a31c0 ; 004a2cb2
        ;   XREF to: 004a31c0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a31c0()
    ADD ESP,0x4                         ; 004a2cb7
    POP EBX                             ; 004a2cba
    RET                                 ; 004a2cbb

