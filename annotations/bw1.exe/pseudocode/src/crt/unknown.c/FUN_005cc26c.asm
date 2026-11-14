; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cc26c(HANDLE param_1,uint param_2,LPWIN32_FIND_DATAA param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc26c
        ;   Label: crt_unknown.c_FUN_005cc26c
    PUSH ESI                            ; 005cc26d
    PUSH EDI                            ; 005cc26e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005cc26f
    MOV ESI,dword ptr [ESP + 0x14]      ; 005cc273
    MOV EBX,dword ptr [ESP + 0x18]      ; 005cc277
    CMP dword ptr [EBX],0x0             ; 005cc27b
        ;   Label: LAB_005cc27b
    JNZ 0x005cc286                      ; 005cc27e
        ;   XREF to: 005cc286 (CONDITIONAL_JUMP)  ; LAB_005cc286
    MOV dword ptr [EBX],0x80            ; 005cc280
    TEST dword ptr [EBX],ESI            ; 005cc286
        ;   Label: LAB_005cc286
    JZ 0x005cc293                       ; 005cc288
        ;   XREF to: 005cc293 (CONDITIONAL_JUMP)  ; LAB_005cc293
    MOV EAX,0x1                         ; 005cc28a
    POP EDI                             ; 005cc28f
    POP ESI                             ; 005cc290
    POP EBX                             ; 005cc291
    RET                                 ; 005cc292
    PUSH EBX                            ; 005cc293
        ;   Label: LAB_005cc293
    PUSH EDI                            ; 005cc294
    CALL dword ptr CS:[0x5d055c]        ; 005cc295
    TEST EAX,EAX                        ; 005cc29c
    JNZ 0x005cc27b                      ; 005cc29e
        ;   XREF to: 005cc27b (CONDITIONAL_JUMP)  ; LAB_005cc27b
    POP EDI                             ; 005cc2a0
    POP ESI                             ; 005cc2a1
    POP EBX                             ; 005cc2a2
    RET                                 ; 005cc2a3

