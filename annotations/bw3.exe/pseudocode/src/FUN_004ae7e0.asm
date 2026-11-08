; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ae7e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae7e0
        ;   Label: FUN_004ae7e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ae7e1
    PUSH EDX                            ; 004ae7e5
    CALL FUN_0057ad70                   ; 004ae7e6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 004ae7eb
    PUSH 0x5c1ca0                       ; 004ae7ee
    MOV EBX,EAX                         ; 004ae7f3
    ADD EAX,0x158                       ; 004ae7f5
    PUSH EAX                            ; 004ae7fa
    MOV dword ptr [EAX + -0x4],0x5e0564 ; 004ae7fb
    CALL FUN_004625f0                   ; 004ae802
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004ae807
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004ae811
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004ae81b
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004ae825
    ADD ESP,0x8                         ; 004ae82f
    MOV dword ptr [EBX + 0x574],0x0     ; 004ae832
    MOV EAX,EBX                         ; 004ae83c
    MOV dword ptr [EBX + 0x56c],0xb     ; 004ae83e
    POP EBX                             ; 004ae848
    RET                                 ; 004ae849

