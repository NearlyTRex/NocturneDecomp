; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ab400(uint param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ab46c at 005ab474
;   unkafter_2d.cpp_FUN_005b12a0 at 005b141c
;
; Referenced Globals:
;   undefined4 DAT_00607b6d
;   undefined4 DAT_00607b80
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a92f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab400
        ;   Label: crt_unknown.c_FUN_005ab400
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab401
    PUSH EBX                            ; 005ab405
    CALL crt_unknown.c_FUN_005a92f8     ; 005ab406
        ;   XREF to: 005a92f8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a92f8()
    ADD ESP,0x4                         ; 005ab40b
    CMP EBX,0x7b                        ; 005ab40e
    JNZ 0x005ab417                      ; 005ab411
        ;   XREF to: 005ab417 (CONDITIONAL_JUMP)  ; LAB_005ab417
    PUSH 0x1                            ; 005ab413
    JMP 0x005ab45d                      ; 005ab415
        ;   XREF to: 005ab45d (UNCONDITIONAL_JUMP)  ; LAB_005ab45d
    CMP EBX,0xce                        ; 005ab417
        ;   Label: LAB_005ab417
    JNZ 0x005ab430                      ; 005ab41d
        ;   XREF to: 005ab430 (CONDITIONAL_JUMP)  ; LAB_005ab430
    PUSH 0x9                            ; 005ab41f
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab421
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005ab426
    MOV EAX,0xffffffff                  ; 005ab429
    POP EBX                             ; 005ab42e
    RET                                 ; 005ab42f
    CMP EBX,0xb7                        ; 005ab430
        ;   Label: LAB_005ab430
    JNZ 0x005ab449                      ; 005ab436
        ;   XREF to: 005ab449 (CONDITIONAL_JUMP)  ; LAB_005ab449
    PUSH 0x7                            ; 005ab438
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab43a
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005ab43f
    MOV EAX,0xffffffff                  ; 005ab442
    POP EBX                             ; 005ab447
    RET                                 ; 005ab448
    CMP EBX,0x13                        ; 005ab449
        ;   Label: LAB_005ab449
    JBE 0x005ab453                      ; 005ab44c
        ;   XREF to: 005ab453 (CONDITIONAL_JUMP)  ; LAB_005ab453
    MOV EBX,0x13                        ; 005ab44e
    MOV EBX,dword ptr [EBX + 0x607b6d]  ; 005ab453 | DAT_00607b80 | DAT_00607b6d
        ;   Label: LAB_005ab453
    SAR EBX,0x18                        ; 005ab459
    PUSH EBX                            ; 005ab45c
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005ab45d
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
        ;   Label: LAB_005ab45d
    ADD ESP,0x4                         ; 005ab462
    MOV EAX,0xffffffff                  ; 005ab465
    POP EBX                             ; 005ab46a
    RET                                 ; 005ab46b

