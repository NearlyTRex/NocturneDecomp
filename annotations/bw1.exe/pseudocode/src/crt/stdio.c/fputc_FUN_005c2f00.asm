; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fputc_FUN_005c2f00(uint param_1,int *param_2)
;
;
; XREF[11]:
;   core_game.cpp_FUN_004cb950 at 004cbbbe
;   core_game.cpp_FUN_004ce580 at 004cf379
;   crt_stdio.c_fwrite_FUN_005c1a70 at 005c1c2e
;   crt_unknown.c_FUN_005c4fc0 at 005c4fce
;   engine_pcx.c_FUN_00535d80 at 00535ee6
;   engine_pcx.c_saveScreenRaw16_FUN_00535a10 at 00535b3c
;   engine_pcx.c_saveScreenRaw32_FUN_00535bd0 at 00535cea
;   engine_pcx.c_writePCXScanline_FUN_00535940 at 00535976
;   support_trstream.cpp_FUN_005a18c0 at 005a18db
;   unkafter_2d.cpp_FUN_005cda60 at 005cdaa2
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626600 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626604 = 005c50d4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_unknown.c_FUN_005c50d4
;   crt_unknown.c_FUN_005c64a0
;   crt_unknown.c_FUN_005c6d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2f00
        ;   Label: crt_stdio.c_fputc_FUN_005c2f00
    PUSH ESI                            ; 005c2f01
    PUSH EDI                            ; 005c2f02
    PUSH EBP                            ; 005c2f03
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c2f04
    MOV EDX,dword ptr [EBX + 0x10]      ; 005c2f08
    PUSH EDX                            ; 005c2f0b
    CALL dword ptr [0x00626600]         ; 005c2f0c | PTR_crt_unknown.c_FUN_005c50d4_00626600
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c2f12
    MOV ECX,dword ptr [EAX + 0xc]       ; 005c2f15
    ADD ESP,0x4                         ; 005c2f18
    CMP ECX,0x1                         ; 005c2f1b
    JZ 0x005c2f42                       ; 005c2f1e
        ;   XREF to: 005c2f42 (CONDITIONAL_JUMP)  ; LAB_005c2f42
    TEST ECX,ECX                        ; 005c2f20
    JZ 0x005c2f3b                       ; 005c2f22
        ;   XREF to: 005c2f3b (CONDITIONAL_JUMP)  ; LAB_005c2f3b
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c2f24
    PUSH EDI                            ; 005c2f27
    CALL dword ptr [0x00626604]         ; 005c2f28 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c2f2e
    ADD ESP,0x4                         ; 005c2f33
    POP EBP                             ; 005c2f36
    POP EDI                             ; 005c2f37
    POP ESI                             ; 005c2f38
    POP EBX                             ; 005c2f39
    RET                                 ; 005c2f3a
    MOV dword ptr [EAX + 0xc],0x1       ; 005c2f3b
        ;   Label: LAB_005c2f3b
    TEST byte ptr [EBX + 0xc],0x2       ; 005c2f42
        ;   Label: LAB_005c2f42
    JNZ 0x005c2f72                      ; 005c2f46
        ;   XREF to: 005c2f72 (CONDITIONAL_JUMP)  ; LAB_005c2f72
    PUSH 0x4                            ; 005c2f48
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c2f4a
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c2f4f
    MOV CH,byte ptr [EBX + 0xc]         ; 005c2f52
    MOV EAX,dword ptr [EBX + 0x10]      ; 005c2f55
    OR CH,0x20                          ; 005c2f58
    PUSH EAX                            ; 005c2f5b
    MOV byte ptr [EBX + 0xc],CH         ; 005c2f5c
    CALL dword ptr [0x00626604]         ; 005c2f5f | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c2f65
    ADD ESP,0x4                         ; 005c2f6a
    POP EBP                             ; 005c2f6d
    POP EDI                             ; 005c2f6e
    POP ESI                             ; 005c2f6f
    POP EBX                             ; 005c2f70
    RET                                 ; 005c2f71
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c2f72
        ;   Label: LAB_005c2f72
    CMP dword ptr [EAX + 0x8],0x0       ; 005c2f75
    JNZ 0x005c2f84                      ; 005c2f79
        ;   XREF to: 005c2f84 (CONDITIONAL_JUMP)  ; LAB_005c2f84
    PUSH EBX                            ; 005c2f7b
    CALL crt_unknown.c_FUN_005c64a0     ; 005c2f7c
        ;   XREF to: 005c64a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c64a0()
    ADD ESP,0x4                         ; 005c2f81
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c2f84
        ;   Label: LAB_005c2f84
    MOV ESI,0x400                       ; 005c2f88
    CMP EAX,0xa                         ; 005c2f8d
    JNZ 0x005c2fe4                      ; 005c2f90
        ;   XREF to: 005c2fe4 (CONDITIONAL_JUMP)  ; LAB_005c2fe4
    MOV DL,byte ptr [EBX + 0xc]         ; 005c2f92
    MOV ESI,0x600                       ; 005c2f95
    TEST DL,0x40                        ; 005c2f9a
    JNZ 0x005c2fe4                      ; 005c2f9d
        ;   XREF to: 005c2fe4 (CONDITIONAL_JUMP)  ; LAB_005c2fe4
    MOV DH,byte ptr [EBX + 0xd]         ; 005c2f9f
    OR DH,0x10                          ; 005c2fa2
    MOV EAX,dword ptr [EBX]             ; 005c2fa5
    MOV byte ptr [EBX + 0xd],DH         ; 005c2fa7
    MOV byte ptr [EAX],0xd              ; 005c2faa
    MOV EDX,dword ptr [EBX]             ; 005c2fad
    INC EDX                             ; 005c2faf
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c2fb0
    MOV dword ptr [EBX],EDX             ; 005c2fb3
    INC ECX                             ; 005c2fb5
    MOV EDI,dword ptr [EBX + 0x14]      ; 005c2fb6
    MOV dword ptr [EBX + 0x4],ECX       ; 005c2fb9
    CMP ECX,EDI                         ; 005c2fbc
    JNZ 0x005c2fe4                      ; 005c2fbe
        ;   XREF to: 005c2fe4 (CONDITIONAL_JUMP)  ; LAB_005c2fe4
    PUSH EBX                            ; 005c2fc0
    CALL crt_unknown.c_FUN_005c6d50     ; 005c2fc1
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c2fc6
    TEST EAX,EAX                        ; 005c2fc9
    JZ 0x005c2fe4                       ; 005c2fcb
        ;   XREF to: 005c2fe4 (CONDITIONAL_JUMP)  ; LAB_005c2fe4
    MOV EBP,dword ptr [EBX + 0x10]      ; 005c2fcd
    PUSH EBP                            ; 005c2fd0
    CALL dword ptr [0x00626604]         ; 005c2fd1 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c2fd7
    ADD ESP,0x4                         ; 005c2fdc
    POP EBP                             ; 005c2fdf
    POP EDI                             ; 005c2fe0
    POP ESI                             ; 005c2fe1
    POP EBX                             ; 005c2fe2
    RET                                 ; 005c2fe3
    MOV CL,byte ptr [EBX + 0xd]         ; 005c2fe4
        ;   Label: LAB_005c2fe4
    MOV EAX,dword ptr [EBX]             ; 005c2fe7
    OR CL,0x10                          ; 005c2fe9
    MOV DL,byte ptr [ESP + 0x14]        ; 005c2fec
    MOV byte ptr [EBX + 0xd],CL         ; 005c2ff0
    MOV byte ptr [EAX],DL               ; 005c2ff3
    MOV EBP,dword ptr [EBX]             ; 005c2ff5
    INC EBP                             ; 005c2ff7
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c2ff8
    MOV dword ptr [EBX],EBP             ; 005c2ffb
    INC EAX                             ; 005c2ffd
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c2ffe
    MOV dword ptr [EBX + 0x4],EAX       ; 005c3001
    TEST ESI,EDX                        ; 005c3004
    JNZ 0x005c300d                      ; 005c3006
        ;   XREF to: 005c300d (CONDITIONAL_JUMP)  ; LAB_005c300d
    CMP EAX,dword ptr [EBX + 0x14]      ; 005c3008
    JNZ 0x005c3031                      ; 005c300b
        ;   XREF to: 005c3031 (CONDITIONAL_JUMP)  ; LAB_005c3031
    PUSH EBX                            ; 005c300d
        ;   Label: LAB_005c300d
    CALL crt_unknown.c_FUN_005c6d50     ; 005c300e
        ;   XREF to: 005c6d50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6d50()
    ADD ESP,0x4                         ; 005c3013
    TEST EAX,EAX                        ; 005c3016
    JZ 0x005c3031                       ; 005c3018
        ;   XREF to: 005c3031 (CONDITIONAL_JUMP)  ; LAB_005c3031
    MOV EDI,dword ptr [EBX + 0x10]      ; 005c301a
    PUSH EDI                            ; 005c301d
    CALL dword ptr [0x00626604]         ; 005c301e | PTR_crt_unknown.c_FUN_005c50d4_00626604
    MOV EAX,0xffffffff                  ; 005c3024
    ADD ESP,0x4                         ; 005c3029
    POP EBP                             ; 005c302c
    POP EDI                             ; 005c302d
    POP ESI                             ; 005c302e
    POP EBX                             ; 005c302f
    RET                                 ; 005c3030
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c3031
        ;   Label: LAB_005c3031
    PUSH ESI                            ; 005c3034
    CALL dword ptr [0x00626604]         ; 005c3035 | PTR_crt_unknown.c_FUN_005c50d4_00626604
    ADD ESP,0x4                         ; 005c303b
    XOR EAX,EAX                         ; 005c303e
    MOV AL,byte ptr [ESP + 0x14]        ; 005c3040
    POP EBP                             ; 005c3044
    POP EDI                             ; 005c3045
    POP ESI                             ; 005c3046
    POP EBX                             ; 005c3047
    RET                                 ; 005c3048

