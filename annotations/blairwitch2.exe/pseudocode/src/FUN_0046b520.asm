; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b520(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0052d0e0 at 0052d0fb
;
; Called Functions:
;   FUN_004e2600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b520
        ;   Label: FUN_0046b520
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046b521
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046b525
    PUSH EDX                            ; 0046b528
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046b529
    PUSH ECX                            ; 0046b52c
    MOV EBX,dword ptr [EAX]             ; 0046b52d
    PUSH EBX                            ; 0046b52f
    CALL FUN_004e2600                   ; 0046b530
        ;   XREF to: 004e2600 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2600()
    ADD ESP,0xc                         ; 0046b535
    POP EBX                             ; 0046b538
    RET                                 ; 0046b539

