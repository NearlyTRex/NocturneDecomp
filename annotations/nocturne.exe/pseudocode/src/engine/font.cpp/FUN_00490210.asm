; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_00490210(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   TerminatedCString s_rt_00581801
;   TerminatedCString s_art_00581804
;   TerminatedCString s_s_00581808
;   TerminatedCString s_d_d_0058180c
;   TerminatedCString s_d_d_00581813
;   TerminatedCString s_d_0058181a
;   TerminatedCString s_d_0058181e
;   TerminatedCString s_d_d_00581822
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0
;   engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00490210
        ;   Label: engine_font.cpp_FUN_00490210
    PUSH ESI                            ; 00490211
    PUSH EBP                            ; 00490212
    SUB ESP,0x220                       ; 00490213
    MOV ESI,dword ptr [ESP + 0x230]     ; 00490219
    PUSH 0x581801                       ; 00490220 | = "rt"
    MOV EDX,dword ptr [ESP + 0x238]     ; 00490225
    PUSH EDX                            ; 0049022c
    PUSH 0x581804                       ; 0049022d | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00490232
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 00490237
    ADD ESP,0xc                         ; 00490239
    TEST EAX,EAX                        ; 0049023c
    JNZ 0x0049024a                      ; 0049023e
        ;   XREF to: 0049024a (CONDITIONAL_JUMP)  ; LAB_0049024a
    ADD ESP,0x220                       ; 00490240
    POP EBP                             ; 00490246
    POP ESI                             ; 00490247
    POP EBX                             ; 00490248
    RET                                 ; 00490249
    PUSH EDI                            ; 0049024a
        ;   Label: LAB_0049024a
    PUSH EAX                            ; 0049024b
    PUSH 0xff                           ; 0049024c
    LEA EAX,[ESP + 0x10c]               ; 00490251
    PUSH EAX                            ; 00490258
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00490259
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 0049025e
    LEA EAX,[ESP + 0x4]                 ; 00490261
    PUSH EAX                            ; 00490265
    PUSH 0x581808                       ; 00490266 | = "%s\n"
    PUSH EBX                            ; 0049026b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0049026c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00490271
    PUSH EBX                            ; 00490274
    PUSH 0xff                           ; 00490275
    LEA EAX,[ESP + 0x10c]               ; 0049027a
    PUSH EAX                            ; 00490281
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00490282
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00490287
    LEA EAX,[ESP + 0x208]               ; 0049028a
    PUSH EAX                            ; 00490291
    LEA EAX,[ESP + 0x208]               ; 00490292
    PUSH EAX                            ; 00490299
    PUSH 0x58180c                       ; 0049029a | = "%d,%d\n"
    PUSH EBX                            ; 0049029f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004902a0
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004902a5
    PUSH EBX                            ; 004902a8
    PUSH 0xff                           ; 004902a9
    LEA EAX,[ESP + 0x10c]               ; 004902ae
    PUSH EAX                            ; 004902b5
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004902b6
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 004902bb
    LEA EAX,[ESP + 0x210]               ; 004902be
    PUSH EAX                            ; 004902c5
    LEA EAX,[ESP + 0x210]               ; 004902c6
    PUSH EAX                            ; 004902cd
    PUSH 0x581813                       ; 004902ce | = "%d,%d\n"
    PUSH EBX                            ; 004902d3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004902d4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 004902d9
    PUSH EBX                            ; 004902dc
    PUSH 0xff                           ; 004902dd
    LEA EAX,[ESP + 0x10c]               ; 004902e2
    PUSH EAX                            ; 004902e9
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004902ea
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 004902ef
    LEA EAX,[ESP + 0x214]               ; 004902f2
    PUSH EAX                            ; 004902f9
    PUSH 0x58181a                       ; 004902fa | = "%d\n"
    PUSH EBX                            ; 004902ff
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00490300
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00490305
    PUSH EBX                            ; 00490308
    PUSH 0xff                           ; 00490309
    LEA EAX,[ESP + 0x10c]               ; 0049030e
    PUSH EAX                            ; 00490315
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00490316
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 0049031b
    LEA EAX,[ESP + 0x218]               ; 0049031e
    PUSH EAX                            ; 00490325
    PUSH 0x58181e                       ; 00490326 | = "%d\n"
    PUSH EBX                            ; 0049032b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0049032c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00490331
    PUSH EBX                            ; 00490334
    PUSH 0xff                           ; 00490335
    LEA EAX,[ESP + 0x10c]               ; 0049033a
    PUSH EAX                            ; 00490341
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00490342
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00490347
    LEA EAX,[ESP + 0x220]               ; 0049034a
    PUSH EAX                            ; 00490351
    LEA EAX,[ESP + 0x220]               ; 00490352
    PUSH EAX                            ; 00490359
    PUSH 0x581822                       ; 0049035a | = "%d,%d\n"
    PUSH EBX                            ; 0049035f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00490360
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00490365
    PUSH EBX                            ; 00490368
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00490369
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 0049036e
    CMP dword ptr [ESP + 0x20c],0x20    ; 00490371
    JZ 0x004903e3                       ; 00490379
        ;   XREF to: 004903e3 (CONDITIONAL_JUMP)  ; LAB_004903e3
    MOV EDX,dword ptr [ESP + 0x214]     ; 0049037b
        ;   Label: LAB_0049037b
    PUSH EDX                            ; 00490382
    MOV ECX,dword ptr [ESP + 0x214]     ; 00490383
    PUSH ECX                            ; 0049038a
    MOV EBX,dword ptr [ESP + 0x214]     ; 0049038b
    PUSH EBX                            ; 00490392
    MOV EDI,dword ptr [ESP + 0x214]     ; 00490393
    PUSH EDI                            ; 0049039a
    MOV EBP,dword ptr [ESP + 0x214]     ; 0049039b
    PUSH EBP                            ; 004903a2
    LEA EAX,[ESP + 0x18]                ; 004903a3
    PUSH EAX                            ; 004903a7
    PUSH ESI                            ; 004903a8
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0 ; 004903a9
        ;   XREF to: 004901d0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_loadNewBitmap_FUN_004901d0()
    ADD ESP,0x1c                        ; 004903ae
    MOV EAX,dword ptr [ESP + 0x218]     ; 004903b1
        ;   Label: LAB_004903b1
    MOV dword ptr [ESI + 0x25e8],EAX    ; 004903b8
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004903be
    MOV EBX,dword ptr [ESP + 0x220]     ; 004903c5
    MOV dword ptr [ESI + 0x317c],EAX    ; 004903cc
    MOV dword ptr [ESI + 0x3180],EBX    ; 004903d2
    POP EDI                             ; 004903d8
    ADD ESP,0x220                       ; 004903d9
    POP EBP                             ; 004903df
    POP ESI                             ; 004903e0
    POP EBX                             ; 004903e1
    RET                                 ; 004903e2
    CMP dword ptr [ESP + 0x210],0xff    ; 004903e3
        ;   Label: LAB_004903e3
    JNZ 0x0049037b                      ; 004903ee
        ;   XREF to: 0049037b (CONDITIONAL_JUMP)  ; LAB_0049037b
    MOV EDI,dword ptr [ESP + 0x214]     ; 004903f0
    PUSH EDI                            ; 004903f7
    MOV EBP,dword ptr [ESP + 0x20c]     ; 004903f8
    PUSH EBP                            ; 004903ff
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00490400
    PUSH EAX                            ; 00490407
    LEA EAX,[ESP + 0x10]                ; 00490408
    PUSH EAX                            ; 0049040c
    PUSH ESI                            ; 0049040d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40 ; 0049040e
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40()
    ADD ESP,0x14                        ; 00490413
    JMP 0x004903b1                      ; 00490416
        ;   XREF to: 004903b1 (UNCONDITIONAL_JUMP)  ; LAB_004903b1

