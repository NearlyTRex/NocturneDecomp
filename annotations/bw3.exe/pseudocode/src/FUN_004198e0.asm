; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004198e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00417400
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004198e0
        ;   Label: FUN_004198e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004198e1
    PUSH EDX                            ; 004198e5
    CALL FUN_00417400                   ; 004198e6
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; undefined FUN_00417400()
    ADD ESP,0x4                         ; 004198eb
    PUSH 0x5b7182                       ; 004198ee
    MOV EBX,EAX                         ; 004198f3
    ADD EAX,0x158                       ; 004198f5
    PUSH EAX                            ; 004198fa
    MOV dword ptr [EAX + -0x4],0x5dc2b4 ; 004198fb
    CALL FUN_0054eae0                   ; 00419902
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 00419907
    MOV dword ptr [EBX + 0xce5c],0x41000000 ; 00419911
    MOV dword ptr [EBX + 0xce60],0x40a00000 ; 0041991b
    ADD ESP,0x8                         ; 00419925
    MOV dword ptr [EBX + 0xd074],0x1    ; 00419928
    MOV EAX,EBX                         ; 00419932
    MOV EDX,dword ptr [EBX + 0x2538]    ; 00419934
    MOV dword ptr [EBX + 0xd058],EDX    ; 0041993a
    POP EBX                             ; 00419940
    RET                                 ; 00419941

