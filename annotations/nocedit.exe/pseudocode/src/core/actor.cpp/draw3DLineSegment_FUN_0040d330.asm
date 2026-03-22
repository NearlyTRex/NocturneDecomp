; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   start_point
; CVector3f *      Stack[0x8]:4   direction_offset
; Local Variables:
; CVector3i        Stack[-0x54]:12  local_54
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; CVector3i        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0061444c = 0.2000000
;   float FLOAT_00614450 = 0.8000000
;   float FLOAT_006597b0 = 256
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d330
        ;   Label: core_actor.cpp_draw3DLineSegment_FUN_0040d330
    PUSH ESI                            ; 0040d331
    PUSH EDI                            ; 0040d332
    SUB ESP,0x48                        ; 0040d333
    MOV EDX,dword ptr [ESP + 0x58]      ; 0040d336
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0040d33a
    MOV EAX,dword ptr [EDX]             ; 0040d33e
    MOV dword ptr [ESP + 0x30],EAX      ; 0040d340
    LEA EAX,[EDX + 0x4]                 ; 0040d344
    MOV EAX,dword ptr [EAX]             ; 0040d347
    MOV dword ptr [ESP + 0x34],EAX      ; 0040d349
    LEA EAX,[EDX + 0x8]                 ; 0040d34d
    MOV EAX,dword ptr [EAX]             ; 0040d350
    MOV dword ptr [ESP + 0x38],EAX      ; 0040d352
    FLD float ptr [0x0061444c]          ; 0040d356 | FLOAT_0061444c
    FLD float ptr [EBX]                 ; 0040d35c
    FMUL ST1                            ; 0040d35e
    FSTP float ptr [ESP + 0x3c]         ; 0040d360
    FLD float ptr [EBX + 0x4]           ; 0040d364
    FMUL ST1                            ; 0040d367
    FSTP float ptr [ESP + 0x40]         ; 0040d369
    FMUL float ptr [EBX + 0x8]          ; 0040d36d
    FSTP float ptr [ESP + 0x44]         ; 0040d370
    FLD float ptr [0x00614450]          ; 0040d374 | FLOAT_00614450
    FLD float ptr [EDX]                 ; 0040d37a
    FMUL ST1                            ; 0040d37c
    FSTP float ptr [ESP + 0xc]          ; 0040d37e
    FLD float ptr [EDX + 0x4]           ; 0040d382
    FMUL ST1                            ; 0040d385
    FSTP float ptr [ESP + 0x10]         ; 0040d387
    FMUL float ptr [EDX + 0x8]          ; 0040d38b
    LEA EAX,[ESP + 0x30]                ; 0040d38e
    MOV EBX,ESP                         ; 0040d392
    FLD float ptr [ESP + 0xc]           ; 0040d394
    FADD float ptr [ESP + 0x3c]         ; 0040d398
    FLD float ptr [ESP + 0x10]          ; 0040d39c
    FXCH                                ; 0040d3a0
    FSTP float ptr [ESP + 0x18]         ; 0040d3a2
    MOV EDX,dword ptr [0x006703e8]      ; 0040d3a6 | g_CDemonRendererPtr1
    FADD float ptr [ESP + 0x40]         ; 0040d3ac
    FXCH                                ; 0040d3b0
    FST float ptr [ESP + 0x14]          ; 0040d3b2
    FADD float ptr [ESP + 0x44]         ; 0040d3b6
    FXCH                                ; 0040d3ba
    FSTP float ptr [ESP + 0x1c]         ; 0040d3bc
    FSTP float ptr [ESP + 0x20]         ; 0040d3c0
    FLD float ptr [EAX]                 ; 0040d3c4
    FMUL float ptr [0x006597b0]         ; 0040d3c6 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d3cc
    FLD float ptr [EAX + 0x4]           ; 0040d3ce
    FMUL float ptr [0x006597b0]         ; 0040d3d1 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d3d7
    FLD float ptr [EAX + 0x8]           ; 0040d3da
    FMUL float ptr [0x006597b0]         ; 0040d3dd | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d3e3
    MOV EAX,ESP                         ; 0040d3e6
    PUSH EAX                            ; 0040d3e8
    MOV EAX,dword ptr [EDX]             ; 0040d3e9 | g_CDemonRendererInstance
    PUSH EAX                            ; 0040d3eb
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d3ec
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x2c]                ; 0040d3f1
    ADD ESP,0x8                         ; 0040d3f5
    LEA EAX,[ESP + 0x18]                ; 0040d3f8
    MOV EDX,dword ptr [0x006703e8]      ; 0040d3fc | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 0040d402
    FMUL float ptr [0x006597b0]         ; 0040d404 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040d40a
    FLD float ptr [EAX + 0x4]           ; 0040d40c
    FMUL float ptr [0x006597b0]         ; 0040d40f | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040d415
    FLD float ptr [EAX + 0x8]           ; 0040d418
    FMUL float ptr [0x006597b0]         ; 0040d41b | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040d421
    LEA EAX,[ESP + 0x24]                ; 0040d424
    PUSH EAX                            ; 0040d428
    MOV EAX,dword ptr [EDX]             ; 0040d429 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 0040d42b
    PUSH EAX                            ; 0040d42e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040d42f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0040d434
    MOV EAX,[0x006703e8]                ; 0040d437 | g_CDemonRendererPtr1
    JMP 0x00604780                      ; 0040d43c
        ;   XREF to: 00604780 (UNCONDITIONAL_JUMP)  ; LAB_00604780
    MOVSD.REP ES:EDI,ESI                ; 0040d44b
        ;   Label: LAB_0040d44b
    JMP 0x006047da                      ; 0040d44d
        ;   XREF to: 006047da (UNCONDITIONAL_JUMP)  ; LAB_006047da
    MOVSD.REP ES:EDI,ESI                ; 0040d459
        ;   Label: LAB_0040d459
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040d45b
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0040d460
    ADD ESP,0x48                        ; 0040d463
    POP EDI                             ; 0040d466
    POP ESI                             ; 0040d467
    POP EBX                             ; 0040d468
    RET                                 ; 0040d469
    SUB ESP,0x30                        ; 00604780
        ;   Label: LAB_00604780
    MOV EAX,dword ptr [EAX]             ; 00604783
    MOV ECX,0xc                         ; 00604785
    MOV EDI,ESP                         ; 0060478a
    LEA ESI,[EAX + 0x30]                ; 0060478c
    MOV ECX,dword ptr [ESI]             ; 0060478f
    MOV dword ptr [EDI],ECX             ; 00604791
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604793
    MOV dword ptr [EDI + 0x4],ECX       ; 00604796
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604799
    MOV dword ptr [EDI + 0x8],ECX       ; 0060479c
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060479f
    MOV dword ptr [EDI + 0xc],ECX       ; 006047a2
    MOV ECX,dword ptr [ESI + 0x10]      ; 006047a5
    MOV dword ptr [EDI + 0x10],ECX      ; 006047a8
    MOV ECX,dword ptr [ESI + 0x14]      ; 006047ab
    MOV dword ptr [EDI + 0x14],ECX      ; 006047ae
    MOV ECX,dword ptr [ESI + 0x18]      ; 006047b1
    MOV dword ptr [EDI + 0x18],ECX      ; 006047b4
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006047b7
    MOV dword ptr [EDI + 0x1c],ECX      ; 006047ba
    MOV ECX,dword ptr [ESI + 0x20]      ; 006047bd
    MOV dword ptr [EDI + 0x20],ECX      ; 006047c0
    MOV ECX,dword ptr [ESI + 0x24]      ; 006047c3
    MOV dword ptr [EDI + 0x24],ECX      ; 006047c6
    MOV ECX,dword ptr [ESI + 0x28]      ; 006047c9
    MOV dword ptr [EDI + 0x28],ECX      ; 006047cc
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006047cf
    MOV dword ptr [EDI + 0x2c],ECX      ; 006047d2
    JMP 0x0040d44b                      ; 006047d5
        ;   XREF to: 0040d44b (UNCONDITIONAL_JUMP)  ; LAB_0040d44b
    SUB ESP,0x30                        ; 006047da
        ;   Label: LAB_006047da
    MOV ECX,0xc                         ; 006047dd
    MOV EDI,ESP                         ; 006047e2
    MOV ESI,EAX                         ; 006047e4
    MOV ECX,dword ptr [ESI]             ; 006047e6
    MOV dword ptr [EDI],ECX             ; 006047e8
    MOV ECX,dword ptr [ESI + 0x4]       ; 006047ea
    MOV dword ptr [EDI + 0x4],ECX       ; 006047ed
    MOV ECX,dword ptr [ESI + 0x8]       ; 006047f0
    MOV dword ptr [EDI + 0x8],ECX       ; 006047f3
    MOV ECX,dword ptr [ESI + 0xc]       ; 006047f6
    MOV dword ptr [EDI + 0xc],ECX       ; 006047f9
    MOV ECX,dword ptr [ESI + 0x10]      ; 006047fc
    MOV dword ptr [EDI + 0x10],ECX      ; 006047ff
    MOV ECX,dword ptr [ESI + 0x14]      ; 00604802
    MOV dword ptr [EDI + 0x14],ECX      ; 00604805
    MOV ECX,dword ptr [ESI + 0x18]      ; 00604808
    MOV dword ptr [EDI + 0x18],ECX      ; 0060480b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060480e
    MOV dword ptr [EDI + 0x1c],ECX      ; 00604811
    MOV ECX,dword ptr [ESI + 0x20]      ; 00604814
    MOV dword ptr [EDI + 0x20],ECX      ; 00604817
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060481a
    MOV dword ptr [EDI + 0x24],ECX      ; 0060481d
    MOV ECX,dword ptr [ESI + 0x28]      ; 00604820
    MOV dword ptr [EDI + 0x28],ECX      ; 00604823
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00604826
    MOV dword ptr [EDI + 0x2c],ECX      ; 00604829
    JMP 0x0040d459                      ; 0060482c
        ;   XREF to: 0040d459 (UNCONDITIONAL_JUMP)  ; LAB_0040d459

