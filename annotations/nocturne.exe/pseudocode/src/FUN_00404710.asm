; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00404710(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c00c74
;
; Called Functions:
;   FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404710
        ;   Label: FUN_00404710
    MOV EAX,dword ptr [ESP + 0x8]       ; 00404711
    MOV EDX,dword ptr [EAX + 0x10]      ; 00404715
    PUSH EDX                            ; 00404718
    MOV ECX,dword ptr [EAX + 0xc]       ; 00404719
    PUSH ECX                            ; 0040471c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040471d
    PUSH EBX                            ; 00404720
    CALL FUN_004c6cc0                   ; 00404721
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6cc0()
    ADD ESP,0xc                         ; 00404726
    MOV [0x01c00c74],EAX                ; 00404729 | DAT_01c00c74
    POP EBX                             ; 0040472e
    RET                                 ; 0040472f

