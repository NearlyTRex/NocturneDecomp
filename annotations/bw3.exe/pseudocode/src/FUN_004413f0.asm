; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004413f0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bdfb0 at 004be31f
;
; Called Functions:
;   FUN_00440d70
;   FUN_00440fd0
;   FUN_00441050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004413f0
        ;   Label: FUN_004413f0
    PUSH ESI                            ; 004413f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004413f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004413f6
    MOV ECX,dword ptr [EBX + 0x2c]      ; 004413fa
    TEST ECX,ECX                        ; 004413fd
    JL 0x00441453                       ; 004413ff
        ;   XREF to: 00441453 (CONDITIONAL_JUMP)  ; LAB_00441453
    MOV ESI,dword ptr [EBX + 0x30]      ; 00441401
    LEA EAX,[EBX + 0x4]                 ; 00441404
    TEST ESI,ESI                        ; 00441407
    JGE 0x0044145b                      ; 00441409
        ;   XREF to: 0044145b (CONDITIONAL_JUMP)  ; LAB_0044145b
    PUSH EDX                            ; 0044140b
    PUSH ECX                            ; 0044140c
    PUSH EAX                            ; 0044140d
    CALL FUN_00440fd0                   ; 0044140e
        ;   XREF to: 00440fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00440fd0()
    ADD ESP,0xc                         ; 00441413
    CMP EAX,-0x1                        ; 00441416
        ;   Label: LAB_00441416
    JZ 0x00441469                       ; 00441419
        ;   XREF to: 00441469 (CONDITIONAL_JUMP)  ; LAB_00441469
    TEST EAX,EAX                        ; 0044141b
    JL 0x00441471                       ; 0044141d
        ;   XREF to: 00441471 (CONDITIONAL_JUMP)  ; LAB_00441471
    MOV ECX,dword ptr [EBX + 0x28]      ; 0044141f
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00441422
    TEST ECX,ECX                        ; 00441429
    JL 0x00441446                       ; 0044142b
        ;   XREF to: 00441446 (CONDITIONAL_JUMP)  ; LAB_00441446
    PUSH ECX                            ; 0044142d
    PUSH EAX                            ; 0044142e
    LEA EAX,[EBX + 0x4]                 ; 0044142f
    PUSH EAX                            ; 00441432
    CALL FUN_00440d70                   ; 00441433
        ;   XREF to: 00440d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00440d70()
    ADD ESP,0xc                         ; 00441438
    TEST EAX,EAX                        ; 0044143b
    JZ 0x00441446                       ; 0044143d
        ;   XREF to: 00441446 (CONDITIONAL_JUMP)  ; LAB_00441446
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0044143f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00441446
        ;   Label: LAB_00441446
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00441449
    MOV dword ptr [EBX + 0x28],EAX      ; 00441450
    MOV EAX,0x1                         ; 00441453
        ;   Label: LAB_00441453
    POP ESI                             ; 00441458
    POP EBX                             ; 00441459
    RET                                 ; 0044145a
    PUSH EDX                            ; 0044145b
        ;   Label: LAB_0044145b
    PUSH ESI                            ; 0044145c
    PUSH ECX                            ; 0044145d
    PUSH EAX                            ; 0044145e
    CALL FUN_00441050                   ; 0044145f
        ;   XREF to: 00441050 (UNCONDITIONAL_CALL)  ; undefined FUN_00441050()
    ADD ESP,0x10                        ; 00441464
    JMP 0x00441416                      ; 00441467
        ;   XREF to: 00441416 (UNCONDITIONAL_JUMP)  ; LAB_00441416
    MOV dword ptr [EBX + 0x30],EAX      ; 00441469
        ;   Label: LAB_00441469
    XOR EAX,EAX                         ; 0044146c
    POP ESI                             ; 0044146e
    POP EBX                             ; 0044146f
    RET                                 ; 00441470
    MOV EDX,0xfffffffe                  ; 00441471
        ;   Label: LAB_00441471
    SUB EDX,EAX                         ; 00441476
    MOV EAX,0x2                         ; 00441478
    MOV dword ptr [EBX + 0x30],EDX      ; 0044147d
    POP ESI                             ; 00441480
    POP EBX                             ; 00441481
    RET                                 ; 00441482

