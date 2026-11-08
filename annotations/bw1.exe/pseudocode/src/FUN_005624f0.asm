; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005624f0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00605720
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005624f0
        ;   Label: FUN_005624f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005624f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005624f5
    JNZ 0x00562516                      ; 005624fa
        ;   XREF to: 00562516 (CONDITIONAL_JUMP)  ; LAB_00562516
    PUSH 0x1                            ; 005624fc
    PUSH EBX                            ; 005624fe
    CALL FUN_005ad5d0                   ; 005624ff
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00562504
    MOV DL,byte ptr [ESP + 0xc]         ; 00562507
    MOV EBX,EAX                         ; 0056250b
    TEST DL,0x2                         ; 0056250d
    JNZ 0x00562531                      ; 00562510
        ;   XREF to: 00562531 (CONDITIONAL_JUMP)  ; LAB_00562531
    MOV EAX,EBX                         ; 00562512
    POP EBX                             ; 00562514
    RET                                 ; 00562515
    PUSH 0x605720                       ; 00562516 | DAT_00605720
        ;   Label: LAB_00562516
    PUSH EBX                            ; 0056251b
    CALL FUN_005c030f                   ; 0056251c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00562521
    PUSH EAX                            ; 00562524
    CALL FUN_005c0336                   ; 00562525
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0056252a
    MOV EAX,EBX                         ; 0056252d
    POP EBX                             ; 0056252f
    RET                                 ; 00562530
    PUSH EAX                            ; 00562531
        ;   Label: LAB_00562531
    CALL FUN_005c0344                   ; 00562532
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00562537
    MOV EAX,EBX                         ; 0056253a
    POP EBX                             ; 0056253c
    RET                                 ; 0056253d

