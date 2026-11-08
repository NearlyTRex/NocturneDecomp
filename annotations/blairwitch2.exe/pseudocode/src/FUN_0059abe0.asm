; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059abe0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_026677b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059abe0
        ;   Label: FUN_0059abe0
    MOV EDX,dword ptr [0x026677b4]      ; 0059abe1 | DAT_026677b4
    XOR EBX,EBX                         ; 0059abe7
    TEST EDX,EDX                        ; 0059abe9
    JLE 0x0059ac0e                      ; 0059abeb
        ;   XREF to: 0059ac0e (CONDITIONAL_JUMP)  ; LAB_0059ac0e
    PUSH ESI                            ; 0059abed
    XOR ESI,ESI                         ; 0059abee
    MOV EAX,dword ptr [ESI + 0x26677b8] ; 0059abf0
        ;   Label: LAB_0059abf0
    PUSH EAX                            ; 0059abf6
    MOV EDX,dword ptr [EAX]             ; 0059abf7
    ADD ESI,0x4                         ; 0059abf9
    INC EBX                             ; 0059abfc
    CALL dword ptr [EDX + 0xc]          ; 0059abfd
    MOV ECX,dword ptr [0x026677b4]      ; 0059ac00 | DAT_026677b4
    ADD ESP,0x4                         ; 0059ac06
    CMP EBX,ECX                         ; 0059ac09
    JL 0x0059abf0                       ; 0059ac0b
        ;   XREF to: 0059abf0 (CONDITIONAL_JUMP)  ; LAB_0059abf0
    POP ESI                             ; 0059ac0d
    POP EBX                             ; 0059ac0e
        ;   Label: LAB_0059ac0e
    RET                                 ; 0059ac0f

