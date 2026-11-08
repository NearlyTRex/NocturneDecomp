; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004af8f0 at 004af913
;
; Called Functions:
;   FUN_004af920
;   FUN_004b0480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0190
        ;   Label: FUN_004b0190
    PUSH ESI                            ; 004b0191
    PUSH EDI                            ; 004b0192
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0193
    PUSH EBX                            ; 004b0197
    CALL FUN_004b0480                   ; 004b0198
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0x4                         ; 004b019d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b01a0
    PUSH EDX                            ; 004b01a4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b01a5
    PUSH ECX                            ; 004b01a9
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b01aa
    PUSH ESI                            ; 004b01ae
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b01af
    PUSH EDI                            ; 004b01b3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b01b4
    PUSH EBX                            ; 004b01b8
    MOV dword ptr [EBX + 0x4208],EAX    ; 004b01b9
    CALL FUN_004af920                   ; 004b01bf
        ;   XREF to: 004af920 (UNCONDITIONAL_CALL)  ; undefined FUN_004af920()
    ADD ESP,0x14                        ; 004b01c4
    POP EDI                             ; 004b01c7
    POP ESI                             ; 004b01c8
    POP EBX                             ; 004b01c9
    RET                                 ; 004b01ca

