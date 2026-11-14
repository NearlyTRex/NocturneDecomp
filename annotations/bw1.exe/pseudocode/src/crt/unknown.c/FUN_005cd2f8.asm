; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cd2f8(int param_1,int param_2)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c3148_006262d0 = 005c3148
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005cd0f0
;   crt_unknown.c_FUN_005cd144
;   crt_unknown.c_FUN_005cd168
;   crt_unknown.c_FUN_005cd210
;   crt_unknown.c_FUN_005cd248
;   crt_unknown.c_FUN_005cd274
;   crt_unknown.c_FUN_005ce060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd2f8
        ;   Label: crt_unknown.c_FUN_005cd2f8
    PUSH ESI                            ; 005cd2f9
    PUSH EDI                            ; 005cd2fa
    MOV EBX,dword ptr [ESP + 0x10]      ; 005cd2fb
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd2ff
    CMP EBX,0x1                         ; 005cd303
    JL 0x005cd30d                       ; 005cd306
        ;   XREF to: 005cd30d (CONDITIONAL_JUMP)  ; LAB_005cd30d
    CMP EBX,0xc                         ; 005cd308
    JLE 0x005cd320                      ; 005cd30b
        ;   XREF to: 005cd320 (CONDITIONAL_JUMP)  ; LAB_005cd320
    PUSH 0x9                            ; 005cd30d
        ;   Label: LAB_005cd30d
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005cd30f
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    MOV EAX,0x3                         ; 005cd314
    ADD ESP,0x4                         ; 005cd319
    POP EDI                             ; 005cd31c
    POP ESI                             ; 005cd31d
    POP EBX                             ; 005cd31e
    RET                                 ; 005cd31f
    MOV dword ptr [0x006262d0],0x5cd2ac ; 005cd320 | PTR_crt_unknown.c_FUN_005c3148_006262d0
        ;   Label: LAB_005cd320
    CMP EDI,0x2                         ; 005cd32a
    JZ 0x005cd355                       ; 005cd32d
        ;   XREF to: 005cd355 (CONDITIONAL_JUMP)  ; LAB_005cd355
    CMP EDI,0x3                         ; 005cd32f
    JZ 0x005cd355                       ; 005cd332
        ;   XREF to: 005cd355 (CONDITIONAL_JUMP)  ; LAB_005cd355
    PUSH EBX                            ; 005cd334
    CALL crt_unknown.c_FUN_005cd168     ; 005cd335
        ;   XREF to: 005cd168 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd168()
    ADD ESP,0x4                         ; 005cd33a
    TEST EAX,EAX                        ; 005cd33d
    JZ 0x005cd355                       ; 005cd33f
        ;   XREF to: 005cd355 (CONDITIONAL_JUMP)  ; LAB_005cd355
    CMP EBX,0x2                         ; 005cd341
    JNZ 0x005cd355                      ; 005cd344
        ;   XREF to: 005cd355 (CONDITIONAL_JUMP)  ; LAB_005cd355
    PUSH 0x9f                           ; 005cd346
    PUSH 0x0                            ; 005cd34b
    CALL crt_unknown.c_FUN_005ce060     ; 005cd34d
        ;   XREF to: 005ce060 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce060()
    ADD ESP,0x8                         ; 005cd352
    PUSH EBX                            ; 005cd355
        ;   Label: LAB_005cd355
    CALL crt_unknown.c_FUN_005cd144     ; 005cd356
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd144()
    ADD ESP,0x4                         ; 005cd35b
    PUSH EDI                            ; 005cd35e
    PUSH EBX                            ; 005cd35f
    MOV ESI,EAX                         ; 005cd360
    CALL crt_unknown.c_FUN_005cd0f0     ; 005cd362
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd367
    CALL crt_unknown.c_FUN_005cd210     ; 005cd36a
        ;   XREF to: 005cd210 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd210()
    TEST EAX,EAX                        ; 005cd36f
    JZ 0x005cd37a                       ; 005cd371
        ;   XREF to: 005cd37a (CONDITIONAL_JUMP)  ; LAB_005cd37a
    CALL crt_unknown.c_FUN_005cd248     ; 005cd373
        ;   XREF to: 005cd248 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd248()
    JMP 0x005cd37f                      ; 005cd378
        ;   XREF to: 005cd37f (UNCONDITIONAL_JUMP)  ; LAB_005cd37f
    CALL crt_unknown.c_FUN_005cd274     ; 005cd37a
        ;   XREF to: 005cd274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd274()
        ;   Label: LAB_005cd37a
    MOV EAX,ESI                         ; 005cd37f
        ;   Label: LAB_005cd37f
    POP EDI                             ; 005cd381
    POP ESI                             ; 005cd382
    POP EBX                             ; 005cd383
    RET                                 ; 005cd384

