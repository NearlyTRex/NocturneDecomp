; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438510(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00424260 at 004243c3
;
; Called Functions:
;   FUN_004359e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00438510
        ;   Label: FUN_00438510
    PUSH EDI                            ; 00438511
    PUSH EBP                            ; 00438512
    MOV EDI,dword ptr [ESP + 0x10]      ; 00438513
    MOV EBP,dword ptr [ESP + 0x14]      ; 00438517
    MOV EDX,dword ptr [EDI]             ; 0043851b
    XOR ESI,ESI                         ; 0043851d
    TEST EDX,EDX                        ; 0043851f
    JLE 0x0043854b                      ; 00438521
        ;   XREF to: 0043854b (CONDITIONAL_JUMP)  ; LAB_0043854b
    PUSH EBX                            ; 00438523
    MOV EBX,EDI                         ; 00438524
    MOV ECX,dword ptr [ESP + 0x20]      ; 00438526
        ;   Label: LAB_00438526
    PUSH ECX                            ; 0043852a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043852b
    PUSH EAX                            ; 0043852f
    PUSH EBP                            ; 00438530
    MOV EDX,dword ptr [EBX + 0x194]     ; 00438531
    PUSH EDX                            ; 00438537
    ADD EBX,0x4                         ; 00438538
    INC ESI                             ; 0043853b
    CALL FUN_004359e0                   ; 0043853c
        ;   XREF to: 004359e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004359e0()
    MOV ECX,dword ptr [EDI]             ; 00438541
    ADD ESP,0x10                        ; 00438543
    CMP ESI,ECX                         ; 00438546
    JL 0x00438526                       ; 00438548
        ;   XREF to: 00438526 (CONDITIONAL_JUMP)  ; LAB_00438526
    POP EBX                             ; 0043854a
    POP EBP                             ; 0043854b
        ;   Label: LAB_0043854b
    POP EDI                             ; 0043854c
    POP ESI                             ; 0043854d
    RET                                 ; 0043854e

