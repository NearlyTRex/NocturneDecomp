; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004994d0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[15]:
;   FUN_00494d20 at 00494d78
;   FUN_00499420 at 00499460
;   FUN_0049a0d0 at 0049a2cb
;   FUN_0049a300 at 0049a44c
;   FUN_0049a480 at 0049a611
;   FUN_004bcba0 at 004bd9e0
;   FUN_004cf5e0 at 004cfc30
;   FUN_004d7250 at 004d75d2
;   FUN_0050ba70 at 0050c8c0
;   FUN_0050d640 at 0050e5ec
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004994d0
        ;   Label: FUN_004994d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004994d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004994d5
    PUSH ECX                            ; 004994d9
    MOV EBX,dword ptr [EDX]             ; 004994da
    PUSH EBX                            ; 004994dc
    MOV EAX,dword ptr [EDX + 0xc]       ; 004994dd
    PUSH EDX                            ; 004994e0
    CALL dword ptr [EAX + 0xc]          ; 004994e1
    ADD ESP,0xc                         ; 004994e4
    POP EBX                             ; 004994e7
    RET                                 ; 004994e8

