; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_quantizeRawPixelData_FUN_00556490(uchar *src_pixel_data,uchar **out_pixel_data,uchar **out_palette,short width,short height,uint bit_depth,int line_number,int show_progress)
;
; Parameters:
; uchar *          Stack[0x4]:4   src_pixel_data
; uchar * *        Stack[0x8]:4   out_pixel_data
; uchar * *        Stack[0xc]:4   out_palette
; short            Stack[0x10]:2   width
; short            Stack[0x14]:2   height
; uint             Stack[0x18]:4   bit_depth
; int              Stack[0x1c]:4   line_number
; int              Stack[0x20]:4   show_progress
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046d2e0
;
; Referenced Globals:
;   TerminatedCString s_shape_quantize_cpp_00640de5
;   TerminatedCString s_Unable_to_allocate_d_bit_00640dfb
;   TerminatedCString s_shape_quantize_cpp_00640e33
;   TerminatedCString s_Invalid_bit_depth_d_for__00640e49
;   TerminatedCString s_shape_quantize_cpp_00640e6b
;   TerminatedCString s_d_bit_color_00640e81
;   TerminatedCString s_shape_quantize_cpp_00640ed0
;   TerminatedCString s_shape_quantize_cpp_00640ee6
;   TerminatedCString s_Unable_to_allocate_objec_00640efc
;   TerminatedCString s_Performing_color_quantiz_00640f2d
;   TerminatedCString s_d_color_palette_created_00640f4e
;   TerminatedCString s_anon_00640f9e
;   TerminatedCString s_shape_quantize_cpp_00640fc3
;   TerminatedCString s_shape_quantize_cpp_00640fd9
;   TerminatedCString s_Unable_to_allocate_quant_00640fef
;   ... and 10 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   shape_quantize.cpp_CBitmap_ctor_FUN_00556a00
;   shape_quantize.cpp_CBitmap_dtor_FUN_00556c20
;   shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
;   shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940
;   shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556490
        ;   Label: shape_quantize.cpp_quantizeRawPixelData_FUN_00556490
    PUSH ESI                            ; 00556491
    PUSH EDI                            ; 00556492
    PUSH EBP                            ; 00556493
    SUB ESP,0xcc                        ; 00556494
    MOV EBP,dword ptr [ESP + 0xe0]      ; 0055649a
    MOV EBX,dword ptr [ESP + 0xf4]      ; 005564a1
    PUSH 0x3ec                          ; 005564a8
    PUSH 0x640de5                       ; 005564ad | = "..\\shape\\quantize.cpp"
    MOV EAX,dword ptr [ESP + 0x100]     ; 005564b2
    PUSH 0x28                           ; 005564b9
    MOV [0x03106158],EAX                ; 005564bb | g_QuantizeCurrentLineNumber
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005564c0
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005564c5
    TEST EAX,EAX                        ; 005564c8
    JNZ 0x005567bd                      ; 005564ca
        ;   XREF to: 005567bd (CONDITIONAL_JUMP)  ; LAB_005567bd
    MOV dword ptr [ESP + 0xc8],EAX      ; 005564d0
        ;   Label: LAB_005564d0
    TEST EAX,EAX                        ; 005564d7
    JZ 0x005567e6                       ; 005564d9
        ;   XREF to: 005567e6 (CONDITIONAL_JUMP)  ; LAB_005567e6
    CMP EBX,0x10                        ; 005564df
        ;   Label: LAB_005564df
    JNC 0x00556847                      ; 005564e2
        ;   XREF to: 00556847 (CONDITIONAL_JUMP)  ; LAB_00556847
    CMP EBX,0x8                         ; 005564e8
    JNC 0x0055685e                      ; 005564eb
        ;   XREF to: 0055685e (CONDITIONAL_JUMP)  ; LAB_0055685e
    PUSH EBX                            ; 005564f1
        ;   Label: LAB_005564f1
    PUSH 0x640e49                       ; 005564f2 | = "Invalid bit depth [%d] for bitmap"
    LEA EAX,[ESP + 0x8]                 ; 005564f7
    PUSH EAX                            ; 005564fb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005564fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x40a                       ; 00556501
    ADD ESP,0xc                         ; 00556506
    MOV [0x02f0ca4c],EAX                ; 00556509 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 0055650e
    MOV EDI,0x640e6b                    ; 00556510 | = "..\\shape\\quantize.cpp"
    PUSH EAX                            ; 00556515
    MOV dword ptr [0x02f0ca48],EDI      ; 00556516 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055651c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556521
    MOV ECX,dword ptr [ESP + 0xec]      ; 00556524
        ;   Label: LAB_00556524
    IMUL ECX,dword ptr [ESP + 0xf0]     ; 0055652b
    IMUL ECX,ESI                        ; 00556533
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00556536
    MOV EDI,dword ptr [EAX + 0x20]      ; 0055653d
    MOV EDI,dword ptr [EDI]             ; 00556540
    MOV ESI,EBP                         ; 00556542
    PUSH EDI                            ; 00556544
    MOV EAX,ECX                         ; 00556545
    SHR ECX,0x2                         ; 00556547
    MOVSD.REP ES:EDI,ESI                ; 0055654a
    MOV CL,AL                           ; 0055654c
    AND CL,0x3                          ; 0055654e
    MOVSB.REP ES:EDI,ESI                ; 00556551
    POP EDI                             ; 00556553
    CMP dword ptr [ESP + 0xfc],0x0      ; 00556554
    JZ 0x00556596                       ; 0055655c
        ;   XREF to: 00556596 (CONDITIONAL_JUMP)  ; LAB_00556596
    PUSH EBX                            ; 0055655e
    PUSH 0x640e81                       ; 0055655f | = "%d-bit color                         ..."
    LEA EAX,[ESP + 0x8]                 ; 00556564
    PUSH EAX                            ; 00556568
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00556569
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055656e
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00556571
    LEA EBX,[EAX*0x4 + 0x0]             ; 00556578
    SUB EBX,EAX                         ; 0055657f
    SHL EBX,0x2                         ; 00556581
    SUB EBX,EAX                         ; 00556584
    PUSH EBX                            ; 00556586
    PUSH 0x0                            ; 00556587
    LEA EAX,[ESP + 0x8]                 ; 00556589
    PUSH EAX                            ; 0055658d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0055658e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00556593
    PUSH 0x417                          ; 00556596
        ;   Label: LAB_00556596
    PUSH 0x640ed0                       ; 0055659b | = "..\\shape\\quantize.cpp"
    PUSH 0x4b44                         ; 005565a0
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005565a5
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005565aa
    TEST EAX,EAX                        ; 005565ad
    JZ 0x005565ba                       ; 005565af
        ;   XREF to: 005565ba (CONDITIONAL_JUMP)  ; LAB_005565ba
    PUSH EAX                            ; 005565b1
    CALL shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900 ; 005565b2
        ;   XREF to: 00554900 (UNCONDITIONAL_CALL)  ; CColorQuantizer * shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer * this_ptr)
    ADD ESP,0x4                         ; 005565b7
    MOV EBP,EAX                         ; 005565ba
        ;   Label: LAB_005565ba
    TEST EAX,EAX                        ; 005565bc
    JZ 0x0055686a                       ; 005565be
        ;   XREF to: 0055686a (CONDITIONAL_JUMP)  ; LAB_0055686a
    CMP dword ptr [ESP + 0xfc],0x0      ; 005565c4
        ;   Label: LAB_005565c4
    JZ 0x005565fb                       ; 005565cc
        ;   XREF to: 005565fb (CONDITIONAL_JUMP)  ; LAB_005565fb
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005565ce
    ADD EAX,0x2                         ; 005565d5
    LEA EBX,[EAX*0x4 + 0x0]             ; 005565d8
    SUB EBX,EAX                         ; 005565df
    SHL EBX,0x2                         ; 005565e1
    SUB EBX,EAX                         ; 005565e4
    PUSH EBX                            ; 005565e6
    PUSH 0x0                            ; 005565e7
    PUSH 0x640f2d                       ; 005565e9 | = "Performing color quantization..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005565ee
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005565f3
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005565f6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005565fb
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_005565fb
    LEA EAX,[ESP + 0xc8]                ; 00556600
    PUSH EAX                            ; 00556607
    PUSH EBP                            ; 00556608
    MOV dword ptr [EBP],0x0             ; 00556609
    CALL shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470 ; 00556610
        ;   XREF to: 00556470 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_quantizeBitmap_FUN_00556470(CColorQuantizer * this_ptr, CBitmap * * bitmap_ptr)
    ADD ESP,0x8                         ; 00556615
    TEST EAX,EAX                        ; 00556618
    JZ 0x005567b2                       ; 0055661a
        ;   XREF to: 005567b2 (CONDITIONAL_JUMP)  ; LAB_005567b2
    CMP dword ptr [ESP + 0xfc],0x0      ; 00556620
    JZ 0x00556698                       ; 00556628
        ;   XREF to: 00556698 (CONDITIONAL_JUMP)  ; LAB_00556698
    MOV EAX,dword ptr [EBP + 0x4b40]    ; 0055662a
    PUSH EAX                            ; 00556630
    PUSH 0x640f4e                       ; 00556631 | = "%d-color palette created             ..."
    LEA EAX,[ESP + 0x8]                 ; 00556636
    PUSH EAX                            ; 0055663a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0055663b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00556640
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00556643
    ADD EAX,0x2                         ; 0055664a
    LEA EBX,[EAX*0x4 + 0x0]             ; 0055664d
    SUB EBX,EAX                         ; 00556654
    SHL EBX,0x2                         ; 00556656
    SUB EBX,EAX                         ; 00556659
    PUSH EBX                            ; 0055665b
    PUSH 0x0                            ; 0055665c
    LEA EAX,[ESP + 0x8]                 ; 0055665e
    PUSH EAX                            ; 00556662
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00556663
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00556668
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0055666b
    ADD EAX,0x4                         ; 00556672
    LEA EBX,[EAX*0x4 + 0x0]             ; 00556675
    SUB EBX,EAX                         ; 0055667c
    SHL EBX,0x2                         ; 0055667e
    SUB EBX,EAX                         ; 00556681
    PUSH EBX                            ; 00556683
    PUSH 0x0                            ; 00556684
    PUSH 0x640f9e                       ; 00556686 | = "                                    "
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0055668b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00556690
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00556693
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [ESP + 0xec]      ; 00556698
        ;   Label: LAB_00556698
    IMUL EAX,dword ptr [ESP + 0xf0]     ; 0055669f
    PUSH 0x431                          ; 005566a7
    PUSH 0x640fc3                       ; 005566ac | = "..\\shape\\quantize.cpp"
    PUSH EAX                            ; 005566b1
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005566b2
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005566b7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005566ba
    MOV dword ptr [ECX],EAX             ; 005566c1
    TEST EAX,EAX                        ; 005566c3
    JZ 0x00556892                       ; 005566c5
        ;   XREF to: 00556892 (CONDITIONAL_JUMP)  ; LAB_00556892
    MOV ECX,dword ptr [ESP + 0xec]      ; 005566cb
        ;   Label: LAB_005566cb
    IMUL ECX,dword ptr [ESP + 0xf0]     ; 005566d2
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005566da
    MOV ESI,dword ptr [EAX + 0x20]      ; 005566e1
    MOV EDI,dword ptr [ESP + 0xe4]      ; 005566e4
    MOV ESI,dword ptr [ESI]             ; 005566eb
    MOV EDI,dword ptr [EDI]             ; 005566ed
    PUSH EDI                            ; 005566ef
    MOV EAX,ECX                         ; 005566f0
    SHR ECX,0x2                         ; 005566f2
    MOVSD.REP ES:EDI,ESI                ; 005566f5
    MOV CL,AL                           ; 005566f7
    AND CL,0x3                          ; 005566f9
    MOVSB.REP ES:EDI,ESI                ; 005566fc
    POP EDI                             ; 005566fe
    PUSH 0x43a                          ; 005566ff
    PUSH 0x641014                       ; 00556704 | = "..\\shape\\quantize.cpp"
    PUSH 0x300                          ; 00556709
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0055670e
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00556713
    MOV ECX,dword ptr [ESP + 0xe8]      ; 00556716
    MOV dword ptr [ECX],EAX             ; 0055671d
    TEST EAX,EAX                        ; 0055671f
    JZ 0x005568ba                       ; 00556721
        ;   XREF to: 005568ba (CONDITIONAL_JUMP)  ; LAB_005568ba
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00556727
        ;   Label: LAB_00556727
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0055672e
    MOV ECX,0x300                       ; 00556735
    MOV ESI,dword ptr [ESI + 0x24]      ; 0055673a
    MOV EDI,dword ptr [EDI]             ; 0055673d
    PUSH EDI                            ; 0055673f
    MOV EAX,ECX                         ; 00556740
    SHR ECX,0x2                         ; 00556742
    MOVSD.REP ES:EDI,ESI                ; 00556745
    MOV CL,AL                           ; 00556747
    AND CL,0x3                          ; 00556749
    MOVSB.REP ES:EDI,ESI                ; 0055674c
    POP EDI                             ; 0055674e
    PUSH 0x0                            ; 0055674f
    MOV ESI,0x641066                    ; 00556751 | = "..\\shape\\quantize.cpp"
    MOV EDI,0x443                       ; 00556756
    PUSH EBP                            ; 0055675b
    MOV dword ptr [0x0067d20c],ESI      ; 0055675c | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 00556762 | g_CurrentDebugLine
    CALL shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940 ; 00556768
        ;   XREF to: 00554940 (UNCONDITIONAL_CALL)  ; CColorQuantizer * shape_quantize.cpp_CColorQuantizer_dtor_FUN_00554940(CColorQuantizer * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0055676d
    PUSH EAX                            ; 00556770
    MOV EBP,0x64107c                    ; 00556771 | = "..\\shape\\quantize.cpp"
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00556776
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    MOV EAX,0x444                       ; 0055677b
    ADD ESP,0x4                         ; 00556780
    MOV dword ptr [0x0067d20c],EBP      ; 00556783 | g_CurrentDebugFilename
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00556789
    MOV [0x02f0d944],EAX                ; 00556790 | g_CurrentDebugLine
    TEST EDX,EDX                        ; 00556795
    JZ 0x005567ad                       ; 00556797
        ;   XREF to: 005567ad (CONDITIONAL_JUMP)  ; LAB_005567ad
    PUSH 0x0                            ; 00556799
    PUSH EDX                            ; 0055679b
    CALL shape_quantize.cpp_CBitmap_dtor_FUN_00556c20 ; 0055679c
        ;   XREF to: 00556c20 (UNCONDITIONAL_CALL)  ; CBitmap * shape_quantize.cpp_CBitmap_dtor_FUN_00556c20(CBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005567a1
    PUSH EAX                            ; 005567a4
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005567a5
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005567aa
    MOV EAX,0x1                         ; 005567ad
        ;   Label: LAB_005567ad
    ADD ESP,0xcc                        ; 005567b2
        ;   Label: LAB_005567b2
    POP EBP                             ; 005567b8
    POP EDI                             ; 005567b9
    POP ESI                             ; 005567ba
    POP EBX                             ; 005567bb
    RET                                 ; 005567bc
    XOR ECX,ECX                         ; 005567bd
        ;   Label: LAB_005567bd
    MOV CL,BL                           ; 005567bf
    PUSH ECX                            ; 005567c1
    XOR ECX,ECX                         ; 005567c2
    MOV CX,word ptr [ESP + 0xf4]        ; 005567c4
    PUSH ECX                            ; 005567cc
    XOR ECX,ECX                         ; 005567cd
    MOV CX,word ptr [ESP + 0xf4]        ; 005567cf
    PUSH ECX                            ; 005567d7
    PUSH EAX                            ; 005567d8
    CALL shape_quantize.cpp_CBitmap_ctor_FUN_00556a00 ; 005567d9
        ;   XREF to: 00556a00 (UNCONDITIONAL_CALL)  ; CBitmap * shape_quantize.cpp_CBitmap_ctor_FUN_00556a00(CBitmap * this_ptr, int param_2, int param_3, int param_4)
    ADD ESP,0x10                        ; 005567de
    JMP 0x005564d0                      ; 005567e1
        ;   XREF to: 005564d0 (UNCONDITIONAL_JUMP)  ; LAB_005564d0
    PUSH EBX                            ; 005567e6
        ;   Label: LAB_005567e6
    PUSH 0x640dfb                       ; 005567e7 | = "Unable to allocate %d-bit bitmap for ..."
    LEA EAX,[ESP + 0x8]                 ; 005567ec
    PUSH EAX                            ; 005567f0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005567f1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x640e33                    ; 005567f6 | = "..\\shape\\quantize.cpp"
    ADD ESP,0xc                         ; 005567fb
    MOV EAX,ESP                         ; 005567fe
    MOV ECX,0x3f0                       ; 00556800
    PUSH EAX                            ; 00556805
    MOV dword ptr [0x02f0ca48],EDX      ; 00556806 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0055680c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556812
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00556817
    JMP 0x005564df                      ; 0055681a
        ;   XREF to: 005564df (UNCONDITIONAL_JUMP)  ; LAB_005564df
    MOV ESI,0x1                         ; 0055681f
        ;   Label: LAB_0055681f
    JMP 0x00556524                      ; 00556824
        ;   XREF to: 00556524 (UNCONDITIONAL_JUMP)  ; LAB_00556524
    MOV ESI,0x2                         ; 00556829
        ;   Label: LAB_00556829
    JMP 0x00556524                      ; 0055682e
        ;   XREF to: 00556524 (UNCONDITIONAL_JUMP)  ; LAB_00556524
    MOV ESI,0x3                         ; 00556833
        ;   Label: LAB_00556833
    JMP 0x00556524                      ; 00556838
        ;   XREF to: 00556524 (UNCONDITIONAL_JUMP)  ; LAB_00556524
    MOV ESI,0x4                         ; 0055683d
        ;   Label: LAB_0055683d
    JMP 0x00556524                      ; 00556842
        ;   XREF to: 00556524 (UNCONDITIONAL_JUMP)  ; LAB_00556524
    JBE 0x00556829                      ; 00556847
        ;   XREF to: 00556829 (CONDITIONAL_JUMP)  ; LAB_00556829
        ;   Label: LAB_00556847
    CMP EBX,0x18                        ; 00556849
    JC 0x005564f1                       ; 0055684c
        ;   XREF to: 005564f1 (CONDITIONAL_JUMP)  ; LAB_005564f1
    JBE 0x00556833                      ; 00556852
        ;   XREF to: 00556833 (CONDITIONAL_JUMP)  ; LAB_00556833
    CMP EBX,0x20                        ; 00556854
    JZ 0x0055683d                       ; 00556857
        ;   XREF to: 0055683d (CONDITIONAL_JUMP)  ; LAB_0055683d
    JMP 0x005564f1                      ; 00556859
        ;   XREF to: 005564f1 (UNCONDITIONAL_JUMP)  ; LAB_005564f1
    JBE 0x0055681f                      ; 0055685e
        ;   XREF to: 0055681f (CONDITIONAL_JUMP)  ; LAB_0055681f
        ;   Label: LAB_0055685e
    CMP EBX,0xf                         ; 00556860
    JZ 0x00556829                       ; 00556863
        ;   XREF to: 00556829 (CONDITIONAL_JUMP)  ; LAB_00556829
    JMP 0x005564f1                      ; 00556865
        ;   XREF to: 005564f1 (UNCONDITIONAL_JUMP)  ; LAB_005564f1
    MOV EBX,0x640ee6                    ; 0055686a | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_0055686a
    MOV ESI,0x41a                       ; 0055686f
    PUSH 0x640efc                       ; 00556874 | = "Unable to allocate object for color q..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00556879 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0055687f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00556885
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0055688a
    JMP 0x005565c4                      ; 0055688d
        ;   XREF to: 005565c4 (UNCONDITIONAL_JUMP)  ; LAB_005565c4
    MOV EBX,0x640fd9                    ; 00556892 | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_00556892
    MOV ESI,0x434                       ; 00556897
    PUSH 0x640fef                       ; 0055689c | = "Unable to allocate quantized bitmap!"
    MOV dword ptr [0x02f0ca48],EBX      ; 005568a1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005568a7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005568ad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005568b2
    JMP 0x005566cb                      ; 005568b5
        ;   XREF to: 005566cb (UNCONDITIONAL_JUMP)  ; LAB_005566cb
    MOV ECX,0x64102a                    ; 005568ba | = "..\\shape\\quantize.cpp"
        ;   Label: LAB_005568ba
    MOV EBX,0x43d                       ; 005568bf
    PUSH 0x641040                       ; 005568c4 | = "Unable to allocate quantized palette!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005568c9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005568cf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005568d5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005568da
    JMP 0x00556727                      ; 005568dd
        ;   XREF to: 00556727 (UNCONDITIONAL_JUMP)  ; LAB_00556727

