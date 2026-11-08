; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00543070(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604db0
;
; Called Functions:
;   FUN_004ea980
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543070
        ;   Label: FUN_00543070
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543071
    TEST byte ptr [ESP + 0xc],0x4       ; 00543075
    JNZ 0x00543096                      ; 0054307a
        ;   XREF to: 00543096 (CONDITIONAL_JUMP)  ; LAB_00543096
    PUSH 0x1                            ; 0054307c
    PUSH EBX                            ; 0054307e
    CALL FUN_004ea980                   ; 0054307f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea980()
    ADD ESP,0x8                         ; 00543084
    MOV DL,byte ptr [ESP + 0xc]         ; 00543087
    MOV EBX,EAX                         ; 0054308b
    TEST DL,0x2                         ; 0054308d
    JNZ 0x005430b1                      ; 00543090
        ;   XREF to: 005430b1 (CONDITIONAL_JUMP)  ; LAB_005430b1
    MOV EAX,EBX                         ; 00543092
    POP EBX                             ; 00543094
    RET                                 ; 00543095
    PUSH 0x604db0                       ; 00543096 | DAT_00604db0
        ;   Label: LAB_00543096
    PUSH EBX                            ; 0054309b
    CALL FUN_005c030f                   ; 0054309c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005430a1
    PUSH EAX                            ; 005430a4
    CALL FUN_005c0336                   ; 005430a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005430aa
    MOV EAX,EBX                         ; 005430ad
    POP EBX                             ; 005430af
    RET                                 ; 005430b0
    PUSH EAX                            ; 005430b1
        ;   Label: LAB_005430b1
    CALL FUN_005c0344                   ; 005430b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005430b7
    MOV EAX,EBX                         ; 005430ba
    POP EBX                             ; 005430bc
    RET                                 ; 005430bd

