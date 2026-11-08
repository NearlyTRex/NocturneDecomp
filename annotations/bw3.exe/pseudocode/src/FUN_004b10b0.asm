; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b10b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004b1150 at 004b119a
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5b0
;
; Called Functions:
;   FUN_004b0cb0
;   FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b10b0
        ;   Label: FUN_004b10b0
    PUSH ESI                            ; 004b10b1
    PUSH EDI                            ; 004b10b2
    PUSH EBP                            ; 004b10b3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b10b4
    PUSH EDX                            ; 004b10b8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004b10b9
    PUSH ECX                            ; 004b10bd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b10be
    PUSH EBX                            ; 004b10c2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004b10c3
    PUSH ESI                            ; 004b10c7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b10c8
    PUSH EDX                            ; 004b10cc
    MOV EDI,dword ptr [0x01c6b5b0]      ; 004b10cd | DAT_01c6b5b0
    MOV EBX,dword ptr [0x01c6b5a8]      ; 004b10d3 | DAT_01c6b5a8
    PUSH EBP                            ; 004b10d9
    ADD EBX,EDI                         ; 004b10da
    CALL FUN_004b2a80                   ; 004b10dc
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    LEA EDX,[EBX + 0x1]                 ; 004b10e1
    SUB EDX,EAX                         ; 004b10e4
    MOV EAX,EDX                         ; 004b10e6
    SAR EDX,0x1f                        ; 004b10e8
    SUB EAX,EDX                         ; 004b10eb
    SAR EAX,0x1                         ; 004b10ed
    ADD ESP,0x8                         ; 004b10ef
    PUSH EAX                            ; 004b10f2
    PUSH EBP                            ; 004b10f3
    CALL FUN_004b0cb0                   ; 004b10f4
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004b10f9
    POP EBP                             ; 004b10fc
    POP EDI                             ; 004b10fd
    POP ESI                             ; 004b10fe
    POP EBX                             ; 004b10ff
    RET                                 ; 004b1100

