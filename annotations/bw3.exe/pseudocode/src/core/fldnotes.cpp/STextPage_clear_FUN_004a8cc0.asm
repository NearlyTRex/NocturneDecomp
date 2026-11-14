; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextPage_clear_FUN_004a8cc0(STextPage *this_ptr)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00 at 004a8e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8cc0
        ;   Label: core_fldnotes.cpp_STextPage_clear_FUN_004a8cc0
    PUSH ESI                            ; 004a8cc1
    PUSH EDI                            ; 004a8cc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a8cc3
    MOV EDX,dword ptr [EDI]             ; 004a8cc7
    XOR EBX,EBX                         ; 004a8cc9
    TEST EDX,EDX                        ; 004a8ccb
    JLE 0x004a8ce2                      ; 004a8ccd
        ;   XREF to: 004a8ce2 (CONDITIONAL_JUMP)  ; LAB_004a8ce2
    MOV ESI,EDI                         ; 004a8ccf
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a8cd1
        ;   Label: LAB_004a8cd1
    TEST EAX,EAX                        ; 004a8cd4
    JNZ 0x004a8cec                      ; 004a8cd6
        ;   XREF to: 004a8cec (CONDITIONAL_JUMP)  ; LAB_004a8cec
    INC EBX                             ; 004a8cd8
        ;   Label: LAB_004a8cd8
    MOV ECX,dword ptr [EDI]             ; 004a8cd9
    ADD ESI,0x4                         ; 004a8cdb
    CMP EBX,ECX                         ; 004a8cde
    JL 0x004a8cd1                       ; 004a8ce0
        ;   XREF to: 004a8cd1 (CONDITIONAL_JUMP)  ; LAB_004a8cd1
    MOV dword ptr [EDI],0x0             ; 004a8ce2
        ;   Label: LAB_004a8ce2
    POP EDI                             ; 004a8ce8
    POP ESI                             ; 004a8ce9
    POP EBX                             ; 004a8cea
    RET                                 ; 004a8ceb
    PUSH 0x2                            ; 004a8cec
        ;   Label: LAB_004a8cec
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a8cee
    PUSH EAX                            ; 004a8cf1
    CALL dword ptr [EDX]                ; 004a8cf2
    ADD ESP,0x8                         ; 004a8cf4
    JMP 0x004a8cd8                      ; 004a8cf7
        ;   XREF to: 004a8cd8 (UNCONDITIONAL_JUMP)  ; LAB_004a8cd8

