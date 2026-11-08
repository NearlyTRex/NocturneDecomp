; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0ea0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[3]:
;   FUN_00469b40 at 00469c6e
;   FUN_0047cfa0 at 0047d05b
;   FUN_004b0f30 at 004b0f82
;
; Called Functions:
;   FUN_004b0cb0
;   FUN_004b2a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0ea0
        ;   Label: FUN_004b0ea0
    PUSH ESI                            ; 004b0ea1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b0ea2
    PUSH EAX                            ; 004b0ea6
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0ea7
    PUSH EDX                            ; 004b0eab
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b0eac
    PUSH ECX                            ; 004b0eb0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004b0eb1
    PUSH EBX                            ; 004b0eb5
    PUSH EAX                            ; 004b0eb6
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b0eb7
    PUSH ESI                            ; 004b0ebb
    CALL FUN_004b2a80                   ; 004b0ebc
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    MOV EDX,EAX                         ; 004b0ec1
    SAR EDX,0x1f                        ; 004b0ec3
    SUB EAX,EDX                         ; 004b0ec6
    SAR EAX,0x1                         ; 004b0ec8
    ADD ESP,0x8                         ; 004b0eca
    MOV EDX,dword ptr [ESP + 0x20]      ; 004b0ecd
    SUB EDX,EAX                         ; 004b0ed1
    PUSH EDX                            ; 004b0ed3
    PUSH ESI                            ; 004b0ed4
    CALL FUN_004b0cb0                   ; 004b0ed5
        ;   XREF to: 004b0cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0cb0()
    ADD ESP,0x18                        ; 004b0eda
    POP ESI                             ; 004b0edd
    POP EBX                             ; 004b0ede
    RET                                 ; 004b0edf

