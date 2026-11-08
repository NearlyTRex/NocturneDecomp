; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00419a20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00417400
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419a20
        ;   Label: FUN_00419a20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00419a21
    PUSH EDX                            ; 00419a25
    CALL FUN_00417400                   ; 00419a26
        ;   XREF to: 00417400 (UNCONDITIONAL_CALL)  ; undefined FUN_00417400()
    ADD ESP,0x4                         ; 00419a2b
    PUSH 0x5b719a                       ; 00419a2e
    MOV EBX,EAX                         ; 00419a33
    ADD EAX,0x158                       ; 00419a35
    PUSH EAX                            ; 00419a3a
    MOV dword ptr [EAX + -0x4],0x5dc574 ; 00419a3b
    CALL FUN_0054eae0                   ; 00419a42
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00419a47
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 00419a51
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00419a5b
    ADD ESP,0x8                         ; 00419a65
    MOV dword ptr [EBX + 0xd074],0x3    ; 00419a68
    MOV EAX,EBX                         ; 00419a72
    MOV EDX,dword ptr [EBX + 0x2538]    ; 00419a74
    MOV dword ptr [EBX + 0xd058],EDX    ; 00419a7a
    POP EBX                             ; 00419a80
    RET                                 ; 00419a81

