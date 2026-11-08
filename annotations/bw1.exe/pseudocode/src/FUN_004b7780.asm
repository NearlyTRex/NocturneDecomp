; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7780(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b7780
        ;   Label: FUN_004b7780
    PUSH EDX                            ; 004b7784
    CALL FUN_00532130                   ; 004b7785
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004b778a
    MOV dword ptr [EAX + 0x3c],0x6000a4 ; 004b778d
    RET                                 ; 004b7794

