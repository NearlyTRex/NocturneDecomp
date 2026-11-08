; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408cd0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_00560ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408cd0
        ;   Label: FUN_00408cd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408cd1
    LEA EAX,[EDX + 0x20]                ; 00408cd5
    PUSH dword ptr [ESP + 0x10]         ; 00408cd8
    PUSH EAX                            ; 00408cdc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408cdd
    PUSH ECX                            ; 00408ce1
    PUSH EDX                            ; 00408ce2
    MOV EBX,dword ptr [0x006045f8]      ; 00408ce3 | DAT_006045f8
    PUSH EBX                            ; 00408ce9
    CALL FUN_00560ab0                   ; 00408cea
        ;   XREF to: 00560ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560ab0()
    ADD ESP,0x14                        ; 00408cef
    POP EBX                             ; 00408cf2
    LEA EAX,[EAX]                       ; 00408cf3
    LEA EDX,[EDX]                       ; 00408cf9
    NOP                                 ; 00408cff
    RET                                 ; 00408d00

