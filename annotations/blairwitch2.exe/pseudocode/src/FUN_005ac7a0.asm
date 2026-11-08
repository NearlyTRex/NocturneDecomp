; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ac7a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0041bd30
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac7a0
        ;   Label: FUN_005ac7a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ac7a1
    PUSH EDX                            ; 005ac7a5
    CALL FUN_0041bd30                   ; 005ac7a6
        ;   XREF to: 0041bd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bd30()
    ADD ESP,0x4                         ; 005ac7ab
    MOV EBX,EAX                         ; 005ac7ae
    ADD EAX,0x2b4                       ; 005ac7b0
    PUSH 0x5f0e98                       ; 005ac7b5
    MOV dword ptr [EAX + -0x4],0x600e34 ; 005ac7ba
    PUSH EAX                            ; 005ac7c1
    MOV dword ptr [EAX + 0xfffffe48],0x1 ; 005ac7c2
    CALL FUN_0044fd70                   ; 005ac7cc
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 005ac7d1
    MOV EAX,EBX                         ; 005ac7d4
    MOV dword ptr [EBX + 0x754],0x0     ; 005ac7d6
    POP EBX                             ; 005ac7e0
    RET                                 ; 005ac7e1

