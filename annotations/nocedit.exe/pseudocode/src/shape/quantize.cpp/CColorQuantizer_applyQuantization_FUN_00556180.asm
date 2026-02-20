; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_applyQuantization_FUN_00556180(CColorQuantizer *this_ptr,CBitmap **bitmap_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; CBitmap * *      Stack[0x8]:4   bitmap_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmaps_FUN_005563d0 at 00556451
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640d9b
;   TerminatedCString s_Phase_3_00640db1
;   TerminatedCString s_shape_quantize_cpp_00640db9
;   TerminatedCString s_shape_quantize_cpp_00640dcf
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_string.c__strncpy_FUN_00600f40
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
;   shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
;   shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500
;   shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556180
        ;   Label: shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180
    PUSH ESI                            ; 00556181
    PUSH EDI                            ; 00556182
    PUSH EBP                            ; 00556183
    MOV EBP,ESP                         ; 00556184
    SUB ESP,0x10                        ; 00556186
    MOV EBX,dword ptr [EBP + 0x14]      ; 00556189
    MOV EAX,dword ptr [EBP + 0x18]      ; 0055618c
    MOV EAX,dword ptr [EAX]             ; 0055618f
    MOV AX,word ptr [EAX + 0x14]        ; 00556191
    AND EAX,0xffff                      ; 00556195
    PUSH EAX                            ; 0055619a
    PUSH EBX                            ; 0055619b
    CALL shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500 ; 0055619c
        ;   XREF to: 00555500 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_CColorQuantizer_errorDiffusionBuffers_FUN_00555500(CColorQuantizer * this_ptr, int num_entries)
    ADD ESP,0x8                         ; 005561a1
    TEST EAX,EAX                        ; 005561a4
    JNZ 0x005561af                      ; 005561a6
        ;   XREF to: 005561af (CONDITIONAL_JUMP)  ; LAB_005561af
    MOV ESP,EBP                         ; 005561a8
    POP EBP                             ; 005561aa
    POP EDI                             ; 005561ab
    POP ESI                             ; 005561ac
    POP EBX                             ; 005561ad
    RET                                 ; 005561ae
    PUSH 0x384                          ; 005561af
        ;   Label: LAB_005561af
    PUSH 0x640d9b                       ; 005561b4 | = "..\\shape\\quantize.cpp"
    PUSH 0x28                           ; 005561b9
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005561bb
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005561c0
    TEST EAX,EAX                        ; 005561c3
    JZ 0x005561ed                       ; 005561c5
        ;   XREF to: 005561ed (CONDITIONAL_JUMP)  ; LAB_005561ed
    MOV EDX,dword ptr [EBP + 0x18]      ; 005561c7
    MOV EDX,dword ptr [EDX]             ; 005561ca
    PUSH 0x8                            ; 005561cc
    MOV CX,word ptr [EDX + 0x16]        ; 005561ce
    AND ECX,0xffff                      ; 005561d2
    MOV DX,word ptr [EDX + 0x14]        ; 005561d8
    PUSH ECX                            ; 005561dc
    AND EDX,0xffff                      ; 005561dd
    PUSH EDX                            ; 005561e3
    PUSH EAX                            ; 005561e4
    CALL shape_quantize.cpp_CBitmap_ctor_FUN_00556a00 ; 005561e5
        ;   XREF to: 00556a00 (UNCONDITIONAL_CALL)  ; CBitmap * shape_quantize.cpp_CBitmap_ctor_FUN_00556a00(CBitmap * this_ptr, int param_2, int param_3, int param_4)
    ADD ESP,0x10                        ; 005561ea
    MOV dword ptr [EBP + -0x10],EAX     ; 005561ed
        ;   Label: LAB_005561ed
    XOR EDX,EDX                         ; 005561f0
    MOV EAX,dword ptr [EAX + 0x20]      ; 005561f2
    MOV dword ptr [EBP + -0x4],EDX      ; 005561f5
    MOV EAX,dword ptr [EAX]             ; 005561f8
    MOV dword ptr [EBP + -0x8],EDX      ; 005561fa
    MOV dword ptr [EBP + -0xc],EAX      ; 005561fd
    MOV EDX,dword ptr [EBP + 0x18]      ; 00556200
        ;   Label: LAB_00556200
    MOV EDX,dword ptr [EDX]             ; 00556203
    MOV AX,word ptr [EDX + 0x16]        ; 00556205
    MOV ESI,dword ptr [EBP + -0x4]      ; 00556209
    AND EAX,0xffff                      ; 0055620c
    CMP EAX,ESI                         ; 00556211
    JLE 0x00556350                      ; 00556213
        ;   XREF to: 00556350 (CONDITIONAL_JUMP)  ; LAB_00556350
    CMP dword ptr [EBX],0x0             ; 00556219
    JZ 0x00556270                       ; 0055621c
        ;   XREF to: 00556270 (CONDITIONAL_JUMP)  ; LAB_00556270
    PUSH ESI                            ; 00556222
    PUSH EAX                            ; 00556223
    PUSH 0x640db1                       ; 00556224 | = "Phase 3"
    CALL dword ptr [EBX]                ; 00556229
    ADD ESP,0xc                         ; 0055622b
    TEST EAX,EAX                        ; 0055622e
    JZ 0x00556270                       ; 00556230
        ;   XREF to: 00556270 (CONDITIONAL_JUMP)  ; LAB_00556270
    MOV EBX,0x38d                       ; 00556236
    MOV ECX,0x640db9                    ; 0055623b | = "..\\shape\\quantize.cpp"
    MOV ESI,dword ptr [EBP + -0x10]     ; 00556240
    MOV dword ptr [0x02f0d944],EBX      ; 00556243 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 00556249 | g_CurrentDebugFilename
    TEST ESI,ESI                        ; 0055624f
    JZ 0x00556267                       ; 00556251
        ;   XREF to: 00556267 (CONDITIONAL_JUMP)  ; LAB_00556267
    PUSH 0x0                            ; 00556253
    PUSH ESI                            ; 00556255
    CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20 ; 00556256
        ;   XREF to: 00556c20 (UNCONDITIONAL_CALL)  ; CBitmap * shape_quantize.cpp_CBitmap_dtor_FUN_00556c20(CBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0055625b
    PUSH EAX                            ; 0055625e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0055625f
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00556264
    XOR EAX,EAX                         ; 00556267
        ;   Label: LAB_00556267
    MOV ESP,EBP                         ; 00556269
    POP EBP                             ; 0055626b
    POP EDI                             ; 0055626c
    POP ESI                             ; 0055626d
    POP EBX                             ; 0055626e
    RET                                 ; 0055626f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00556270
        ;   Label: LAB_00556270
    MOV EDX,dword ptr [EDX]             ; 00556273
    XOR ECX,ECX                         ; 00556275
    MOV AX,word ptr [EDX + 0x14]        ; 00556277
    MOV EDI,dword ptr [EBP + -0x8]      ; 0055627b
    MOV CX,AX                           ; 0055627e
    MOV EAX,dword ptr [EDX + 0x20]      ; 00556281
    ADD EAX,EDI                         ; 00556284
    LEA ECX,[ECX + ECX*0x2]             ; 00556286
    MOV ESI,dword ptr [EAX]             ; 00556289
    MOV EDI,dword ptr [EBX + 0xc]       ; 0055628b
    PUSH EDI                            ; 0055628e
    MOV EAX,ECX                         ; 0055628f
    SHR ECX,0x2                         ; 00556291
    MOVSD.REP ES:EDI,ESI                ; 00556294
    MOV CL,AL                           ; 00556296
    AND CL,0x3                          ; 00556298
    MOVSB.REP ES:EDI,ESI                ; 0055629b
    POP EDI                             ; 0055629d
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055629e
    MOV EDX,EAX                         ; 005562a1
    MOV ECX,0x2                         ; 005562a3
    SAR EDX,0x1f                        ; 005562a8
    IDIV ECX                            ; 005562ab
    TEST EDX,EDX                        ; 005562ad
    JZ 0x005562db                       ; 005562af
        ;   XREF to: 005562db (CONDITIONAL_JUMP)  ; LAB_005562db
    MOV EAX,dword ptr [EBX + 0x4b3e]    ; 005562b1
    SAR EAX,0x10                        ; 005562b7
    PUSH EAX                            ; 005562ba
    MOV EAX,dword ptr [EBP + 0x18]      ; 005562bb
    MOV EAX,dword ptr [EAX]             ; 005562be
    MOV AX,word ptr [EAX + 0x14]        ; 005562c0
    CWDE                                ; 005562c4
    PUSH EAX                            ; 005562c5
    PUSH 0x0                            ; 005562c6
    MOV ECX,dword ptr [EBX + 0x8]       ; 005562c8
    PUSH ECX                            ; 005562cb
    MOV ESI,dword ptr [EBX + 0xc]       ; 005562cc
    PUSH ESI                            ; 005562cf
    PUSH EBX                            ; 005562d0
    CALL shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0 ; 005562d1
        ;   XREF to: 005556f0 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, ...)
    ADD ESP,0x18                        ; 005562d6
    JMP 0x00556304                      ; 005562d9
        ;   XREF to: 00556304 (UNCONDITIONAL_JUMP)  ; LAB_00556304
    MOV EAX,dword ptr [EBX + 0x4b3e]    ; 005562db
        ;   Label: LAB_005562db
    SAR EAX,0x10                        ; 005562e1
    PUSH EAX                            ; 005562e4
    MOV EAX,dword ptr [EBP + 0x18]      ; 005562e5
    MOV EAX,dword ptr [EAX]             ; 005562e8
    MOV AX,word ptr [EAX + 0x14]        ; 005562ea
    DEC EAX                             ; 005562ee
    PUSH -0x1                           ; 005562ef
    CWDE                                ; 005562f1
    PUSH EAX                            ; 005562f2
    MOV EAX,dword ptr [EBX + 0x8]       ; 005562f3
    PUSH EAX                            ; 005562f6
    MOV EDX,dword ptr [EBX + 0xc]       ; 005562f7
    PUSH EDX                            ; 005562fa
    PUSH EBX                            ; 005562fb
    CALL shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0 ; 005562fc
        ;   XREF to: 005556f0 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, ...)
    ADD ESP,0x18                        ; 00556301
    MOV EAX,dword ptr [EBP + 0x18]      ; 00556304
        ;   Label: LAB_00556304
    MOV EAX,dword ptr [EAX]             ; 00556307
    MOV EDI,dword ptr [EBP + -0xc]      ; 00556309
    XOR ECX,ECX                         ; 0055630c
    MOV AX,word ptr [EAX + 0x14]        ; 0055630e
    MOV ESI,dword ptr [EBX + 0x8]       ; 00556312
    MOV CX,AX                           ; 00556315
    PUSH EDI                            ; 00556318
    MOV EAX,ECX                         ; 00556319
    SHR ECX,0x2                         ; 0055631b
    MOVSD.REP ES:EDI,ESI                ; 0055631e
    MOV CL,AL                           ; 00556320
    AND CL,0x3                          ; 00556322
    MOVSB.REP ES:EDI,ESI                ; 00556325
    POP EDI                             ; 00556327
    MOV EAX,dword ptr [EBP + 0x18]      ; 00556328
    MOV EAX,dword ptr [EAX]             ; 0055632b
    MOV AX,word ptr [EAX + 0x14]        ; 0055632d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00556331
    AND EAX,0xffff                      ; 00556334
    INC EDX                             ; 00556339
    ADD EDI,EAX                         ; 0055633a
    MOV EAX,dword ptr [EBP + -0x8]      ; 0055633c
    MOV dword ptr [EBP + -0xc],EDI      ; 0055633f
    ADD EAX,0x4                         ; 00556342
    MOV dword ptr [EBP + -0x4],EDX      ; 00556345
    MOV dword ptr [EBP + -0x8],EAX      ; 00556348
    JMP 0x00556200                      ; 0055634b
        ;   XREF to: 00556200 (UNCONDITIONAL_JUMP)  ; LAB_00556200
    PUSH 0x14                           ; 00556350
        ;   Label: LAB_00556350
    PUSH EDX                            ; 00556352
    MOV EDI,dword ptr [EBP + -0x10]     ; 00556353
    PUSH EDI                            ; 00556356
    LEA ESI,[EBX + 0x4830]              ; 00556357
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0055635d
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00556362
    MOV ECX,0x300                       ; 00556365
    MOV EDI,dword ptr [EDI + 0x24]      ; 0055636a
    PUSH EDI                            ; 0055636d
    MOV EAX,ECX                         ; 0055636e
    SHR ECX,0x2                         ; 00556370
    MOVSD.REP ES:EDI,ESI                ; 00556373
    MOV CL,AL                           ; 00556375
    AND CL,0x3                          ; 00556377
    MOVSB.REP ES:EDI,ESI                ; 0055637a
    POP EDI                             ; 0055637c
    MOV dword ptr [0x0067d20c],0x640dcf ; 0055637d | g_CurrentDebugFilename | = "..\\shape\\quantize.cpp"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00556387
    MOV EDX,0x3a1                       ; 0055638a
    MOV EAX,dword ptr [EAX]             ; 0055638f
    MOV dword ptr [0x02f0d944],EDX      ; 00556391 | g_CurrentDebugLine
    TEST EAX,EAX                        ; 00556397
    JZ 0x005563af                       ; 00556399
        ;   XREF to: 005563af (CONDITIONAL_JUMP)  ; LAB_005563af
    PUSH 0x0                            ; 0055639b
    PUSH EAX                            ; 0055639d
    CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20 ; 0055639e
        ;   XREF to: 00556c20 (UNCONDITIONAL_CALL)  ; CBitmap * shape_quantize.cpp_CBitmap_dtor_FUN_00556c20(CBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005563a3
    PUSH EAX                            ; 005563a6
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005563a7
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005563ac
    MOV EAX,dword ptr [EBP + 0x18]      ; 005563af
        ;   Label: LAB_005563af
    MOV EDX,dword ptr [EBP + -0x10]     ; 005563b2
    MOV dword ptr [EAX],EDX             ; 005563b5
    MOV EAX,0x1                         ; 005563b7
    MOV ESP,EBP                         ; 005563bc
    POP EBP                             ; 005563be
    POP EDI                             ; 005563bf
    POP ESI                             ; 005563c0
    POP EBX                             ; 005563c1
    RET                                 ; 005563c2

