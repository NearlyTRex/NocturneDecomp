; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fputc_FUN_00566cc0(int character,_FILE *file)
;
; Parameters:
; int              Stack[0x4]:4   character
; _FILE *          Stack[0x8]:4   file
;
; XREF[10]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d7df
;   core_game.cpp_FUN_0049a320 at 0049a58e
;   crt_math.c_print_error_message_FUN_005729e8 at 00572a2a
;   crt_stdio.c_fputs_FUN_00573660 at 005736be
;   crt_stdio.c_fwrite_FUN_00563a50 at 00563c0e
;   crt_unknown.c_FUN_0056adf0 at 0056adfe
;   engine_pcx.c_FUN_004f2990 at 004f2af6
;   engine_pcx.c_saveScreenRaw16_FUN_004f2620 at 004f274c
;   engine_pcx.c_saveScreenRaw32_FUN_004f27e0 at 004f28fa
;   engine_pcx.c_writePCXScanline_FUN_004f2550 at 004f2586
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_00568890
;   crt_unknown.c_FUN_00568ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566cc0
        ;   Label: crt_stdio.c_fputc_FUN_00566cc0
    PUSH ESI                            ; 00566cc1
    PUSH EDI                            ; 00566cc2
    PUSH EBP                            ; 00566cc3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00566cc4
    MOV EDX,dword ptr [EBX + 0x10]      ; 00566cc8
    PUSH EDX                            ; 00566ccb
    CALL dword ptr [0x005c1ac0]         ; 00566ccc | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00566cd2
    MOV ECX,dword ptr [EAX + 0xc]       ; 00566cd5
    ADD ESP,0x4                         ; 00566cd8
    CMP ECX,0x1                         ; 00566cdb
    JZ 0x00566d02                       ; 00566cde
        ;   XREF to: 00566d02 (CONDITIONAL_JUMP)  ; LAB_00566d02
    TEST ECX,ECX                        ; 00566ce0
    JZ 0x00566cfb                       ; 00566ce2
        ;   XREF to: 00566cfb (CONDITIONAL_JUMP)  ; LAB_00566cfb
    MOV EDI,dword ptr [EBX + 0x10]      ; 00566ce4
    PUSH EDI                            ; 00566ce7
    CALL dword ptr [0x005c1ac4]         ; 00566ce8 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00566cee
    ADD ESP,0x4                         ; 00566cf3
    POP EBP                             ; 00566cf6
    POP EDI                             ; 00566cf7
    POP ESI                             ; 00566cf8
    POP EBX                             ; 00566cf9
    RET                                 ; 00566cfa
    MOV dword ptr [EAX + 0xc],0x1       ; 00566cfb
        ;   Label: LAB_00566cfb
    TEST byte ptr [EBX + 0xc],0x2       ; 00566d02
        ;   Label: LAB_00566d02
    JNZ 0x00566d32                      ; 00566d06
        ;   XREF to: 00566d32 (CONDITIONAL_JUMP)  ; LAB_00566d32
    PUSH 0x4                            ; 00566d08
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00566d0a
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 00566d0f
    MOV CH,byte ptr [EBX + 0xc]         ; 00566d12
    MOV EAX,dword ptr [EBX + 0x10]      ; 00566d15
    OR CH,0x20                          ; 00566d18
    PUSH EAX                            ; 00566d1b
    MOV byte ptr [EBX + 0xc],CH         ; 00566d1c
    CALL dword ptr [0x005c1ac4]         ; 00566d1f | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00566d25
    ADD ESP,0x4                         ; 00566d2a
    POP EBP                             ; 00566d2d
    POP EDI                             ; 00566d2e
    POP ESI                             ; 00566d2f
    POP EBX                             ; 00566d30
    RET                                 ; 00566d31
    MOV EAX,dword ptr [EBX + 0x8]       ; 00566d32
        ;   Label: LAB_00566d32
    CMP dword ptr [EAX + 0x8],0x0       ; 00566d35
    JNZ 0x00566d44                      ; 00566d39
        ;   XREF to: 00566d44 (CONDITIONAL_JUMP)  ; LAB_00566d44
    PUSH EBX                            ; 00566d3b
    CALL crt_unknown.c_FUN_00568ed0     ; 00566d3c
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568ed0()
    ADD ESP,0x4                         ; 00566d41
    MOV EAX,dword ptr [ESP + 0x14]      ; 00566d44
        ;   Label: LAB_00566d44
    MOV ESI,0x400                       ; 00566d48
    CMP EAX,0xa                         ; 00566d4d
    JNZ 0x00566da4                      ; 00566d50
        ;   XREF to: 00566da4 (CONDITIONAL_JUMP)  ; LAB_00566da4
    MOV DL,byte ptr [EBX + 0xc]         ; 00566d52
    MOV ESI,0x600                       ; 00566d55
    TEST DL,0x40                        ; 00566d5a
    JNZ 0x00566da4                      ; 00566d5d
        ;   XREF to: 00566da4 (CONDITIONAL_JUMP)  ; LAB_00566da4
    MOV DH,byte ptr [EBX + 0xd]         ; 00566d5f
    OR DH,0x10                          ; 00566d62
    MOV EAX,dword ptr [EBX]             ; 00566d65
    MOV byte ptr [EBX + 0xd],DH         ; 00566d67
    MOV byte ptr [EAX],0xd              ; 00566d6a
    MOV EDX,dword ptr [EBX]             ; 00566d6d
    INC EDX                             ; 00566d6f
    MOV ECX,dword ptr [EBX + 0x4]       ; 00566d70
    MOV dword ptr [EBX],EDX             ; 00566d73
    INC ECX                             ; 00566d75
    MOV EDI,dword ptr [EBX + 0x14]      ; 00566d76
    MOV dword ptr [EBX + 0x4],ECX       ; 00566d79
    CMP ECX,EDI                         ; 00566d7c
    JNZ 0x00566da4                      ; 00566d7e
        ;   XREF to: 00566da4 (CONDITIONAL_JUMP)  ; LAB_00566da4
    PUSH EBX                            ; 00566d80
    CALL crt_unknown.c_FUN_00568890     ; 00566d81
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 00566d86
    TEST EAX,EAX                        ; 00566d89
    JZ 0x00566da4                       ; 00566d8b
        ;   XREF to: 00566da4 (CONDITIONAL_JUMP)  ; LAB_00566da4
    MOV EBP,dword ptr [EBX + 0x10]      ; 00566d8d
    PUSH EBP                            ; 00566d90
    CALL dword ptr [0x005c1ac4]         ; 00566d91 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00566d97
    ADD ESP,0x4                         ; 00566d9c
    POP EBP                             ; 00566d9f
    POP EDI                             ; 00566da0
    POP ESI                             ; 00566da1
    POP EBX                             ; 00566da2
    RET                                 ; 00566da3
    MOV CL,byte ptr [EBX + 0xd]         ; 00566da4
        ;   Label: LAB_00566da4
    MOV EAX,dword ptr [EBX]             ; 00566da7
    OR CL,0x10                          ; 00566da9
    MOV DL,byte ptr [ESP + 0x14]        ; 00566dac
    MOV byte ptr [EBX + 0xd],CL         ; 00566db0
    MOV byte ptr [EAX],DL               ; 00566db3
    MOV EBP,dword ptr [EBX]             ; 00566db5
    INC EBP                             ; 00566db7
    MOV EAX,dword ptr [EBX + 0x4]       ; 00566db8
    MOV dword ptr [EBX],EBP             ; 00566dbb
    INC EAX                             ; 00566dbd
    MOV EDX,dword ptr [EBX + 0xc]       ; 00566dbe
    MOV dword ptr [EBX + 0x4],EAX       ; 00566dc1
    TEST ESI,EDX                        ; 00566dc4
    JNZ 0x00566dcd                      ; 00566dc6
        ;   XREF to: 00566dcd (CONDITIONAL_JUMP)  ; LAB_00566dcd
    CMP EAX,dword ptr [EBX + 0x14]      ; 00566dc8
    JNZ 0x00566df1                      ; 00566dcb
        ;   XREF to: 00566df1 (CONDITIONAL_JUMP)  ; LAB_00566df1
    PUSH EBX                            ; 00566dcd
        ;   Label: LAB_00566dcd
    CALL crt_unknown.c_FUN_00568890     ; 00566dce
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 00566dd3
    TEST EAX,EAX                        ; 00566dd6
    JZ 0x00566df1                       ; 00566dd8
        ;   XREF to: 00566df1 (CONDITIONAL_JUMP)  ; LAB_00566df1
    MOV EDI,dword ptr [EBX + 0x10]      ; 00566dda
    PUSH EDI                            ; 00566ddd
    CALL dword ptr [0x005c1ac4]         ; 00566dde | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV EAX,0xffffffff                  ; 00566de4
    ADD ESP,0x4                         ; 00566de9
    POP EBP                             ; 00566dec
    POP EDI                             ; 00566ded
    POP ESI                             ; 00566dee
    POP EBX                             ; 00566def
    RET                                 ; 00566df0
    MOV ESI,dword ptr [EBX + 0x10]      ; 00566df1
        ;   Label: LAB_00566df1
    PUSH ESI                            ; 00566df4
    CALL dword ptr [0x005c1ac4]         ; 00566df5 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 00566dfb
    XOR EAX,EAX                         ; 00566dfe
    MOV AL,byte ptr [ESP + 0x14]        ; 00566e00
    POP EBP                             ; 00566e04
    POP EDI                             ; 00566e05
    POP ESI                             ; 00566e06
    POP EBX                             ; 00566e07
    RET                                 ; 00566e08

