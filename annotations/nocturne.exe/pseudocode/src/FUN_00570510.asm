; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570510(int param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_0056b960 at 0056b99a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570510
        ;   Label: FUN_00570510
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570511
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570515
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570519
    CMP EBX,0x2                         ; 0057051d
    JNZ 0x00570530                      ; 00570520
        ;   XREF to: 00570530 (CONDITIONAL_JUMP)  ; LAB_00570530
    MOV dword ptr [EDX],0xc0000000      ; 00570522
    MOV dword ptr [EAX],0x80            ; 00570528
    POP EBX                             ; 0057052e
    RET                                 ; 0057052f
    CMP EBX,0x1                         ; 00570530
        ;   Label: LAB_00570530
    JNZ 0x00570543                      ; 00570533
        ;   XREF to: 00570543 (CONDITIONAL_JUMP)  ; LAB_00570543
    MOV dword ptr [EDX],0x40000000      ; 00570535
    MOV dword ptr [EAX],0x80            ; 0057053b
    POP EBX                             ; 00570541
    RET                                 ; 00570542
    MOV dword ptr [EDX],0x80000000      ; 00570543
        ;   Label: LAB_00570543
    MOV dword ptr [EAX],0x1             ; 00570549
    POP EBX                             ; 0057054f
    RET                                 ; 00570550

