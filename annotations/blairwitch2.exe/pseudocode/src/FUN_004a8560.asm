; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8560(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004a7cd0 at 004a7cf3
;
; Called Functions:
;   FUN_004a7d00
;   FUN_004a8850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8560
        ;   Label: FUN_004a8560
    PUSH ESI                            ; 004a8561
    PUSH EDI                            ; 004a8562
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a8563
    PUSH EBX                            ; 004a8567
    CALL FUN_004a8850                   ; 004a8568
        ;   XREF to: 004a8850 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8850()
    ADD ESP,0x4                         ; 004a856d
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a8570
    PUSH EDX                            ; 004a8574
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a8575
    PUSH ECX                            ; 004a8579
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a857a
    PUSH ESI                            ; 004a857e
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a857f
    PUSH EDI                            ; 004a8583
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a8584
    PUSH EBX                            ; 004a8588
    MOV dword ptr [EBX + 0x4208],EAX    ; 004a8589
    CALL FUN_004a7d00                   ; 004a858f
        ;   XREF to: 004a7d00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a7d00()
    ADD ESP,0x14                        ; 004a8594
    POP EDI                             ; 004a8597
    POP ESI                             ; 004a8598
    POP EBX                             ; 004a8599
    RET                                 ; 004a859a

