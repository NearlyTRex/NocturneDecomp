; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046cb70(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_005723d0 at 005724a5
;
; Called Functions:
;   FUN_004e6a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cb70
        ;   Label: FUN_0046cb70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046cb71
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046cb75
    PUSH EDX                            ; 0046cb78
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046cb79
    PUSH ECX                            ; 0046cb7c
    MOV EBX,dword ptr [EAX]             ; 0046cb7d
    PUSH EBX                            ; 0046cb7f
    CALL FUN_004e6a40                   ; 0046cb80
        ;   XREF to: 004e6a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6a40()
    ADD ESP,0xc                         ; 0046cb85
    POP EBX                             ; 0046cb88
    RET                                 ; 0046cb89

