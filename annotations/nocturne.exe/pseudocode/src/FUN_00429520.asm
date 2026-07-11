; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00429520(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004ff2c0 at 00501c2b
;
; Called Functions:
;   FUN_004e1010
;   FUN_004e1890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429520
        ;   Label: FUN_00429520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00429521
    PUSH 0x0                            ; 00429525
    MOV EDX,dword ptr [ESP + 0x10]      ; 00429527
    PUSH EDX                            ; 0042952b
    LEA EAX,[EBX + 0x150]               ; 0042952c
    PUSH EAX                            ; 00429532
    MOV dword ptr [EBX + 0x25c4],0x0    ; 00429533
    CALL FUN_004e1890                   ; 0042953d
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1890()
    ADD ESP,0x4                         ; 00429542
    PUSH EAX                            ; 00429545
    CALL FUN_004e1010                   ; 00429546
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1010()
    ADD ESP,0xc                         ; 0042954b
    MOV dword ptr [EBX + 0x25c0],EAX    ; 0042954e
    TEST EAX,EAX                        ; 00429554
    SETGE AL                            ; 00429556
    AND EAX,0xff                        ; 00429559
    POP EBX                             ; 0042955e
    RET                                 ; 0042955f

