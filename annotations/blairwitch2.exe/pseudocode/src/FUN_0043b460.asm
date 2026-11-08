; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043b460(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00449d30 at 00449d4f
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f4df4 = 0043b460
;   undefined4 DAT_005f4e10
;
; Called Functions:
;   FUN_00422220
;   FUN_0043b730
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b460
        ;   Label: FUN_0043b460
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b461
    TEST byte ptr [ESP + 0xc],0x4       ; 0043b465
    JNZ 0x0043b496                      ; 0043b46a
        ;   XREF to: 0043b496 (CONDITIONAL_JUMP)  ; LAB_0043b496
    PUSH EBX                            ; 0043b46c
    MOV dword ptr [EBX + 0x3c],0x5f4df4 ; 0043b46d | PTR_FUN_005f4df4
    CALL FUN_0043b730                   ; 0043b474
        ;   XREF to: 0043b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b730()
    ADD ESP,0x4                         ; 0043b479
    PUSH 0x1                            ; 0043b47c
    PUSH EBX                            ; 0043b47e
    CALL FUN_00422220                   ; 0043b47f
        ;   XREF to: 00422220 (UNCONDITIONAL_CALL)  ; undefined FUN_00422220()
    ADD ESP,0x8                         ; 0043b484
    MOV DL,byte ptr [ESP + 0xc]         ; 0043b487
    MOV EBX,EAX                         ; 0043b48b
    TEST DL,0x2                         ; 0043b48d
    JNZ 0x0043b4b1                      ; 0043b490
        ;   XREF to: 0043b4b1 (CONDITIONAL_JUMP)  ; LAB_0043b4b1
    MOV EAX,EBX                         ; 0043b492
    POP EBX                             ; 0043b494
    RET                                 ; 0043b495
    PUSH 0x5f4e10                       ; 0043b496 | DAT_005f4e10
        ;   Label: LAB_0043b496
    PUSH EBX                            ; 0043b49b
    CALL FUN_005b7fa7                   ; 0043b49c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0043b4a1
    PUSH EAX                            ; 0043b4a4
    CALL FUN_005b7fce                   ; 0043b4a5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043b4aa
    MOV EAX,EBX                         ; 0043b4ad
    POP EBX                             ; 0043b4af
    RET                                 ; 0043b4b0
    PUSH EAX                            ; 0043b4b1
        ;   Label: LAB_0043b4b1
    CALL FUN_005b7fdc                   ; 0043b4b2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043b4b7
    MOV EAX,EBX                         ; 0043b4ba
    POP EBX                             ; 0043b4bc
    RET                                 ; 0043b4bd

