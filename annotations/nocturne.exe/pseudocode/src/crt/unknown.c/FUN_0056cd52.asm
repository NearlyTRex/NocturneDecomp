; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_0056cd52(int param_1)
;
;
; XREF[2]:
;   crt_fstream.cpp_filebuf_dtor_FUN_00570449 at 0057047c
;   crt_iostream.cpp_ostream_flush_FUN_00565e59 at 00565e6d
;
; Called Functions:
;   crt_unknown.c_FUN_00570a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd52
        ;   Label: crt_unknown.c_FUN_0056cd52
    PUSH ESI                            ; 0056cd53
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056cd54
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0056cd58
    CMP EAX,-0x1                        ; 0056cd5b
    JNZ 0x0056cd65                      ; 0056cd5e
        ;   XREF to: 0056cd65 (CONDITIONAL_JUMP)  ; LAB_0056cd65
    XOR EAX,EAX                         ; 0056cd60
        ;   Label: LAB_0056cd60
    POP ESI                             ; 0056cd62
        ;   Label: LAB_0056cd62
    POP EBX                             ; 0056cd63
    RET                                 ; 0056cd64
    PUSH EBX                            ; 0056cd65
        ;   Label: LAB_0056cd65
    MOV EAX,dword ptr [EBX + 0x28]      ; 0056cd66
    CALL dword ptr [EAX + 0x20]         ; 0056cd69
    MOV ESI,EAX                         ; 0056cd6c
    MOV DL,byte ptr [EBX + 0x39]        ; 0056cd6e
    ADD ESP,0x4                         ; 0056cd71
    AND DL,0xfe                         ; 0056cd74
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0056cd77
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0056cd7a
    PUSH EAX                            ; 0056cd81
    MOV byte ptr [EBX + 0x39],DL        ; 0056cd82
    CALL crt_unknown.c_FUN_00570a70     ; 0056cd85
        ;   XREF to: 00570a70 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00570a70()
    ADD ESP,0x4                         ; 0056cd8a
    TEST EAX,EAX                        ; 0056cd8d
    JNZ 0x0056cd60                      ; 0056cd8f
        ;   XREF to: 0056cd60 (CONDITIONAL_JUMP)  ; LAB_0056cd60
    CMP ESI,-0x1                        ; 0056cd91
    JZ 0x0056cd62                       ; 0056cd94
        ;   XREF to: 0056cd62 (CONDITIONAL_JUMP)  ; LAB_0056cd62
    MOV EAX,EBX                         ; 0056cd96
    POP ESI                             ; 0056cd98
    POP EBX                             ; 0056cd99
    RET                                 ; 0056cd9a

