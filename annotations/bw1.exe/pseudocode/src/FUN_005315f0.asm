; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005315f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00531280 at 0053128c
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005315f0
        ;   Label: FUN_005315f0
    PUSH 0xf                            ; 005315f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005315f7
    PUSH EDX                            ; 005315fb
    CALL FUN_005c1066                   ; 005315fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 00531601
    RET                                 ; 00531604

