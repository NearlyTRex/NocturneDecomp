; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d0d30(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004d0860 at 004d08f8
;
; Called Functions:
;   FUN_004d0960
;   FUN_004d0ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0d30
        ;   Label: FUN_004d0d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0d31
    PUSH EDX                            ; 004d0d35
    CALL FUN_004d0960                   ; 004d0d36
        ;   XREF to: 004d0960 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0960()
    ADD ESP,0x4                         ; 004d0d3b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d0d3e
    PUSH ECX                            ; 004d0d42
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d0d43
    PUSH EBX                            ; 004d0d47
    CALL FUN_004d0ee0                   ; 004d0d48
        ;   XREF to: 004d0ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0ee0()
    ADD ESP,0x8                         ; 004d0d4d
    POP EBX                             ; 004d0d50
    LEA EAX,[EAX]                       ; 004d0d51
    LEA EDX,[EDX]                       ; 004d0d57
    LEA EAX,[EAX]                       ; 004d0d5d
    RET                                 ; 004d0d60

