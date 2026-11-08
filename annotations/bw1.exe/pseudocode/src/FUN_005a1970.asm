; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a1970(int param_1)
;
;
; Called Functions:
;   FUN_005c2e90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1970
        ;   Label: FUN_005a1970
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a1974
    TEST EDX,EDX                        ; 005a1977
    JNZ 0x005a1981                      ; 005a1979
        ;   XREF to: 005a1981 (CONDITIONAL_JUMP)  ; LAB_005a1981
    MOV EAX,0xffffffff                  ; 005a197b
    RET                                 ; 005a1980
    PUSH EDX                            ; 005a1981
        ;   Label: LAB_005a1981
    CALL FUN_005c2e90                   ; 005a1982
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2e90()
    ADD ESP,0x4                         ; 005a1987
    RET                                 ; 005a198a

