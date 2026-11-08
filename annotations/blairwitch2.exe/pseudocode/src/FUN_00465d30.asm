; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00521af0 at 00521b2e
;
; Called Functions:
;   FUN_00465d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465d30
        ;   Label: FUN_00465d30
    PUSH ESI                            ; 00465d31
    PUSH EDI                            ; 00465d32
    PUSH EBP                            ; 00465d33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00465d34
    MOV EDX,dword ptr [ESP + 0x28]      ; 00465d38
    PUSH EDX                            ; 00465d3c
    MOV ECX,dword ptr [ESP + 0x28]      ; 00465d3d
    PUSH ECX                            ; 00465d41
    MOV ESI,dword ptr [ESP + 0x28]      ; 00465d42
    PUSH ESI                            ; 00465d46
    MOV EDI,dword ptr [ESP + 0x28]      ; 00465d47
    PUSH EDI                            ; 00465d4b
    MOV EBP,dword ptr [ESP + 0x28]      ; 00465d4c
    PUSH EBP                            ; 00465d50
    PUSH EBX                            ; 00465d51
    CALL FUN_00465d70                   ; 00465d52
        ;   XREF to: 00465d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00465d70()
    ADD ESP,0x18                        ; 00465d57
    MOV EAX,EBX                         ; 00465d5a
    POP EBP                             ; 00465d5c
    POP EDI                             ; 00465d5d
    POP ESI                             ; 00465d5e
    POP EBX                             ; 00465d5f
    RET                                 ; 00465d60

