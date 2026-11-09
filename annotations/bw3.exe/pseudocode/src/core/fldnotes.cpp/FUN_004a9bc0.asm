; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a9bc0(int param_1)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004ab7a0 at 004ab7af
;   core_fldnotes.cpp_NotesSection_dtor_FUN_004a9ba0 at 004a9ba6
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a9930
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9bc0
        ;   Label: core_fldnotes.cpp_FUN_004a9bc0
    PUSH ESI                            ; 004a9bc1
    PUSH EDI                            ; 004a9bc2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a9bc3
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a9bc7
    XOR EBX,EBX                         ; 004a9bcd
    TEST EDX,EDX                        ; 004a9bcf
    JLE 0x004a9bed                      ; 004a9bd1
        ;   XREF to: 004a9bed (CONDITIONAL_JUMP)  ; LAB_004a9bed
    MOV ESI,EDI                         ; 004a9bd3
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a9bd5
        ;   Label: LAB_004a9bd5
    TEST EAX,EAX                        ; 004a9bdb
    JNZ 0x004a9c0f                      ; 004a9bdd
        ;   XREF to: 004a9c0f (CONDITIONAL_JUMP)  ; LAB_004a9c0f
    INC EBX                             ; 004a9bdf
        ;   Label: LAB_004a9bdf
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a9be0
    ADD ESI,0x4                         ; 004a9be6
    CMP EBX,ECX                         ; 004a9be9
    JL 0x004a9bd5                       ; 004a9beb
        ;   XREF to: 004a9bd5 (CONDITIONAL_JUMP)  ; LAB_004a9bd5
    MOV dword ptr [EDI + 0x140],0x0     ; 004a9bed
        ;   Label: LAB_004a9bed
    MOV dword ptr [EDI + 0x144],0x0     ; 004a9bf7
    MOV dword ptr [EDI + 0x150],0x0     ; 004a9c01
    POP EDI                             ; 004a9c0b
    POP ESI                             ; 004a9c0c
    POP EBX                             ; 004a9c0d
    RET                                 ; 004a9c0e
    PUSH 0x0                            ; 004a9c0f
        ;   Label: LAB_004a9c0f
    PUSH EAX                            ; 004a9c11
    CALL core_fldnotes.cpp_FUN_004a9930 ; 004a9c12
        ;   XREF to: 004a9930 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a9930()
    ADD ESP,0x8                         ; 004a9c17
    PUSH EAX                            ; 004a9c1a
    CALL crt_unknown.c_FUN_005a30c4     ; 004a9c1b
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a9c20
    JMP 0x004a9bdf                      ; 004a9c23
        ;   XREF to: 004a9bdf (UNCONDITIONAL_JUMP)  ; LAB_004a9bdf

