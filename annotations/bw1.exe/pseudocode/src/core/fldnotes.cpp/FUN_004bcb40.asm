; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bcb40(undefined4 *param_1)
;
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bc830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bcb40
        ;   Label: core_fldnotes.cpp_FUN_004bcb40
    MOV EAX,dword ptr [ESP + 0x8]       ; 004bcb41
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bcb45
    PUSH EDX                            ; 004bcb48
    MOV ECX,dword ptr [EAX]             ; 004bcb49
    PUSH ECX                            ; 004bcb4b
    MOV EBX,dword ptr [EAX + 0x18]      ; 004bcb4c
    PUSH EBX                            ; 004bcb4f
    CALL core_fldnotes.cpp_FUN_004bc830 ; 004bcb50
        ;   XREF to: 004bc830 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc830()
    ADD ESP,0xc                         ; 004bcb55
    POP EBX                             ; 004bcb58
    RET                                 ; 004bcb59

