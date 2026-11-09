; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f31fc(void)
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

    LEA EDX,[EDX]                       ; 004f31fc
        ;   Label: engine_mini3d.cpp_FUN_004f31fc
    PUSH EDI                            ; 004f3200
    MOV EDX,dword ptr [0x01d0991c]      ; 004f3201 | DAT_01d0991c
    DEC EDX                             ; 004f3207
    MOV dword ptr [0x01d0991c],EDX      ; 004f3208 | DAT_01d0991c
    TEST EDX,EDX                        ; 004f320e
    JL 0x004f323b                       ; 004f3210
        ;   XREF to: 004f323b (CONDITIONAL_JUMP)  ; LAB_004f323b
    MOV EAX,[0x01d0991c]                ; 004f3212 | DAT_01d0991c
        ;   Label: LAB_004f3212
    SHL EAX,0x2                         ; 004f3217
    MOV EDX,EAX                         ; 004f321a
    SHL EAX,0x4                         ; 004f321c
    SUB EAX,EDX                         ; 004f321f
    MOV EDX,0x1d09920                   ; 004f3221
    MOV EDI,0x1                         ; 004f3226
    ADD EDX,EAX                         ; 004f322b
    MOV dword ptr [0x01d0c398],EDI      ; 004f322d | DAT_01d0c398
    MOV dword ptr [0x01d09918],EDX      ; 004f3233 | DAT_01d09918
    POP EDI                             ; 004f3239
    RET                                 ; 004f323a
    PUSH ESI                            ; 004f323b
        ;   Label: LAB_004f323b
    PUSH EBX                            ; 004f323c
    MOV EBX,0x5ddb88                    ; 004f323d
    MOV ESI,0x4bf                       ; 004f3242
    PUSH 0x5ddb9d                       ; 004f3247
    MOV dword ptr [0x01d046a0],EBX      ; 004f324c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f3252 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3258
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f325d
    POP EBX                             ; 004f3260
    POP ESI                             ; 004f3261
    JMP 0x004f3212                      ; 004f3262
        ;   XREF to: 004f3212 (UNCONDITIONAL_JUMP)  ; LAB_004f3212

