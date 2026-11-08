; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005795e0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6200
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005795e0
        ;   Label: FUN_005795e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005795e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005795e5
    JNZ 0x00579606                      ; 005795ea
        ;   XREF to: 00579606 (CONDITIONAL_JUMP)  ; LAB_00579606
    PUSH 0x1                            ; 005795ec
    PUSH EBX                            ; 005795ee
    CALL FUN_00408770                   ; 005795ef
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005795f4
    MOV DL,byte ptr [ESP + 0xc]         ; 005795f7
    MOV EBX,EAX                         ; 005795fb
    TEST DL,0x2                         ; 005795fd
    JNZ 0x00579621                      ; 00579600
        ;   XREF to: 00579621 (CONDITIONAL_JUMP)  ; LAB_00579621
    MOV EAX,EBX                         ; 00579602
    POP EBX                             ; 00579604
    RET                                 ; 00579605
    PUSH 0x5e6200                       ; 00579606 | DAT_005e6200
        ;   Label: LAB_00579606
    PUSH EBX                            ; 0057960b
    CALL FUN_005a308f                   ; 0057960c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00579611
    PUSH EAX                            ; 00579614
    CALL FUN_005a30b6                   ; 00579615
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0057961a
    MOV EAX,EBX                         ; 0057961d
    POP EBX                             ; 0057961f
    RET                                 ; 00579620
    PUSH EAX                            ; 00579621
        ;   Label: LAB_00579621
    CALL FUN_005a30c4                   ; 00579622
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00579627
    MOV EAX,EBX                         ; 0057962a
    POP EBX                             ; 0057962c
    RET                                 ; 0057962d

