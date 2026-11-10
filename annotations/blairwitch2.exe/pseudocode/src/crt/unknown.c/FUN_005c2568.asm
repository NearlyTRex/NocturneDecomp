; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2568(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c252a
;   crt_unknown.c_FUN_005c49c0
;   crt_unknown.c_FUN_005c49cc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c2568
        ;   Label: crt_unknown.c_FUN_005c2568
    MOV EBP,ESP                         ; 005c2569
    PUSH EBX                            ; 005c256b
    PUSH ESI                            ; 005c256c
    PUSH EDI                            ; 005c256d
    CALL crt_unknown.c_FUN_005c49c0     ; 005c256e
        ;   XREF to: 005c49c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c49c0()
    PUSH EAX                            ; 005c2573
    PUSH 0x47                           ; 005c2574
    MOV EDX,dword ptr [EBP + 0x18]      ; 005c2576
    PUSH EDX                            ; 005c2579
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c257a
    PUSH EBX                            ; 005c257d
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c257e
    PUSH ECX                            ; 005c2581
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c2582
    PUSH ESI                            ; 005c2585
    MOV EDI,dword ptr [EBP + 0x8]       ; 005c2586
    PUSH EDI                            ; 005c2589
    CALL crt_unknown.c_FUN_005c49cc     ; 005c258a
        ;   XREF to: 005c49cc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c49cc()
    ADD ESP,0x1c                        ; 005c258f
    MOV EDX,dword ptr [EBP + 0x10]      ; 005c2592
    PUSH EDX                            ; 005c2595
        ;   Label: LAB_005c2595
    PUSH EAX                            ; 005c2596
    CALL crt_unknown.c_FUN_005c252a     ; 005c2597
        ;   XREF to: 005c252a (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c252a()
    ADD ESP,0x8                         ; 005c259c
    POP EDI                             ; 005c259f
    POP ESI                             ; 005c25a0
    POP EBX                             ; 005c25a1
    POP EBP                             ; 005c25a2
    RET                                 ; 005c25a3

