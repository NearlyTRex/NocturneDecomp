; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_inverseInPlace_FUN_0055bc80(void)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; Called Functions:
;   core_xform.cpp_inverse_FUN_0055bd00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055bc80
        ;   Label: core_xform.cpp_inverseInPlace_FUN_0055bc80
    PUSH EDI                            ; 0055bc81
    SUB ESP,0x30                        ; 0055bc82
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0055bc85
    PUSH EDI                            ; 0055bc89
    LEA ESI,[ESP + 0x4]                 ; 0055bc8a
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 0055bc8e
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_0055bd00()
    MOV ECX,0xc                         ; 0055bc93
    LEA ESI,[ESP + 0x4]                 ; 0055bc98
    ADD ESP,0x4                         ; 0055bc9c
    MOVSD.REP ES:EDI,ESI                ; 0055bc9f
    ADD ESP,0x30                        ; 0055bca1
    POP EDI                             ; 0055bca4
    POP ESI                             ; 0055bca5
    RET                                 ; 0055bca6

