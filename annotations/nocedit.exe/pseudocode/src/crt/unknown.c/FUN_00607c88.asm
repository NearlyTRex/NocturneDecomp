; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 crt_unknown_c_FUN_00607c88(void)
;
;
; XREF[1]:
;   crt_time.c_determine_dst_status_FUN_006079b4 at 00607c65
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607c88
        ;   Label: crt_unknown.c_FUN_00607c88
    PUSH ESI                            ; 00607c89
    PUSH EBP                            ; 00607c8a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00607c8b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00607c8f
    MOV ECX,dword ptr [EBX + 0x8]       ; 00607c93
    MOV ESI,dword ptr [EDX + 0x8]       ; 00607c96
    XOR EAX,EAX                         ; 00607c99
    CMP ECX,ESI                         ; 00607c9b
    JL 0x00607cb3                       ; 00607c9d
        ;   XREF to: 00607cb3 (CONDITIONAL_JUMP)  ; LAB_00607cb3
    JNZ 0x00607cb8                      ; 00607c9f
        ;   XREF to: 00607cb8 (CONDITIONAL_JUMP)  ; LAB_00607cb8
    MOV ECX,dword ptr [EBX + 0x4]       ; 00607ca1
    MOV EBP,dword ptr [EDX + 0x4]       ; 00607ca4
    CMP ECX,EBP                         ; 00607ca7
    JL 0x00607cb3                       ; 00607ca9
        ;   XREF to: 00607cb3 (CONDITIONAL_JUMP)  ; LAB_00607cb3
    JNZ 0x00607cb8                      ; 00607cab
        ;   XREF to: 00607cb8 (CONDITIONAL_JUMP)  ; LAB_00607cb8
    MOV EBX,dword ptr [EBX]             ; 00607cad
    CMP EBX,dword ptr [EDX]             ; 00607caf
    JGE 0x00607cb8                      ; 00607cb1
        ;   XREF to: 00607cb8 (CONDITIONAL_JUMP)  ; LAB_00607cb8
    MOV EAX,0x1                         ; 00607cb3
        ;   Label: LAB_00607cb3
    POP EBP                             ; 00607cb8
        ;   Label: LAB_00607cb8
    POP ESI                             ; 00607cb9
    POP EBX                             ; 00607cba
    RET                                 ; 00607cbb

