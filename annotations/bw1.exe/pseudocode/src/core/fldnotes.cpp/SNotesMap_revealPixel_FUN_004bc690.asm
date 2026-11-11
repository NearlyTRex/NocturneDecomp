; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_revealPixel_FUN_004bc690(SNotesMap *this_ptr,int param_2,int param_3,int param_4)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004bc5a0 at 004bc67a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc690
        ;   Label: core_fldnotes.cpp_SNotesMap_revealPixel_FUN_004bc690
    PUSH EBP                            ; 004bc691
    MOV EAX,dword ptr [ESP + 0xc]       ; 004bc692
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bc696
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bc69a
    TEST EBX,EBX                        ; 004bc69e
    JL 0x004bc6d1                       ; 004bc6a0
        ;   XREF to: 004bc6d1 (CONDITIONAL_JUMP)  ; LAB_004bc6d1
    TEST EDX,EDX                        ; 004bc6a2
    JL 0x004bc6d1                       ; 004bc6a4
        ;   XREF to: 004bc6d1 (CONDITIONAL_JUMP)  ; LAB_004bc6d1
    MOV ECX,dword ptr [EAX + 0x94]      ; 004bc6a6
    CMP EBX,ECX                         ; 004bc6ac
    JGE 0x004bc6d1                      ; 004bc6ae
        ;   XREF to: 004bc6d1 (CONDITIONAL_JUMP)  ; LAB_004bc6d1
    CMP EDX,dword ptr [EAX + 0x98]      ; 004bc6b0
    JGE 0x004bc6d1                      ; 004bc6b6
        ;   XREF to: 004bc6d1 (CONDITIONAL_JUMP)  ; LAB_004bc6d1
    IMUL EDX,ECX                        ; 004bc6b8
    MOV ECX,dword ptr [EAX + 0x8c]      ; 004bc6bb
    ADD EDX,ECX                         ; 004bc6c1
    ADD EDX,EBX                         ; 004bc6c3
    XOR ECX,ECX                         ; 004bc6c5
    MOV EBP,dword ptr [ESP + 0x18]      ; 004bc6c7
    MOV CL,byte ptr [EDX]               ; 004bc6cb
    CMP ECX,EBP                         ; 004bc6cd
    JL 0x004bc6d4                       ; 004bc6cf
        ;   XREF to: 004bc6d4 (CONDITIONAL_JUMP)  ; LAB_004bc6d4
    POP EBP                             ; 004bc6d1
        ;   Label: LAB_004bc6d1
    POP EBX                             ; 004bc6d2
    RET                                 ; 004bc6d3
    MOV BL,byte ptr [ESP + 0x18]        ; 004bc6d4
        ;   Label: LAB_004bc6d4
    MOV byte ptr [EDX],BL               ; 004bc6d8
    MOV dword ptr [EAX + 0x96c],0x1     ; 004bc6da
    POP EBP                             ; 004bc6e4
    POP EBX                             ; 004bc6e5
    RET                                 ; 004bc6e6

