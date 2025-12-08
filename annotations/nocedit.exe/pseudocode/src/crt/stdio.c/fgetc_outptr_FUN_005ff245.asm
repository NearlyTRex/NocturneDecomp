; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_fgetc_outptr_FUN_005ff245(FILE * stream, uchar * output_byte)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream
; uchar *          Stack[0x8]:4   output_byte
;
; XREF[4]:
;   core_cloth.cpp_FUN_0043e4c0 at 0043e4e5
;   support_codec.cpp_CCodec_process_FUN_0043ea10 at 0043ea48
;   support_codec.cpp_CLZWCompress_process_FUN_0043f360 at 0043f3b1
;   support_codec.cpp_readBitsFromStream_FUN_0043e530 at 0043e687
;
; Called Functions:
;   crt_stdio.c_fgetcInternal_FUN_00605fad
;   crt_stdio.c_stream_setup_FUN_00605f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff245
        ;   Label: crt_stdio.c_fgetc_outptr_FUN_005ff245
    PUSH ESI                            ; 005ff246
    PUSH EDI                            ; 005ff247
    PUSH EBP                            ; 005ff248
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ff249
    MOV EDX,dword ptr [EBX]             ; 005ff24d
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff24f
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10] ; 005ff252
    MOV EAX,EBX                         ; 005ff256
    TEST ECX,ECX                        ; 005ff258
    JNZ 0x005ff269                      ; 005ff25a | LAB_005ff269
        ;   XREF to: 005ff269 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX]             ; 005ff25c
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff25e
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005ff261
    TEST EDX,EDX                        ; 005ff265
    JZ 0x005ff278                       ; 005ff267 | LAB_005ff278
        ;   XREF to: 005ff278 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 005ff269
        ;   Label: LAB_005ff269
    PUSH EAX                            ; 005ff26b
    CALL crt_stdio.c_stream_setup_FUN_00605f20 ; 005ff26c | int crt_stdio.c_stream_setup_FUN_00605f20(FILE * stream, int operation_type)
        ;   XREF to: 00605f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff271
    TEST EAX,EAX                        ; 005ff274
    JZ 0x005ff2d2                       ; 005ff276 | LAB_005ff2d2
        ;   XREF to: 005ff2d2 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 005ff278
        ;   Label: LAB_005ff278
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff27a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005ff27d
    MOV ESI,dword ptr [EAX + 0x10]      ; 005ff281
    MOV EDI,dword ptr [EAX + 0x14]      ; 005ff284
    SUB ESI,EDI                         ; 005ff287
    JZ 0x005ff2c2                       ; 005ff289 | LAB_005ff2c2
        ;   XREF to: 005ff2c2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x10]      ; 005ff28b
    MOV ESI,EAX                         ; 005ff28e
    CMP EDI,ECX                         ; 005ff290
    JNC 0x005ff2b1                      ; 005ff292 | LAB_005ff2b1
        ;   XREF to: 005ff2b1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI + 0x14]      ; 005ff294
        ;   Label: LAB_005ff294
    LEA EDX,[EAX + 0x1]                 ; 005ff297
    MOV dword ptr [ESI + 0x14],EDX      ; 005ff29a
    MOV AL,byte ptr [EAX]               ; 005ff29d
    AND EAX,0xff                        ; 005ff29f
    MOV EDX,dword ptr [ESP + 0x18]      ; 005ff2a4
        ;   Label: LAB_005ff2a4
    MOV byte ptr [EDX],AL               ; 005ff2a8
    MOV EAX,EBX                         ; 005ff2aa
        ;   Label: LAB_005ff2aa
    POP EBP                             ; 005ff2ac
    POP EDI                             ; 005ff2ad
    POP ESI                             ; 005ff2ae
    POP EBX                             ; 005ff2af
    RET                                 ; 005ff2b0
    PUSH EAX                            ; 005ff2b1
        ;   Label: LAB_005ff2b1
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ff2b2
    CALL dword ptr [EDX + 0x10]         ; 005ff2b5
    ADD ESP,0x4                         ; 005ff2b8
    CMP EAX,-0x1                        ; 005ff2bb
    JNZ 0x005ff294                      ; 005ff2be | LAB_005ff294
        ;   XREF to: 005ff294 (CONDITIONAL_JUMP)
    JMP 0x005ff2a4                      ; 005ff2c0 | LAB_005ff2a4
        ;   XREF to: 005ff2a4 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x18]      ; 005ff2c2
        ;   Label: LAB_005ff2c2
    PUSH EBP                            ; 005ff2c6
    PUSH EBX                            ; 005ff2c7
    CALL crt_stdio.c_fgetcInternal_FUN_00605fad ; 005ff2c8 | FILE * crt_stdio.c_fgetcInternal_FUN_00605fad(FILE * stream, byte * output_byte)
        ;   XREF to: 00605fad (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005ff2cd
    JMP 0x005ff2aa                      ; 005ff2d0 | LAB_005ff2aa
        ;   XREF to: 005ff2aa (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x4],EAX       ; 005ff2d2
        ;   Label: LAB_005ff2d2
    JMP 0x005ff2aa                      ; 005ff2d5 | LAB_005ff2aa
        ;   XREF to: 005ff2aa (UNCONDITIONAL_JUMP)

