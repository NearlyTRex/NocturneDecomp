; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fputc_FUN_005a5d70(uint param_1,int *param_2)
;
;
; XREF[11]:
;   core_game.cpp_FUN_004b6f30 at 004b7d29
;   core_game.cpp_captureDebugMovieFrame_FUN_004b3e50 at 004b40be
;   crt_stdio.c_fwrite_FUN_005a48e0 at 005a4a9e
;   crt_unknown.c_FUN_005a7e30 at 005a7e3e
;   crt_unknown.c_FUN_005b07f0 at 005b0832
;   crt_unknown.c_FUN_005b0ee0 at 005b0f3e
;   engine_pcx.c_saveScreenRaw16_FUN_0050d6f0 at 0050d81c
;   engine_pcx.c_saveScreenRaw32_FUN_0050d8b0 at 0050d9ca
;   engine_pcx.c_saveScreenshotGeneral_FUN_0050da60 at 0050dbc6
;   engine_pcx.c_writePCXScanline_FUN_0050d620 at 0050d656
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005a9310
;   crt_unknown.c_FUN_005a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5d70
        ;   Label: crt_stdio.c_fputc_FUN_005a5d70
    PUSH ESI                            ; 005a5d71
    PUSH EDI                            ; 005a5d72
    PUSH EBP                            ; 005a5d73
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a5d74
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a5d78
    PUSH EDX                            ; 005a5d7b
    CALL dword ptr [0x006079a4]         ; 005a5d7c | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a5d82
    MOV ECX,dword ptr [EAX + 0xc]       ; 005a5d85
    ADD ESP,0x4                         ; 005a5d88
    CMP ECX,0x1                         ; 005a5d8b
    JZ 0x005a5db2                       ; 005a5d8e
        ;   XREF to: 005a5db2 (CONDITIONAL_JUMP)  ; LAB_005a5db2
    TEST ECX,ECX                        ; 005a5d90
    JZ 0x005a5dab                       ; 005a5d92
        ;   XREF to: 005a5dab (CONDITIONAL_JUMP)  ; LAB_005a5dab
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a5d94
    PUSH EDI                            ; 005a5d97
    CALL dword ptr [0x006079a8]         ; 005a5d98 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0xffffffff                  ; 005a5d9e
    ADD ESP,0x4                         ; 005a5da3
    POP EBP                             ; 005a5da6
    POP EDI                             ; 005a5da7
    POP ESI                             ; 005a5da8
    POP EBX                             ; 005a5da9
    RET                                 ; 005a5daa
    MOV dword ptr [EAX + 0xc],0x1       ; 005a5dab
        ;   Label: LAB_005a5dab
    TEST byte ptr [EBX + 0xc],0x2       ; 005a5db2
        ;   Label: LAB_005a5db2
    JNZ 0x005a5de2                      ; 005a5db6
        ;   XREF to: 005a5de2 (CONDITIONAL_JUMP)  ; LAB_005a5de2
    PUSH 0x4                            ; 005a5db8
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005a5dba
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    ADD ESP,0x4                         ; 005a5dbf
    MOV CH,byte ptr [EBX + 0xc]         ; 005a5dc2
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a5dc5
    OR CH,0x20                          ; 005a5dc8
    PUSH EAX                            ; 005a5dcb
    MOV byte ptr [EBX + 0xc],CH         ; 005a5dcc
    CALL dword ptr [0x006079a8]         ; 005a5dcf | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0xffffffff                  ; 005a5dd5
    ADD ESP,0x4                         ; 005a5dda
    POP EBP                             ; 005a5ddd
    POP EDI                             ; 005a5dde
    POP ESI                             ; 005a5ddf
    POP EBX                             ; 005a5de0
    RET                                 ; 005a5de1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a5de2
        ;   Label: LAB_005a5de2
    CMP dword ptr [EAX + 0x8],0x0       ; 005a5de5
    JNZ 0x005a5df4                      ; 005a5de9
        ;   XREF to: 005a5df4 (CONDITIONAL_JUMP)  ; LAB_005a5df4
    PUSH EBX                            ; 005a5deb
    CALL crt_unknown.c_FUN_005a9310     ; 005a5dec
        ;   XREF to: 005a9310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9310()
    ADD ESP,0x4                         ; 005a5df1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a5df4
        ;   Label: LAB_005a5df4
    MOV ESI,0x400                       ; 005a5df8
    CMP EAX,0xa                         ; 005a5dfd
    JNZ 0x005a5e54                      ; 005a5e00
        ;   XREF to: 005a5e54 (CONDITIONAL_JUMP)  ; LAB_005a5e54
    MOV DL,byte ptr [EBX + 0xc]         ; 005a5e02
    MOV ESI,0x600                       ; 005a5e05
    TEST DL,0x40                        ; 005a5e0a
    JNZ 0x005a5e54                      ; 005a5e0d
        ;   XREF to: 005a5e54 (CONDITIONAL_JUMP)  ; LAB_005a5e54
    MOV DH,byte ptr [EBX + 0xd]         ; 005a5e0f
    OR DH,0x10                          ; 005a5e12
    MOV EAX,dword ptr [EBX]             ; 005a5e15
    MOV byte ptr [EBX + 0xd],DH         ; 005a5e17
    MOV byte ptr [EAX],0xd              ; 005a5e1a
    MOV EDX,dword ptr [EBX]             ; 005a5e1d
    INC EDX                             ; 005a5e1f
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a5e20
    MOV dword ptr [EBX],EDX             ; 005a5e23
    INC ECX                             ; 005a5e25
    MOV EDI,dword ptr [EBX + 0x14]      ; 005a5e26
    MOV dword ptr [EBX + 0x4],ECX       ; 005a5e29
    CMP ECX,EDI                         ; 005a5e2c
    JNZ 0x005a5e54                      ; 005a5e2e
        ;   XREF to: 005a5e54 (CONDITIONAL_JUMP)  ; LAB_005a5e54
    PUSH EBX                            ; 005a5e30
    CALL crt_unknown.c_FUN_005a9bc0     ; 005a5e31
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a5e36
    TEST EAX,EAX                        ; 005a5e39
    JZ 0x005a5e54                       ; 005a5e3b
        ;   XREF to: 005a5e54 (CONDITIONAL_JUMP)  ; LAB_005a5e54
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a5e3d
    PUSH EBP                            ; 005a5e40
    CALL dword ptr [0x006079a8]         ; 005a5e41 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0xffffffff                  ; 005a5e47
    ADD ESP,0x4                         ; 005a5e4c
    POP EBP                             ; 005a5e4f
    POP EDI                             ; 005a5e50
    POP ESI                             ; 005a5e51
    POP EBX                             ; 005a5e52
    RET                                 ; 005a5e53
    MOV CL,byte ptr [EBX + 0xd]         ; 005a5e54
        ;   Label: LAB_005a5e54
    MOV EAX,dword ptr [EBX]             ; 005a5e57
    OR CL,0x10                          ; 005a5e59
    MOV DL,byte ptr [ESP + 0x14]        ; 005a5e5c
    MOV byte ptr [EBX + 0xd],CL         ; 005a5e60
    MOV byte ptr [EAX],DL               ; 005a5e63
    MOV EBP,dword ptr [EBX]             ; 005a5e65
    INC EBP                             ; 005a5e67
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a5e68
    MOV dword ptr [EBX],EBP             ; 005a5e6b
    INC EAX                             ; 005a5e6d
    MOV EDX,dword ptr [EBX + 0xc]       ; 005a5e6e
    MOV dword ptr [EBX + 0x4],EAX       ; 005a5e71
    TEST ESI,EDX                        ; 005a5e74
    JNZ 0x005a5e7d                      ; 005a5e76
        ;   XREF to: 005a5e7d (CONDITIONAL_JUMP)  ; LAB_005a5e7d
    CMP EAX,dword ptr [EBX + 0x14]      ; 005a5e78
    JNZ 0x005a5ea1                      ; 005a5e7b
        ;   XREF to: 005a5ea1 (CONDITIONAL_JUMP)  ; LAB_005a5ea1
    PUSH EBX                            ; 005a5e7d
        ;   Label: LAB_005a5e7d
    CALL crt_unknown.c_FUN_005a9bc0     ; 005a5e7e
        ;   XREF to: 005a9bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9bc0()
    ADD ESP,0x4                         ; 005a5e83
    TEST EAX,EAX                        ; 005a5e86
    JZ 0x005a5ea1                       ; 005a5e88
        ;   XREF to: 005a5ea1 (CONDITIONAL_JUMP)  ; LAB_005a5ea1
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a5e8a
    PUSH EDI                            ; 005a5e8d
    CALL dword ptr [0x006079a8]         ; 005a5e8e | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    MOV EAX,0xffffffff                  ; 005a5e94
    ADD ESP,0x4                         ; 005a5e99
    POP EBP                             ; 005a5e9c
    POP EDI                             ; 005a5e9d
    POP ESI                             ; 005a5e9e
    POP EBX                             ; 005a5e9f
    RET                                 ; 005a5ea0
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a5ea1
        ;   Label: LAB_005a5ea1
    PUSH ESI                            ; 005a5ea4
    CALL dword ptr [0x006079a8]         ; 005a5ea5 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005a5eab
    XOR EAX,EAX                         ; 005a5eae
    MOV AL,byte ptr [ESP + 0x14]        ; 005a5eb0
    POP EBP                             ; 005a5eb4
    POP EDI                             ; 005a5eb5
    POP ESI                             ; 005a5eb6
    POP EBX                             ; 005a5eb7
    RET                                 ; 005a5eb8

