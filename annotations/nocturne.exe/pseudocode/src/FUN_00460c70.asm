; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460c70(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_00507c80 at 00507c9b
;
; Called Functions:
;   FUN_004c6a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460c70
        ;   Label: FUN_00460c70
    MOV EAX,dword ptr [ESP + 0xc]       ; 00460c71
    MOV EDX,dword ptr [EAX + 0x8]       ; 00460c75
    PUSH EDX                            ; 00460c78
    MOV ECX,dword ptr [EAX + 0x4]       ; 00460c79
    PUSH ECX                            ; 00460c7c
    MOV EBX,dword ptr [EAX]             ; 00460c7d
    PUSH EBX                            ; 00460c7f
    CALL FUN_004c6a10                   ; 00460c80
        ;   XREF to: 004c6a10 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6a10()
    ADD ESP,0xc                         ; 00460c85
    POP EBX                             ; 00460c88
    RET                                 ; 00460c89

