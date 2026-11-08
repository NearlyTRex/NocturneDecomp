; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ea510(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH 0x5e45ea                       ; 004ea510
        ;   Label: FUN_004ea510
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ea515
    PUSH EDX                            ; 004ea519
    CALL FUN_0040c550                   ; 004ea51a
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004ea51f
    TEST EAX,EAX                        ; 004ea522
    JZ 0x004ea52b                       ; 004ea524
        ;   XREF to: 004ea52b (CONDITIONAL_JUMP)  ; LAB_004ea52b
    MOV EAX,0x2                         ; 004ea526
    RET                                 ; 004ea52b
        ;   Label: LAB_004ea52b

