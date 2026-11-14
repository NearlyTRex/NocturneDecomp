; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cacd8(undefined4 param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ccd50 at 005ccd54
;   crt_unknown.c_FUN_005cea10 at 005cea5e
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005d066c = 001d1274
;   undefined4 DAT_006265f8
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005cac3c
;   crt_unknown.c_FUN_005cce60
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cacd8
        ;   Label: crt_unknown.c_FUN_005cacd8
    PUSH ESI                            ; 005cacd9
    CMP dword ptr [0x006265f8],-0x1     ; 005cacda | DAT_006265f8
    JNZ 0x005cace8                      ; 005cace1
        ;   XREF to: 005cace8 (CONDITIONAL_JUMP)  ; LAB_005cace8
    XOR EAX,EAX                         ; 005cace3
    POP ESI                             ; 005cace5
    POP EBX                             ; 005cace6
    RET                                 ; 005cace7
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cace8
        ;   Label: LAB_005cace8
    PUSH EBX                            ; 005cacec
    CALL crt_unknown.c_FUN_005cac3c     ; 005caced
        ;   XREF to: 005cac3c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cac3c()
    MOV EBX,EAX                         ; 005cacf2
    ADD ESP,0x4                         ; 005cacf4
    TEST EAX,EAX                        ; 005cacf7
    JZ 0x005cad31                       ; 005cacf9
        ;   XREF to: 005cad31 (CONDITIONAL_JUMP)  ; LAB_005cad31
    PUSH EAX                            ; 005cacfb
    MOV ECX,dword ptr [EAX + 0xda]      ; 005cacfc
    PUSH ECX                            ; 005cad02
    CALL crt_unknown.c_FUN_005cce60     ; 005cad03
        ;   XREF to: 005cce60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cce60()
    ADD ESP,0x8                         ; 005cad08
    TEST EAX,EAX                        ; 005cad0b
    JNZ 0x005cad1d                      ; 005cad0d
        ;   XREF to: 005cad1d (CONDITIONAL_JUMP)  ; LAB_005cad1d
    PUSH EBX                            ; 005cad0f
    CALL crt_unknown.c_FUN_005c09f0     ; 005cad10
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005cad15
    XOR EAX,EAX                         ; 005cad18
    POP ESI                             ; 005cad1a
    POP EBX                             ; 005cad1b
    RET                                 ; 005cad1c
    PUSH EBX                            ; 005cad1d
        ;   Label: LAB_005cad1d
    MOV ESI,dword ptr [0x006265f8]      ; 005cad1e | DAT_006265f8
    PUSH ESI                            ; 005cad24
    CALL dword ptr CS:[0x5d066c]        ; 005cad25 | PTR_TlsSetValue_005d066c
    MOV EAX,0x1                         ; 005cad2c
    POP ESI                             ; 005cad31
        ;   Label: LAB_005cad31
    POP EBX                             ; 005cad32
    RET                                 ; 005cad33

