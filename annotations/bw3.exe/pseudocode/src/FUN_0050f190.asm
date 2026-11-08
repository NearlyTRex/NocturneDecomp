; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0050f190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_0050f200
;   FUN_0050f910
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f190
        ;   Label: FUN_0050f190
    PUSH ESI                            ; 0050f191
    PUSH EDI                            ; 0050f192
    PUSH EBP                            ; 0050f193
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f194
    PUSH EBX                            ; 0050f198
    CALL FUN_0050f200                   ; 0050f199
        ;   XREF to: 0050f200 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f200()
    ADD ESP,0x4                         ; 0050f19e
    PUSH 0x14                           ; 0050f1a1
    PUSH 0x0                            ; 0050f1a3
    PUSH EBX                            ; 0050f1a5
    CALL FUN_005a28f0                   ; 0050f1a6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0050f1ab
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050f1ae
    PUSH EDX                            ; 0050f1b2
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f1b3
    PUSH ECX                            ; 0050f1b7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0050f1b8
    PUSH ESI                            ; 0050f1bc
    MOV EDI,dword ptr [ESP + 0x28]      ; 0050f1bd
    PUSH EDI                            ; 0050f1c1
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f1c2
    PUSH EBP                            ; 0050f1c6
    PUSH EBX                            ; 0050f1c7
    CALL FUN_0050f910                   ; 0050f1c8
        ;   XREF to: 0050f910 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f910()
    ADD ESP,0x18                        ; 0050f1cd
    MOV EAX,EBX                         ; 0050f1d0
    POP EBP                             ; 0050f1d2
    POP EDI                             ; 0050f1d3
    POP ESI                             ; 0050f1d4
    POP EBX                             ; 0050f1d5
    RET                                 ; 0050f1d6

