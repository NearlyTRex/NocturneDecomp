; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00410730(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbd30
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410730
        ;   Label: FUN_00410730
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410731
    TEST byte ptr [ESP + 0xc],0x4       ; 00410735
    JNZ 0x00410756                      ; 0041073a
        ;   XREF to: 00410756 (CONDITIONAL_JUMP)  ; LAB_00410756
    PUSH 0x1                            ; 0041073c
    PUSH EBX                            ; 0041073e
    CALL FUN_005ad5d0                   ; 0041073f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00410744
    MOV DL,byte ptr [ESP + 0xc]         ; 00410747
    MOV EBX,EAX                         ; 0041074b
    TEST DL,0x2                         ; 0041074d
    JNZ 0x00410771                      ; 00410750
        ;   XREF to: 00410771 (CONDITIONAL_JUMP)  ; LAB_00410771
    MOV EAX,EBX                         ; 00410752
    POP EBX                             ; 00410754
    RET                                 ; 00410755
    PUSH 0x5fbd30                       ; 00410756 | DAT_005fbd30
        ;   Label: LAB_00410756
    PUSH EBX                            ; 0041075b
    CALL FUN_005c030f                   ; 0041075c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00410761
    PUSH EAX                            ; 00410764
    CALL FUN_005c0336                   ; 00410765
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0041076a
    MOV EAX,EBX                         ; 0041076d
    POP EBX                             ; 0041076f
    RET                                 ; 00410770
    PUSH EAX                            ; 00410771
        ;   Label: LAB_00410771
    CALL FUN_005c0344                   ; 00410772
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00410777
    MOV EAX,EBX                         ; 0041077a
    POP EBX                             ; 0041077c
    RET                                 ; 0041077d

