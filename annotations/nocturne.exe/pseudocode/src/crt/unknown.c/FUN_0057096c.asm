; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0057096c(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057096c
        ;   Label: crt_unknown.c_FUN_0057096c
    PUSH ESI                            ; 0057096d
    PUSH EDI                            ; 0057096e
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057096f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00570973
    MOV EBX,dword ptr [ESP + 0x18]      ; 00570977
    CMP dword ptr [EBX],0x0             ; 0057097b
        ;   Label: LAB_0057097b
    JNZ 0x00570986                      ; 0057097e
        ;   XREF to: 00570986 (CONDITIONAL_JUMP)  ; LAB_00570986
    MOV dword ptr [EBX],0x80            ; 00570980
    TEST dword ptr [EBX],ESI            ; 00570986
        ;   Label: LAB_00570986
    JZ 0x00570993                       ; 00570988
        ;   XREF to: 00570993 (CONDITIONAL_JUMP)  ; LAB_00570993
    MOV EAX,0x1                         ; 0057098a
    POP EDI                             ; 0057098f
    POP ESI                             ; 00570990
    POP EBX                             ; 00570991
    RET                                 ; 00570992
    PUSH EBX                            ; 00570993
        ;   Label: LAB_00570993
    PUSH EDI                            ; 00570994
    CALL dword ptr CS:[0x5754d0]        ; 00570995
    TEST EAX,EAX                        ; 0057099c
    JNZ 0x0057097b                      ; 0057099e
        ;   XREF to: 0057097b (CONDITIONAL_JUMP)  ; LAB_0057097b
    POP EDI                             ; 005709a0
    POP ESI                             ; 005709a1
    POP EBX                             ; 005709a2
    RET                                 ; 005709a3

