; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b8280(undefined4 *param_1)
;
;
; XREF[2]:
;   crt_stdio.c_fread_FUN_005b87c0 at 005b8913
;   crt_unknown.c_FUN_005b8250 at 005b8256
;
; Called Functions:
;   crt_unknown.c_FUN_005be1d0
;   crt_unknown.c_FUN_005be27c
;   crt_unknown.c_FUN_005be2d0
;   crt_unknown.c_FUN_005be300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8280
        ;   Label: crt_unknown.c_FUN_005b8280
    PUSH ESI                            ; 005b8281
    PUSH EDI                            ; 005b8282
    PUSH EBP                            ; 005b8283
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8284
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8288
    CMP dword ptr [EAX + 0x8],0x0       ; 005b828b
    JNZ 0x005b829a                      ; 005b828f
        ;   XREF to: 005b829a (CONDITIONAL_JUMP)  ; LAB_005b829a
    PUSH EBX                            ; 005b8291
    CALL crt_unknown.c_FUN_005be1d0     ; 005b8292
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be1d0()
    ADD ESP,0x4                         ; 005b8297
    MOV AH,byte ptr [EBX + 0xd]         ; 005b829a
        ;   Label: LAB_005b829a
    TEST AH,0x20                        ; 005b829d
    JZ 0x005b82b4                       ; 005b82a0
        ;   XREF to: 005b82b4 (CONDITIONAL_JUMP)  ; LAB_005b82b4
    TEST AH,0x6                         ; 005b82a2
    JZ 0x005b82b4                       ; 005b82a5
        ;   XREF to: 005b82b4 (CONDITIONAL_JUMP)  ; LAB_005b82b4
    PUSH 0x2000                         ; 005b82a7
    CALL crt_unknown.c_FUN_005be27c     ; 005b82ac
        ;   XREF to: 005be27c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be27c()
    ADD ESP,0x4                         ; 005b82b1
    MOV DH,byte ptr [EBX + 0xc]         ; 005b82b4
        ;   Label: LAB_005b82b4
    AND DH,0xfb                         ; 005b82b7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b82ba
    MOV byte ptr [EBX + 0xc],DH         ; 005b82bd
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b82c0
    MOV dword ptr [EBX],EAX             ; 005b82c3
    MOV EAX,dword ptr [EBX + 0xc]       ; 005b82c5
    AND EAX,0x2400                      ; 005b82c8
    CMP EAX,0x2400                      ; 005b82cd
    JNZ 0x005b82f7                      ; 005b82d2
        ;   XREF to: 005b82f7 (CONDITIONAL_JUMP)  ; LAB_005b82f7
    MOV ECX,dword ptr [EBX + 0x10]      ; 005b82d4
    TEST ECX,ECX                        ; 005b82d7
    JNZ 0x005b82f7                      ; 005b82d9
        ;   XREF to: 005b82f7 (CONDITIONAL_JUMP)  ; LAB_005b82f7
    MOV dword ptr [EBX + 0x4],ECX       ; 005b82db
    CALL crt_unknown.c_FUN_005be2d0     ; 005b82de
        ;   XREF to: 005be2d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be2d0()
    MOV EDX,EAX                         ; 005b82e3
    CMP EAX,-0x1                        ; 005b82e5
    JZ 0x005b831a                       ; 005b82e8
        ;   XREF to: 005b831a (CONDITIONAL_JUMP)  ; LAB_005b831a
    MOV EAX,dword ptr [EBX]             ; 005b82ea
    MOV byte ptr [EAX],DL               ; 005b82ec
    MOV dword ptr [EBX + 0x4],0x1       ; 005b82ee
    JMP 0x005b833f                      ; 005b82f5
        ;   XREF to: 005b833f (UNCONDITIONAL_JUMP)  ; LAB_005b833f
    TEST byte ptr [EBX + 0xd],0x4       ; 005b82f7
        ;   Label: LAB_005b82f7
    JZ 0x005b8304                       ; 005b82fb
        ;   XREF to: 005b8304 (CONDITIONAL_JUMP)  ; LAB_005b8304
    MOV EAX,0x1                         ; 005b82fd
    JMP 0x005b8307                      ; 005b8302
        ;   XREF to: 005b8307 (UNCONDITIONAL_JUMP)  ; LAB_005b8307
    MOV EAX,dword ptr [EBX + 0x14]      ; 005b8304
        ;   Label: LAB_005b8304
    PUSH EAX                            ; 005b8307
        ;   Label: LAB_005b8307
    MOV ESI,dword ptr [EBX]             ; 005b8308
    PUSH ESI                            ; 005b830a
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b830b
    PUSH EDI                            ; 005b830e
    CALL crt_unknown.c_FUN_005be300     ; 005b830f
        ;   XREF to: 005be300 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005be300()
    ADD ESP,0xc                         ; 005b8314
    MOV dword ptr [EBX + 0x4],EAX       ; 005b8317
    MOV EBP,dword ptr [EBX + 0x4]       ; 005b831a
        ;   Label: LAB_005b831a
    TEST EBP,EBP                        ; 005b831d
    JG 0x005b833f                       ; 005b831f
        ;   XREF to: 005b833f (CONDITIONAL_JUMP)  ; LAB_005b833f
    JNZ 0x005b832f                      ; 005b8321
        ;   XREF to: 005b832f (CONDITIONAL_JUMP)  ; LAB_005b832f
    OR byte ptr [EBX + 0xc],0x10        ; 005b8323
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b8327
    POP EBP                             ; 005b832a
    POP EDI                             ; 005b832b
    POP ESI                             ; 005b832c
    POP EBX                             ; 005b832d
    RET                                 ; 005b832e
    MOV CH,byte ptr [EBX + 0xc]         ; 005b832f
        ;   Label: LAB_005b832f
    MOV dword ptr [EBX + 0x4],0x0       ; 005b8332
    OR CH,0x20                          ; 005b8339
    MOV byte ptr [EBX + 0xc],CH         ; 005b833c
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b833f
        ;   Label: LAB_005b833f
    POP EBP                             ; 005b8342
    POP EDI                             ; 005b8343
    POP ESI                             ; 005b8344
    POP EBX                             ; 005b8345
    RET                                 ; 005b8346

