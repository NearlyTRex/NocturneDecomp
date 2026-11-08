; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00574960(int param_1)
;
;
; Called Functions:
;   FUN_005a5d00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00574960
        ;   Label: FUN_00574960
    MOV EDX,dword ptr [EAX + 0x4]       ; 00574964
    TEST EDX,EDX                        ; 00574967
    JNZ 0x00574971                      ; 00574969
        ;   XREF to: 00574971 (CONDITIONAL_JUMP)  ; LAB_00574971
    MOV EAX,0xffffffff                  ; 0057496b
    RET                                 ; 00574970
    PUSH EDX                            ; 00574971
        ;   Label: LAB_00574971
    CALL FUN_005a5d00                   ; 00574972
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5d00()
    ADD ESP,0x4                         ; 00574977
    RET                                 ; 0057497a

