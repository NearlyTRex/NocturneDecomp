; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00468f80 at 00468f92
;
; Called Functions:
;   FUN_00468b60
;   FUN_00468c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468f20
        ;   Label: FUN_00468f20
    PUSH ESI                            ; 00468f21
    PUSH EDI                            ; 00468f22
    PUSH EBP                            ; 00468f23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00468f24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00468f28
    MOV ESI,dword ptr [ESP + 0x20]      ; 00468f2c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00468f30
    PUSH ESI                            ; 00468f34
    PUSH EBP                            ; 00468f35
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468f36
    PUSH EDX                            ; 00468f3a
    PUSH EBX                            ; 00468f3b
    CALL FUN_00468b60                   ; 00468f3c
        ;   XREF to: 00468b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00468b60()
    ADD ESP,0x10                        ; 00468f41
    PUSH ESI                            ; 00468f44
    PUSH EDI                            ; 00468f45
    MOV ECX,dword ptr [ESP + 0x20]      ; 00468f46
    PUSH ECX                            ; 00468f4a
    PUSH EBX                            ; 00468f4b
    CALL FUN_00468b60                   ; 00468f4c
        ;   XREF to: 00468b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00468b60()
    ADD ESP,0x10                        ; 00468f51
    PUSH EDI                            ; 00468f54
    PUSH EBP                            ; 00468f55
    MOV EAX,dword ptr [ESP + 0x20]      ; 00468f56
    PUSH EAX                            ; 00468f5a
    PUSH EBX                            ; 00468f5b
    CALL FUN_00468c80                   ; 00468f5c
        ;   XREF to: 00468c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00468c80()
    ADD ESP,0x10                        ; 00468f61
    PUSH EDI                            ; 00468f64
    PUSH EBP                            ; 00468f65
    PUSH ESI                            ; 00468f66
    PUSH EBX                            ; 00468f67
    CALL FUN_00468c80                   ; 00468f68
        ;   XREF to: 00468c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00468c80()
    ADD ESP,0x10                        ; 00468f6d
    POP EBP                             ; 00468f70
    POP EDI                             ; 00468f71
    POP ESI                             ; 00468f72
    POP EBX                             ; 00468f73
    RET                                 ; 00468f74

