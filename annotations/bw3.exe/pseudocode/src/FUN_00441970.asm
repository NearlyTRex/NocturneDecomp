; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441970(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441970
        ;   Label: FUN_00441970
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441971
    CMP dword ptr [EDX + 0x10],0x0      ; 00441975
    JZ 0x00441992                       ; 00441979
        ;   XREF to: 00441992 (CONDITIONAL_JUMP)  ; LAB_00441992
    MOV EBX,dword ptr [EDX + 0x1c]      ; 0044197b
    TEST EBX,EBX                        ; 0044197e
    JLE 0x00441992                      ; 00441980
        ;   XREF to: 00441992 (CONDITIONAL_JUMP)  ; LAB_00441992
    PUSH ESI                            ; 00441982
    MOV EAX,0x1                         ; 00441983
    MOV ESI,EBX                         ; 00441988
    SUB ESI,EAX                         ; 0044198a
    MOV dword ptr [EDX + 0x1c],ESI      ; 0044198c
    POP ESI                             ; 0044198f
    POP EBX                             ; 00441990
    RET                                 ; 00441991
    XOR EAX,EAX                         ; 00441992
        ;   Label: LAB_00441992
    POP EBX                             ; 00441994
    RET                                 ; 00441995

