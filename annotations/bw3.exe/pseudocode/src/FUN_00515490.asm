; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00515490(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e34b0
;
; Called Functions:
;   FUN_00514350
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515490
        ;   Label: FUN_00515490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515491
    TEST byte ptr [ESP + 0xc],0x4       ; 00515495
    JNZ 0x005154b6                      ; 0051549a
        ;   XREF to: 005154b6 (CONDITIONAL_JUMP)  ; LAB_005154b6
    PUSH 0x1                            ; 0051549c
    PUSH EBX                            ; 0051549e
    CALL FUN_00514350                   ; 0051549f
        ;   XREF to: 00514350 (UNCONDITIONAL_CALL)  ; undefined FUN_00514350()
    ADD ESP,0x8                         ; 005154a4
    MOV DL,byte ptr [ESP + 0xc]         ; 005154a7
    MOV EBX,EAX                         ; 005154ab
    TEST DL,0x2                         ; 005154ad
    JNZ 0x005154d1                      ; 005154b0
        ;   XREF to: 005154d1 (CONDITIONAL_JUMP)  ; LAB_005154d1
    MOV EAX,EBX                         ; 005154b2
    POP EBX                             ; 005154b4
    RET                                 ; 005154b5
    PUSH 0x5e34b0                       ; 005154b6 | DAT_005e34b0
        ;   Label: LAB_005154b6
    PUSH EBX                            ; 005154bb
    CALL FUN_005a308f                   ; 005154bc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 005154c1
    PUSH EAX                            ; 005154c4
    CALL FUN_005a30b6                   ; 005154c5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005154ca
    MOV EAX,EBX                         ; 005154cd
    POP EBX                             ; 005154cf
    RET                                 ; 005154d0
    PUSH EAX                            ; 005154d1
        ;   Label: LAB_005154d1
    CALL FUN_005a30c4                   ; 005154d2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005154d7
    MOV EAX,EBX                         ; 005154da
    POP EBX                             ; 005154dc
    RET                                 ; 005154dd

