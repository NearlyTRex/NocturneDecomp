; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cc330(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c8390 at 005c83fc
;
; Called Functions:
;   crt_unknown.c_FUN_005cc6e0
;   crt_unknown.c_FUN_005cdb80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc330
        ;   Label: crt_unknown.c_FUN_005cc330
    SUB ESP,0x24                        ; 005cc331
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005cc334
    MOV EAX,ESP                         ; 005cc338
    PUSH EAX                            ; 005cc33a
    CALL crt_unknown.c_FUN_005cdb80     ; 005cc33b
        ;   XREF to: 005cdb80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cdb80()
    ADD ESP,0x4                         ; 005cc340
    CMP EAX,0x1f4                       ; 005cc343
    JL 0x005cc34d                       ; 005cc348
        ;   XREF to: 005cc34d (CONDITIONAL_JUMP)  ; LAB_005cc34d
    INC dword ptr [ESP]                 ; 005cc34a
    MOV EAX,ESP                         ; 005cc34d
        ;   Label: LAB_005cc34d
    PUSH EAX                            ; 005cc34f
    CALL crt_unknown.c_FUN_005cc6e0     ; 005cc350
        ;   XREF to: 005cc6e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc6e0()
    ADD ESP,0x4                         ; 005cc355
    MOV EDX,EAX                         ; 005cc358
    TEST EBX,EBX                        ; 005cc35a
    JZ 0x005cc360                       ; 005cc35c
        ;   XREF to: 005cc360 (CONDITIONAL_JUMP)  ; LAB_005cc360
    MOV dword ptr [EBX],EAX             ; 005cc35e
    MOV EAX,EDX                         ; 005cc360
        ;   Label: LAB_005cc360
    ADD ESP,0x24                        ; 005cc362
    POP EBX                             ; 005cc365
    RET                                 ; 005cc366

