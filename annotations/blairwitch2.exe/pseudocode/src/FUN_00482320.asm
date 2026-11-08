; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482320(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00482250 at 004822cd
;   FUN_004b6170 at 004b6ca7
;
; Called Functions:
;   FUN_00482a00
;   FUN_004837f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482320
        ;   Label: FUN_00482320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00482321
    MOV EDX,dword ptr [ESP + 0x14]      ; 00482325
    PUSH EDX                            ; 00482329
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048232a
    PUSH ECX                            ; 0048232e
    PUSH EBX                            ; 0048232f
    CALL FUN_00482a00                   ; 00482330
        ;   XREF to: 00482a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00482a00()
    ADD ESP,0xc                         ; 00482335
    MOV EAX,dword ptr [ESP + 0x10]      ; 00482338
    PUSH EBX                            ; 0048233c
    MOV dword ptr [EBX + 0x194],EAX     ; 0048233d
    CALL FUN_004837f0                   ; 00482343
        ;   XREF to: 004837f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837f0()
    ADD ESP,0x4                         ; 00482348
    POP EBX                             ; 0048234b
    RET                                 ; 0048234c

