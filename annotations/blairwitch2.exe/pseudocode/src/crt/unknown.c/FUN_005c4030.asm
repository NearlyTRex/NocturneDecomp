; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4030(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c00d0 at 005c013c
;
; Called Functions:
;   crt_unknown.c_FUN_005c43e0
;   crt_unknown.c_FUN_005c5880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4030
        ;   Label: crt_unknown.c_FUN_005c4030
    SUB ESP,0x24                        ; 005c4031
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005c4034
    MOV EAX,ESP                         ; 005c4038
    PUSH EAX                            ; 005c403a
    CALL crt_unknown.c_FUN_005c5880     ; 005c403b
        ;   XREF to: 005c5880 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5880()
    ADD ESP,0x4                         ; 005c4040
    CMP EAX,0x1f4                       ; 005c4043
    JL 0x005c404d                       ; 005c4048
        ;   XREF to: 005c404d (CONDITIONAL_JUMP)  ; LAB_005c404d
    INC dword ptr [ESP]                 ; 005c404a
    MOV EAX,ESP                         ; 005c404d
        ;   Label: LAB_005c404d
    PUSH EAX                            ; 005c404f
    CALL crt_unknown.c_FUN_005c43e0     ; 005c4050
        ;   XREF to: 005c43e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c43e0()
    ADD ESP,0x4                         ; 005c4055
    MOV EDX,EAX                         ; 005c4058
    TEST EBX,EBX                        ; 005c405a
    JZ 0x005c4060                       ; 005c405c
        ;   XREF to: 005c4060 (CONDITIONAL_JUMP)  ; LAB_005c4060
    MOV dword ptr [EBX],EAX             ; 005c405e
    MOV EAX,EDX                         ; 005c4060
        ;   Label: LAB_005c4060
    ADD ESP,0x24                        ; 005c4062
    POP EBX                             ; 005c4065
    RET                                 ; 005c4066

