; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_applyReveal_FUN_004bc9b0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_SNotesMap_draw_FUN_004bc830 at 004bc908
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc9b0
        ;   Label: core_fldnotes.cpp_SNotesMap_applyReveal_FUN_004bc9b0
    PUSH ESI                            ; 004bc9b1
    PUSH EDI                            ; 004bc9b2
    PUSH EBP                            ; 004bc9b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004bc9b4
    MOV EDX,dword ptr [ECX + 0x80]      ; 004bc9b8
    XOR EBP,EBP                         ; 004bc9be
    XOR ESI,ESI                         ; 004bc9c0
    TEST EDX,EDX                        ; 004bc9c2
    JLE 0x004bca46                      ; 004bc9c4
        ;   XREF to: 004bca46 (CONDITIONAL_JUMP)  ; LAB_004bca46
    MOV EDI,dword ptr [ECX + 0x7c]      ; 004bc9ca
        ;   Label: LAB_004bc9ca
    XOR EBX,EBX                         ; 004bc9cd
    TEST EDI,EDI                        ; 004bc9cf
    JLE 0x004bca3d                      ; 004bc9d1
        ;   XREF to: 004bca3d (CONDITIONAL_JUMP)  ; LAB_004bca3d
    MOV EDX,dword ptr [ECX + 0x98]      ; 004bc9d3
        ;   Label: LAB_004bc9d3
    IMUL EDX,EBP                        ; 004bc9d9
    MOV EDI,dword ptr [ECX + 0x80]      ; 004bc9dc
    MOV EAX,EDX                         ; 004bc9e2
    SAR EDX,0x1f                        ; 004bc9e4
    IDIV EDI                            ; 004bc9e7
    MOV EDX,dword ptr [ECX + 0x94]      ; 004bc9e9
    IMUL EDX,EBX                        ; 004bc9ef
    MOV EDI,EAX                         ; 004bc9f2
    MOV EAX,EDX                         ; 004bc9f4
    SAR EDX,0x1f                        ; 004bc9f6
    IDIV dword ptr [ECX + 0x7c]         ; 004bc9f9
    MOV EDX,dword ptr [ECX + 0x94]      ; 004bc9fc
    IMUL EDX,EDI                        ; 004bca02
    ADD EDX,EAX                         ; 004bca05
    MOV EAX,dword ptr [ECX + 0x84]      ; 004bca07
    MOVZX EDI,byte ptr [ESI + EAX*0x1]  ; 004bca0d
    MOV EAX,dword ptr [ECX + 0x8c]      ; 004bca11
    ADD EAX,EDX                         ; 004bca17
    XOR EDX,EDX                         ; 004bca19
    MOV DL,byte ptr [EAX]               ; 004bca1b
    IMUL EDX,EDI                        ; 004bca1d
    MOV EDI,0xff                        ; 004bca20
    MOV EAX,EDX                         ; 004bca25
    SAR EDX,0x1f                        ; 004bca27
    IDIV EDI                            ; 004bca2a
    MOV DL,AL                           ; 004bca2c
    MOV EAX,dword ptr [ECX + 0x74]      ; 004bca2e
    MOV byte ptr [ESI + EAX*0x1],DL     ; 004bca31
    INC EBX                             ; 004bca34
    MOV EAX,dword ptr [ECX + 0x7c]      ; 004bca35
    INC ESI                             ; 004bca38
    CMP EBX,EAX                         ; 004bca39
    JL 0x004bc9d3                       ; 004bca3b
        ;   XREF to: 004bc9d3 (CONDITIONAL_JUMP)  ; LAB_004bc9d3
    INC EBP                             ; 004bca3d
        ;   Label: LAB_004bca3d
    CMP EBP,dword ptr [ECX + 0x80]      ; 004bca3e
    JL 0x004bc9ca                       ; 004bca44
        ;   XREF to: 004bc9ca (CONDITIONAL_JUMP)  ; LAB_004bc9ca
    MOV dword ptr [ECX + 0x96c],0x0     ; 004bca46
        ;   Label: LAB_004bca46
    POP EBP                             ; 004bca50
    POP EDI                             ; 004bca51
    POP ESI                             ; 004bca52
    POP EBX                             ; 004bca53
    RET                                 ; 004bca54

