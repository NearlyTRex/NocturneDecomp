; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005671f8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00570a70 at 00570ab4
;   crt_unknown.c_FUN_005634b0 at 0056358c
;
; Called Functions:
;   FUN_0056e174
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005671f8
        ;   Label: FUN_005671f8
    PUSH EDX                            ; 005671fc
    CALL FUN_0056e174                   ; 005671fd
        ;   XREF to: 0056e174 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e174()
    ADD ESP,0x4                         ; 00567202
    LEA EAX,[EAX]                       ; 00567205

