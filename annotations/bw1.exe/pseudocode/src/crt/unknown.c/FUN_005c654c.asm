; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c654c(uint param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c0630 at 005c065c
;   crt_unknown.c_FUN_005c6540 at 005c6542
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626610 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626614 = 005c50d4
;   undefined4 DAT_02c9f050
;
; Called Functions:
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c6d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c654c
        ;   Label: crt_unknown.c_FUN_005c654c
    PUSH ESI                            ; 005c654d
    PUSH EDI                            ; 005c654e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005c654f
    CALL dword ptr [0x00626610]         ; 005c6553 | PTR_crt_unknown.c_FUN_005c50d4_00626610
    MOV EBX,dword ptr [0x02c9f050]      ; 005c6559 | DAT_02c9f050
    XOR ESI,ESI                         ; 005c655f
    TEST EBX,EBX                        ; 005c6561
    JZ 0x005c6585                       ; 005c6563
        ;   XREF to: 005c6585 (CONDITIONAL_JUMP)  ; LAB_005c6585
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c6565
        ;   Label: LAB_005c6565
    TEST dword ptr [EAX + 0xc],EDI      ; 005c6568
    JZ 0x005c657f                       ; 005c656b
        ;   XREF to: 005c657f (CONDITIONAL_JUMP)  ; LAB_005c657f
    MOV DL,byte ptr [EAX + 0xd]         ; 005c656d
    INC ESI                             ; 005c6570
    TEST DL,0x10                        ; 005c6571
    JZ 0x005c657f                       ; 005c6574
        ;   XREF to: 005c657f (CONDITIONAL_JUMP)  ; LAB_005c657f
    PUSH EAX                            ; 005c6576
    CALL crt_unknown.c_FUN_005c6d50     ; 005c6577
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c657c
    MOV EBX,dword ptr [EBX]             ; 005c657f
        ;   Label: LAB_005c657f
    TEST EBX,EBX                        ; 005c6581
    JNZ 0x005c6565                      ; 005c6583
        ;   XREF to: 005c6565 (CONDITIONAL_JUMP)  ; LAB_005c6565
    CALL dword ptr [0x00626614]         ; 005c6585 | PTR_crt_unknown.c_FUN_005c50d4_00626614
        ;   Label: LAB_005c6585
    MOV EAX,ESI                         ; 005c658b
    POP EDI                             ; 005c658d
    POP ESI                             ; 005c658e
    POP EBX                             ; 005c658f
    RET                                 ; 005c6590

