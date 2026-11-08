; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005675e0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4c20
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675e0
        ;   Label: FUN_005675e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005675e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005675e5
    JNZ 0x00567606                      ; 005675ea
        ;   XREF to: 00567606 (CONDITIONAL_JUMP)  ; LAB_00567606
    PUSH 0x1                            ; 005675ec
    PUSH EBX                            ; 005675ee
    CALL FUN_00408770                   ; 005675ef
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005675f4
    MOV DL,byte ptr [ESP + 0xc]         ; 005675f7
    MOV EBX,EAX                         ; 005675fb
    TEST DL,0x2                         ; 005675fd
    JNZ 0x00567621                      ; 00567600
        ;   XREF to: 00567621 (CONDITIONAL_JUMP)  ; LAB_00567621
    MOV EAX,EBX                         ; 00567602
    POP EBX                             ; 00567604
    RET                                 ; 00567605
    PUSH 0x5e4c20                       ; 00567606 | DAT_005e4c20
        ;   Label: LAB_00567606
    PUSH EBX                            ; 0056760b
    CALL FUN_005a308f                   ; 0056760c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00567611
    PUSH EAX                            ; 00567614
    CALL FUN_005a30b6                   ; 00567615
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056761a
    MOV EAX,EBX                         ; 0056761d
    POP EBX                             ; 0056761f
    RET                                 ; 00567620
    PUSH EAX                            ; 00567621
        ;   Label: LAB_00567621
    CALL FUN_005a30c4                   ; 00567622
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00567627
    MOV EAX,EBX                         ; 0056762a
    POP EBX                             ; 0056762c
    RET                                 ; 0056762d

