; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476eb0(void)
;
;
; Called Functions:
;   FUN_00476ef0
;   FUN_00477080
;   FUN_00477100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476eb0
        ;   Label: FUN_00476eb0
    PUSH EDI                            ; 00476eb1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00476eb2
    PUSH EBX                            ; 00476eb6
    PUSH EBX                            ; 00476eb7
    CALL FUN_00477100                   ; 00476eb8
        ;   XREF to: 00477100 (UNCONDITIONAL_CALL)  ; undefined FUN_00477100()
    ADD ESP,0x4                         ; 00476ebd
    ADD EAX,dword ptr [ESP + 0x18]      ; 00476ec0
    DEC EAX                             ; 00476ec4
    PUSH EAX                            ; 00476ec5
    PUSH EBX                            ; 00476ec6
    CALL FUN_00477080                   ; 00476ec7
        ;   XREF to: 00477080 (UNCONDITIONAL_CALL)  ; undefined FUN_00477080()
    ADD ESP,0x4                         ; 00476ecc
    MOV ECX,dword ptr [ESP + 0x18]      ; 00476ecf
    ADD EAX,ECX                         ; 00476ed3
    DEC EAX                             ; 00476ed5
    PUSH EAX                            ; 00476ed6
    MOV EBX,dword ptr [ESP + 0x20]      ; 00476ed7
    PUSH EBX                            ; 00476edb
    PUSH ECX                            ; 00476edc
    MOV EDI,dword ptr [ESP + 0x20]      ; 00476edd
    PUSH EDI                            ; 00476ee1
    CALL FUN_00476ef0                   ; 00476ee2
        ;   XREF to: 00476ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00476ef0()
    ADD ESP,0x18                        ; 00476ee7
    POP EDI                             ; 00476eea
    POP EBX                             ; 00476eeb
    RET                                 ; 00476eec

