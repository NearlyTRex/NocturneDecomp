; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aeedc(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aeedc
        ;   Label: crt_unknown.c_FUN_005aeedc
    PUSH ESI                            ; 005aeedd
    PUSH EDI                            ; 005aeede
    MOV EDI,dword ptr [ESP + 0x10]      ; 005aeedf
    MOV ESI,dword ptr [ESP + 0x14]      ; 005aeee3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005aeee7
    CMP dword ptr [EBX],0x0             ; 005aeeeb
        ;   Label: LAB_005aeeeb
    JNZ 0x005aeef6                      ; 005aeeee
        ;   XREF to: 005aeef6 (CONDITIONAL_JUMP)  ; LAB_005aeef6
    MOV dword ptr [EBX],0x80            ; 005aeef0
    TEST dword ptr [EBX],ESI            ; 005aeef6
        ;   Label: LAB_005aeef6
    JZ 0x005aef03                       ; 005aeef8
        ;   XREF to: 005aef03 (CONDITIONAL_JUMP)  ; LAB_005aef03
    MOV EAX,0x1                         ; 005aeefa
    POP EDI                             ; 005aeeff
    POP ESI                             ; 005aef00
    POP EBX                             ; 005aef01
    RET                                 ; 005aef02
    PUSH EBX                            ; 005aef03
        ;   Label: LAB_005aef03
    PUSH EDI                            ; 005aef04
    CALL dword ptr CS:[0x5b355c]        ; 005aef05
    TEST EAX,EAX                        ; 005aef0c
    JNZ 0x005aeeeb                      ; 005aef0e
        ;   XREF to: 005aeeeb (CONDITIONAL_JUMP)  ; LAB_005aeeeb
    POP EDI                             ; 005aef10
    POP ESI                             ; 005aef11
    POP EBX                             ; 005aef12
    RET                                 ; 005aef13

