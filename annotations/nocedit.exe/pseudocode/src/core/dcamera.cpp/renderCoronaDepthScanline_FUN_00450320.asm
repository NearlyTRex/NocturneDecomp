; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderCoronaDepthScanline_FUN_00450320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[2]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 at 00471562
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 00473995
;
; Referenced Globals:
;   _BIT_INTEGER32 g_CameraDownscaleIterations
;   int[240] g_CoronaLeftExtent
;   int[240] g_CoronaRightExtent
;   int[240][320] g_CoronaDepthBuffer
;   int[240] g_CoronaLeftIntensity
;   int[240] g_CoronaRightIntensity
;   int g_ClipLeft
;   int g_ClipTop
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450320
        ;   Label: core_dcamera.cpp_renderCoronaDepthScanline_FUN_00450320
    PUSH ESI                            ; 00450321
    PUSH EDI                            ; 00450322
    PUSH EBP                            ; 00450323
    MOV EDI,dword ptr [ESP + 0x18]      ; 00450324
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00450328
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045032c
    SUB ECX,dword ptr [0x02d0255c]      ; 00450330 | g_ClipTop
    MOV EBX,dword ptr [0x013bc260]      ; 00450336 | g_CameraDownscaleIterations
    MOV dword ptr [ESP + 0x14],ECX      ; 0045033c
    CMP EBX,0x1                         ; 00450340
    JNZ 0x00450350                      ; 00450343
        ;   XREF to: 00450350 (CONDITIONAL_JUMP)  ; LAB_00450350
    TEST byte ptr [ESP + 0x14],0x1      ; 00450345
    JNZ 0x00450430                      ; 0045034a
        ;   XREF to: 00450430 (CONDITIONAL_JUMP)  ; LAB_00450430
    CMP dword ptr [0x013bc260],0x2      ; 00450350 | g_CameraDownscaleIterations
        ;   Label: LAB_00450350
    JNZ 0x00450364                      ; 00450357
        ;   XREF to: 00450364 (CONDITIONAL_JUMP)  ; LAB_00450364
    TEST byte ptr [ESP + 0x14],0x3      ; 00450359
    JNZ 0x00450430                      ; 0045035e
        ;   XREF to: 00450430 (CONDITIONAL_JUMP)  ; LAB_00450430
    MOV EBP,dword ptr [ESP + 0x14]      ; 00450364
        ;   Label: LAB_00450364
    MOV CL,byte ptr [0x013bc260]        ; 00450368 | g_CameraDownscaleIterations
    MOV EAX,[0x02d02558]                ; 0045036e | g_ClipLeft
    MOV EBX,dword ptr [EDI + 0x8]       ; 00450373
    MOV ESI,dword ptr [EDX + 0x8]       ; 00450376
    SAR EBX,0x10                        ; 00450379
    SAR ESI,0x10                        ; 0045037c
    SAR EBP,CL                          ; 0045037f
    SUB EBX,EAX                         ; 00450381
    SUB ESI,EAX                         ; 00450383
    SAR EBX,CL                          ; 00450385
    SAR ESI,CL                          ; 00450387
    MOV dword ptr [ESP + 0x14],EBP      ; 00450389
    CMP EBX,ESI                         ; 0045038d
    JLE 0x0045039d                      ; 0045038f
        ;   XREF to: 0045039d (CONDITIONAL_JUMP)  ; LAB_0045039d
    MOV EAX,EBX                         ; 00450391
    MOV EBX,ESI                         ; 00450393
    MOV ESI,EAX                         ; 00450395
    MOV EAX,EDI                         ; 00450397
    MOV EDI,EDX                         ; 00450399
    MOV EDX,EAX                         ; 0045039b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045039d
        ;   Label: LAB_0045039d
    SHL EAX,0x2                         ; 004503a1
    CMP EBX,dword ptr [EAX + 0x1576fa8] ; 004503a4 | g_CoronaLeftExtent
    JNC 0x004503bb                      ; 004503aa
        ;   XREF to: 004503bb (CONDITIONAL_JUMP)  ; LAB_004503bb
    MOV dword ptr [EAX + 0x1576fa8],EBX ; 004503ac | g_CoronaLeftExtent
    MOV ECX,dword ptr [EDI + 0x10]      ; 004503b2
    MOV dword ptr [EAX + 0x15c2728],ECX ; 004503b5 | g_CoronaLeftIntensity
    MOV EAX,dword ptr [ESP + 0x14]      ; 004503bb
        ;   Label: LAB_004503bb
    SHL EAX,0x2                         ; 004503bf
    CMP ESI,dword ptr [EAX + 0x1577368] ; 004503c2 | g_CoronaRightExtent
    JBE 0x004503d9                      ; 004503c8
        ;   XREF to: 004503d9 (CONDITIONAL_JUMP)  ; LAB_004503d9
    MOV dword ptr [EAX + 0x1577368],ESI ; 004503ca | g_CoronaRightExtent
    MOV ECX,dword ptr [EDX + 0x10]      ; 004503d0
    MOV dword ptr [EAX + 0x15c2ae8],ECX ; 004503d3 | g_CoronaRightIntensity
    MOV EAX,ESI                         ; 004503d9
        ;   Label: LAB_004503d9
    MOV EDX,dword ptr [EDX + 0x28]      ; 004503db
    MOV ECX,dword ptr [EDI + 0x28]      ; 004503de
    SUB EAX,EBX                         ; 004503e1
    SUB EDX,ECX                         ; 004503e3
    LEA EDI,[EAX + 0x1]                 ; 004503e5
    MOV EAX,EDX                         ; 004503e8
    SAR EDX,0x1f                        ; 004503ea
    IDIV EDI                            ; 004503ed
    MOV EDX,dword ptr [ESP + 0x14]      ; 004503ef
    MOV EDI,EAX                         ; 004503f3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004503f5
    ADD EAX,EDX                         ; 004503fc
    MOV EDX,0x1577728                   ; 004503fe | g_CoronaDepthBuffer
    SHL EAX,0x8                         ; 00450403
    ADD EDX,EAX                         ; 00450406
    LEA EAX,[EBX*0x4 + 0x0]             ; 00450408
    ADD EAX,EDX                         ; 0045040f
    CMP EBX,ESI                         ; 00450411
    JGE 0x00450430                      ; 00450413
        ;   XREF to: 00450430 (CONDITIONAL_JUMP)  ; LAB_00450430
    MOV EDX,ECX                         ; 00450415
        ;   Label: LAB_00450415
    INC EBX                             ; 00450417
    ADD EAX,0x4                         ; 00450418
    SAR EDX,0x8                         ; 0045041b
    ADD ECX,EDI                         ; 0045041e
    MOV dword ptr [EAX + -0x4],EDX      ; 00450420
    CMP EBX,ESI                         ; 00450423
    JL 0x00450415                       ; 00450425
        ;   XREF to: 00450415 (CONDITIONAL_JUMP)  ; LAB_00450415
    LEA EAX,[EAX]                       ; 00450427
    LEA EDX,[EDX]                       ; 0045042d
    POP EBP                             ; 00450430
        ;   Label: LAB_00450430
    POP EDI                             ; 00450431
    POP ESI                             ; 00450432
    POP EBX                             ; 00450433
    RET                                 ; 00450434

