; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00490b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   FUN_00493760 at 00493ac9
;
; Called Functions:
;   FUN_00490b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490b20
        ;   Label: FUN_00490b20
    PUSH ESI                            ; 00490b21
    PUSH EDI                            ; 00490b22
    PUSH EBP                            ; 00490b23
    SUB ESP,0x4                         ; 00490b24
    LEA EAX,[ESP + 0x30]                ; 00490b27
    MOV dword ptr [ESP],EAX             ; 00490b2b
    MOV EAX,ESP                         ; 00490b2e
    PUSH EAX                            ; 00490b30
    MOV EDX,dword ptr [ESP + 0x30]      ; 00490b31
    PUSH EDX                            ; 00490b35
    MOV ECX,dword ptr [ESP + 0x30]      ; 00490b36
    PUSH ECX                            ; 00490b3a
    MOV EBX,dword ptr [ESP + 0x30]      ; 00490b3b
    PUSH EBX                            ; 00490b3f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00490b40
    PUSH ESI                            ; 00490b44
    MOV EDI,dword ptr [ESP + 0x30]      ; 00490b45
    PUSH EDI                            ; 00490b49
    MOV EBP,dword ptr [ESP + 0x30]      ; 00490b4a
    PUSH EBP                            ; 00490b4e
    CALL FUN_00490b70                   ; 00490b4f
        ;   XREF to: 00490b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00490b70()
    ADD ESP,0x1c                        ; 00490b54
    XOR EDX,EDX                         ; 00490b57
    MOV dword ptr [ESP],EDX             ; 00490b59
    ADD ESP,0x4                         ; 00490b5c
    POP EBP                             ; 00490b5f
    POP EDI                             ; 00490b60
    POP ESI                             ; 00490b61
    POP EBX                             ; 00490b62
    RET                                 ; 00490b63

