; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408ec0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055af30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ec0
        ;   Label: FUN_00408ec0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408ec1
    LEA EAX,[EDX + 0x20]                ; 00408ec5
    PUSH dword ptr [ESP + 0x10]         ; 00408ec8
    PUSH EAX                            ; 00408ecc
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408ecd
    PUSH ECX                            ; 00408ed1
    PUSH EDX                            ; 00408ed2
    MOV EBX,dword ptr [0x0061c068]      ; 00408ed3 | DAT_0061c068
    PUSH EBX                            ; 00408ed9
    CALL FUN_0055af30                   ; 00408eda
        ;   XREF to: 0055af30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af30()
    ADD ESP,0x14                        ; 00408edf
    POP EBX                             ; 00408ee2
    LEA EAX,[EAX]                       ; 00408ee3
    LEA EDX,[EDX]                       ; 00408ee9
    NOP                                 ; 00408eef
    RET                                 ; 00408ef0

