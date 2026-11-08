; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ead10(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0058a200
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ead10
        ;   Label: FUN_004ead10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ead14
    PUSH EDX                            ; 004ead18
    PUSH EAX                            ; 004ead19
    MOV dword ptr [EAX + 0x6ec],0x0     ; 004ead1a
    CALL FUN_0058a200                   ; 004ead24
        ;   XREF to: 0058a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0058a200()
    ADD ESP,0x8                         ; 004ead29
    RET                                 ; 004ead2c

