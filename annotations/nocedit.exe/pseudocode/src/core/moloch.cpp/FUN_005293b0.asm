; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_moloch.cpp_FUN_005293b0()
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 0052905b
;
; Referenced Globals:
;   double DOUBLE_00639e45 = 6
;   double DOUBLE_00639e4d = 0.318309886192889
;   double DOUBLE_00639e55 = 4
;   double DOUBLE_00639e5d = 3.14159265350000
;   double DOUBLE_00639e65 = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_FUN_0042ede0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005293b0
        ;   Label: core_moloch.cpp_FUN_005293b0
    PUSH ESI                            ; 005293b1
    PUSH EDI                            ; 005293b2
    PUSH EBP                            ; 005293b3
    MOV EBP,ESP                         ; 005293b4
    SUB ESP,0x7c                        ; 005293b6
    AND ESP,0xfffffff8                  ; 005293b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005293bc
    MOV EDX,0x3e800000                  ; 005293bf
    PUSH 0x2c                           ; 005293c4
    MOV ECX,0x3f490fdb                  ; 005293c6
    MOV ESI,dword ptr [0x02db87d0]      ; 005293cb | int g_LocalHeroIndex
    PUSH 0x0                            ; 005293d1
    LEA EAX,[EBX + 0xbe2c]              ; 005293d3
    MOV dword ptr [ESP + 0x78],EDX      ; 005293d9
    PUSH EAX                            ; 005293dd
    MOV dword ptr [ESP + 0x78],ECX      ; 005293de
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 005293e2 | CHero *[4] g_HeroActors
    CALL crt_memory.c_memset_FUN_005fde40 ; 005293e9 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x1fbd0]   ; 005293ee
    ADD ESP,0xc                         ; 005293f4
    TEST EDI,EDI                        ; 005293f7
    JZ 0x0052969f                       ; 005293f9 | LAB_0052969f
        ;   XREF to: 0052969f (CONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 005293ff
    JNZ 0x0052969f                      ; 00529402 | LAB_0052969f
        ;   XREF to: 0052969f (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 00529408 | int g_LocalHeroIndex
    MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0052940d | CHero *[4] g_HeroActors
    LEA EAX,[EBX + 0x20]                ; 00529414
    FLD float ptr [EAX]                 ; 00529417
    FSUB float ptr [EDX + 0x20]         ; 00529419
    FSTP float ptr [ESP + 0x1c]         ; 0052941c
    FLD float ptr [EAX + 0x4]           ; 00529420
    FSUB float ptr [EDX + 0x24]         ; 00529423
    FSTP float ptr [ESP + 0x20]         ; 00529426
    FLD float ptr [EAX + 0x8]           ; 0052942a
    FSUB float ptr [EDX + 0x28]         ; 0052942d
    LEA EDX,[ESI + 0x20]                ; 00529430
    FSTP float ptr [ESP + 0x24]         ; 00529433
    FLD float ptr [EDX]                 ; 00529437
    FSUB float ptr [EAX]                ; 00529439
    FSTP float ptr [ESP + 0x4c]         ; 0052943b
    FLD float ptr [EDX + 0x4]           ; 0052943f
    FSUB float ptr [EAX + 0x4]          ; 00529442
    FSTP float ptr [ESP + 0x50]         ; 00529445
    FLD float ptr [EDX + 0x8]           ; 00529449
    LEA EDX,[ESP + 0x1c]                ; 0052944c
    FSUB float ptr [EAX + 0x8]          ; 00529450
    LEA EAX,[ESP + 0x4c]                ; 00529453
    FSTP float ptr [ESP + 0x54]         ; 00529457
    CMP EDX,EAX                         ; 0052945b
    JNZ 0x005296a6                      ; 0052945d | LAB_005296a6
        ;   XREF to: 005296a6 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x20]          ; 00529463
        ;   Label: LAB_00529463
    FMUL ST0                            ; 00529467
    FLD float ptr [ESP + 0x1c]          ; 00529469
    FMUL ST0                            ; 0052946d
    FADDP                               ; 0052946f
    FLD float ptr [ESP + 0x24]          ; 00529471
    FMUL ST0                            ; 00529475
    FADDP                               ; 00529477
    FSQRT                               ; 00529479
    MOV EDX,dword ptr [0x02db87d0]      ; 0052947b | int g_LocalHeroIndex
    SHL EDX,0x2                         ; 00529481
    MOV dword ptr [EBX + 0x2418],0x0    ; 00529484
    FCOMP double ptr [0x00639e45]       ; 0052948e | double DOUBLE_00639e45
    FNSTSW AX                           ; 00529494
    SAHF                                ; 00529496
    JBE 0x005296c3                      ; 00529497 | LAB_005296c3
        ;   XREF to: 005296c3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x2db87c0] ; 0052949d | CHero *[4] g_HeroActors
    PUSH EAX                            ; 005294a3
    MOV EDX,dword ptr [EAX + 0x154]     ; 005294a4
    CALL dword ptr [EDX + 0xbc]         ; 005294aa
    ADD ESP,0x4                         ; 005294b0
    MOV EDX,dword ptr [EBX + 0x6c]      ; 005294b3
    PUSH EDX                            ; 005294b6
    LEA EDX,[ESP + 0x2c]                ; 005294b7
    PUSH EDX                            ; 005294bb
    LEA EDX,[EBX + 0x20]                ; 005294bc
    PUSH EDX                            ; 005294bf
    PUSH EAX                            ; 005294c0
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 005294c1 | int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005294c6
    TEST EAX,EAX                        ; 005294c9
    JZ 0x0052953c                       ; 005294cb | LAB_0052953c
        ;   XREF to: 0052953c (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x2c]          ; 005294cd
    FSUB float ptr [EBX + 0x34]         ; 005294d1
    SUB ESP,0x4                         ; 005294d4
    FSTP float ptr [ESP]                ; 005294d7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005294da | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005294df
    FLD float ptr [ESP + 0x7c]          ; 005294e3
    FMUL double ptr [0x00639e4d]        ; 005294e7 | double DOUBLE_00639e4d
    ADD ESP,0x4                         ; 005294ed
    FMUL double ptr [0x00639e55]        ; 005294f0 | double DOUBLE_00639e55
    FLD float ptr [ESP + 0x70]          ; 005294f6
    FCHS                                ; 005294fa
    FSTP float ptr [ESP + 0x68]         ; 005294fc
    FST float ptr [EBX + 0xbe50]        ; 00529500
    FCOMP float ptr [ESP + 0x68]        ; 00529506
    FNSTSW AX                           ; 0052950a
    SAHF                                ; 0052950c
    JNC 0x00529519                      ; 0052950d | LAB_00529519
        ;   XREF to: 00529519 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x68]      ; 0052950f
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00529513
    FLD float ptr [EBX + 0xbe50]        ; 00529519
        ;   Label: LAB_00529519
    FCOMP float ptr [ESP + 0x70]        ; 0052951f
    FNSTSW AX                           ; 00529523
    SAHF                                ; 00529525
    JBE 0x00529532                      ; 00529526 | LAB_00529532
        ;   XREF to: 00529532 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x70]      ; 00529528
    MOV dword ptr [EBX + 0xbe50],EAX    ; 0052952c
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 00529532
        ;   Label: LAB_00529532
    MOV dword ptr [EBX + 0x2dc4],0x0    ; 0052953c
        ;   Label: LAB_0052953c
    FLDZ                                ; 00529546
        ;   Label: LAB_00529546
    FLD float ptr [EBX + 0x2418]        ; 00529548
    FSTP double ptr [ESP + 0x8]         ; 0052954e
    FCOMP double ptr [ESP + 0x8]        ; 00529552
    FNSTSW AX                           ; 00529556
    SAHF                                ; 00529558
    JNC 0x0052972a                      ; 00529559 | LAB_0052972a
        ;   XREF to: 0052972a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x70]      ; 0052955f
    MOV dword ptr [EBX + 0x2418],0x0    ; 00529563
    MOV dword ptr [EBX + 0xbe50],EAX    ; 0052956d
    LEA EDX,[ESI + 0x20]                ; 00529573
        ;   Label: LAB_00529573
    LEA EAX,[EBX + 0x20]                ; 00529576
    FLD float ptr [EDX]                 ; 00529579
    FSUB float ptr [EAX]                ; 0052957b
    FSTP float ptr [ESP + 0x58]         ; 0052957d
    FLD float ptr [EDX + 0x4]           ; 00529581
    FSUB float ptr [EAX + 0x4]          ; 00529584
    FSTP float ptr [ESP + 0x5c]         ; 00529587
    FLD float ptr [EDX + 0x8]           ; 0052958b
    LEA EDX,[ESP + 0x1c]                ; 0052958e
    FSUB float ptr [EAX + 0x8]          ; 00529592
    LEA EAX,[ESP + 0x58]                ; 00529595
    FSTP float ptr [ESP + 0x60]         ; 00529599
    CMP EDX,EAX                         ; 0052959d
    JZ 0x005295b9                       ; 0052959f | LAB_005295b9
        ;   XREF to: 005295b9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x58]      ; 005295a1
    MOV dword ptr [ESP + 0x1c],EAX      ; 005295a5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005295a9
    MOV dword ptr [ESP + 0x20],EAX      ; 005295ad
    MOV EAX,dword ptr [ESP + 0x60]      ; 005295b1
    MOV dword ptr [ESP + 0x24],EAX      ; 005295b5
    LEA EAX,[ESP + 0x1c]                ; 005295b9
        ;   Label: LAB_005295b9
    PUSH EAX                            ; 005295bd
    LEA EAX,[ESP + 0x44]                ; 005295be
    PUSH EAX                            ; 005295c2
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005295c3 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 005295c8
    LEA EAX,[ESP + 0x24]                ; 005295ca
    ADD ESP,0x8                         ; 005295ce
    CMP EAX,EDX                         ; 005295d1
    JZ 0x005295e9                       ; 005295d3 | LAB_005295e9
        ;   XREF to: 005295e9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 005295d5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005295d7
    MOV EAX,dword ptr [EDX + 0x4]       ; 005295db
    MOV dword ptr [ESP + 0x20],EAX      ; 005295de
    MOV EAX,dword ptr [EDX + 0x8]       ; 005295e2
    MOV dword ptr [ESP + 0x24],EAX      ; 005295e5
    FLD float ptr [ESP + 0x20]          ; 005295e9
        ;   Label: LAB_005295e9
    FSUB float ptr [EBX + 0x34]         ; 005295ed
    SUB ESP,0x4                         ; 005295f0
    FSTP float ptr [ESP]                ; 005295f3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005295f6 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 005295fb
    FLD float ptr [ESP + 0x7c]          ; 005295ff
    ADD ESP,0x4                         ; 00529603
    FST float ptr [ESP + 0x38]          ; 00529606
    FCOMP float ptr [ESP + 0x6c]        ; 0052960a
    FNSTSW AX                           ; 0052960e
    SAHF                                ; 00529610
    JBE 0x0052961b                      ; 00529611 | LAB_0052961b
        ;   XREF to: 0052961b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00529613
    MOV dword ptr [ESP + 0x38],EAX      ; 00529617
    FLD float ptr [ESP + 0x38]          ; 0052961b
        ;   Label: LAB_0052961b
    FLD float ptr [ESP + 0x6c]          ; 0052961f
    FCHS                                ; 00529623
    FSTP float ptr [ESP + 0x64]         ; 00529625
    FCOMP float ptr [ESP + 0x64]        ; 00529629
    FNSTSW AX                           ; 0052962d
    SAHF                                ; 0052962f
    JNC 0x0052963a                      ; 00529630 | LAB_0052963a
        ;   XREF to: 0052963a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x64]      ; 00529632
    MOV dword ptr [ESP + 0x38],EAX      ; 00529636
    FLD float ptr [ESP + 0x38]          ; 0052963a
        ;   Label: LAB_0052963a
    FLD float ptr [EBP + 0x18]          ; 0052963e
    FXCH                                ; 00529641
    FSUB float ptr [EBX + 0x22b8c]      ; 00529643
    FXCH                                ; 00529649
    FMUL double ptr [0x00639e5d]        ; 0052964b | double DOUBLE_00639e5d
    FXCH                                ; 00529651
    FST float ptr [ESP + 0x18]          ; 00529653
    FXCH                                ; 00529657
    FSTP double ptr [ESP + 0x10]        ; 00529659
    FCOMP double ptr [ESP + 0x10]       ; 0052965d
    FNSTSW AX                           ; 00529661
    SAHF                                ; 00529663
    JBE 0x0052966e                      ; 00529664 | LAB_0052966e
        ;   XREF to: 0052966e (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x10]         ; 00529666
    FSTP float ptr [ESP + 0x18]         ; 0052966a
    FLD float ptr [EBP + 0x18]          ; 0052966e
        ;   Label: LAB_0052966e
    FMUL double ptr [0x00639e65]        ; 00529671 | double DOUBLE_00639e65
    FLD float ptr [ESP + 0x18]          ; 00529677
    FXCH                                ; 0052967b
    FSTP double ptr [ESP]               ; 0052967d
    FCOMP double ptr [ESP]              ; 00529680
    FNSTSW AX                           ; 00529683
    SAHF                                ; 00529685
    JNC 0x0052968f                      ; 00529686 | LAB_0052968f
        ;   XREF to: 0052968f (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 00529688
    FSTP float ptr [ESP + 0x18]         ; 0052968b
    FLD float ptr [EBX + 0x22b8c]       ; 0052968f
        ;   Label: LAB_0052968f
    FADD float ptr [ESP + 0x18]         ; 00529695
    FSTP float ptr [EBX + 0x22b8c]      ; 00529699
    MOV ESP,EBP                         ; 0052969f
        ;   Label: LAB_0052969f
    POP EBP                             ; 005296a1
    POP EDI                             ; 005296a2
    POP ESI                             ; 005296a3
    POP EBX                             ; 005296a4
    RET                                 ; 005296a5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005296a6
        ;   Label: LAB_005296a6
    MOV dword ptr [ESP + 0x1c],EAX      ; 005296aa
    MOV EAX,dword ptr [ESP + 0x50]      ; 005296ae
    MOV dword ptr [ESP + 0x20],EAX      ; 005296b2
    MOV EAX,dword ptr [ESP + 0x54]      ; 005296b6
    MOV dword ptr [ESP + 0x24],EAX      ; 005296ba
    JMP 0x00529463                      ; 005296be | LAB_00529463
        ;   XREF to: 00529463 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x2db87c0] ; 005296c3 | CHero *[4] g_HeroActors
        ;   Label: LAB_005296c3
    PUSH EAX                            ; 005296c9
    MOV EDX,dword ptr [EAX + 0x154]     ; 005296ca
    CALL dword ptr [EDX + 0x15c]        ; 005296d0
    ADD ESP,0x4                         ; 005296d6
    TEST EAX,EAX                        ; 005296d9
    JNZ 0x00529546                      ; 005296db | LAB_00529546
        ;   XREF to: 00529546 (CONDITIONAL_JUMP)
    PUSH dword ptr [EBP + 0x18]         ; 005296e1
    PUSH EBX                            ; 005296e4
    CALL core_charactr.cpp_CCharacter_FUN_0042ede0 ; 005296e5 | int core_charactr.cpp_CCharacter_FUN_0042ede0(CCharacter * this_ptr)
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005296ea
    CMP EAX,0x1                         ; 005296ed
    JC 0x00529546                       ; 005296f0 | LAB_00529546
        ;   XREF to: 00529546 (CONDITIONAL_JUMP)
    JA 0x00529720                       ; 005296f6 | LAB_00529720
        ;   XREF to: 00529720 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 005296f8
    JMP 0x00529546                      ; 00529702 | LAB_00529546
        ;   XREF to: 00529546 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe34],0x1    ; 00529707
        ;   Label: LAB_00529707
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 00529711
    JMP 0x00529546                      ; 0052971b | LAB_00529546
        ;   XREF to: 00529546 (UNCONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 00529720
        ;   Label: LAB_00529720
    JZ 0x00529707                       ; 00529723 | LAB_00529707
        ;   XREF to: 00529707 (CONDITIONAL_JUMP)
    JMP 0x00529546                      ; 00529725 | LAB_00529546
        ;   XREF to: 00529546 (UNCONDITIONAL_JUMP)
    JBE 0x00529573                      ; 0052972a | LAB_00529573
        ;   Label: LAB_0052972a
        ;   XREF to: 00529573 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x70]          ; 00529730
    MOV dword ptr [EBX + 0x2418],0x0    ; 00529734
    FCHS                                ; 0052973e
    FSTP float ptr [EBX + 0xbe50]       ; 00529740
    JMP 0x00529573                      ; 00529746 | LAB_00529573
        ;   XREF to: 00529573 (UNCONDITIONAL_JUMP)

