; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005ac720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059f980
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ac720
        ;   Label: FUN_005ac720
    PUSH EDX                            ; 005ac724
    CALL FUN_0059f980                   ; 005ac725
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005ac72a
    TEST EAX,EAX                        ; 005ac72d
    SETNZ AL                            ; 005ac72f
    AND EAX,0xff                        ; 005ac732
    RET                                 ; 005ac737

