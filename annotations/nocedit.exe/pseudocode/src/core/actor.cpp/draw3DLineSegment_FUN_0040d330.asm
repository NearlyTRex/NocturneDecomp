; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_draw3DLineSegment_FUN_0040d330(CVector3i * start_point, CVector3f * direction_offset)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   start_point
; CVector3f *      Stack[0x8]:4   direction_offset
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0061444c = 0.2000000
;   float FLOAT_00614450 = 0.8000000
;   float FLOAT_006597b0 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
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
    MOV EDX,dword ptr [0x006703e8]      ; 0040d3a6 | g_CDemonRendererPtr
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
    MOV EDX,dword ptr [0x006703e8]      ; 0040d3fc | g_CDemonRendererPtr
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
    MOV EAX,[0x006703e8]                ; 0040d437 | g_CDemonRendererPtr
    SUB ESP,0x30                        ; 0040d43c
    MOV EAX,dword ptr [EAX]             ; 0040d43f | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0040d441
    MOV EDI,ESP                         ; 0040d446
    LEA ESI,[EAX + 0x30]                ; 0040d448
    MOVSD.REP ES:EDI,ESI                ; 0040d44b
    SUB ESP,0x30                        ; 0040d44d
    MOV ECX,0xc                         ; 0040d450
    MOV EDI,ESP                         ; 0040d455
    MOV ESI,EAX                         ; 0040d457
    MOVSD.REP ES:EDI,ESI                ; 0040d459
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0040d45b
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex * vertex1, SRenderVertex * vertex2)
    ADD ESP,0x60                        ; 0040d460
    ADD ESP,0x48                        ; 0040d463
    POP EDI                             ; 0040d466
    POP ESI                             ; 0040d467
    POP EBX                             ; 0040d468
    RET                                 ; 0040d469

