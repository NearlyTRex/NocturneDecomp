; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_svetlana_cpp_FUN_005423c0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_svetlana.cpp_FUN_00541d00 at 005420b4
;
; Referenced Globals:
;   double DOUBLE_005963c1 = 6
;   double DOUBLE_005963c9 = 0.318309886192889
;   double DOUBLE_005963d1 = 4
;   double DOUBLE_005963d9 = 10
;   double DOUBLE_005963e1 = -0.25
;   double DOUBLE_005963e9 = 0.25
;   double DOUBLE_005963f1 = 3.14159265350000
;   double DOUBLE_005963f9 = -3.14159265350000
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_FUN_0042af70
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005423c0
        ;   Label: core_svetlana.cpp_FUN_005423c0
    PUSH ESI                            ; 005423c1
    PUSH EDI                            ; 005423c2
    PUSH EBP                            ; 005423c3
    MOV EBP,ESP                         ; 005423c4
    SUB ESP,0xa8                        ; 005423c6
    AND ESP,0xfffffff8                  ; 005423cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005423cf
    MOV EDX,0x3e800000                  ; 005423d2
    MOV ECX,0x3f490fdb                  ; 005423d7
    PUSH 0x2c                           ; 005423dc
    XOR ESI,ESI                         ; 005423de
    MOV EDI,dword ptr [0x01cae0e8]      ; 005423e0 | DAT_01cae0e8
    PUSH ESI                            ; 005423e6
    LEA EAX,[EBX + 0xbc94]              ; 005423e7
    MOV dword ptr [ESP + 0xa4],EDX      ; 005423ed
    PUSH EAX                            ; 005423f4
    MOV dword ptr [ESP + 0xa0],ECX      ; 005423f5
    MOV EDI,dword ptr [EDI*0x4 + 0x1cae0d8] ; 005423fc
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00542403
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 00542408
    ADD ESP,0xc                         ; 0054240e
    TEST EAX,EAX                        ; 00542411
    JZ 0x00542807                       ; 00542413
        ;   XREF to: 00542807 (CONDITIONAL_JUMP)  ; LAB_00542807
    MOV EAX,[0x01cae0e8]                ; 00542419 | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 0054241e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00542421
    FLD float ptr [EDX]                 ; 00542428
    FSUB float ptr [EAX + 0x20]         ; 0054242a
    FSTP float ptr [ESP + 0x4c]         ; 0054242d
    FLD float ptr [EDX + 0x4]           ; 00542431
    FSUB float ptr [EAX + 0x24]         ; 00542434
    FST float ptr [ESP + 0x50]          ; 00542437
    FMUL float ptr [ESP + 0x50]         ; 0054243b
    FLD float ptr [ESP + 0x4c]          ; 0054243f
    FMUL ST0                            ; 00542443
    FLD float ptr [EDX + 0x8]           ; 00542445
    FSUB float ptr [EAX + 0x28]         ; 00542448
    FXCH                                ; 0054244b
    FADDP ST2,ST0                       ; 0054244d
    FST float ptr [ESP + 0x54]          ; 0054244f
    FMUL float ptr [ESP + 0x54]         ; 00542453
    FADDP                               ; 00542457
    FSQRT                               ; 00542459
    MOV EDX,dword ptr [EBX + 0x1fa38]   ; 0054245b
    FSTP float ptr [ESP + 0x88]         ; 00542461
    CMP EDX,0x3                         ; 00542468
    JNZ 0x00542474                      ; 0054246b
        ;   XREF to: 00542474 (CONDITIONAL_JUMP)  ; LAB_00542474
    MOV dword ptr [ESP + 0x88],ESI      ; 0054246d
    MOV dword ptr [ESP + 0x90],0x41a00000 ; 00542474
        ;   Label: LAB_00542474
    MOV EAX,[0x01cae0e8]                ; 0054247f | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00542484
    PUSH EAX                            ; 0054248b
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054248c
    CALL dword ptr [EDX + 0x140]        ; 00542492
    ADD ESP,0x4                         ; 00542498
    TEST EAX,EAX                        ; 0054249b
    JZ 0x005424aa                       ; 0054249d
        ;   XREF to: 005424aa (CONDITIONAL_JUMP)  ; LAB_005424aa
    MOV dword ptr [ESP + 0x90],0x41f00000 ; 0054249f
    FLD float ptr [ESP + 0x88]          ; 005424aa
        ;   Label: LAB_005424aa
    FCOMP float ptr [ESP + 0x90]        ; 005424b1
    FNSTSW AX                           ; 005424b8
    SAHF                                ; 005424ba
    JNC 0x0054250b                      ; 005424bb
        ;   XREF to: 0054250b (CONDITIONAL_JUMP)  ; LAB_0054250b
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 005424bd
    CMP ECX,0x2                         ; 005424c3
    JNZ 0x0054280e                      ; 005424c6
        ;   XREF to: 0054280e (CONDITIONAL_JUMP)  ; LAB_0054280e
    LEA EAX,[ESP + 0x7c]                ; 005424cc
        ;   Label: LAB_005424cc
    PUSH EAX                            ; 005424d0
    MOV EDX,0x461c3f9a                  ; 005424d1
    PUSH EBX                            ; 005424d6
    MOV dword ptr [ESP + 0x84],EDX      ; 005424d7
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 005424de
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    MOV EDX,EAX                         ; 005424e3
    ADD ESP,0x8                         ; 005424e5
    TEST EAX,EAX                        ; 005424e8
    JZ 0x0054281c                       ; 005424ea
        ;   XREF to: 0054281c (CONDITIONAL_JUMP)  ; LAB_0054281c
    FLD float ptr [ESP + 0x7c]          ; 005424f0
    FCOMP float ptr [ESP + 0x90]        ; 005424f4
    FNSTSW AX                           ; 005424fb
    SAHF                                ; 005424fd
    JNC 0x0054281c                      ; 005424fe
        ;   XREF to: 0054281c (CONDITIONAL_JUMP)  ; LAB_0054281c
    MOV ESI,0x1                         ; 00542504
    MOV EDI,EDX                         ; 00542509
    LEA EDX,[EDI + 0x20]                ; 0054250b
        ;   Label: LAB_0054250b
    LEA EAX,[EBX + 0x20]                ; 0054250e
    FLD float ptr [EDX]                 ; 00542511
    FSUB float ptr [EAX]                ; 00542513
    FSTP float ptr [ESP + 0x40]         ; 00542515
    FLD float ptr [EDX + 0x4]           ; 00542519
    FSUB float ptr [EAX + 0x4]          ; 0054251c
    FSTP float ptr [ESP + 0x44]         ; 0054251f
    FLD float ptr [EDX + 0x8]           ; 00542523
    LEA EDX,[ESP + 0x40]                ; 00542526
    FSUB float ptr [EAX + 0x8]          ; 0054252a
    LEA EAX,[ESP + 0x4c]                ; 0054252d
    FSTP float ptr [ESP + 0x48]         ; 00542531
    CMP EAX,EDX                         ; 00542535
    JZ 0x00542551                       ; 00542537
        ;   XREF to: 00542551 (CONDITIONAL_JUMP)  ; LAB_00542551
    MOV EAX,dword ptr [ESP + 0x40]      ; 00542539
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054253d
    MOV EAX,dword ptr [ESP + 0x44]      ; 00542541
    MOV dword ptr [ESP + 0x50],EAX      ; 00542545
    MOV EAX,dword ptr [ESP + 0x48]      ; 00542549
    MOV dword ptr [ESP + 0x54],EAX      ; 0054254d
    FLD float ptr [ESP + 0x50]          ; 00542551
        ;   Label: LAB_00542551
    FMUL ST0                            ; 00542555
    FLD float ptr [ESP + 0x4c]          ; 00542557
    FMUL ST0                            ; 0054255b
    FADDP                               ; 0054255d
    FLD float ptr [ESP + 0x54]          ; 0054255f
    FMUL ST0                            ; 00542563
    FADDP                               ; 00542565
    FSQRT                               ; 00542567
    MOV dword ptr [EBX + 0x2410],0x0    ; 00542569
    FSTP float ptr [ESP + 0xa0]         ; 00542573
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0054257a
    FLD float ptr [ESP + 0xa0]          ; 00542581
    MOV dword ptr [ESP + 0x24],EAX      ; 00542588
    FCOMP double ptr [0x005963c1]       ; 0054258c | DOUBLE_005963c1
    FNSTSW AX                           ; 00542592
    SAHF                                ; 00542594
    JNC 0x005428f1                      ; 00542595
        ;   XREF to: 005428f1 (CONDITIONAL_JUMP)  ; LAB_005428f1
    LEA EAX,[EBX + 0x150]               ; 0054259b
    CMP ESI,0x1                         ; 005425a1
    JNZ 0x00542860                      ; 005425a4
        ;   XREF to: 00542860 (CONDITIONAL_JUMP)  ; LAB_00542860
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 005425aa
    JNZ 0x00542838                      ; 005425b1
        ;   XREF to: 00542838 (CONDITIONAL_JUMP)  ; LAB_00542838
    MOV dword ptr [EBX + 0xbcac],ESI    ; 005425b7
    MOV dword ptr [EBX + 0x2dbc],0x0    ; 005425bd
        ;   Label: LAB_005425bd
    CMP ESI,0x1                         ; 005425c7
        ;   Label: LAB_005425c7
    JNZ 0x00542695                      ; 005425ca
        ;   XREF to: 00542695 (CONDITIONAL_JUMP)  ; LAB_00542695
    LEA EAX,[ESP + 0x4c]                ; 005425d0
    PUSH EAX                            ; 005425d4
    LEA EAX,[ESP + 0x68]                ; 005425d5
    PUSH EAX                            ; 005425d9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 005425da
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 005425df
    ADD ESP,0x8                         ; 005425e2
    FSUB float ptr [EBX + 0x34]         ; 005425e5
    SUB ESP,0x4                         ; 005425e8
    FSTP float ptr [ESP]                ; 005425eb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 005425ee
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 005425f3
    FLD float ptr [ESP + 0xa8]          ; 005425fa
    FMUL double ptr [0x005963c9]        ; 00542601 | DOUBLE_005963c9
    ADD ESP,0x4                         ; 00542607
    FMUL double ptr [0x005963d1]        ; 0054260a | DOUBLE_005963d1
    FLD float ptr [ESP + 0x9c]          ; 00542610
    FCHS                                ; 00542617
    FSTP float ptr [ESP + 0x84]         ; 00542619
    FST float ptr [EBX + 0xbcb8]        ; 00542620
    FCOMP float ptr [ESP + 0x84]        ; 00542626
    FNSTSW AX                           ; 0054262d
    SAHF                                ; 0054262f
    JNC 0x0054263f                      ; 00542630
        ;   XREF to: 0054263f (CONDITIONAL_JUMP)  ; LAB_0054263f
    MOV EAX,dword ptr [ESP + 0x84]      ; 00542632
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 00542639
    FLD float ptr [EBX + 0xbcb8]        ; 0054263f
        ;   Label: LAB_0054263f
    FCOMP float ptr [ESP + 0x9c]        ; 00542645
    FNSTSW AX                           ; 0054264c
    SAHF                                ; 0054264e
    JBE 0x0054265e                      ; 0054264f
        ;   XREF to: 0054265e (CONDITIONAL_JUMP)  ; LAB_0054265e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00542651
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 00542658
    FLD float ptr [EBX + 0xbcb8]        ; 0054265e
        ;   Label: LAB_0054265e
    FST double ptr [ESP + 0x18]         ; 00542664
    FCOMP double ptr [0x005963e1]       ; 00542668 | DOUBLE_005963e1
    FNSTSW AX                           ; 0054266e
    SAHF                                ; 00542670
    JBE 0x00542695                      ; 00542671
        ;   XREF to: 00542695 (CONDITIONAL_JUMP)  ; LAB_00542695
    FLD double ptr [ESP + 0x18]         ; 00542673
    FCOMP double ptr [0x005963e9]       ; 00542677 | DOUBLE_005963e9
    FNSTSW AX                           ; 0054267d
    SAHF                                ; 0054267f
    JNC 0x00542695                      ; 00542680
        ;   XREF to: 00542695 (CONDITIONAL_JUMP)  ; LAB_00542695
    CMP dword ptr [EBX + 0xbca0],0x0    ; 00542682
    JZ 0x00542695                       ; 00542689
        ;   XREF to: 00542695 (CONDITIONAL_JUMP)  ; LAB_00542695
    MOV dword ptr [EBX + 0xbcb8],0x0    ; 0054268b
    FLDZ                                ; 00542695
        ;   Label: LAB_00542695
    FLD float ptr [EBX + 0x2410]        ; 00542697
    FSTP double ptr [ESP + 0x8]         ; 0054269d
    FCOMP double ptr [ESP + 0x8]        ; 005426a1
    FNSTSW AX                           ; 005426a5
    SAHF                                ; 005426a7
    JNC 0x00542aa5                      ; 005426a8
        ;   XREF to: 00542aa5 (CONDITIONAL_JUMP)  ; LAB_00542aa5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005426ae
    MOV dword ptr [EBX + 0x2410],0x0    ; 005426b5
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 005426bf
    LEA EAX,[EBX + 0x20]                ; 005426c5
        ;   Label: LAB_005426c5
    FLD float ptr [EDI + 0x20]          ; 005426c8
    FSUB float ptr [EAX]                ; 005426cb
    FSTP float ptr [ESP + 0x58]         ; 005426cd
    FLD float ptr [EDI + 0x24]          ; 005426d1
    FSUB float ptr [EAX + 0x4]          ; 005426d4
    LEA EDX,[ESP + 0x4c]                ; 005426d7
    FSTP float ptr [ESP + 0x5c]         ; 005426db
    FLD float ptr [EDI + 0x28]          ; 005426df
    FSUB float ptr [EAX + 0x8]          ; 005426e2
    LEA EAX,[ESP + 0x58]                ; 005426e5
    FSTP float ptr [ESP + 0x60]         ; 005426e9
    CMP EDX,EAX                         ; 005426ed
    JZ 0x00542709                       ; 005426ef
        ;   XREF to: 00542709 (CONDITIONAL_JUMP)  ; LAB_00542709
    MOV EAX,dword ptr [ESP + 0x58]      ; 005426f1
    MOV dword ptr [ESP + 0x4c],EAX      ; 005426f5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005426f9
    MOV dword ptr [ESP + 0x50],EAX      ; 005426fd
    MOV EAX,dword ptr [ESP + 0x60]      ; 00542701
    MOV dword ptr [ESP + 0x54],EAX      ; 00542705
    LEA EAX,[ESP + 0x4c]                ; 00542709
        ;   Label: LAB_00542709
    PUSH EAX                            ; 0054270d
    LEA EAX,[ESP + 0x38]                ; 0054270e
    PUSH EAX                            ; 00542712
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00542713
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 00542718
    LEA EAX,[ESP + 0x54]                ; 0054271a
    ADD ESP,0x8                         ; 0054271e
    CMP EAX,EDX                         ; 00542721
    JZ 0x00542739                       ; 00542723
        ;   XREF to: 00542739 (CONDITIONAL_JUMP)  ; LAB_00542739
    MOV EAX,dword ptr [EDX]             ; 00542725
    MOV dword ptr [ESP + 0x4c],EAX      ; 00542727
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054272b
    MOV dword ptr [ESP + 0x50],EAX      ; 0054272e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00542732
    MOV dword ptr [ESP + 0x54],EAX      ; 00542735
    FLD float ptr [ESP + 0x50]          ; 00542739
        ;   Label: LAB_00542739
    FSUB float ptr [EBX + 0x34]         ; 0054273d
    SUB ESP,0x4                         ; 00542740
    FSTP float ptr [ESP]                ; 00542743
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00542746
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054274b
    FLD float ptr [ESP + 0xa8]          ; 00542752
    ADD ESP,0x4                         ; 00542759
    FST float ptr [ESP + 0x2c]          ; 0054275c
    FCOMP float ptr [ESP + 0x94]        ; 00542760
    FNSTSW AX                           ; 00542767
    SAHF                                ; 00542769
    JBE 0x00542777                      ; 0054276a
        ;   XREF to: 00542777 (CONDITIONAL_JUMP)  ; LAB_00542777
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054276c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00542773
    FLD float ptr [ESP + 0x2c]          ; 00542777
        ;   Label: LAB_00542777
    FLD float ptr [ESP + 0x94]          ; 0054277b
    FCHS                                ; 00542782
    FSTP float ptr [ESP + 0x8c]         ; 00542784
    FCOMP float ptr [ESP + 0x8c]        ; 0054278b
    FNSTSW AX                           ; 00542792
    SAHF                                ; 00542794
    JNC 0x005427a2                      ; 00542795
        ;   XREF to: 005427a2 (CONDITIONAL_JUMP)  ; LAB_005427a2
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00542797
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054279e
    FLD float ptr [ESP + 0x2c]          ; 005427a2
        ;   Label: LAB_005427a2
    FLD float ptr [EBP + 0x18]          ; 005427a6
    FXCH                                ; 005427a9
    FSUB float ptr [EBX + 0x950ac]      ; 005427ab
    FXCH                                ; 005427b1
    FMUL double ptr [0x005963f1]        ; 005427b3 | DOUBLE_005963f1
    FXCH                                ; 005427b9
    FST float ptr [ESP + 0x20]          ; 005427bb
    FXCH                                ; 005427bf
    FSTP double ptr [ESP]               ; 005427c1
    FCOMP double ptr [ESP]              ; 005427c4
    FNSTSW AX                           ; 005427c7
    SAHF                                ; 005427c9
    JBE 0x005427d3                      ; 005427ca
        ;   XREF to: 005427d3 (CONDITIONAL_JUMP)  ; LAB_005427d3
    FLD double ptr [ESP]                ; 005427cc
    FSTP float ptr [ESP + 0x20]         ; 005427cf
    FLD float ptr [EBP + 0x18]          ; 005427d3
        ;   Label: LAB_005427d3
    FMUL double ptr [0x005963f9]        ; 005427d6 | DOUBLE_005963f9
    FLD float ptr [ESP + 0x20]          ; 005427dc
    FXCH                                ; 005427e0
    FSTP double ptr [ESP + 0x10]        ; 005427e2
    FCOMP double ptr [ESP + 0x10]       ; 005427e6
    FNSTSW AX                           ; 005427ea
    SAHF                                ; 005427ec
    JNC 0x005427f7                      ; 005427ed
        ;   XREF to: 005427f7 (CONDITIONAL_JUMP)  ; LAB_005427f7
    FLD double ptr [ESP + 0x10]         ; 005427ef
    FSTP float ptr [ESP + 0x20]         ; 005427f3
    FLD float ptr [EBX + 0x950ac]       ; 005427f7
        ;   Label: LAB_005427f7
    FADD float ptr [ESP + 0x20]         ; 005427fd
    FSTP float ptr [EBX + 0x950ac]      ; 00542801
    MOV ESP,EBP                         ; 00542807
        ;   Label: LAB_00542807
    POP EBP                             ; 00542809
    POP EDI                             ; 0054280a
    POP ESI                             ; 0054280b
    POP EBX                             ; 0054280c
    RET                                 ; 0054280d
    CMP ECX,0x3                         ; 0054280e
        ;   Label: LAB_0054280e
    JZ 0x005424cc                       ; 00542811
        ;   XREF to: 005424cc (CONDITIONAL_JUMP)  ; LAB_005424cc
    JMP 0x0054250b                      ; 00542817
        ;   XREF to: 0054250b (UNCONDITIONAL_JUMP)  ; LAB_0054250b
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0054281c
        ;   Label: LAB_0054281c
    JZ 0x0054250b                       ; 00542823
        ;   XREF to: 0054250b (CONDITIONAL_JUMP)  ; LAB_0054250b
    MOV dword ptr [EBX + 0xbcac],0x1    ; 00542829
    JMP 0x0054250b                      ; 00542833
        ;   XREF to: 0054250b (UNCONDITIONAL_JUMP)  ; LAB_0054250b
    PUSH EAX                            ; 00542838
        ;   Label: LAB_00542838
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00542839
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054283e
    ADD ESP,0x4                         ; 00542841
    CMP EAX,0x2                         ; 00542844
    JZ 0x005425bd                       ; 00542847
        ;   XREF to: 005425bd (CONDITIONAL_JUMP)  ; LAB_005425bd
    CMP EAX,ESI                         ; 0054284d
    JZ 0x005425bd                       ; 0054284f
        ;   XREF to: 005425bd (CONDITIONAL_JUMP)  ; LAB_005425bd
    MOV dword ptr [EBX + 0xbca0],ESI    ; 00542855
    JMP 0x005425bd                      ; 0054285b
        ;   XREF to: 005425bd (UNCONDITIONAL_JUMP)  ; LAB_005425bd
    PUSH EAX                            ; 00542860
        ;   Label: LAB_00542860
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00542861
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00542866
    ADD ESP,0x4                         ; 00542869
    CMP EAX,0xa                         ; 0054286c
    JNZ 0x00542884                      ; 0054286f
        ;   XREF to: 00542884 (CONDITIONAL_JUMP)  ; LAB_00542884
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 00542871
    JZ 0x00542884                       ; 00542878
        ;   XREF to: 00542884 (CONDITIONAL_JUMP)  ; LAB_00542884
    MOV dword ptr [EBX + 0xbcac],0x1    ; 0054287a
    MOV EAX,[0x01cae0e8]                ; 00542884 | DAT_01cae0e8
        ;   Label: LAB_00542884
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00542889
    PUSH EAX                            ; 00542890
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00542891
    CALL dword ptr [EDX + 0x140]        ; 00542897
    ADD ESP,0x4                         ; 0054289d
    TEST EAX,EAX                        ; 005428a0
    JNZ 0x005425c7                      ; 005428a2
        ;   XREF to: 005425c7 (CONDITIONAL_JUMP)  ; LAB_005425c7
    PUSH dword ptr [EBP + 0x18]         ; 005428a8
    PUSH EBX                            ; 005428ab
    CALL core_charactr.cpp_FUN_0042af70 ; 005428ac
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042af70()
    ADD ESP,0x8                         ; 005428b1
    CMP EAX,0x1                         ; 005428b4
    JC 0x005425c7                       ; 005428b7
        ;   XREF to: 005425c7 (CONDITIONAL_JUMP)  ; LAB_005425c7
    JA 0x005428e7                       ; 005428bd
        ;   XREF to: 005428e7 (CONDITIONAL_JUMP)  ; LAB_005428e7
    MOV dword ptr [EBX + 0xbc94],0x1    ; 005428bf
    JMP 0x005425c7                      ; 005428c9
        ;   XREF to: 005425c7 (UNCONDITIONAL_JUMP)  ; LAB_005425c7
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 005428ce
        ;   Label: LAB_005428ce
    MOV dword ptr [EBX + 0xbc94],0x1    ; 005428d8
    JMP 0x005425c7                      ; 005428e2
        ;   XREF to: 005425c7 (UNCONDITIONAL_JUMP)  ; LAB_005425c7
    CMP EAX,0x2                         ; 005428e7
        ;   Label: LAB_005428e7
    JZ 0x005428ce                       ; 005428ea
        ;   XREF to: 005428ce (CONDITIONAL_JUMP)  ; LAB_005428ce
    JMP 0x005425c7                      ; 005428ec
        ;   XREF to: 005425c7 (UNCONDITIONAL_JUMP)  ; LAB_005425c7
    XOR EAX,EAX                         ; 005428f1
        ;   Label: LAB_005428f1
    MOV dword ptr [ESP + 0x98],EAX      ; 005428f3
    TEST ESI,ESI                        ; 005428fa
    JNZ 0x00542a6f                      ; 005428fc
        ;   XREF to: 00542a6f (CONDITIONAL_JUMP)  ; LAB_00542a6f
    MOV EAX,[0x01cae0e8]                ; 00542902 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00542907
    PUSH EAX                            ; 0054290e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0054290f
    CALL dword ptr [EDX + 0xbc]         ; 00542915
    ADD ESP,0x4                         ; 0054291b
    MOV dword ptr [ESP + 0x98],EAX      ; 0054291e
    MOV EAX,[0x01cae0e8]                ; 00542925 | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0054292a
    PUSH EAX                            ; 00542931
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00542932
    CALL dword ptr [EDX + 0x140]        ; 00542938
    ADD ESP,0x4                         ; 0054293e
    TEST EAX,EAX                        ; 00542941
    JZ 0x00542a4e                       ; 00542943
        ;   XREF to: 00542a4e (CONDITIONAL_JUMP)  ; LAB_00542a4e
    CMP dword ptr [ESP + 0x98],0x0      ; 00542949
        ;   Label: LAB_00542949
    JNZ 0x00542966                      ; 00542951
        ;   XREF to: 00542966 (CONDITIONAL_JUMP)  ; LAB_00542966
    LEA EAX,[EDI + 0x20]                ; 00542953
    PUSH EAX                            ; 00542956
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 00542957
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_004f1e00(CLocation * location)
    ADD ESP,0x4                         ; 0054295c
    MOV dword ptr [ESP + 0x98],EAX      ; 0054295f
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00542966
        ;   Label: LAB_00542966
    PUSH ECX                            ; 00542969
    LEA EAX,[ESP + 0x74]                ; 0054296a
    PUSH EAX                            ; 0054296e
    LEA EAX,[EBX + 0x20]                ; 0054296f
    PUSH EAX                            ; 00542972
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00542973
    PUSH EAX                            ; 0054297a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 0054297b
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00542980
    TEST EAX,EAX                        ; 00542983
    JZ 0x00542695                       ; 00542985
        ;   XREF to: 00542695 (CONDITIONAL_JUMP)  ; LAB_00542695
    FLD float ptr [ESP + 0x74]          ; 0054298b
    FSUB float ptr [EBX + 0x34]         ; 0054298f
    SUB ESP,0x4                         ; 00542992
    FSTP float ptr [ESP]                ; 00542995
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00542998
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054299d
    FLD float ptr [ESP + 0xa8]          ; 005429a4
    FMUL double ptr [0x005963c9]        ; 005429ab | DOUBLE_005963c9
    ADD ESP,0x4                         ; 005429b1
    FMUL double ptr [0x005963d1]        ; 005429b4 | DOUBLE_005963d1
    FLD float ptr [ESP + 0x9c]          ; 005429ba
    FCHS                                ; 005429c1
    FSTP float ptr [ESP + 0x80]         ; 005429c3
    FST float ptr [EBX + 0xbcb8]        ; 005429ca
    FCOMP float ptr [ESP + 0x80]        ; 005429d0
    FNSTSW AX                           ; 005429d7
    SAHF                                ; 005429d9
    JC 0x00542a7a                       ; 005429da
        ;   XREF to: 00542a7a (CONDITIONAL_JUMP)  ; LAB_00542a7a
    FLD float ptr [EBX + 0xbcb8]        ; 005429e0
        ;   Label: LAB_005429e0
    FCOMP float ptr [ESP + 0x9c]        ; 005429e6
    FNSTSW AX                           ; 005429ed
    SAHF                                ; 005429ef
    JBE 0x005429ff                      ; 005429f0
        ;   XREF to: 005429ff (CONDITIONAL_JUMP)  ; LAB_005429ff
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005429f2
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 005429f9
    FLD float ptr [ESP + 0x24]          ; 005429ff
        ;   Label: LAB_005429ff
    FCOMP double ptr [0x005963d9]       ; 00542a03 | DOUBLE_005963d9
    FNSTSW AX                           ; 00542a09
    SAHF                                ; 00542a0b
    JNC 0x00542a8c                      ; 00542a0c
        ;   XREF to: 00542a8c (CONDITIONAL_JUMP)  ; LAB_00542a8c
    CMP ESI,0x1                         ; 00542a12
    JZ 0x00542a8c                       ; 00542a15
        ;   XREF to: 00542a8c (CONDITIONAL_JUMP)  ; LAB_00542a8c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 00542a17
    JMP 0x00542695                      ; 00542a21
        ;   XREF to: 00542695 (UNCONDITIONAL_JUMP)  ; LAB_00542695
    MOV dword ptr [EBX + 0xbc94],0x1    ; 00542a26
        ;   Label: LAB_00542a26
    JMP 0x00542949                      ; 00542a30
        ;   XREF to: 00542949 (UNCONDITIONAL_JUMP)  ; LAB_00542949
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 00542a35
        ;   Label: LAB_00542a35
    MOV dword ptr [EBX + 0xbc94],0x1    ; 00542a3f
    JMP 0x00542949                      ; 00542a49
        ;   XREF to: 00542949 (UNCONDITIONAL_JUMP)  ; LAB_00542949
    PUSH dword ptr [EBP + 0x18]         ; 00542a4e
        ;   Label: LAB_00542a4e
    PUSH EBX                            ; 00542a51
    CALL core_charactr.cpp_FUN_0042af70 ; 00542a52
        ;   XREF to: 0042af70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042af70()
    ADD ESP,0x8                         ; 00542a57
    CMP EAX,0x1                         ; 00542a5a
    JC 0x00542949                       ; 00542a5d
        ;   XREF to: 00542949 (CONDITIONAL_JUMP)  ; LAB_00542949
    JBE 0x00542a26                      ; 00542a63
        ;   XREF to: 00542a26 (CONDITIONAL_JUMP)  ; LAB_00542a26
    CMP EAX,0x2                         ; 00542a65
    JZ 0x00542a35                       ; 00542a68
        ;   XREF to: 00542a35 (CONDITIONAL_JUMP)  ; LAB_00542a35
    JMP 0x00542949                      ; 00542a6a
        ;   XREF to: 00542949 (UNCONDITIONAL_JUMP)  ; LAB_00542949
    MOV dword ptr [EBX + 0x2dbc],EAX    ; 00542a6f
        ;   Label: LAB_00542a6f
    JMP 0x00542949                      ; 00542a75
        ;   XREF to: 00542949 (UNCONDITIONAL_JUMP)  ; LAB_00542949
    MOV EAX,dword ptr [ESP + 0x80]      ; 00542a7a
        ;   Label: LAB_00542a7a
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 00542a81
    JMP 0x005429e0                      ; 00542a87
        ;   XREF to: 005429e0 (UNCONDITIONAL_JUMP)  ; LAB_005429e0
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 00542a8c
        ;   Label: LAB_00542a8c
    MOV dword ptr [EBX + 0xbc94],0x1    ; 00542a96
    JMP 0x00542695                      ; 00542aa0
        ;   XREF to: 00542695 (UNCONDITIONAL_JUMP)  ; LAB_00542695
    JBE 0x005426c5                      ; 00542aa5
        ;   XREF to: 005426c5 (CONDITIONAL_JUMP)  ; LAB_005426c5
        ;   Label: LAB_00542aa5
    FLD float ptr [ESP + 0x9c]          ; 00542aab
    MOV dword ptr [EBX + 0x2410],0x0    ; 00542ab2
    FCHS                                ; 00542abc
    FSTP float ptr [EBX + 0xbcb8]       ; 00542abe
    JMP 0x005426c5                      ; 00542ac4
        ;   XREF to: 005426c5 (UNCONDITIONAL_JUMP)  ; LAB_005426c5

