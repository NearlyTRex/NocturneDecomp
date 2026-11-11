; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470(CZThumb *this_ptr,CVector3f *camera_pos,CVector3f *look_at_pos,int width,int height,float projection_scale,_FILE *file_handle)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   camera_pos
; CVector3f *      Stack[0xc]:4   look_at_pos
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; float            Stack[0x18]:4   projection_scale
; _FILE *          Stack[0x1c]:4   file_handle
;
; XREF[1]:
;   core_setdir.cpp_FUN_005398d0 at 00539bc3
;
; Referenced Globals:
;   TerminatedCString s_core_setdir_cpp_005e5f5d
;   TerminatedCString s_saveZBufferTable_already_005e5f70
;   TerminatedCString s_core_setdir_cpp_005e5f92
;   TerminatedCString s_saveZBufferTable_not_sav_005e5fa5
;   TerminatedCString s_core_setdir_cpp_005e5fc3
;   TerminatedCString s_Out_of_memory_005e5fd6
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c2b650
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_020b0258
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0
;   core_setdir.cpp_CZThumb_free_FUN_005386a0
;   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0
;   core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fread_FUN_005b87c0
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;   engine_special.cpp_clearZBufferNative_FUN_0055b254
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538470
        ;   Label: core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470
    PUSH ESI                            ; 00538471
    PUSH EDI                            ; 00538472
    PUSH EBP                            ; 00538473
    MOV ESI,dword ptr [ESP + 0x14]      ; 00538474
    MOV EDI,dword ptr [ESP + 0x18]      ; 00538478
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053847c
    PUSH ESI                            ; 00538480
    CALL core_setdir.cpp_CZThumb_free_FUN_005386a0 ; 00538481
        ;   XREF to: 005386a0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_free_FUN_005386a0(CZThumb * this_ptr)
    LEA EAX,[ESI + 0x8]                 ; 00538486
    ADD ESP,0x4                         ; 00538489
    CMP EAX,EDI                         ; 0053848c
    JNZ 0x0053863d                      ; 0053848e
        ;   XREF to: 0053863d (CONDITIONAL_JUMP)  ; LAB_0053863d
    LEA EAX,[ESI + 0x14]                ; 00538494
        ;   Label: LAB_00538494
    CMP EAX,EBX                         ; 00538497
    JZ 0x005384ab                       ; 00538499
        ;   XREF to: 005384ab (CONDITIONAL_JUMP)  ; LAB_005384ab
    MOV EDX,dword ptr [EBX]             ; 0053849b
    MOV dword ptr [EAX],EDX             ; 0053849d
    MOV EDX,dword ptr [EBX + 0x4]       ; 0053849f
    MOV dword ptr [EAX + 0x4],EDX       ; 005384a2
    MOV EDX,dword ptr [EBX + 0x8]       ; 005384a5
    MOV dword ptr [EAX + 0x8],EDX       ; 005384a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005384ab
        ;   Label: LAB_005384ab
    MOV dword ptr [ESI],EAX             ; 005384af
    MOV EAX,dword ptr [ESP + 0x24]      ; 005384b1
    MOV dword ptr [ESI + 0x4],EAX       ; 005384b5
    MOV EAX,dword ptr [ESP + 0x28]      ; 005384b8
    MOV dword ptr [ESI + 0x20],EAX      ; 005384bc
    MOV EDX,dword ptr [ESI + 0x4]       ; 005384bf
    MOV EAX,dword ptr [ESI]             ; 005384c2
    IMUL EAX,EDX                        ; 005384c4
    SHL EAX,0x2                         ; 005384c7
    PUSH EAX                            ; 005384ca
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005384cb
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005384d0
    MOV dword ptr [ESI + 0x24],EAX      ; 005384d3
    TEST EAX,EAX                        ; 005384d6
    JNZ 0x005384fd                      ; 005384d8
        ;   XREF to: 005384fd (CONDITIONAL_JUMP)  ; LAB_005384fd
    MOV EBX,0x5e5fc3                    ; 005384da | = "..\\core\\setdir.cpp"
    MOV EDI,0x9f                        ; 005384df
    PUSH 0x5e5fd6                       ; 005384e4 | = "Out of memory"
    MOV dword ptr [0x01d046a0],EBX      ; 005384e9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005384ef | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005384f5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005384fa
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005384fd
        ;   Label: LAB_005384fd
    TEST EBP,EBP                        ; 00538501
    JNZ 0x00538652                      ; 00538503
        ;   XREF to: 00538652 (CONDITIONAL_JUMP)  ; LAB_00538652
    MOV EBX,dword ptr [0x0060b280]      ; 00538509 | DAT_0060b280
    PUSH EBX                            ; 0053850f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00538510
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00538515
    PUSH EBP                            ; 00538518
    MOV EBP,dword ptr [0x0060b280]      ; 00538519 | DAT_0060b280
    PUSH EBP                            ; 0053851f | DAT_01ba5c50
    MOV EDI,EAX                         ; 00538520
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 00538522
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    MOV EAX,[0x020b0258]                ; 00538527 | DAT_020b0258
    ADD ESP,0x8                         ; 0053852c
    MOV EBX,dword ptr [ESI + 0x4]       ; 0053852f
    TEST EAX,EAX                        ; 00538532
    JZ 0x00538559                       ; 00538534
        ;   XREF to: 00538559 (CONDITIONAL_JUMP)  ; LAB_00538559
    MOV EDX,0x5e5f5d                    ; 00538536 | = "..\\core\\setdir.cpp"
    MOV ECX,0x67                        ; 0053853b
    PUSH 0x5e5f70                       ; 00538540 | = "saveZBufferTable - already saved!"
    MOV dword ptr [0x01d046a0],EDX      ; 00538545 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0053854b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00538551
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00538556
    TEST EBX,EBX                        ; 00538559
        ;   Label: LAB_00538559
    JLE 0x00538580                      ; 0053855b
        ;   XREF to: 00538580 (CONDITIONAL_JUMP)  ; LAB_00538580
    LEA ECX,[EBX*0x4 + 0x0]             ; 0053855d
    XOR EAX,EAX                         ; 00538564
    ADD EAX,0x4                         ; 00538566
        ;   Label: LAB_00538566
    MOV EDX,dword ptr [EAX + 0x1c2b648] ; 00538569 | DAT_01c2b64c | DAT_01c2b650
    MOV dword ptr [EAX + 0x20b0254],EDX ; 0053856f | DAT_020b0258
    CMP EAX,ECX                         ; 00538575
    JL 0x00538566                       ; 00538577
        ;   XREF to: 00538566 (CONDITIONAL_JUMP)  ; LAB_00538566
    LEA EAX,[EAX]                       ; 00538579
    NOP                                 ; 0053857f
    PUSH ESI                            ; 00538580
        ;   Label: LAB_00538580
    CALL core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970 ; 00538581
        ;   XREF to: 00538970 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_setupZBufferScanlines_FUN_00538970(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 00538586
    PUSH ESI                            ; 00538589
    CALL core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 ; 0053858a
        ;   XREF to: 005389b0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 0053858f
    PUSH 0x2093940                      ; 00538592
    MOV EBX,dword ptr [0x0060b280]      ; 00538597 | DAT_0060b280
    PUSH EBX                            ; 0053859d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280 ; 0053859e
        ;   XREF to: 0046b280 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 005385a3
    CALL engine_special.cpp_clearZBufferNative_FUN_0055b254 ; 005385a6
        ;   XREF to: 0055b254 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearZBufferNative_FUN_0055b254()
    PUSH 0x0                            ; 005385ab
    MOV EBP,dword ptr [0x0061b5a8]      ; 005385ad | g_CDemonSetPtr
    PUSH 0x461c3f9a                     ; 005385b3
    PUSH EBP                            ; 005385b8 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 ; 005385b9
        ;   XREF to: 0052d0e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 005385be
    PUSH ESI                            ; 005385c1
    CALL core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30 ; 005385c2
        ;   XREF to: 00538a30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_popRenderingContext_FUN_00538a30(CZThumb * this_ptr)
    MOV EAX,[0x020b0258]                ; 005385c7 | DAT_020b0258
    ADD ESP,0x4                         ; 005385cc
    MOV ESI,dword ptr [ESI + 0x4]       ; 005385cf
    TEST EAX,EAX                        ; 005385d2
    JNZ 0x005385f9                      ; 005385d4
        ;   XREF to: 005385f9 (CONDITIONAL_JUMP)  ; LAB_005385f9
    MOV EDX,0x5e5f92                    ; 005385d6 | = "..\\core\\setdir.cpp"
    MOV ECX,0x70                        ; 005385db
    PUSH 0x5e5fa5                       ; 005385e0 | = "saveZBufferTable - not saved!"
    MOV dword ptr [0x01d046a0],EDX      ; 005385e5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005385eb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005385f1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005385f6
    TEST ESI,ESI                        ; 005385f9
        ;   Label: LAB_005385f9
    JLE 0x00538620                      ; 005385fb
        ;   XREF to: 00538620 (CONDITIONAL_JUMP)  ; LAB_00538620
    LEA ECX,[ESI*0x4 + 0x0]             ; 005385fd
    XOR EAX,EAX                         ; 00538604
    ADD EAX,0x4                         ; 00538606
        ;   Label: LAB_00538606
    MOV EDX,dword ptr [EAX + 0x20b0254] ; 00538609 | DAT_020b0258
    MOV dword ptr [EAX + 0x1c2b648],EDX ; 0053860f | DAT_01c2b64c | DAT_01c2b650
    CMP EAX,ECX                         ; 00538615
    JL 0x00538606                       ; 00538617
        ;   XREF to: 00538606 (CONDITIONAL_JUMP)  ; LAB_00538606
    LEA EAX,[EAX]                       ; 00538619
    NOP                                 ; 0053861f
    PUSH EDI                            ; 00538620
        ;   Label: LAB_00538620
    MOV ESI,dword ptr [0x0060b280]      ; 00538621 | DAT_0060b280
    XOR EBX,EBX                         ; 00538627
    PUSH ESI                            ; 00538629 | DAT_01ba5c50
    MOV dword ptr [0x020b0258],EBX      ; 0053862a | DAT_020b0258
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 00538630
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00538635
    POP EBP                             ; 00538638
    POP EDI                             ; 00538639
    POP ESI                             ; 0053863a
    POP EBX                             ; 0053863b
    RET                                 ; 0053863c
    MOV EDX,dword ptr [EDI]             ; 0053863d
        ;   Label: LAB_0053863d
    MOV dword ptr [EAX],EDX             ; 0053863f
    MOV EDX,dword ptr [EDI + 0x4]       ; 00538641
    MOV dword ptr [EAX + 0x4],EDX       ; 00538644
    MOV EDX,dword ptr [EDI + 0x8]       ; 00538647
    MOV dword ptr [EAX + 0x8],EDX       ; 0053864a
    JMP 0x00538494                      ; 0053864d
        ;   XREF to: 00538494 (UNCONDITIONAL_JUMP)  ; LAB_00538494
    MOV EAX,dword ptr [ESI]             ; 00538652
        ;   Label: LAB_00538652
    IMUL EAX,dword ptr [ESI + 0x4]      ; 00538654
    PUSH EBP                            ; 00538658
    PUSH 0x4                            ; 00538659
    PUSH EAX                            ; 0053865b
    MOV ECX,dword ptr [ESI + 0x24]      ; 0053865c
    PUSH ECX                            ; 0053865f
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00538660
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 00538665
    POP EBP                             ; 00538668
    POP EDI                             ; 00538669
    POP ESI                             ; 0053866a
    POP EBX                             ; 0053866b
    RET                                 ; 0053866c

