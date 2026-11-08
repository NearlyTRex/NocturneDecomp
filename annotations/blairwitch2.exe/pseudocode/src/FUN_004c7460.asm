; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c7460(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004c9730 at 004c9777
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00510e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7460
        ;   Label: FUN_004c7460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c7461
    PUSH 0xf                            ; 004c7465
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c7467
    PUSH 0x0                            ; 004c746b
    MOV dword ptr [EBX + 0x40],EAX      ; 004c746d
    CALL FUN_0040cfc0                   ; 004c7470
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 004c7475
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c7478
    PUSH EDX                            ; 004c747c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c747d
    PUSH ECX                            ; 004c7481
    PUSH EBX                            ; 004c7482
    MOV dword ptr [EBX + 0x44],EAX      ; 004c7483
    CALL FUN_00510e00                   ; 004c7486
        ;   XREF to: 00510e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00510e00()
    ADD ESP,0xc                         ; 004c748b
    POP EBX                             ; 004c748e
    RET                                 ; 004c748f

