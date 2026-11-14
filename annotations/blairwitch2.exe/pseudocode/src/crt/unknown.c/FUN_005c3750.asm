; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3750(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005be6d8 at 005be6d8
;   crt_unknown.c_FUN_005c2bcc at 005c2c10
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2c8 = 005bce04
;
; Called Functions:
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c37ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3750
        ;   Label: crt_unknown.c_FUN_005c3750
    PUSH ESI                            ; 005c3751
    CALL dword ptr [0x0061f2c0]         ; 005c3752 | PTR_crt_unknown.c_FUN_005bce04_0061f2c0
    MOV EAX,[0x0061eea0]                ; 005c3758 | DAT_0061eea0
    TEST EAX,EAX                        ; 005c375d
    JZ 0x005c3781                       ; 005c375f
        ;   XREF to: 005c3781 (CONDITIONAL_JUMP)  ; LAB_005c3781
    MOV EDX,dword ptr [EAX]             ; 005c3761
        ;   Label: LAB_005c3761
    MOV ECX,dword ptr [EAX + 0x24]      ; 005c3763
    SUB EDX,0x2c                        ; 005c3766
    MOV ESI,dword ptr [ECX]             ; 005c3769
    MOV EBX,dword ptr [EAX + 0x8]       ; 005c376b
    CMP EDX,ESI                         ; 005c376e
    JNZ 0x005c377b                      ; 005c3770
        ;   XREF to: 005c377b (CONDITIONAL_JUMP)  ; LAB_005c377b
    PUSH EAX                            ; 005c3772
    CALL crt_unknown.c_FUN_005c37ec     ; 005c3773
        ;   XREF to: 005c37ec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c37ec()
    ADD ESP,0x4                         ; 005c3778
    MOV EAX,EBX                         ; 005c377b
        ;   Label: LAB_005c377b
    TEST EBX,EBX                        ; 005c377d
    JNZ 0x005c3761                      ; 005c377f
        ;   XREF to: 005c3761 (CONDITIONAL_JUMP)  ; LAB_005c3761
    CALL dword ptr [0x0061f2c8]         ; 005c3781 | PTR_crt_unknown.c_FUN_005bce04_0061f2c8
        ;   Label: LAB_005c3781
    XOR EAX,EAX                         ; 005c3787
    POP ESI                             ; 005c3789
    POP EBX                             ; 005c378a
    RET                                 ; 005c378b

