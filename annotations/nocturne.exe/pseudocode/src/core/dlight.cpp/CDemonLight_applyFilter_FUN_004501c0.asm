; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonFilter *   Stack[0x8]:4   filter_ptr
; int              Stack[0xc]:4   filter_index
; int              Stack[0x10]:4   filter_pos_x
; int              Stack[0x14]:4   filter_pos_y
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041f3d0 at 0041f467
;   core_boxactor.cpp_FUN_0041f6e0 at 0041f9df
;   core_dlight.cpp_CDemonLight_init_FUN_0044e1e0 at 0044e27e
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_00452080 at 004520c6
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7b65
;   core_setutil.cpp_C3DSLight_advanceFilter_FUN_005155e0 at 00515638
;   core_setutil.cpp_C3DSLight_process_FUN_00515420 at 00515521
;   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00515670 at 005156ae
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004501c0
        ;   Label: core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
    PUSH ESI                            ; 004501c1
    PUSH EDI                            ; 004501c2
    PUSH EBP                            ; 004501c3
    SUB ESP,0x30                        ; 004501c4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004501c7
    MOV EDX,dword ptr [ESP + 0x50]      ; 004501cb
    MOV ECX,dword ptr [ESP + 0x54]      ; 004501cf
    MOV EAX,dword ptr [ESP + 0x48]      ; 004501d3
    MOV ESI,dword ptr [ESP + 0x44]      ; 004501d7
    MOV EAX,dword ptr [EAX + 0x48]      ; 004501db
    MOV dword ptr [ESI + 0x1c54],EAX    ; 004501de
    MOV EAX,dword ptr [ESP + 0x48]      ; 004501e4
    MOV EAX,dword ptr [EAX]             ; 004501e8
    MOV dword ptr [ESI + 0x1c58],EAX    ; 004501ea
    MOV EAX,dword ptr [ESP + 0x48]      ; 004501f0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004501f4
    MOV dword ptr [ESI + 0x1c5c],EAX    ; 004501f7
    MOV EAX,dword ptr [ESI + 0x1c58]    ; 004501fd
    MOV dword ptr [ESI + 0x1c60],0x0    ; 00450203
    CMP EAX,0x1                         ; 0045020d
    JLE 0x00450230                      ; 00450210
        ;   XREF to: 00450230 (CONDITIONAL_JUMP)  ; LAB_00450230
    MOV ESI,dword ptr [ESP + 0x44]      ; 00450212
    MOV EDI,dword ptr [ESI + 0x1c60]    ; 00450216
        ;   Label: LAB_00450216
    INC EDI                             ; 0045021c
    SAR EAX,0x1                         ; 0045021d
    MOV dword ptr [ESI + 0x1c60],EDI    ; 0045021f
    CMP EAX,0x1                         ; 00450225
    JG 0x00450216                       ; 00450228
        ;   XREF to: 00450216 (CONDITIONAL_JUMP)  ; LAB_00450216
    LEA EAX,[EAX]                       ; 0045022a
    MOV EAX,dword ptr [ESP + 0x44]      ; 00450230
        ;   Label: LAB_00450230
    MOV ESI,dword ptr [ESP + 0x44]      ; 00450234
    MOV EAX,dword ptr [EAX + 0x1c60]    ; 00450238
    MOV dword ptr [ESI + 0x1cc8],0x8    ; 0045023e
    MOV dword ptr [ESI + 0x1c64],EAX    ; 00450248
    MOV EAX,dword ptr [ESI + 0x1cc0]    ; 0045024e
    MOV dword ptr [ESI + 0x1ccc],0x8    ; 00450254
    CMP EAX,0x1                         ; 0045025e
    JLE 0x00450290                      ; 00450261
        ;   XREF to: 00450290 (CONDITIONAL_JUMP)  ; LAB_00450290
    MOV ESI,dword ptr [ESP + 0x44]      ; 00450263
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 00450267
        ;   Label: LAB_00450267
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0045026d
    INC EBP                             ; 00450273
    INC EDI                             ; 00450274
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 00450275
    SAR EAX,0x1                         ; 0045027b
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0045027d
    CMP EAX,0x1                         ; 00450283
    JG 0x00450267                       ; 00450286
        ;   XREF to: 00450267 (CONDITIONAL_JUMP)  ; LAB_00450267
    LEA EAX,[EAX]                       ; 00450288
    MOV EDX,EDX                         ; 0045028e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00450290
        ;   Label: LAB_00450290
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00450294
    CMP EAX,0x100                       ; 0045029a
    JGE 0x004502d0                      ; 0045029f
        ;   XREF to: 004502d0 (CONDITIONAL_JUMP)  ; LAB_004502d0
    MOV ESI,dword ptr [ESP + 0x44]      ; 004502a1
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 004502a5
        ;   Label: LAB_004502a5
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 004502ab
    INC EBP                             ; 004502b1
    INC EDI                             ; 004502b2
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 004502b3
    ADD EAX,EAX                         ; 004502b9
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 004502bb
    CMP EAX,0x100                       ; 004502c1
    JL 0x004502a5                       ; 004502c6
        ;   XREF to: 004502a5 (CONDITIONAL_JUMP)  ; LAB_004502a5
    LEA EAX,[EAX]                       ; 004502c8
    MOV EDX,EDX                         ; 004502ce
    MOV EAX,dword ptr [ESP + 0x44]      ; 004502d0
        ;   Label: LAB_004502d0
    MOV ESI,dword ptr [EAX + 0x1ccc]    ; 004502d4
    MOV EBP,dword ptr [EAX + 0x1cc8]    ; 004502da
    SUB ESI,EBX                         ; 004502e0
    SUB EBP,EBX                         ; 004502e2
    MOV dword ptr [EAX + 0x1ccc],ESI    ; 004502e4
    MOV dword ptr [EAX + 0x1cc8],EBP    ; 004502ea
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 004502f0
    MOV EBX,dword ptr [ESP + 0x44]      ; 004502f6
    DEC EAX                             ; 004502fa
    MOV EDI,dword ptr [EBX + 0x1c6c]    ; 004502fb
    MOV dword ptr [EBX + 0x1c68],EAX    ; 00450301
    TEST EDI,EDI                        ; 00450307
    JZ 0x004504a7                       ; 00450309
        ;   XREF to: 004504a7 (CONDITIONAL_JUMP)  ; LAB_004504a7
    MOV EAX,EDX                         ; 0045030f
    MOV dword ptr [ESP + 0xc],EDI       ; 00450311
    XOR EBP,EBP                         ; 00450315
    SAR EAX,0x8                         ; 00450317
    AND EDX,0xff                        ; 0045031a
    MOV dword ptr [ESP + 0x10],EBP      ; 00450320
    MOV dword ptr [ESP + 0x1c],EAX      ; 00450324
    MOV dword ptr [ESP + 0x24],EDX      ; 00450328
    MOV EAX,ECX                         ; 0045032c
    MOV EDX,dword ptr [EBX + 0x1c5c]    ; 0045032e
    SAR EAX,0x8                         ; 00450334
    AND ECX,0xff                        ; 00450337
    MOV dword ptr [ESP + 0x4],EAX       ; 0045033d
    MOV dword ptr [ESP + 0x18],ECX      ; 00450341
    TEST EDX,EDX                        ; 00450345
    JLE 0x00450493                      ; 00450347
        ;   XREF to: 00450493 (CONDITIONAL_JUMP)  ; LAB_00450493
    MOV EAX,0xff                        ; 0045034d
    MOV EBP,dword ptr [ESP + 0x24]      ; 00450352
    SUB EAX,EBP                         ; 00450356
    MOV dword ptr [ESP + 0x20],EAX      ; 00450358
    MOV EAX,0xff                        ; 0045035c
    SUB EAX,ECX                         ; 00450361
    MOV dword ptr [ESP + 0x14],EAX      ; 00450363
    MOV EAX,dword ptr [ESP + 0x4]       ; 00450367
    INC EAX                             ; 0045036b
    MOV dword ptr [ESP + 0x8],EAX       ; 0045036c
    MOV EAX,dword ptr [ESP + 0x44]      ; 00450370
        ;   Label: LAB_00450370
    MOV ECX,dword ptr [ESP + 0x10]      ; 00450374
    MOV EBX,dword ptr [ESP + 0x4]       ; 00450378
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045037c
    MOV EAX,dword ptr [EAX + 0x1c5c]    ; 00450380
    ADD ECX,EBX                         ; 00450386
    DEC EAX                             ; 00450388
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 00450389
    AND ECX,EAX                         ; 0045038f
    IMUL ECX,ESI                        ; 00450391
    MOV EDX,dword ptr [EDX + 0x1c54]    ; 00450394
    MOV EDI,dword ptr [ESP + 0x8]       ; 0045039a
    LEA EBX,[EDX + ECX*0x1]             ; 0045039e
    MOV ECX,dword ptr [ESP + 0x44]      ; 004503a1
    AND EAX,EDI                         ; 004503a5
    MOV EBP,dword ptr [ECX + 0x1c58]    ; 004503a7
    IMUL EAX,EBP                        ; 004503ad
    ADD EDX,EAX                         ; 004503b0
    MOV dword ptr [ESP + 0x2c],EBX      ; 004503b2
    MOV dword ptr [ESP + 0x28],EDX      ; 004503b6
    XOR EAX,EAX                         ; 004503ba
    TEST EBP,EBP                        ; 004503bc
    JLE 0x0045045b                      ; 004503be
        ;   XREF to: 0045045b (CONDITIONAL_JUMP)  ; LAB_0045045b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004503c4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004503c8
    INC EBX                             ; 004503cc
    MOV EDX,dword ptr [ESP + 0x44]      ; 004503cd
        ;   Label: LAB_004503cd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004503d1
    MOV EDX,dword ptr [EDX + 0x1c58]    ; 004503d5
    ADD EDI,EAX                         ; 004503db
    DEC EDX                             ; 004503dd
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004503de
    AND EDI,EDX                         ; 004503e2
    MOV EBP,dword ptr [ESP + 0x20]      ; 004503e4
    MOVZX ESI,byte ptr [EDI + ESI*0x1]  ; 004503e8
    IMUL EBP,ESI                        ; 004503ec
    MOV ESI,EBX                         ; 004503ef
    AND ESI,EDX                         ; 004503f1
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004503f3
    MOV dword ptr [ESP],EBP             ; 004503f7
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 004503fa
    MOV EBP,dword ptr [ESP + 0x24]      ; 004503fd
    AND EDX,0xff                        ; 00450401
    IMUL EDX,EBP                        ; 00450407
    ADD EDX,dword ptr [ESP]             ; 0045040a
    ADD EDI,dword ptr [ESP + 0x28]      ; 0045040d
    MOV EBP,dword ptr [ESP + 0x20]      ; 00450411
    MOVZX EDI,byte ptr [EDI]            ; 00450415
    IMUL EDI,EBP                        ; 00450418
    ADD ESI,dword ptr [ESP + 0x28]      ; 0045041b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045041f
    MOVZX ESI,byte ptr [ESI]            ; 00450423
    IMUL ESI,EBP                        ; 00450426
    ADD ESI,EDI                         ; 00450429
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045042b
    IMUL EDI,EDX                        ; 0045042f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00450432
    IMUL EDX,ESI                        ; 00450436
    ADD EDX,EDI                         ; 00450439
    SHR EDX,0x10                        ; 0045043b
    MOV dword ptr [ESP],EDX             ; 0045043e
    MOV DL,byte ptr [ESP]               ; 00450441
    MOV byte ptr [ECX],DL               ; 00450444
    MOV EDX,dword ptr [ESP + 0x44]      ; 00450446
    INC ECX                             ; 0045044a
    INC EAX                             ; 0045044b
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 0045044c
    INC EBX                             ; 00450452
    CMP EAX,ESI                         ; 00450453
    JL 0x004503cd                       ; 00450455
        ;   XREF to: 004503cd (CONDITIONAL_JUMP)  ; LAB_004503cd
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045045b
        ;   Label: LAB_0045045b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045045f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00450463
    MOV ESI,dword ptr [ESP + 0x10]      ; 00450467
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045046b
    INC EBX                             ; 0045046f
    INC ESI                             ; 00450470
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 00450471
    MOV EDI,dword ptr [EDX + 0x1c5c]    ; 00450477
    MOV dword ptr [ESP + 0x8],EBX       ; 0045047d
    ADD ECX,EAX                         ; 00450481
    MOV dword ptr [ESP + 0x10],ESI      ; 00450483
    MOV dword ptr [ESP + 0xc],ECX       ; 00450487
    CMP ESI,EDI                         ; 0045048b
    JL 0x00450370                       ; 0045048d
        ;   XREF to: 00450370 (CONDITIONAL_JUMP)  ; LAB_00450370
    MOV EAX,dword ptr [ESP + 0x44]      ; 00450493
        ;   Label: LAB_00450493
    MOV EDX,dword ptr [ESP + 0x44]      ; 00450497
    MOV EAX,dword ptr [EAX + 0x1c6c]    ; 0045049b
    MOV dword ptr [EDX + 0x1c54],EAX    ; 004504a1
    MOV ESI,dword ptr [ESP + 0x48]      ; 004504a7
        ;   Label: LAB_004504a7
    MOV EDI,dword ptr [ESP + 0x44]      ; 004504ab
    ADD ESI,0x8                         ; 004504af
    ADD EDI,0x1c74                      ; 004504b2
    PUSH EDI                            ; 004504b8
    MOV AL,byte ptr [ESI]               ; 004504b9
        ;   Label: LAB_004504b9
    MOV byte ptr [EDI],AL               ; 004504bb
    CMP AL,0x0                          ; 004504bd
    JZ 0x004504d1                       ; 004504bf
        ;   XREF to: 004504d1 (CONDITIONAL_JUMP)  ; LAB_004504d1
    MOV AL,byte ptr [ESI + 0x1]         ; 004504c1
    ADD ESI,0x2                         ; 004504c4
    MOV byte ptr [EDI + 0x1],AL         ; 004504c7
    ADD EDI,0x2                         ; 004504ca
    CMP AL,0x0                          ; 004504cd
    JNZ 0x004504b9                      ; 004504cf
        ;   XREF to: 004504b9 (CONDITIONAL_JUMP)  ; LAB_004504b9
    POP EDI                             ; 004504d1
        ;   Label: LAB_004504d1
    ADD ESP,0x30                        ; 004504d2
    POP EBP                             ; 004504d5
    POP EDI                             ; 004504d6
    POP ESI                             ; 004504d7
    POP EBX                             ; 004504d8
    RET                                 ; 004504d9

