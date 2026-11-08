; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040e450(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0045d2c0 at 0045d678
;   FUN_004dc8c0 at 004dc9fa
;
; Referenced Globals:
;   undefined4 DAT_005cb23d
;
; Called Functions:
;   FUN_004db880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e450
        ;   Label: FUN_0040e450
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e451
    CMP dword ptr [EBX + 0x470],0x0     ; 0040e455
    JG 0x0040e462                       ; 0040e45c
        ;   XREF to: 0040e462 (CONDITIONAL_JUMP)  ; LAB_0040e462
    XOR EAX,EAX                         ; 0040e45e
        ;   Label: LAB_0040e45e
    POP EBX                             ; 0040e460
    RET                                 ; 0040e461
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e462
        ;   Label: LAB_0040e462
    PUSH 0x5cb23d                       ; 0040e466 | DAT_005cb23d
    ADD EAX,0x2437c                     ; 0040e46b
    PUSH EAX                            ; 0040e470
    CALL FUN_004db880                   ; 0040e471
        ;   XREF to: 004db880 (UNCONDITIONAL_CALL)  ; undefined FUN_004db880()
    ADD ESP,0x8                         ; 0040e476
    TEST EAX,EAX                        ; 0040e479
    JZ 0x0040e45e                       ; 0040e47b
        ;   XREF to: 0040e45e (CONDITIONAL_JUMP)  ; LAB_0040e45e
    MOV EAX,0x1                         ; 0040e47d
    SUB dword ptr [EBX + 0x470],EAX     ; 0040e482
    POP EBX                             ; 0040e488
    RET                                 ; 0040e489

