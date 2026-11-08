; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0ed0(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004039f0 at 00403a17
;
; Referenced Globals:
;   undefined4 DAT_0060b034
;
; Called Functions:
;   FUN_004e0bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0ed0
        ;   Label: FUN_004e0ed0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e0ed1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e0ed5
    PUSH EDX                            ; 004e0ed8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004e0ed9
    PUSH ECX                            ; 004e0edc
    MOV EBX,dword ptr [EAX]             ; 004e0edd
    PUSH EBX                            ; 004e0edf
    CALL FUN_004e0bb0                   ; 004e0ee0
        ;   XREF to: 004e0bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0bb0()
    ADD ESP,0xc                         ; 004e0ee5
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e0ee8
    MOV ECX,EAX                         ; 004e0eec
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0eee
    SUB EAX,EDX                         ; 004e0ef5
    SHL EAX,0x4                         ; 004e0ef7
    MOV dword ptr [EAX + 0x60b034],ECX  ; 004e0efa | DAT_0060b034
    POP EBX                             ; 004e0f00
    RET                                 ; 004e0f01

