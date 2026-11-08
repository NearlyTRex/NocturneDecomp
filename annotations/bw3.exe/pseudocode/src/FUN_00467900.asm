; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00467900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00529210 at 0052924e
;
; Called Functions:
;   FUN_00467940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467900
        ;   Label: FUN_00467900
    PUSH ESI                            ; 00467901
    PUSH EDI                            ; 00467902
    PUSH EBP                            ; 00467903
    MOV EBX,dword ptr [ESP + 0x14]      ; 00467904
    MOV EDX,dword ptr [ESP + 0x28]      ; 00467908
    PUSH EDX                            ; 0046790c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046790d
    PUSH ECX                            ; 00467911
    MOV ESI,dword ptr [ESP + 0x28]      ; 00467912
    PUSH ESI                            ; 00467916
    MOV EDI,dword ptr [ESP + 0x28]      ; 00467917
    PUSH EDI                            ; 0046791b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0046791c
    PUSH EBP                            ; 00467920
    PUSH EBX                            ; 00467921
    CALL FUN_00467940                   ; 00467922
        ;   XREF to: 00467940 (UNCONDITIONAL_CALL)  ; undefined FUN_00467940()
    ADD ESP,0x18                        ; 00467927
    MOV EAX,EBX                         ; 0046792a
    POP EBP                             ; 0046792c
    POP EDI                             ; 0046792d
    POP ESI                             ; 0046792e
    POP EBX                             ; 0046792f
    RET                                 ; 00467930

