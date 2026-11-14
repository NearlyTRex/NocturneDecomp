; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c29d8(undefined4 param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c4a50 at 005c4a54
;   crt_unknown.c_FUN_005c6710 at 005c675e
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005c8658 = 001c9238
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_FUN_005c293c
;   crt_unknown.c_FUN_005c4b60
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c29d8
        ;   Label: crt_unknown.c_FUN_005c29d8
    PUSH ESI                            ; 005c29d9
    CMP dword ptr [0x0061f2a0],-0x1     ; 005c29da | DAT_0061f2a0
    JNZ 0x005c29e8                      ; 005c29e1
        ;   XREF to: 005c29e8 (CONDITIONAL_JUMP)  ; LAB_005c29e8
    XOR EAX,EAX                         ; 005c29e3
    POP ESI                             ; 005c29e5
    POP EBX                             ; 005c29e6
    RET                                 ; 005c29e7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c29e8
        ;   Label: LAB_005c29e8
    PUSH EBX                            ; 005c29ec
    CALL crt_unknown.c_FUN_005c293c     ; 005c29ed
        ;   XREF to: 005c293c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c293c()
    MOV EBX,EAX                         ; 005c29f2
    ADD ESP,0x4                         ; 005c29f4
    TEST EAX,EAX                        ; 005c29f7
    JZ 0x005c2a31                       ; 005c29f9
        ;   XREF to: 005c2a31 (CONDITIONAL_JUMP)  ; LAB_005c2a31
    PUSH EAX                            ; 005c29fb
    MOV ECX,dword ptr [EAX + 0xda]      ; 005c29fc
    PUSH ECX                            ; 005c2a02
    CALL crt_unknown.c_FUN_005c4b60     ; 005c2a03
        ;   XREF to: 005c4b60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4b60()
    ADD ESP,0x8                         ; 005c2a08
    TEST EAX,EAX                        ; 005c2a0b
    JNZ 0x005c2a1d                      ; 005c2a0d
        ;   XREF to: 005c2a1d (CONDITIONAL_JUMP)  ; LAB_005c2a1d
    PUSH EBX                            ; 005c2a0f
    CALL crt_unknown.c_FUN_005b86a0     ; 005c2a10
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c2a15
    XOR EAX,EAX                         ; 005c2a18
    POP ESI                             ; 005c2a1a
    POP EBX                             ; 005c2a1b
    RET                                 ; 005c2a1c
    PUSH EBX                            ; 005c2a1d
        ;   Label: LAB_005c2a1d
    MOV ESI,dword ptr [0x0061f2a0]      ; 005c2a1e | DAT_0061f2a0
    PUSH ESI                            ; 005c2a24
    CALL dword ptr CS:[0x5c8658]        ; 005c2a25 | PTR_TlsSetValue_005c8658
    MOV EAX,0x1                         ; 005c2a2c
    POP ESI                             ; 005c2a31
        ;   Label: LAB_005c2a31
    POP EBX                             ; 005c2a32
    RET                                 ; 005c2a33

