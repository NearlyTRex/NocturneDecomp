; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004f3310(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d0c398
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f3310
        ;   Label: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_004f3310
    MOV EDX,dword ptr [0x01d0991c]      ; 004f3311 | DAT_01d0991c
    DEC EDX                             ; 004f3317
    MOV dword ptr [0x01d0991c],EDX      ; 004f3318 | DAT_01d0991c
    TEST EDX,EDX                        ; 004f331e
    JL 0x004f334b                       ; 004f3320
        ;   XREF to: 004f334b (CONDITIONAL_JUMP)  ; LAB_004f334b
    MOV EAX,[0x01d0991c]                ; 004f3322 | DAT_01d0991c
        ;   Label: LAB_004f3322
    SHL EAX,0x2                         ; 004f3327
    MOV EDX,EAX                         ; 004f332a
    SHL EAX,0x4                         ; 004f332c
    SUB EAX,EDX                         ; 004f332f
    MOV EDX,0x1d09920                   ; 004f3331
    MOV EDI,0x1                         ; 004f3336
    ADD EDX,EAX                         ; 004f333b
    MOV dword ptr [0x01d0c398],EDI      ; 004f333d | DAT_01d0c398
    MOV dword ptr [0x01d09918],EDX      ; 004f3343 | DAT_01d09918
    POP EDI                             ; 004f3349
    RET                                 ; 004f334a
    PUSH ESI                            ; 004f334b
        ;   Label: LAB_004f334b
    PUSH EBX                            ; 004f334c
    MOV EBX,0x5ddbd5                    ; 004f334d
    MOV ESI,0x4f5                       ; 004f3352
    PUSH 0x5ddbea                       ; 004f3357
    MOV dword ptr [0x01d046a0],EBX      ; 004f335c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f3362 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3368
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f336d
    POP EBX                             ; 004f3370
    POP ESI                             ; 004f3371
    JMP 0x004f3322                      ; 004f3372
        ;   XREF to: 004f3322 (UNCONDITIONAL_JUMP)  ; LAB_004f3322

