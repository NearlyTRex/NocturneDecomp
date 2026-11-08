; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568fe0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5310
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568fe0
        ;   Label: FUN_00568fe0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568fe1
    TEST byte ptr [ESP + 0xc],0x4       ; 00568fe5
    JNZ 0x00569006                      ; 00568fea
        ;   XREF to: 00569006 (CONDITIONAL_JUMP)  ; LAB_00569006
    PUSH 0x1                            ; 00568fec
    PUSH EBX                            ; 00568fee
    CALL FUN_00408770                   ; 00568fef
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00568ff4
    MOV DL,byte ptr [ESP + 0xc]         ; 00568ff7
    MOV EBX,EAX                         ; 00568ffb
    TEST DL,0x2                         ; 00568ffd
    JNZ 0x00569021                      ; 00569000
        ;   XREF to: 00569021 (CONDITIONAL_JUMP)  ; LAB_00569021
    MOV EAX,EBX                         ; 00569002
    POP EBX                             ; 00569004
    RET                                 ; 00569005
    PUSH 0x5e5310                       ; 00569006 | DAT_005e5310
        ;   Label: LAB_00569006
    PUSH EBX                            ; 0056900b
    CALL FUN_005a308f                   ; 0056900c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00569011
    PUSH EAX                            ; 00569014
    CALL FUN_005a30b6                   ; 00569015
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056901a
    MOV EAX,EBX                         ; 0056901d
    POP EBX                             ; 0056901f
    RET                                 ; 00569020
    PUSH EAX                            ; 00569021
        ;   Label: LAB_00569021
    CALL FUN_005a30c4                   ; 00569022
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00569027
    MOV EAX,EBX                         ; 0056902a
    POP EBX                             ; 0056902c
    RET                                 ; 0056902d

