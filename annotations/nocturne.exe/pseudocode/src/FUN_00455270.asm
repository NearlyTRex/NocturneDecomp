; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00455270(int param_1)
;
;
; XREF[2]:
;   FUN_004b5110 at 004b523a
;   FUN_004b5270 at 004b52b1
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   FUN_0047ab70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00455270
        ;   Label: FUN_00455270
    ADD EAX,0x2e0                       ; 00455274
    PUSH EAX                            ; 00455279
    MOV EDX,dword ptr [0x005b7650]      ; 0045527a | DAT_005b7650
    PUSH EDX                            ; 00455280
    CALL FUN_0047ab70                   ; 00455281
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab70()
    ADD ESP,0x8                         ; 00455286
    RET                                 ; 00455289

