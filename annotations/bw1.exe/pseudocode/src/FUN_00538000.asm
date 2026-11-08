; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00538000(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005380b0 at 005380b6
;
; Called Functions:
;   FUN_00437400
;   FUN_00538050
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 00538000
        ;   Label: FUN_00538000
    MOV EAX,ESP                         ; 00538006
    PUSH EAX                            ; 00538008
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00538009
    PUSH EDX                            ; 00538010
    CALL FUN_00437400                   ; 00538011
        ;   XREF to: 00437400 (UNCONDITIONAL_CALL)  ; undefined FUN_00437400()
    ADD ESP,0x8                         ; 00538016
    MOV EAX,ESP                         ; 00538019
    PUSH EAX                            ; 0053801b
    MOV ECX,dword ptr [ESP + 0x108]     ; 0053801c
    PUSH ECX                            ; 00538023
    CALL FUN_00538050                   ; 00538024
        ;   XREF to: 00538050 (UNCONDITIONAL_CALL)  ; undefined FUN_00538050()
    ADD ESP,0x8                         ; 00538029
    ADD ESP,0x100                       ; 0053802c
    LEA EAX,[EAX]                       ; 00538032
    LEA EDX,[EDX]                       ; 00538038
    MOV EAX,EAX                         ; 0053803e
    RET                                 ; 00538040

