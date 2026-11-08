; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00419980(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00417400
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419980
        ;   Label: FUN_00419980
    MOV EDX,dword ptr [ESP + 0x8]       ; 00419981
    PUSH EDX                            ; 00419985
    CALL FUN_00417400                   ; 00419986
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; undefined FUN_00417400()
    ADD ESP,0x4                         ; 0041998b
    PUSH 0x5b718e                       ; 0041998e
    MOV EBX,EAX                         ; 00419993
    ADD EAX,0x158                       ; 00419995
    PUSH EAX                            ; 0041999a
    MOV dword ptr [EAX + -0x4],0x5dc414 ; 0041999b
    CALL FUN_0054eae0                   ; 004199a2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 004199a7
    MOV dword ptr [EBX + 0xce5c],0x41400000 ; 004199b1
    MOV dword ptr [EBX + 0xce60],0x41000000 ; 004199bb
    ADD ESP,0x8                         ; 004199c5
    MOV dword ptr [EBX + 0xd074],0x2    ; 004199c8
    MOV EAX,EBX                         ; 004199d2
    MOV EDX,dword ptr [EBX + 0x2538]    ; 004199d4
    MOV dword ptr [EBX + 0xd058],EDX    ; 004199da
    POP EBX                             ; 004199e0
    RET                                 ; 004199e1

