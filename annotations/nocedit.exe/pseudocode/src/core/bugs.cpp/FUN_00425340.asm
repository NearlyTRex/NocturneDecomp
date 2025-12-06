; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_00425340()
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
;
; Referenced Globals:
;   double DOUBLE_00616d2b = 0.25
;   undefined4 DAT_0065b5b0
;   undefined4 DAT_0065b5c8
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425340
        ;   Label: core_bugs.cpp_FUN_00425340
    PUSH ESI                            ; 00425341
    PUSH EDI                            ; 00425342
    PUSH EBP                            ; 00425343
    MOV EBP,ESP                         ; 00425344
    SUB ESP,0x34                        ; 00425346
    AND ESP,0xfffffff8                  ; 00425349
    XOR EDX,EDX                         ; 0042534c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042534e
    MOV dword ptr [ESP + 0x20],EDX      ; 00425351
    MOV dword ptr [ESP + 0x1c],EAX      ; 00425355
    MOV EAX,dword ptr [ESP + 0x20]      ; 00425359
        ;   Label: LAB_00425359
    MOV dword ptr [ESP + 0x30],EAX      ; 0042535d
    FILD dword ptr [ESP + 0x30]         ; 00425361
    FMUL float ptr [0x0065b5c8]         ; 00425365 | DAT_0065b5c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042536b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042536e
    FADD float ptr [EAX + 0x199ec]      ; 00425372
    IMUL EAX,ECX,0x30                   ; 00425378
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0042537b
    XOR ESI,ESI                         ; 0042537f
    FSTP float ptr [ESP]                ; 00425381
    MOV dword ptr [ESP + 0x2c],EAX      ; 00425384
    MOV dword ptr [ESP + 0x30],ESI      ; 00425388
        ;   Label: LAB_00425388
    FILD dword ptr [ESP + 0x30]         ; 0042538c
    FMUL float ptr [0x0065b5c8]         ; 00425390 | DAT_0065b5c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00425396
    LEA EBX,[ESP + 0xc]                 ; 00425399
    FADD float ptr [EAX + 0x199f0]      ; 0042539d
    MOV EDX,dword ptr [0x006703ec]      ; 004253a3 | CDemonRenderer * g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x8]          ; 004253a9
    FLD float ptr [EDI + 0x128b8]       ; 004253ad
    FADD double ptr [0x00616d2b]        ; 004253b3 | double DOUBLE_00616d2b
    MOV EAX,ESP                         ; 004253b9
    FSTP float ptr [ESP + 0x4]          ; 004253bb
    FLD float ptr [EAX]                 ; 004253bf
    FMUL float ptr [0x0065b5b0]         ; 004253c1 | DAT_0065b5b0
    FISTP dword ptr [EBX]               ; 004253c7
    FLD float ptr [EAX + 0x4]           ; 004253c9
    FMUL float ptr [0x0065b5b0]         ; 004253cc | DAT_0065b5b0
    FISTP dword ptr [EBX + 0x4]         ; 004253d2
    FLD float ptr [EAX + 0x8]           ; 004253d5
    FMUL float ptr [0x0065b5b0]         ; 004253d8 | DAT_0065b5b0
    FISTP dword ptr [EBX + 0x8]         ; 004253de
    LEA EAX,[ESP + 0xc]                 ; 004253e1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004253e5
    PUSH EAX                            ; 004253e9
    MOV EAX,dword ptr [EDX]             ; 004253ea | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,EBX                         ; 004253ec
    PUSH EAX                            ; 004253ee
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004253ef | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004253f4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004253f7
    ADD EDI,0x4                         ; 004253fb
    ADD EAX,0x240                       ; 004253fe
    INC ESI                             ; 00425403
    MOV dword ptr [ESP + 0x2c],EAX      ; 00425404
    CMP ESI,0xc                         ; 00425408
    JL 0x00425388                       ; 0042540b | LAB_00425388
        ;   XREF to: 00425388 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x20]      ; 00425411
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00425415
    INC ECX                             ; 00425419
    ADD EDX,0x30                        ; 0042541a
    MOV dword ptr [ESP + 0x20],ECX      ; 0042541d
    MOV dword ptr [ESP + 0x1c],EDX      ; 00425421
    CMP ECX,0xc                         ; 00425425
    JL 0x00425359                       ; 00425428 | LAB_00425359
        ;   XREF to: 00425359 (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 0042542e
    MOV ESI,dword ptr [0x006703ec]      ; 00425430 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 00425436 | CDemonRenderer g_CDemonRendererInstance
    MOV EDI,0xc                         ; 00425437
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 0042543c | void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00425441
    MOV dword ptr [ESP + 0x24],EDI      ; 00425444
    MOV EAX,dword ptr [ESP + 0x24]      ; 00425448
        ;   Label: LAB_00425448
    MOV dword ptr [ESP + 0x28],EAX      ; 0042544c
    LEA EDI,[EAX + -0xb]                ; 00425450
    MOV ESI,0x1                         ; 00425453
    MOV EBX,EAX                         ; 00425458
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042545a
        ;   Label: LAB_0042545a
    PUSH EBX                            ; 0042545e
    ADD EAX,ESI                         ; 0042545f
    PUSH EAX                            ; 00425461
    MOV EDX,dword ptr [0x006703ec]      ; 00425462 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00425468 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x24],EAX      ; 00425469
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0042546d | void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00425472
    PUSH EDI                            ; 00425475
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00425476
    PUSH ECX                            ; 0042547a
    MOV EAX,[0x006703ec]                ; 0042547b | CDemonRenderer * g_CDemonRendererPtr
    INC EBX                             ; 00425480
    PUSH EAX                            ; 00425481 | CDemonRenderer g_CDemonRendererInstance
    INC ESI                             ; 00425482
    INC EDI                             ; 00425483
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 00425484 | void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00425489
    CMP ESI,0xc                         ; 0042548c
    JL 0x0042545a                       ; 0042548f | LAB_0042545a
        ;   XREF to: 0042545a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x24]      ; 00425491
    ADD EDX,0xc                         ; 00425495
    MOV dword ptr [ESP + 0x24],EDX      ; 00425498
    CMP EDX,0x90                        ; 0042549c
    JNZ 0x00425448                      ; 004254a2 | LAB_00425448
        ;   XREF to: 00425448 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004254a4
    POP EBP                             ; 004254a6
    POP EDI                             ; 004254a7
    POP ESI                             ; 004254a8
    POP EBX                             ; 004254a9
    RET                                 ; 004254aa

