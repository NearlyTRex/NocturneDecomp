; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3f6c(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3f6c
        ;   Label: crt_unknown.c_FUN_005c3f6c
    PUSH ESI                            ; 005c3f6d
    PUSH EDI                            ; 005c3f6e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005c3f6f
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c3f73
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c3f77
    CMP dword ptr [EBX],0x0             ; 005c3f7b
        ;   Label: LAB_005c3f7b
    JNZ 0x005c3f86                      ; 005c3f7e
        ;   XREF to: 005c3f86 (CONDITIONAL_JUMP)  ; LAB_005c3f86
    MOV dword ptr [EBX],0x80            ; 005c3f80
    TEST dword ptr [EBX],ESI            ; 005c3f86
        ;   Label: LAB_005c3f86
    JZ 0x005c3f93                       ; 005c3f88
        ;   XREF to: 005c3f93 (CONDITIONAL_JUMP)  ; LAB_005c3f93
    MOV EAX,0x1                         ; 005c3f8a
    POP EDI                             ; 005c3f8f
    POP ESI                             ; 005c3f90
    POP EBX                             ; 005c3f91
    RET                                 ; 005c3f92
    PUSH EBX                            ; 005c3f93
        ;   Label: LAB_005c3f93
    PUSH EDI                            ; 005c3f94
    CALL dword ptr CS:[0x5c854c]        ; 005c3f95
    TEST EAX,EAX                        ; 005c3f9c
    JNZ 0x005c3f7b                      ; 005c3f9e
        ;   XREF to: 005c3f7b (CONDITIONAL_JUMP)  ; LAB_005c3f7b
    POP EDI                             ; 005c3fa0
    POP ESI                             ; 005c3fa1
    POP EBX                             ; 005c3fa2
    RET                                 ; 005c3fa3

