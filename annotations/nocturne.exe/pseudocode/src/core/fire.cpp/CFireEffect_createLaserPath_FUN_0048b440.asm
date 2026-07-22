; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLaserPath_FUN_0048b440(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)
;
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053d100 at 0053d24d
;
; Referenced Globals:
;   float FLOAT_005814c8 = 0.05000000
;   double DOUBLE_005814cc = 0.0500000000000000
;   double DOUBLE_005814d4 = 0.5
;   undefined4 DAT_0059d210
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b440
        ;   Label: core_fire.cpp_CFireEffect_createLaserPath_FUN_0048b440
    PUSH ESI                            ; 0048b441
    PUSH EDI                            ; 0048b442
    PUSH EBP                            ; 0048b443
    MOV EBP,ESP                         ; 0048b444
    SUB ESP,0x78                        ; 0048b446
    AND ESP,0xfffffff8                  ; 0048b449
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048b44c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0048b44f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0048b452
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0048b455
    MOV EDI,dword ptr [EBP + 0x30]      ; 0048b458
    MOV EBX,dword ptr [EBP + 0x34]      ; 0048b45b
    MOV dword ptr [ESP + 0x8],EAX       ; 0048b45e
    FLD float ptr [ESP + 0x8]           ; 0048b462
    FMUL float ptr [0x005814c8]         ; 0048b466 | FLOAT_005814c8
    FST float ptr [ESP]                 ; 0048b46c
    FCOMP double ptr [0x005814cc]       ; 0048b46f | DOUBLE_005814cc
    FNSTSW AX                           ; 0048b475
    SAHF                                ; 0048b477
    JC 0x0048b654                       ; 0048b478
        ;   XREF to: 0048b654 (CONDITIONAL_JUMP)  ; LAB_0048b654
    MOV EAX,dword ptr [ECX]             ; 0048b47e
        ;   Label: LAB_0048b47e
    MOV dword ptr [ESP + 0x18],EAX      ; 0048b480
    LEA EAX,[ECX + 0x4]                 ; 0048b484
    MOV EAX,dword ptr [EAX]             ; 0048b487
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048b489
    MOV EAX,dword ptr [ECX + 0x8]       ; 0048b48d
    MOV dword ptr [ESP + 0x20],EAX      ; 0048b490
    MOV EAX,dword ptr [EDX]             ; 0048b494
    MOV dword ptr [ESP + 0x60],EAX      ; 0048b496
    LEA EAX,[EDX + 0x4]                 ; 0048b49a
    MOV EAX,dword ptr [EAX]             ; 0048b49d
    MOV dword ptr [ESP + 0x64],EAX      ; 0048b49f
    LEA EAX,[EDX + 0x8]                 ; 0048b4a3
    MOV ECX,0xc2000000                  ; 0048b4a6
    MOV EAX,dword ptr [EAX]             ; 0048b4ab
    XOR EDX,EDX                         ; 0048b4ad
    MOV dword ptr [ESP + 0x68],EAX      ; 0048b4af
    MOV dword ptr [ESP + 0xc],EDX       ; 0048b4b3
    MOV dword ptr [ESP + 0x10],ECX      ; 0048b4b7
    MOV dword ptr [ESP + 0x14],EDX      ; 0048b4bb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048b4bf
        ;   Label: LAB_0048b4bf
    FLD float ptr [ESP + 0x8]           ; 0048b4c3
    MOV dword ptr [ESP + 0x4],EAX       ; 0048b4c7
    FCOMP float ptr [ESP]               ; 0048b4cb
    FNSTSW AX                           ; 0048b4ce
    SAHF                                ; 0048b4d0
    JBE 0x0048b4da                      ; 0048b4d1
        ;   XREF to: 0048b4da (CONDITIONAL_JUMP)  ; LAB_0048b4da
    MOV EAX,dword ptr [ESP]             ; 0048b4d3
    MOV dword ptr [ESP + 0x4],EAX       ; 0048b4d6
    FLD float ptr [ESP + 0x60]          ; 0048b4da
        ;   Label: LAB_0048b4da
    FMUL float ptr [ESP + 0x4]          ; 0048b4de
    FLD float ptr [ESP + 0x64]          ; 0048b4e2
    FMUL float ptr [ESP + 0x4]          ; 0048b4e6
    FLD float ptr [ESP + 0x4]           ; 0048b4ea
    FLD ST0                             ; 0048b4ee
    FMUL double ptr [0x005814d4]        ; 0048b4f0 | DOUBLE_005814d4
    FLD float ptr [ESP + 0x68]          ; 0048b4f6
    FMUL float ptr [ESP + 0x4]          ; 0048b4fa
    FXCH                                ; 0048b4fe
    FMULP ST2                           ; 0048b500
    FLD float ptr [ESP + 0xc]           ; 0048b502
    FXCH ST2                            ; 0048b506
    FSTP float ptr [ESP + 0x74]         ; 0048b508
    FXCH                                ; 0048b50c
    FMUL float ptr [ESP + 0x74]         ; 0048b50e
    FLD float ptr [ESP + 0x10]          ; 0048b512
    FMUL float ptr [ESP + 0x74]         ; 0048b516
    FLD float ptr [ESP + 0x14]          ; 0048b51a
    FMUL float ptr [ESP + 0x74]         ; 0048b51e
    FLD float ptr [ESP + 0x18]          ; 0048b522
    FXCH ST6                            ; 0048b526
    FSTP float ptr [ESP + 0x54]         ; 0048b528
    FLD float ptr [ESP + 0x1c]          ; 0048b52c
    FXCH ST5                            ; 0048b530
    FSTP float ptr [ESP + 0x58]         ; 0048b532
    FLD float ptr [ESP + 0x20]          ; 0048b536
    FXCH ST4                            ; 0048b53a
    FSTP float ptr [ESP + 0x5c]         ; 0048b53c
    FLD float ptr [ESP + 0x8]           ; 0048b540
    FSUB float ptr [ESP + 0x4]          ; 0048b544
    FXCH ST6                            ; 0048b548
    FADD float ptr [ESP + 0x54]         ; 0048b54a
    FXCH ST6                            ; 0048b54e
    FSTP float ptr [ESP + 0x8]          ; 0048b550
    FXCH ST5                            ; 0048b554
    FSTP float ptr [ESP + 0x30]         ; 0048b556
    FLD float ptr [ESP + 0x8]           ; 0048b55a
    FXCH ST4                            ; 0048b55e
    FADD float ptr [ESP + 0x58]         ; 0048b560
    FXCH ST3                            ; 0048b564
    FADD float ptr [ESP + 0x5c]         ; 0048b566
    FXCH ST3                            ; 0048b56a
    FSTP float ptr [ESP + 0x34]         ; 0048b56c
    FLDZ                                ; 0048b570
    FXCH ST3                            ; 0048b572
    FSTP float ptr [ESP + 0x38]         ; 0048b574
    FLD float ptr [ESP + 0x30]          ; 0048b578
    FXCH ST2                            ; 0048b57c
    FSTP float ptr [ESP + 0x24]         ; 0048b57e
    FLD float ptr [ESP + 0x34]          ; 0048b582
    FXCH                                ; 0048b586
    FSTP float ptr [ESP + 0x28]         ; 0048b588
    FLD float ptr [ESP + 0x38]          ; 0048b58c
    FXCH ST5                            ; 0048b590
    FSTP float ptr [ESP + 0x2c]         ; 0048b592
    FXCH                                ; 0048b596
    FADD float ptr [ESP + 0x24]         ; 0048b598
    FXCH                                ; 0048b59c
    FADD float ptr [ESP + 0x28]         ; 0048b59e
    FXCH ST4                            ; 0048b5a2
    FADD float ptr [ESP + 0x2c]         ; 0048b5a4
    FXCH                                ; 0048b5a8
    FSTP float ptr [ESP + 0x48]         ; 0048b5aa
    FXCH ST3                            ; 0048b5ae
    FSTP float ptr [ESP + 0x4c]         ; 0048b5b0
    FXCH ST2                            ; 0048b5b4
    FSTP float ptr [ESP + 0x50]         ; 0048b5b6
    FXCH                                ; 0048b5ba
    FCOMPP                              ; 0048b5bc
    FNSTSW AX                           ; 0048b5be
    SAHF                                ; 0048b5c0
    JNC 0x0048b67a                      ; 0048b5c1
        ;   XREF to: 0048b67a (CONDITIONAL_JUMP)  ; LAB_0048b67a
    MOV EDX,dword ptr [EBP + 0x38]      ; 0048b5c7
    PUSH dword ptr [0x0059d210]         ; 0048b5ca | DAT_0059d210
    PUSH EDX                            ; 0048b5d0
    PUSH EBX                            ; 0048b5d1
    PUSH EDI                            ; 0048b5d2
    MOV ECX,dword ptr [EBP + 0x28]      ; 0048b5d3
    PUSH ECX                            ; 0048b5d6
    PUSH 0x0                            ; 0048b5d7
    LEA EAX,[ESP + 0x60]                ; 0048b5d9
    PUSH dword ptr [EBP + 0x20]         ; 0048b5dd
    PUSH EAX                            ; 0048b5e0
    LEA EAX,[ESP + 0x38]                ; 0048b5e1
    PUSH EAX                            ; 0048b5e5
    PUSH ESI                            ; 0048b5e6
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370 ; 0048b5e7
        ;   XREF to: 0048b370 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370()
    LEA EDX,[ESP + 0x70]                ; 0048b5ec
    LEA EAX,[ESP + 0x40]                ; 0048b5f0
    ADD ESP,0x28                        ; 0048b5f4
    CMP EAX,EDX                         ; 0048b5f7
    JNZ 0x0048b660                      ; 0048b5f9
        ;   XREF to: 0048b660 (CONDITIONAL_JUMP)  ; LAB_0048b660
    FLD float ptr [ESP + 0x4]           ; 0048b5fb
        ;   Label: LAB_0048b5fb
    FLD float ptr [ESP + 0xc]           ; 0048b5ff
    FMUL ST1                            ; 0048b603
    FLD float ptr [ESP + 0x10]          ; 0048b605
    FMUL ST2                            ; 0048b609
    FLD float ptr [ESP + 0x14]          ; 0048b60b
    FMULP ST3                           ; 0048b60f
    FLD float ptr [ESP + 0x60]          ; 0048b611
    FLD float ptr [ESP + 0x64]          ; 0048b615
    FLD float ptr [ESP + 0x68]          ; 0048b619
    FXCH ST4                            ; 0048b61d
    FSTP float ptr [ESP + 0x3c]         ; 0048b61f
    FXCH ST2                            ; 0048b623
    FSTP float ptr [ESP + 0x40]         ; 0048b625
    FXCH ST3                            ; 0048b629
    FSTP float ptr [ESP + 0x44]         ; 0048b62b
    FXCH ST2                            ; 0048b62f
    FADD float ptr [ESP + 0x3c]         ; 0048b631
    FXCH ST2                            ; 0048b635
    FADD float ptr [ESP + 0x40]         ; 0048b637
    FXCH                                ; 0048b63b
    FADD float ptr [ESP + 0x44]         ; 0048b63d
    FXCH ST2                            ; 0048b641
    FSTP float ptr [ESP + 0x60]         ; 0048b643
    FSTP float ptr [ESP + 0x64]         ; 0048b647
    FSTP float ptr [ESP + 0x68]         ; 0048b64b
    JMP 0x0048b4bf                      ; 0048b64f
        ;   XREF to: 0048b4bf (UNCONDITIONAL_JUMP)  ; LAB_0048b4bf
    MOV dword ptr [ESP],0x3d4ccccd      ; 0048b654
        ;   Label: LAB_0048b654
    JMP 0x0048b47e                      ; 0048b65b
        ;   XREF to: 0048b47e (UNCONDITIONAL_JUMP)  ; LAB_0048b47e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0048b660
        ;   Label: LAB_0048b660
    MOV dword ptr [ESP + 0x18],EAX      ; 0048b664
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048b668
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048b66c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048b670
    MOV dword ptr [ESP + 0x20],EAX      ; 0048b674
    JMP 0x0048b5fb                      ; 0048b678
        ;   XREF to: 0048b5fb (UNCONDITIONAL_JUMP)  ; LAB_0048b5fb
    MOV EAX,dword ptr [EBP + 0x38]      ; 0048b67a
        ;   Label: LAB_0048b67a
    PUSH dword ptr [0x0059d210]         ; 0048b67d | DAT_0059d210
    PUSH EAX                            ; 0048b683
    PUSH EBX                            ; 0048b684
    PUSH EDI                            ; 0048b685
    MOV EDX,dword ptr [EBP + 0x28]      ; 0048b686
    PUSH EDX                            ; 0048b689
    PUSH dword ptr [EBP + 0x24]         ; 0048b68a
    LEA EAX,[ESP + 0x60]                ; 0048b68d
    PUSH dword ptr [EBP + 0x20]         ; 0048b691
    PUSH EAX                            ; 0048b694
    LEA EAX,[ESP + 0x38]                ; 0048b695
    PUSH EAX                            ; 0048b699
    PUSH ESI                            ; 0048b69a
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370 ; 0048b69b
        ;   XREF to: 0048b370 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createLaserSegment_FUN_0048b370()
    ADD ESP,0x28                        ; 0048b6a0
    MOV ESP,EBP                         ; 0048b6a3
    POP EBP                             ; 0048b6a5
    POP EDI                             ; 0048b6a6
    POP ESI                             ; 0048b6a7
    POP EBX                             ; 0048b6a8
    RET                                 ; 0048b6a9

