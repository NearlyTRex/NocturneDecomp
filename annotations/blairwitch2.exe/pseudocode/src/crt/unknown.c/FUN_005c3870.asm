; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3870(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bea80 at 005beb81
;
; Referenced Globals:
;   void* PTR_FlushFileBuffers_005c8550 = 001c8d64
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c036c
;   FlushFileBuffers
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3870
        ;   Label: crt_unknown.c_FUN_005c3870
    PUSH ESI                            ; 005c3871
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c3872
    XOR ESI,ESI                         ; 005c3876
    TEST EBX,EBX                        ; 005c3878
    JL 0x005c3884                       ; 005c387a
        ;   XREF to: 005c3884 (CONDITIONAL_JUMP)  ; LAB_005c3884
    CMP EBX,dword ptr [0x0061f480]      ; 005c387c | DAT_0061f480
    JBE 0x005c3896                      ; 005c3882
        ;   XREF to: 005c3896 (CONDITIONAL_JUMP)  ; LAB_005c3896
    PUSH 0x4                            ; 005c3884
        ;   Label: LAB_005c3884
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005c3886
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005c388b
    ADD ESP,0x4                         ; 005c3890
    POP ESI                             ; 005c3893
    POP EBX                             ; 005c3894
    RET                                 ; 005c3895
    PUSH EBX                            ; 005c3896
        ;   Label: LAB_005c3896
    CALL dword ptr [0x0061f2a8]         ; 005c3897 | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EAX,[0x0061f4d8]                ; 005c389d | DAT_0061f4d8
    ADD ESP,0x4                         ; 005c38a2
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005c38a5
    PUSH EAX                            ; 005c38a8
    CALL dword ptr CS:[0x5c8550]        ; 005c38a9 | PTR_FlushFileBuffers_005c8550
    TEST EAX,EAX                        ; 005c38b0
    JNZ 0x005c38be                      ; 005c38b2
        ;   XREF to: 005c38be (CONDITIONAL_JUMP)  ; LAB_005c38be
    CALL crt_unknown.c_FUN_005c036c     ; 005c38b4
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    MOV ESI,0xffffffff                  ; 005c38b9
    PUSH EBX                            ; 005c38be
        ;   Label: LAB_005c38be
    CALL dword ptr [0x0061f2ac]         ; 005c38bf | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005c38c5
    MOV EAX,ESI                         ; 005c38c8
    POP ESI                             ; 005c38ca
    POP EBX                             ; 005c38cb
    RET                                 ; 005c38cc

