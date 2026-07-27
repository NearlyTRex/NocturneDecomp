; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_FUN_004dcee0(int *param_1)
;
;
; XREF[1]:
;   engine_model.c_FUN_004dcf60 at 004dd3a4
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;   engine_boss.c_FUN_0041a570
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004dcee0
        ;   Label: engine_model.c_FUN_004dcee0
    PUSH EBP                            ; 004dcee1
    MOV EBP,dword ptr [ESP + 0xc]       ; 004dcee2
    TEST EBP,EBP                        ; 004dcee6
    JZ 0x004dcf02                       ; 004dcee8
        ;   XREF to: 004dcf02 (CONDITIONAL_JUMP)  ; LAB_004dcf02
    MOV EDX,dword ptr [EBP]             ; 004dceea
    MOV EDI,EBP                         ; 004dceed
    CMP EDX,0x20                        ; 004dceef
    JZ 0x004dcf05                       ; 004dcef2
        ;   XREF to: 004dcf05 (CONDITIONAL_JUMP)  ; LAB_004dcf05
    CMP EDX,0x26                        ; 004dcef4
    JNZ 0x004dcf4e                      ; 004dcef7
        ;   XREF to: 004dcf4e (CONDITIONAL_JUMP)  ; LAB_004dcf4e
    PUSH EBP                            ; 004dcef9
    CALL engine_boss.c_FUN_0041a570     ; 004dcefa
        ;   XREF to: 0041a570 (UNCONDITIONAL_CALL)  ; undefined engine_boss.c_FUN_0041a570()
    ADD ESP,0x4                         ; 004dceff
    POP EBP                             ; 004dcf02
        ;   Label: LAB_004dcf02
    POP EDI                             ; 004dcf03
    RET                                 ; 004dcf04
    PUSH ESI                            ; 004dcf05
        ;   Label: LAB_004dcf05
    PUSH EBX                            ; 004dcf06
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dcf07
    PUSH EBX                            ; 004dcf0a
    CALL engine_model.c_FUN_004dcee0    ; 004dcf0b
        ;   XREF to: 004dcee0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004dcee0()
    ADD ESP,0x4                         ; 004dcf10
    MOV ESI,dword ptr [EBP + 0x8]       ; 004dcf13
    XOR EBX,EBX                         ; 004dcf16
    TEST ESI,ESI                        ; 004dcf18
    JLE 0x004dcf40                      ; 004dcf1a
        ;   XREF to: 004dcf40 (CONDITIONAL_JUMP)  ; LAB_004dcf40
    MOV ESI,EBP                         ; 004dcf1c
    MOV EAX,dword ptr [ESI + 0x118]     ; 004dcf1e
        ;   Label: LAB_004dcf1e
    PUSH EAX                            ; 004dcf24
    ADD ESI,0x4                         ; 004dcf25
    INC EBX                             ; 004dcf28
    CALL engine_model.c_FUN_004dcee0    ; 004dcf29
        ;   XREF to: 004dcee0 (UNCONDITIONAL_CALL)  ; undefined engine_model.c_FUN_004dcee0()
    MOV EDX,dword ptr [EDI + 0x8]       ; 004dcf2e
    ADD ESP,0x4                         ; 004dcf31
    CMP EBX,EDX                         ; 004dcf34
    JL 0x004dcf1e                       ; 004dcf36
        ;   XREF to: 004dcf1e (CONDITIONAL_JUMP)  ; LAB_004dcf1e
    LEA EAX,[EAX]                       ; 004dcf38
    MOV EDX,EDX                         ; 004dcf3e
    PUSH EBP                            ; 004dcf40
        ;   Label: LAB_004dcf40
    CALL crt_unknown.c_FUN_005638d0     ; 004dcf41
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004dcf46
    POP EBX                             ; 004dcf49
    POP ESI                             ; 004dcf4a
    POP EBP                             ; 004dcf4b
    POP EDI                             ; 004dcf4c
    RET                                 ; 004dcf4d
    PUSH EBP                            ; 004dcf4e
        ;   Label: LAB_004dcf4e
    CALL crt_unknown.c_FUN_005638d0     ; 004dcf4f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004dcf54
    POP EBP                             ; 004dcf57
    POP EDI                             ; 004dcf58
    RET                                 ; 004dcf59

