; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408c90(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_0057d980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c90
        ;   Label: FUN_00408c90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c91
    LEA EAX,[EDX + 0x20]                ; 00408c95
    PUSH dword ptr [ESP + 0x10]         ; 00408c98
    PUSH EAX                            ; 00408c9c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408c9d
    PUSH ECX                            ; 00408ca1
    PUSH EDX                            ; 00408ca2
    MOV EBX,dword ptr [0x006236b8]      ; 00408ca3 | DAT_006236b8
    PUSH EBX                            ; 00408ca9
    CALL FUN_0057d980                   ; 00408caa
        ;   XREF to: 0057d980 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d980()
    ADD ESP,0x14                        ; 00408caf
    POP EBX                             ; 00408cb2
    LEA EAX,[EAX]                       ; 00408cb3
    LEA EDX,[EDX]                       ; 00408cb9
    NOP                                 ; 00408cbf
    RET                                 ; 00408cc0

