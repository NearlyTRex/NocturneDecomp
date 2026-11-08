; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568420(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00568730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568420
        ;   Label: FUN_00568420
    PUSH EDX                            ; 00568424
    CALL FUN_00408890                   ; 00568425
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0056842a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056842d
    PUSH ECX                            ; 00568431
    CALL FUN_00568730                   ; 00568432
        ;   XREF to: 00568730 (UNCONDITIONAL_CALL)  ; undefined FUN_00568730()
    ADD ESP,0x4                         ; 00568437
    LEA EAX,[EAX]                       ; 0056843a
    RET                                 ; 00568440

