; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fputc_FUN_005bab40(uint param_1,int *param_2)
;
;
; XREF[11]:
;   core_game.cpp_FUN_004b2a50 at 004b2cbe
;   core_game.cpp_FUN_004b5190 at 004b5f25
;   crt_stdio.c_fwrite_FUN_005b9690 at 005b984e
;   crt_unknown.c_FUN_005bccf0 at 005bccfe
;   engine_pcx.c_FUN_00514a30 at 00514b96
;   engine_pcx.c_saveScreenRaw16_FUN_005146c0 at 005147ec
;   engine_pcx.c_saveScreenRaw32_FUN_00514880 at 0051499a
;   engine_pcx.c_writePCXScanline_FUN_005145f0 at 00514626
;   support_trstream.cpp_FUN_0057dc70 at 0057dc8b
;   unkafter_2d.cpp_FUN_005c5760 at 005c57a2
;   ... and 1 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005be1d0
;   crt_unknown.c_FUN_005bea80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bab40
        ;   Label: crt_stdio.c_fputc_FUN_005bab40
    PUSH ESI                            ; 005bab41
    PUSH EDI                            ; 005bab42
    PUSH EBP                            ; 005bab43
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bab44
    MOV EDX,dword ptr [EBX + 0x10]      ; 005bab48
    PUSH EDX                            ; 005bab4b
    CALL dword ptr [0x0061f2a8]         ; 005bab4c | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 005bab52
    MOV ECX,dword ptr [EAX + 0xc]       ; 005bab55
    ADD ESP,0x4                         ; 005bab58
    CMP ECX,0x1                         ; 005bab5b
    JZ 0x005bab82                       ; 005bab5e
        ;   XREF to: 005bab82 (CONDITIONAL_JUMP)  ; LAB_005bab82
    TEST ECX,ECX                        ; 005bab60
    JZ 0x005bab7b                       ; 005bab62
        ;   XREF to: 005bab7b (CONDITIONAL_JUMP)  ; LAB_005bab7b
    MOV EDI,dword ptr [EBX + 0x10]      ; 005bab64
    PUSH EDI                            ; 005bab67
    CALL dword ptr [0x0061f2ac]         ; 005bab68 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005bab6e
    ADD ESP,0x4                         ; 005bab73
    POP EBP                             ; 005bab76
    POP EDI                             ; 005bab77
    POP ESI                             ; 005bab78
    POP EBX                             ; 005bab79
    RET                                 ; 005bab7a
    MOV dword ptr [EAX + 0xc],0x1       ; 005bab7b
        ;   Label: LAB_005bab7b
    TEST byte ptr [EBX + 0xc],0x2       ; 005bab82
        ;   Label: LAB_005bab82
    JNZ 0x005babb2                      ; 005bab86
        ;   XREF to: 005babb2 (CONDITIONAL_JUMP)  ; LAB_005babb2
    PUSH 0x4                            ; 005bab88
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bab8a
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005bab8f
    MOV CH,byte ptr [EBX + 0xc]         ; 005bab92
    MOV EAX,dword ptr [EBX + 0x10]      ; 005bab95
    OR CH,0x20                          ; 005bab98
    PUSH EAX                            ; 005bab9b
    MOV byte ptr [EBX + 0xc],CH         ; 005bab9c
    CALL dword ptr [0x0061f2ac]         ; 005bab9f | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005baba5
    ADD ESP,0x4                         ; 005babaa
    POP EBP                             ; 005babad
    POP EDI                             ; 005babae
    POP ESI                             ; 005babaf
    POP EBX                             ; 005babb0
    RET                                 ; 005babb1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005babb2
        ;   Label: LAB_005babb2
    CMP dword ptr [EAX + 0x8],0x0       ; 005babb5
    JNZ 0x005babc4                      ; 005babb9
        ;   XREF to: 005babc4 (CONDITIONAL_JUMP)  ; LAB_005babc4
    PUSH EBX                            ; 005babbb
    CALL crt_unknown.c_FUN_005be1d0     ; 005babbc
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be1d0()
    ADD ESP,0x4                         ; 005babc1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005babc4
        ;   Label: LAB_005babc4
    MOV ESI,0x400                       ; 005babc8
    CMP EAX,0xa                         ; 005babcd
    JNZ 0x005bac24                      ; 005babd0
        ;   XREF to: 005bac24 (CONDITIONAL_JUMP)  ; LAB_005bac24
    MOV DL,byte ptr [EBX + 0xc]         ; 005babd2
    MOV ESI,0x600                       ; 005babd5
    TEST DL,0x40                        ; 005babda
    JNZ 0x005bac24                      ; 005babdd
        ;   XREF to: 005bac24 (CONDITIONAL_JUMP)  ; LAB_005bac24
    MOV DH,byte ptr [EBX + 0xd]         ; 005babdf
    OR DH,0x10                          ; 005babe2
    MOV EAX,dword ptr [EBX]             ; 005babe5
    MOV byte ptr [EBX + 0xd],DH         ; 005babe7
    MOV byte ptr [EAX],0xd              ; 005babea
    MOV EDX,dword ptr [EBX]             ; 005babed
    INC EDX                             ; 005babef
    MOV ECX,dword ptr [EBX + 0x4]       ; 005babf0
    MOV dword ptr [EBX],EDX             ; 005babf3
    INC ECX                             ; 005babf5
    MOV EDI,dword ptr [EBX + 0x14]      ; 005babf6
    MOV dword ptr [EBX + 0x4],ECX       ; 005babf9
    CMP ECX,EDI                         ; 005babfc
    JNZ 0x005bac24                      ; 005babfe
        ;   XREF to: 005bac24 (CONDITIONAL_JUMP)  ; LAB_005bac24
    PUSH EBX                            ; 005bac00
    CALL crt_unknown.c_FUN_005bea80     ; 005bac01
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005bac06
    TEST EAX,EAX                        ; 005bac09
    JZ 0x005bac24                       ; 005bac0b
        ;   XREF to: 005bac24 (CONDITIONAL_JUMP)  ; LAB_005bac24
    MOV EBP,dword ptr [EBX + 0x10]      ; 005bac0d
    PUSH EBP                            ; 005bac10
    CALL dword ptr [0x0061f2ac]         ; 005bac11 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005bac17
    ADD ESP,0x4                         ; 005bac1c
    POP EBP                             ; 005bac1f
    POP EDI                             ; 005bac20
    POP ESI                             ; 005bac21
    POP EBX                             ; 005bac22
    RET                                 ; 005bac23
    MOV CL,byte ptr [EBX + 0xd]         ; 005bac24
        ;   Label: LAB_005bac24
    MOV EAX,dword ptr [EBX]             ; 005bac27
    OR CL,0x10                          ; 005bac29
    MOV DL,byte ptr [ESP + 0x14]        ; 005bac2c
    MOV byte ptr [EBX + 0xd],CL         ; 005bac30
    MOV byte ptr [EAX],DL               ; 005bac33
    MOV EBP,dword ptr [EBX]             ; 005bac35
    INC EBP                             ; 005bac37
    MOV EAX,dword ptr [EBX + 0x4]       ; 005bac38
    MOV dword ptr [EBX],EBP             ; 005bac3b
    INC EAX                             ; 005bac3d
    MOV EDX,dword ptr [EBX + 0xc]       ; 005bac3e
    MOV dword ptr [EBX + 0x4],EAX       ; 005bac41
    TEST ESI,EDX                        ; 005bac44
    JNZ 0x005bac4d                      ; 005bac46
        ;   XREF to: 005bac4d (CONDITIONAL_JUMP)  ; LAB_005bac4d
    CMP EAX,dword ptr [EBX + 0x14]      ; 005bac48
    JNZ 0x005bac71                      ; 005bac4b
        ;   XREF to: 005bac71 (CONDITIONAL_JUMP)  ; LAB_005bac71
    PUSH EBX                            ; 005bac4d
        ;   Label: LAB_005bac4d
    CALL crt_unknown.c_FUN_005bea80     ; 005bac4e
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bea80()
    ADD ESP,0x4                         ; 005bac53
    TEST EAX,EAX                        ; 005bac56
    JZ 0x005bac71                       ; 005bac58
        ;   XREF to: 005bac71 (CONDITIONAL_JUMP)  ; LAB_005bac71
    MOV EDI,dword ptr [EBX + 0x10]      ; 005bac5a
    PUSH EDI                            ; 005bac5d
    CALL dword ptr [0x0061f2ac]         ; 005bac5e | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    MOV EAX,0xffffffff                  ; 005bac64
    ADD ESP,0x4                         ; 005bac69
    POP EBP                             ; 005bac6c
    POP EDI                             ; 005bac6d
    POP ESI                             ; 005bac6e
    POP EBX                             ; 005bac6f
    RET                                 ; 005bac70
    MOV ESI,dword ptr [EBX + 0x10]      ; 005bac71
        ;   Label: LAB_005bac71
    PUSH ESI                            ; 005bac74
    CALL dword ptr [0x0061f2ac]         ; 005bac75 | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
    ADD ESP,0x4                         ; 005bac7b
    XOR EAX,EAX                         ; 005bac7e
    MOV AL,byte ptr [ESP + 0x14]        ; 005bac80
    POP EBP                             ; 005bac84
    POP EDI                             ; 005bac85
    POP ESI                             ; 005bac86
    POP EBX                             ; 005bac87
    RET                                 ; 005bac88

