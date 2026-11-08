; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00436600(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4630
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436600
        ;   Label: FUN_00436600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00436601
    TEST byte ptr [ESP + 0xc],0x4       ; 00436605
    JNZ 0x00436626                      ; 0043660a
        ;   XREF to: 00436626 (CONDITIONAL_JUMP)  ; LAB_00436626
    PUSH 0x1                            ; 0043660c
    PUSH EBX                            ; 0043660e
    CALL FUN_004ce3d0                   ; 0043660f
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 00436614
    MOV DL,byte ptr [ESP + 0xc]         ; 00436617
    MOV EBX,EAX                         ; 0043661b
    TEST DL,0x2                         ; 0043661d
    JNZ 0x00436641                      ; 00436620
        ;   XREF to: 00436641 (CONDITIONAL_JUMP)  ; LAB_00436641
    MOV EAX,EBX                         ; 00436622
    POP EBX                             ; 00436624
    RET                                 ; 00436625
    PUSH 0x5f4630                       ; 00436626 | DAT_005f4630
        ;   Label: LAB_00436626
    PUSH EBX                            ; 0043662b
    CALL FUN_005b7fa7                   ; 0043662c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00436631
    PUSH EAX                            ; 00436634
    CALL FUN_005b7fce                   ; 00436635
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043663a
    MOV EAX,EBX                         ; 0043663d
    POP EBX                             ; 0043663f
    RET                                 ; 00436640
    PUSH EAX                            ; 00436641
        ;   Label: LAB_00436641
    CALL FUN_005b7fdc                   ; 00436642
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00436647
    MOV EAX,EBX                         ; 0043664a
    POP EBX                             ; 0043664c
    RET                                 ; 0043664d

