; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f260(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2820
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f260
        ;   Label: FUN_0040f260
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f261
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f265
    JNZ 0x0040f286                      ; 0040f26a
        ;   XREF to: 0040f286 (CONDITIONAL_JUMP)  ; LAB_0040f286
    PUSH 0x1                            ; 0040f26c
    PUSH EBX                            ; 0040f26e
    CALL FUN_00408930                   ; 0040f26f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0040f274
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f277
    MOV EBX,EAX                         ; 0040f27b
    TEST DL,0x2                         ; 0040f27d
    JNZ 0x0040f2a1                      ; 0040f280
        ;   XREF to: 0040f2a1 (CONDITIONAL_JUMP)  ; LAB_0040f2a1
    MOV EAX,EBX                         ; 0040f282
    POP EBX                             ; 0040f284
    RET                                 ; 0040f285
    PUSH 0x5f2820                       ; 0040f286 | DAT_005f2820
        ;   Label: LAB_0040f286
    PUSH EBX                            ; 0040f28b
    CALL FUN_005b7fa7                   ; 0040f28c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040f291
    PUSH EAX                            ; 0040f294
    CALL FUN_005b7fce                   ; 0040f295
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0040f29a
    MOV EAX,EBX                         ; 0040f29d
    POP EBX                             ; 0040f29f
    RET                                 ; 0040f2a0
    PUSH EAX                            ; 0040f2a1
        ;   Label: LAB_0040f2a1
    CALL FUN_005b7fdc                   ; 0040f2a2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040f2a7
    MOV EAX,EBX                         ; 0040f2aa
    POP EBX                             ; 0040f2ac
    RET                                 ; 0040f2ad

