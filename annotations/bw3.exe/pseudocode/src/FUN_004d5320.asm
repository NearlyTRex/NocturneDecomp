; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5320(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e18c0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5320
        ;   Label: FUN_004d5320
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d5321
    TEST byte ptr [ESP + 0xc],0x4       ; 004d5325
    JNZ 0x004d5346                      ; 004d532a
        ;   XREF to: 004d5346 (CONDITIONAL_JUMP)  ; LAB_004d5346
    PUSH 0x1                            ; 004d532c
    PUSH EBX                            ; 004d532e
    CALL FUN_0057aed0                   ; 004d532f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 004d5334
    MOV DL,byte ptr [ESP + 0xc]         ; 004d5337
    MOV EBX,EAX                         ; 004d533b
    TEST DL,0x2                         ; 004d533d
    JNZ 0x004d5361                      ; 004d5340
        ;   XREF to: 004d5361 (CONDITIONAL_JUMP)  ; LAB_004d5361
    MOV EAX,EBX                         ; 004d5342
    POP EBX                             ; 004d5344
    RET                                 ; 004d5345
    PUSH 0x5e18c0                       ; 004d5346 | DAT_005e18c0
        ;   Label: LAB_004d5346
    PUSH EBX                            ; 004d534b
    CALL FUN_005a308f                   ; 004d534c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d5351
    PUSH EAX                            ; 004d5354
    CALL FUN_005a30b6                   ; 004d5355
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d535a
    MOV EAX,EBX                         ; 004d535d
    POP EBX                             ; 004d535f
    RET                                 ; 004d5360
    PUSH EAX                            ; 004d5361
        ;   Label: LAB_004d5361
    CALL FUN_005a30c4                   ; 004d5362
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d5367
    MOV EAX,EBX                         ; 004d536a
    POP EBX                             ; 004d536c
    RET                                 ; 004d536d

