; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2070(int param_1)
;
;
; Called Functions:
;   FUN_00518280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2070
        ;   Label: FUN_004f2070
    PUSH EDX                            ; 004f2074
    CALL FUN_00518280                   ; 004f2075
        ;   XREF to: 00518280 (UNCONDITIONAL_CALL)  ; undefined FUN_00518280()
    ADD ESP,0x4                         ; 004f207a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f207d
    MOV dword ptr [EAX + 0x884],0x0     ; 004f2081
    RET                                 ; 004f208b

