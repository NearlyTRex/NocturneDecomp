; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e2560(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9590
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2560
        ;   Label: FUN_004e2560
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e2561
    TEST byte ptr [ESP + 0xc],0x4       ; 004e2565
    JNZ 0x004e2586                      ; 004e256a
        ;   XREF to: 004e2586 (CONDITIONAL_JUMP)  ; LAB_004e2586
    PUSH 0x1                            ; 004e256c
    PUSH EBX                            ; 004e256e
    CALL FUN_00408930                   ; 004e256f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004e2574
    MOV DL,byte ptr [ESP + 0xc]         ; 004e2577
    MOV EBX,EAX                         ; 004e257b
    TEST DL,0x2                         ; 004e257d
    JNZ 0x004e25a1                      ; 004e2580
        ;   XREF to: 004e25a1 (CONDITIONAL_JUMP)  ; LAB_004e25a1
    MOV EAX,EBX                         ; 004e2582
    POP EBX                             ; 004e2584
    RET                                 ; 004e2585
    PUSH 0x5f9590                       ; 004e2586 | DAT_005f9590
        ;   Label: LAB_004e2586
    PUSH EBX                            ; 004e258b
    CALL FUN_005b7fa7                   ; 004e258c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e2591
    PUSH EAX                            ; 004e2594
    CALL FUN_005b7fce                   ; 004e2595
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004e259a
    MOV EAX,EBX                         ; 004e259d
    POP EBX                             ; 004e259f
    RET                                 ; 004e25a0
    PUSH EAX                            ; 004e25a1
        ;   Label: LAB_004e25a1
    CALL FUN_005b7fdc                   ; 004e25a2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e25a7
    MOV EAX,EBX                         ; 004e25aa
    POP EBX                             ; 004e25ac
    RET                                 ; 004e25ad

