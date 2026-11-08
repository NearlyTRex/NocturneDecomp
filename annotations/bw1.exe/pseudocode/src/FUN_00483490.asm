; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483490(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_0059f3e0 at 0059f4b5
;
; Called Functions:
;   FUN_00509000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483490
        ;   Label: FUN_00483490
    MOV EAX,dword ptr [ESP + 0xc]       ; 00483491
    MOV EDX,dword ptr [EAX + 0x8]       ; 00483495
    PUSH EDX                            ; 00483498
    MOV ECX,dword ptr [EAX + 0x4]       ; 00483499
    PUSH ECX                            ; 0048349c
    MOV EBX,dword ptr [EAX]             ; 0048349d
    PUSH EBX                            ; 0048349f
    CALL FUN_00509000                   ; 004834a0
        ;   XREF to: 00509000 (UNCONDITIONAL_CALL)  ; undefined FUN_00509000()
    ADD ESP,0xc                         ; 004834a5
    POP EBX                             ; 004834a8
    RET                                 ; 004834a9

