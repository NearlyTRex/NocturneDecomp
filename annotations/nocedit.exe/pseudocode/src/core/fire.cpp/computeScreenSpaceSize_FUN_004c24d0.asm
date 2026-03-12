; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_fire_cpp_computeScreenSpaceSize_FUN_004c24d0(float depth,float min_size)
;
; Parameters:
; float            Stack[0x4]:4   depth
; float            Stack[0x8]:4   min_size
; Local Variables:
; CVector3i        Stack[-0x34]:12  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; float            Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c2e1d
;
; Referenced Globals:
;   double DOUBLE_00629d03 = 0.00390625
;   double DOUBLE_00629d0b = 0.0000152587890625
;   float FLOAT_00629d13 = 0.2000000
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_ProjectionScale = 0x10000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c24d0
        ;   Label: core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0
    SUB ESP,0x30                        ; 004c24d1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c24d4
    XOR EDX,EDX                         ; 004c24d8
    MOV EBX,ESP                         ; 004c24da
    MOV dword ptr [ESP + 0xc],EDX       ; 004c24dc
    MOV dword ptr [ESP + 0x10],EDX      ; 004c24e0
    MOV dword ptr [ESP + 0x14],EAX      ; 004c24e4
    LEA EAX,[ESP + 0xc]                 ; 004c24e8
    MOV EDX,dword ptr [0x006703ec]      ; 004c24ec | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c24f2
    FMUL float ptr [0x0065dca8]         ; 004c24f4 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c24fa
    FLD float ptr [EAX + 0x4]           ; 004c24fc
    FMUL float ptr [0x0065dca8]         ; 004c24ff | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2505
    FLD float ptr [EAX + 0x8]           ; 004c2508
    FMUL float ptr [0x0065dca8]         ; 004c250b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2511
    MOV EAX,ESP                         ; 004c2514
    PUSH EAX                            ; 004c2516
    MOV EAX,dword ptr [EDX]             ; 004c2517 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c2519
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c251a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004c251f | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 004c2524 | g_CDemonRendererInstance
    FILD dword ptr [EAX + 0x8]          ; 004c2526
    FMUL double ptr [0x00629d03]        ; 004c2529 | DOUBLE_00629d03
    FLD double ptr [0x00629d0b]         ; 004c252f | DOUBLE_00629d0b
    FILD dword ptr [0x006793c0]         ; 004c2535 | g_ProjectionScale
    FMUL ST1                            ; 004c253b
    FDIVP ST2,ST0                       ; 004c253d
    FILD dword ptr [0x02d02548]         ; 004c253f | g_ViewportCenterXFixed
    FMUL ST1                            ; 004c2545
    ADD ESP,0x8                         ; 004c2547
    FXCH ST2                            ; 004c254a
    FMUL float ptr [0x00629d13]         ; 004c254c | FLOAT_00629d13
    FXCH ST2                            ; 004c2552
    FDIVR ST0,ST2                       ; 004c2554
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c2556
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c255a
    FABS                                ; 004c255e
    FILD dword ptr [0x02d0254c]         ; 004c2560 | g_ViewportCenterYFixed
    FMULP ST2                           ; 004c2566
    FXCH                                ; 004c2568
    FDIVP ST2,ST0                       ; 004c256a
    FXCH                                ; 004c256c
    FABS                                ; 004c256e
    FLD float ptr [ESP + 0x3c]          ; 004c2570
    FXCH ST2                            ; 004c2574
    FSTP float ptr [ESP + 0x28]         ; 004c2576
    FSTP float ptr [ESP + 0x24]         ; 004c257a
    FCOMP float ptr [ESP + 0x28]        ; 004c257e
    FNSTSW AX                           ; 004c2582
    SAHF                                ; 004c2584
    JC 0x004c259d                       ; 004c2585
        ;   XREF to: 004c259d (CONDITIONAL_JUMP)  ; LAB_004c259d
    FLD float ptr [ESP + 0x2c]          ; 004c2587
        ;   Label: LAB_004c2587
    FCOMP float ptr [ESP + 0x24]        ; 004c258b
    FNSTSW AX                           ; 004c258f
    SAHF                                ; 004c2591
    JC 0x004c25a7                       ; 004c2592
        ;   XREF to: 004c25a7 (CONDITIONAL_JUMP)  ; LAB_004c25a7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c2594
    ADD ESP,0x30                        ; 004c2598
    POP EBX                             ; 004c259b
    RET                                 ; 004c259c
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c259d
        ;   Label: LAB_004c259d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c25a1
    JMP 0x004c2587                      ; 004c25a5
        ;   XREF to: 004c2587 (UNCONDITIONAL_JUMP)  ; LAB_004c2587
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c25a7
        ;   Label: LAB_004c25a7
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c25ab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c25af
    ADD ESP,0x30                        ; 004c25b3
    POP EBX                             ; 004c25b6
    RET                                 ; 004c25b7

