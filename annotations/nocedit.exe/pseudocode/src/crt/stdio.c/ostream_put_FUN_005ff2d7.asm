; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ostream * __cdecl crt_stdio_c_ostream_put_FUN_005ff2d7(ostream *this_ptr,int character)
;
; Parameters:
; ostream *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[4]:
;   support_codec.cpp_CCodec_process_FUN_0043ea10 at 0043ea6c
;   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 at 0043f24f
;   support_codec.cpp_flushBitBuffer_FUN_0043e7e0 at 0043e826
;   support_codec.cpp_writeBitsToStream_FUN_0043e6c0 at 0043e760
;
; Called Functions:
;   crt_stdio.c_prepare_stream_for_write_FUN_00606055
;   crt_stdio.c_reportStreamError_FUN_00606020
;   crt_stdio.c_stream_flush_FUN_006060bb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ff2d7
        ;   Label: crt_stdio.c_ostream_put_FUN_005ff2d7
    PUSH ESI                            ; 005ff2d8
    SUB ESP,0x4                         ; 005ff2d9
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ff2dc
    MOV EDX,dword ptr [EBX]             ; 005ff2e0
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff2e2
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x10] ; 005ff2e5
    MOV EAX,EBX                         ; 005ff2e9
    TEST ECX,ECX                        ; 005ff2eb
    JNZ 0x005ff355                      ; 005ff2ed
        ;   XREF to: 005ff355 (CONDITIONAL_JUMP)  ; LAB_005ff355
    MOV EDX,dword ptr [EBX]             ; 005ff2ef
    MOV EDX,dword ptr [EDX + 0x4]       ; 005ff2f1
    ADD EDX,EBX                         ; 005ff2f4
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ff2f6
    TEST ECX,ECX                        ; 005ff2f9
    JNZ 0x005ff35d                      ; 005ff2fb
        ;   XREF to: 005ff35d (CONDITIONAL_JUMP)  ; LAB_005ff35d
    MOV EDX,dword ptr [EDX + 0xc]       ; 005ff2fd
    TEST DH,0x40                        ; 005ff300
    JNZ 0x005ff35d                      ; 005ff303
        ;   XREF to: 005ff35d (CONDITIONAL_JUMP)  ; LAB_005ff35d
    MOV EAX,dword ptr [EBX]             ; 005ff305
        ;   Label: LAB_005ff305
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff307
    XOR ECX,ECX                         ; 005ff30a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005ff30c
    MOV CL,byte ptr [ESP + 0x14]        ; 005ff310
    MOV EDX,dword ptr [EAX + 0x20]      ; 005ff314
    MOV ESI,dword ptr [EAX + 0x1c]      ; 005ff317
    MOV dword ptr [ESP],ECX             ; 005ff31a
    CMP EDX,ESI                         ; 005ff31d
    JNC 0x005ff36c                      ; 005ff31f
        ;   XREF to: 005ff36c (CONDITIONAL_JUMP)  ; LAB_005ff36c
    LEA ECX,[EDX + 0x1]                 ; 005ff321
    MOV dword ptr [EAX + 0x20],ECX      ; 005ff324
    MOV AL,byte ptr [ESP]               ; 005ff327
    MOV byte ptr [EDX],AL               ; 005ff32a
    XOR EAX,EAX                         ; 005ff32c
    MOV AL,byte ptr [EDX]               ; 005ff32e
    CMP EAX,-0x1                        ; 005ff330
        ;   Label: LAB_005ff330
    JNZ 0x005ff347                      ; 005ff333
        ;   XREF to: 005ff347 (CONDITIONAL_JUMP)  ; LAB_005ff347
    MOV EAX,dword ptr [EBX]             ; 005ff335
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff337
    PUSH 0x2                            ; 005ff33a
    ADD EAX,EBX                         ; 005ff33c
    PUSH EAX                            ; 005ff33e
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 005ff33f
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 005ff344
    MOV EAX,dword ptr [EBX]             ; 005ff347
        ;   Label: LAB_005ff347
    MOV EAX,dword ptr [EAX + 0x4]       ; 005ff349
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 005ff34c
    TEST AH,0x20                        ; 005ff350
    JNZ 0x005ff379                      ; 005ff353
        ;   XREF to: 005ff379 (CONDITIONAL_JUMP)  ; LAB_005ff379
    MOV EAX,EBX                         ; 005ff355
        ;   Label: LAB_005ff355
    ADD ESP,0x4                         ; 005ff357
    POP ESI                             ; 005ff35a
    POP EBX                             ; 005ff35b
    RET                                 ; 005ff35c
    PUSH EAX                            ; 005ff35d
        ;   Label: LAB_005ff35d
    CALL crt_stdio.c_prepare_stream_for_write_FUN_00606055 ; 005ff35e
        ;   XREF to: 00606055 (UNCONDITIONAL_CALL)  ; BOOL crt_stdio.c_prepare_stream_for_write_FUN_00606055(_FILE * stream)
    ADD ESP,0x4                         ; 005ff363
    TEST EAX,EAX                        ; 005ff366
    JNZ 0x005ff305                      ; 005ff368
        ;   XREF to: 005ff305 (CONDITIONAL_JUMP)  ; LAB_005ff305
    JMP 0x005ff355                      ; 005ff36a
        ;   XREF to: 005ff355 (UNCONDITIONAL_JUMP)  ; LAB_005ff355
    PUSH ECX                            ; 005ff36c
        ;   Label: LAB_005ff36c
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ff36d
    PUSH EAX                            ; 005ff370
    CALL dword ptr [EDX + 0xc]          ; 005ff371
    ADD ESP,0x8                         ; 005ff374
    JMP 0x005ff330                      ; 005ff377
        ;   XREF to: 005ff330 (UNCONDITIONAL_JUMP)  ; LAB_005ff330
    PUSH EBX                            ; 005ff379
        ;   Label: LAB_005ff379
    CALL crt_stdio.c_stream_flush_FUN_006060bb ; 005ff37a
        ;   XREF to: 006060bb (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_flush_FUN_006060bb(_FILE * stream)
    ADD ESP,0x4                         ; 005ff37f
    JMP 0x005ff355                      ; 005ff382
        ;   XREF to: 005ff355 (UNCONDITIONAL_JUMP)  ; LAB_005ff355

