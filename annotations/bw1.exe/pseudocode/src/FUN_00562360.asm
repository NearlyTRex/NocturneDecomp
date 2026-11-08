; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00562360(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006055e0
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562360
        ;   Label: FUN_00562360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562361
    TEST byte ptr [ESP + 0xc],0x4       ; 00562365
    JNZ 0x00562386                      ; 0056236a
        ;   XREF to: 00562386 (CONDITIONAL_JUMP)  ; LAB_00562386
    PUSH 0x1                            ; 0056236c
    PUSH EBX                            ; 0056236e
    CALL FUN_005ad5d0                   ; 0056236f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 00562374
    MOV DL,byte ptr [ESP + 0xc]         ; 00562377
    MOV EBX,EAX                         ; 0056237b
    TEST DL,0x2                         ; 0056237d
    JNZ 0x005623a1                      ; 00562380
        ;   XREF to: 005623a1 (CONDITIONAL_JUMP)  ; LAB_005623a1
    MOV EAX,EBX                         ; 00562382
    POP EBX                             ; 00562384
    RET                                 ; 00562385
    PUSH 0x6055e0                       ; 00562386 | DAT_006055e0
        ;   Label: LAB_00562386
    PUSH EBX                            ; 0056238b
    CALL FUN_005c030f                   ; 0056238c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00562391
    PUSH EAX                            ; 00562394
    CALL FUN_005c0336                   ; 00562395
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0056239a
    MOV EAX,EBX                         ; 0056239d
    POP EBX                             ; 0056239f
    RET                                 ; 005623a0
    PUSH EAX                            ; 005623a1
        ;   Label: LAB_005623a1
    CALL FUN_005c0344                   ; 005623a2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005623a7
    MOV EAX,EBX                         ; 005623aa
    POP EBX                             ; 005623ac
    RET                                 ; 005623ad

