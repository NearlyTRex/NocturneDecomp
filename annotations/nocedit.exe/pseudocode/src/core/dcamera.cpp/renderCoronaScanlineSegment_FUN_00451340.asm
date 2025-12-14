; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340(int row_index, int column_start, int column_end)
;
; Parameters:
; int              Stack[0x4]:4   row_index
; int              Stack[0x8]:4   column_start
; int              Stack[0xc]:4   column_end
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   CVector3i[15360] g_PrecomputedWorldPositions
;   char[241][320] g_CoronaBlurOutputBuffer
;   int g_CameraDownscaleIterations
;   int[240][320] g_CoronaDepthBuffer
;   CDemonGlobe* g_CurrentGlobe
;   uint*[1024] g_ZBufferScanlineArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451340
        ;   Label: core_dcamera.cpp_renderCoronaScanlineSegment_FUN_00451340
    PUSH ESI                            ; 00451341
    PUSH EDI                            ; 00451342
    PUSH EBP                            ; 00451343
    SUB ESP,0xc                         ; 00451344
    MOV ESI,dword ptr [ESP + 0x20]      ; 00451347
    MOV EAX,ESI                         ; 0045134b
    SHL EAX,0x8                         ; 0045134d
    MOV EDX,EAX                         ; 00451350
    SHL EAX,0x4                         ; 00451352
    MOV EBX,0x902f74                    ; 00451355 | g_PrecomputedWorldPositions
    SUB EAX,EDX                         ; 0045135a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045135c
    ADD EBX,EAX                         ; 00451360
    LEA EAX,[EDX*0x4 + 0x0]             ; 00451362
    SUB EAX,EDX                         ; 00451369
    SHL EAX,0x2                         ; 0045136b
    ADD EBX,EAX                         ; 0045136e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00451370
    ADD EAX,ESI                         ; 00451377
    SHL EAX,0x6                         ; 00451379
    ADD EAX,0xba8c78                    ; 0045137c | g_CoronaBlurOutputBuffer
    LEA EBP,[EDX + EAX*0x1]             ; 00451381
    LEA EAX,[ESI*0x4 + 0x0]             ; 00451384
    ADD EAX,ESI                         ; 0045138b
    SHL EAX,0x8                         ; 0045138d
    SHL EDX,0x2                         ; 00451390
    ADD EAX,0x1577728                   ; 00451393 | g_CoronaDepthBuffer
    ADD EAX,EDX                         ; 00451398
    MOV CL,byte ptr [0x013bc260]        ; 0045139a | g_CameraDownscaleIterations
    MOV dword ptr [ESP + 0x4],EAX       ; 004513a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004513a4
    SHL ESI,CL                          ; 004513a8
    SHL EAX,CL                          ; 004513aa
    MOV EDX,dword ptr [ESI*0x4 + 0x2cf7d5c] ; 004513ac | g_ZBufferScanlineArray
    SHL EAX,0x2                         ; 004513b3
    ADD EDX,EAX                         ; 004513b6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004513b8
    MOV dword ptr [ESP + 0x8],EDX       ; 004513bc
    CMP EAX,dword ptr [ESP + 0x28]      ; 004513c0
    JGE 0x0045140e                      ; 004513c4
        ;   XREF to: 0045140e (CONDITIONAL_JUMP)  ; LAB_0045140e
    MOV EDX,dword ptr [ESP + 0x4]       ; 004513c6
        ;   Label: LAB_004513c6
    MOV EAX,dword ptr [ESP + 0x8]       ; 004513ca
    MOV ECX,dword ptr [EDX]             ; 004513ce
    CMP ECX,dword ptr [EAX]             ; 004513d0
    JA 0x00451416                       ; 004513d2
        ;   XREF to: 00451416 (CONDITIONAL_JUMP)  ; LAB_00451416
    MOV EAX,0x1                         ; 004513d4
        ;   Label: LAB_004513d4
    MOV ESI,dword ptr [ESP + 0x4]       ; 004513d9
    MOV EDI,dword ptr [ESP + 0x24]      ; 004513dd
    MOV EDX,dword ptr [ESP + 0x28]      ; 004513e1
    MOV CL,byte ptr [0x013bc260]        ; 004513e5 | g_CameraDownscaleIterations
    ADD EBX,0xc                         ; 004513eb
    INC EBP                             ; 004513ee
    ADD ESI,0x4                         ; 004513ef
    INC EDI                             ; 004513f2
    SHL EAX,CL                          ; 004513f3
    MOV ECX,dword ptr [ESP + 0x8]       ; 004513f5
    SHL EAX,0x2                         ; 004513f9
    MOV dword ptr [ESP + 0x4],ESI       ; 004513fc
    ADD ECX,EAX                         ; 00451400
    MOV dword ptr [ESP + 0x24],EDI      ; 00451402
    MOV dword ptr [ESP + 0x8],ECX       ; 00451406
    CMP EDI,EDX                         ; 0045140a
    JL 0x004513c6                       ; 0045140c
        ;   XREF to: 004513c6 (CONDITIONAL_JUMP)  ; LAB_004513c6
    ADD ESP,0xc                         ; 0045140e
        ;   Label: LAB_0045140e
    POP EBP                             ; 00451411
    POP EDI                             ; 00451412
    POP ESI                             ; 00451413
    POP EBX                             ; 00451414
    RET                                 ; 00451415
    MOV ECX,dword ptr [0x015c4170]      ; 00451416 | g_CurrentGlobe
        ;   Label: LAB_00451416
    MOV ESI,dword ptr [EBX]             ; 0045141c
    MOV EDI,dword ptr [ECX]             ; 0045141e
    SUB ESI,EDI                         ; 00451420
    MOV EAX,ESI                         ; 00451422
    CDQ                                 ; 00451424
    XOR EAX,EDX                         ; 00451425
    SUB EAX,EDX                         ; 00451427
    CMP EAX,dword ptr [ECX + 0xc]       ; 00451429
    JGE 0x004513d4                      ; 0045142c
        ;   XREF to: 004513d4 (CONDITIONAL_JUMP)  ; LAB_004513d4
    MOV EDI,dword ptr [0x015c4170]      ; 0045142e | g_CurrentGlobe
    MOV ECX,dword ptr [EBX + 0x4]       ; 00451434
    MOV EAX,dword ptr [EDI + 0x4]       ; 00451437
    SUB ECX,EAX                         ; 0045143a
    MOV EAX,ECX                         ; 0045143c
    CDQ                                 ; 0045143e
    XOR EAX,EDX                         ; 0045143f
    SUB EAX,EDX                         ; 00451441
    CMP EAX,dword ptr [EDI + 0xc]       ; 00451443
    JGE 0x004513d4                      ; 00451446
        ;   XREF to: 004513d4 (CONDITIONAL_JUMP)  ; LAB_004513d4
    MOV EAX,[0x015c4170]                ; 00451448 | g_CurrentGlobe
    MOV EDI,dword ptr [EBX + 0x8]       ; 0045144d
    SUB EDI,dword ptr [EAX + 0x8]       ; 00451450
    MOV dword ptr [ESP],EAX             ; 00451453
    MOV EAX,EDI                         ; 00451456
    CDQ                                 ; 00451458
    XOR EAX,EDX                         ; 00451459
    SUB EAX,EDX                         ; 0045145b
    MOV EDX,dword ptr [ESP]             ; 0045145d
    CMP EAX,dword ptr [EDX + 0xc]       ; 00451460
    JGE 0x004513d4                      ; 00451463
        ;   XREF to: 004513d4 (CONDITIONAL_JUMP)  ; LAB_004513d4
    IMUL ESI,ESI                        ; 00451469
    MOV EDX,ECX                         ; 0045146c
    IMUL EDX,ECX                        ; 0045146e
    MOV EAX,EDI                         ; 00451471
    IMUL EAX,EDI                        ; 00451473
    MOV ECX,dword ptr [0x015c4170]      ; 00451476 | g_CurrentGlobe
    ADD EDX,ESI                         ; 0045147c
    MOV ESI,dword ptr [ECX + 0x10]      ; 0045147e
    ADD EAX,EDX                         ; 00451481
    CMP EAX,ESI                         ; 00451483
    JGE 0x004513d4                      ; 00451485
        ;   XREF to: 004513d4 (CONDITIONAL_JUMP)  ; LAB_004513d4
    MOV EDX,ESI                         ; 0045148b
    SUB EDX,EAX                         ; 0045148d
    MOV EAX,EDX                         ; 0045148f
    SAR EAX,0x10                        ; 00451491
    MOV EDX,dword ptr [ECX + 0x14]      ; 00451494
    IMUL EDX                            ; 00451497
    SHRD EAX,EDX,0x10                   ; 00451499
    ADD byte ptr [EBP],AL               ; 0045149d
    JMP 0x004513d4                      ; 004514a0
        ;   XREF to: 004513d4 (UNCONDITIONAL_JUMP)  ; LAB_004513d4

