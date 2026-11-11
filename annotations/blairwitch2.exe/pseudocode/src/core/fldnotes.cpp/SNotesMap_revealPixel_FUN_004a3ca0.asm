; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004a3ca0(SNotesMap *this_ptr,int param_2,int param_3,int param_4)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004a3bb0 at 004a3c8a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3ca0
        ;   Label: core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004a3ca0
    PUSH EBP                            ; 004a3ca1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a3ca2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a3ca6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a3caa
    TEST EBX,EBX                        ; 004a3cae
    JL 0x004a3ce1                       ; 004a3cb0
        ;   XREF to: 004a3ce1 (CONDITIONAL_JUMP)  ; LAB_004a3ce1
    TEST EDX,EDX                        ; 004a3cb2
    JL 0x004a3ce1                       ; 004a3cb4
        ;   XREF to: 004a3ce1 (CONDITIONAL_JUMP)  ; LAB_004a3ce1
    MOV ECX,dword ptr [EAX + 0x94]      ; 004a3cb6
    CMP EBX,ECX                         ; 004a3cbc
    JGE 0x004a3ce1                      ; 004a3cbe
        ;   XREF to: 004a3ce1 (CONDITIONAL_JUMP)  ; LAB_004a3ce1
    CMP EDX,dword ptr [EAX + 0x98]      ; 004a3cc0
    JGE 0x004a3ce1                      ; 004a3cc6
        ;   XREF to: 004a3ce1 (CONDITIONAL_JUMP)  ; LAB_004a3ce1
    IMUL EDX,ECX                        ; 004a3cc8
    MOV ECX,dword ptr [EAX + 0x8c]      ; 004a3ccb
    ADD EDX,ECX                         ; 004a3cd1
    ADD EDX,EBX                         ; 004a3cd3
    XOR ECX,ECX                         ; 004a3cd5
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a3cd7
    MOV CL,byte ptr [EDX]               ; 004a3cdb
    CMP ECX,EBP                         ; 004a3cdd
    JL 0x004a3ce4                       ; 004a3cdf
        ;   XREF to: 004a3ce4 (CONDITIONAL_JUMP)  ; LAB_004a3ce4
    POP EBP                             ; 004a3ce1
        ;   Label: LAB_004a3ce1
    POP EBX                             ; 004a3ce2
    RET                                 ; 004a3ce3
    MOV BL,byte ptr [ESP + 0x18]        ; 004a3ce4
        ;   Label: LAB_004a3ce4
    MOV byte ptr [EDX],BL               ; 004a3ce8
    MOV dword ptr [EAX + 0x96c],0x1     ; 004a3cea
    POP EBP                             ; 004a3cf4
    POP EBX                             ; 004a3cf5
    RET                                 ; 004a3cf6

