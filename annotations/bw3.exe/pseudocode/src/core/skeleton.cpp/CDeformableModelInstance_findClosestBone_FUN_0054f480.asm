; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480(CDeformableModelInstance *this_ptr,CVector3f *point)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042fbd0 at 0042fc18
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f480
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480
    PUSH ESI                            ; 0054f481
    PUSH EDI                            ; 0054f482
    PUSH EBP                            ; 0054f483
    MOV EBP,ESP                         ; 0054f484
    SUB ESP,0xf8                        ; 0054f486
    AND ESP,0xfffffff8                  ; 0054f48c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0054f48f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054f492
    PUSH EDX                            ; 0054f495
    XOR ESI,ESI                         ; 0054f496
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054f498
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV ECX,0x7149f2ca                  ; 0054f49d
    ADD ESP,0x4                         ; 0054f4a2
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054f4a5
    MOV dword ptr [ESP + 0xc4],EAX      ; 0054f4ab
    MOV dword ptr [ESP + 0xd4],ECX      ; 0054f4b2
    MOV dword ptr [ESP + 0xc8],ESI      ; 0054f4b9
    MOV dword ptr [ESP + 0xd8],ESI      ; 0054f4c0
    TEST EDX,EDX                        ; 0054f4c7
    JLE 0x0054f6f1                      ; 0054f4c9
        ;   XREF to: 0054f6f1 (CONDITIONAL_JUMP)  ; LAB_0054f6f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054f4cf
    ADD EDX,0xe80                       ; 0054f4d2
    MOV dword ptr [ESP + 0xdc],EAX      ; 0054f4d8
    MOV dword ptr [ESP + 0xcc],EDX      ; 0054f4df
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0054f4e6
        ;   Label: LAB_0054f4e6
    MOV ECX,dword ptr [ECX + 0x1de9c]   ; 0054f4ed
    TEST ECX,ECX                        ; 0054f4f3
    JL 0x0054f6b9                       ; 0054f4f5
        ;   XREF to: 0054f6b9 (CONDITIONAL_JUMP)  ; LAB_0054f6b9
    MOV EAX,dword ptr [EDX + 0xc]       ; 0054f4fb
    MOV dword ptr [ESP + 0xa0],EAX      ; 0054f4fe
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0054f505
    MOV dword ptr [ESP + 0xac],EAX      ; 0054f508
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0054f50f
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054f512
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0054f519
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054f520
    MOV EAX,dword ptr [ESP + 0xac]      ; 0054f524
    MOV dword ptr [ESP + 0x50],EAX      ; 0054f52b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0054f52f
    MOV dword ptr [ESP + 0x54],EAX      ; 0054f536
    IMUL EAX,ECX,0x30                   ; 0054f53a
    LEA EDI,[ESP + 0x70]                ; 0054f53d
    LEA ESI,[ESP + 0x4c]                ; 0054f541
    MOVSD ES:EDI,ESI                    ; 0054f545
    MOVSD ES:EDI,ESI                    ; 0054f546
    MOVSD ES:EDI,ESI                    ; 0054f547
    ADD EAX,dword ptr [ESP + 0xcc]      ; 0054f548
    MOV ESI,dword ptr [EAX + 0xc]       ; 0054f54f
    LEA EDI,[ESP + 0x34]                ; 0054f552
    MOV dword ptr [ESP + 0x90],ESI      ; 0054f556
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0054f55d
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0054f560
    MOV dword ptr [ESP + 0xe0],EAX      ; 0054f563
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054f56a
    MOV dword ptr [ESP + 0x68],ESI      ; 0054f571
    MOV dword ptr [ESP + 0x64],EAX      ; 0054f575
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0054f579
    LEA ESI,[ESP + 0x64]                ; 0054f580
    MOV dword ptr [ESP + 0x6c],EAX      ; 0054f584
    MOVSD ES:EDI,ESI                    ; 0054f588
    MOVSD ES:EDI,ESI                    ; 0054f589
    MOVSD ES:EDI,ESI                    ; 0054f58a
    FLD float ptr [ESP + 0x34]          ; 0054f58b
    FLD float ptr [ESP + 0x38]          ; 0054f58f
    FLD float ptr [ESP + 0x3c]          ; 0054f593
    LEA EDI,[ESP + 0x1c]                ; 0054f597
    LEA ESI,[ESP + 0x10]                ; 0054f59b
    FXCH ST2                            ; 0054f59f
    FSUB float ptr [ESP + 0x70]         ; 0054f5a1
    FXCH                                ; 0054f5a5
    FSUB float ptr [ESP + 0x74]         ; 0054f5a7
    FXCH ST2                            ; 0054f5ab
    FSUB float ptr [ESP + 0x78]         ; 0054f5ad
    FXCH                                ; 0054f5b1
    FSTP float ptr [ESP + 0x10]         ; 0054f5b3
    FXCH                                ; 0054f5b7
    FSTP float ptr [ESP + 0x14]         ; 0054f5b9
    FSTP float ptr [ESP + 0x18]         ; 0054f5bd
    MOVSD ES:EDI,ESI                    ; 0054f5c1
    MOVSD ES:EDI,ESI                    ; 0054f5c2
    MOVSD ES:EDI,ESI                    ; 0054f5c3
    FLD float ptr [ESP + 0x20]          ; 0054f5c4
    FMUL ST0                            ; 0054f5c8
    FLD float ptr [ESP + 0x1c]          ; 0054f5ca
    FMUL ST0                            ; 0054f5ce
    FADDP                               ; 0054f5d0
    FLD float ptr [ESP + 0x24]          ; 0054f5d2
    FMUL ST0                            ; 0054f5d6
    FADDP                               ; 0054f5d8
    FSQRT                               ; 0054f5da
    FLDZ                                ; 0054f5dc
    FXCH                                ; 0054f5de
    FSTP double ptr [ESP]               ; 0054f5e0
    FCOMP double ptr [ESP]              ; 0054f5e3
    FNSTSW AX                           ; 0054f5e6
    SAHF                                ; 0054f5e8
    JNC 0x0054f679                      ; 0054f5e9
        ;   XREF to: 0054f679 (CONDITIONAL_JUMP)  ; LAB_0054f679
    FLD double ptr [ESP]                ; 0054f5ef
    FLD1                                ; 0054f5f2
    FLD float ptr [ESP + 0x1c]          ; 0054f5f4
    FXCH ST2                            ; 0054f5f8
    FSTP float ptr [ESP + 0xd0]         ; 0054f5fa
    FDIV float ptr [ESP + 0xd0]         ; 0054f601
    FXCH                                ; 0054f608
    FMUL ST1                            ; 0054f60a
    FLD float ptr [ESP + 0x20]          ; 0054f60c
    FMUL ST2                            ; 0054f610
    FLD float ptr [ESP + 0x24]          ; 0054f612
    FMULP ST3                           ; 0054f616
    FLD float ptr [EBX + 0x4]           ; 0054f618
    FXCH                                ; 0054f61b
    FSTP float ptr [ESP + 0x20]         ; 0054f61d
    FMUL float ptr [ESP + 0x20]         ; 0054f621
    FLD float ptr [ESP + 0x74]          ; 0054f625
    FMUL float ptr [ESP + 0x20]         ; 0054f629
    FXCH ST2                            ; 0054f62d
    FSTP float ptr [ESP + 0x1c]         ; 0054f62f
    FLD float ptr [EBX]                 ; 0054f633
    FMUL float ptr [ESP + 0x1c]         ; 0054f635
    FLD float ptr [ESP + 0x70]          ; 0054f639
    FMUL float ptr [ESP + 0x1c]         ; 0054f63d
    FXCH ST4                            ; 0054f641
    FSTP float ptr [ESP + 0x24]         ; 0054f643
    FXCH ST3                            ; 0054f647
    FADDP ST2,ST0                       ; 0054f649
    FADDP ST2,ST0                       ; 0054f64b
    FLD float ptr [ESP + 0x78]          ; 0054f64d
    FMUL float ptr [ESP + 0x24]         ; 0054f651
    FLD float ptr [EBX + 0x8]           ; 0054f655
    FMUL float ptr [ESP + 0x24]         ; 0054f658
    FXCH                                ; 0054f65c
    FADDP ST2,ST0                       ; 0054f65e
    FADDP ST2,ST0                       ; 0054f660
    FSUBP                               ; 0054f662
    FLDZ                                ; 0054f664
    FXCH                                ; 0054f666
    FSTP double ptr [ESP + 0x8]         ; 0054f668
    FCOMP double ptr [ESP + 0x8]        ; 0054f66c
    FNSTSW AX                           ; 0054f670
    SAHF                                ; 0054f672
    JC 0x0054f6ff                       ; 0054f673
        ;   XREF to: 0054f6ff (CONDITIONAL_JUMP)  ; LAB_0054f6ff
    FLD float ptr [EBX]                 ; 0054f679
        ;   Label: LAB_0054f679
    FSUB float ptr [ESP + 0x70]         ; 0054f67b
    FMUL ST0                            ; 0054f67f
    FLD float ptr [EBX + 0x4]           ; 0054f681
    FSUB float ptr [ESP + 0x74]         ; 0054f684
    FMUL ST0                            ; 0054f688
    FLD float ptr [EBX + 0x8]           ; 0054f68a
    FXCH                                ; 0054f68d
    FADDP ST2,ST0                       ; 0054f68f
    FSUB float ptr [ESP + 0x78]         ; 0054f691
    FMUL ST0                            ; 0054f695
        ;   Label: LAB_0054f695
    FADDP                               ; 0054f697
    FSQRT                               ; 0054f699
    FSTP float ptr [ESP + 0xec]         ; 0054f69b
    FLD float ptr [ESP + 0xec]          ; 0054f6a2
    FCOMP float ptr [ESP + 0xd4]        ; 0054f6a9
    FNSTSW AX                           ; 0054f6b0
    SAHF                                ; 0054f6b2
    JC 0x0054f7d1                       ; 0054f6b3
        ;   XREF to: 0054f7d1 (CONDITIONAL_JUMP)  ; LAB_0054f7d1
    MOV ECX,dword ptr [ESP + 0xdc]      ; 0054f6b9
        ;   Label: LAB_0054f6b9
    ADD ECX,0x24                        ; 0054f6c0
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0054f6c3
    MOV dword ptr [ESP + 0xdc],ECX      ; 0054f6ca
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0054f6d1
    ADD EDX,0x30                        ; 0054f6d8
    INC ESI                             ; 0054f6db
    MOV EDI,dword ptr [ECX + 0x1de78]   ; 0054f6dc
    MOV dword ptr [ESP + 0xd8],ESI      ; 0054f6e2
    CMP ESI,EDI                         ; 0054f6e9
    JL 0x0054f4e6                       ; 0054f6eb
        ;   XREF to: 0054f4e6 (CONDITIONAL_JUMP)  ; LAB_0054f4e6
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0054f6f1
        ;   Label: LAB_0054f6f1
    MOV ESP,EBP                         ; 0054f6f8
    POP EBP                             ; 0054f6fa
    POP EDI                             ; 0054f6fb
    POP ESI                             ; 0054f6fc
    POP EBX                             ; 0054f6fd
    RET                                 ; 0054f6fe
    FLD double ptr [ESP + 0x8]          ; 0054f6ff
        ;   Label: LAB_0054f6ff
    FCOMP double ptr [ESP]              ; 0054f703
    FNSTSW AX                           ; 0054f706
    SAHF                                ; 0054f708
    JC 0x0054f72c                       ; 0054f709
        ;   XREF to: 0054f72c (CONDITIONAL_JUMP)  ; LAB_0054f72c
    FLD float ptr [EBX]                 ; 0054f70b
    FSUB float ptr [ESP + 0x34]         ; 0054f70d
    FMUL ST0                            ; 0054f711
    FLD float ptr [EBX + 0x4]           ; 0054f713
    FSUB float ptr [ESP + 0x38]         ; 0054f716
    FMUL ST0                            ; 0054f71a
    FLD float ptr [EBX + 0x8]           ; 0054f71c
    FXCH                                ; 0054f71f
    FADDP ST2,ST0                       ; 0054f721
    FSUB float ptr [ESP + 0x3c]         ; 0054f723
    JMP 0x0054f695                      ; 0054f727
        ;   XREF to: 0054f695 (UNCONDITIONAL_JUMP)  ; LAB_0054f695
    FLD float ptr [ESP + 0x1c]          ; 0054f72c
        ;   Label: LAB_0054f72c
    FLD double ptr [ESP + 0x8]          ; 0054f730
    FSTP float ptr [ESP + 0xe4]         ; 0054f734
    FMUL float ptr [ESP + 0xe4]         ; 0054f73b
    FLD float ptr [ESP + 0x20]          ; 0054f742
    FMUL float ptr [ESP + 0xe4]         ; 0054f746
    FLD float ptr [ESP + 0x24]          ; 0054f74d
    FMUL float ptr [ESP + 0xe4]         ; 0054f751
    FLD float ptr [ESP + 0x70]          ; 0054f758
    FLD float ptr [ESP + 0x74]          ; 0054f75c
    LEA EDI,[ESP + 0x28]                ; 0054f760
    LEA ESI,[ESP + 0x7c]                ; 0054f764
    FXCH ST4                            ; 0054f768
    FSTP float ptr [ESP + 0x7c]         ; 0054f76a
    FXCH ST2                            ; 0054f76e
    FSTP float ptr [ESP + 0x80]         ; 0054f770
    FSTP float ptr [ESP + 0x84]         ; 0054f777
    MOVSD ES:EDI,ESI                    ; 0054f77e
    MOVSD ES:EDI,ESI                    ; 0054f77f
    MOVSD ES:EDI,ESI                    ; 0054f780
    FLD float ptr [ESP + 0x78]          ; 0054f781
    LEA EDI,[ESP + 0x40]                ; 0054f785
    LEA ESI,[ESP + 0x58]                ; 0054f789
    FXCH                                ; 0054f78d
    FADD float ptr [ESP + 0x28]         ; 0054f78f
    FXCH ST2                            ; 0054f793
    FADD float ptr [ESP + 0x2c]         ; 0054f795
    FXCH                                ; 0054f799
    FADD float ptr [ESP + 0x30]         ; 0054f79b
    FXCH ST2                            ; 0054f79f
    FSTP float ptr [ESP + 0x58]         ; 0054f7a1
    FSTP float ptr [ESP + 0x5c]         ; 0054f7a5
    FSTP float ptr [ESP + 0x60]         ; 0054f7a9
    MOVSD ES:EDI,ESI                    ; 0054f7ad
    MOVSD ES:EDI,ESI                    ; 0054f7ae
    MOVSD ES:EDI,ESI                    ; 0054f7af
    FLD float ptr [EBX]                 ; 0054f7b0
    FSUB float ptr [ESP + 0x40]         ; 0054f7b2
    FMUL ST0                            ; 0054f7b6
    FLD float ptr [EBX + 0x4]           ; 0054f7b8
    FSUB float ptr [ESP + 0x44]         ; 0054f7bb
    FMUL ST0                            ; 0054f7bf
    FLD float ptr [EBX + 0x8]           ; 0054f7c1
    FXCH                                ; 0054f7c4
    FADDP ST2,ST0                       ; 0054f7c6
    FSUB float ptr [ESP + 0x48]         ; 0054f7c8
    JMP 0x0054f695                      ; 0054f7cc
        ;   XREF to: 0054f695 (UNCONDITIONAL_JUMP)  ; LAB_0054f695
    MOV EAX,dword ptr [ESP + 0xec]      ; 0054f7d1
        ;   Label: LAB_0054f7d1
    MOV dword ptr [ESP + 0xc8],ECX      ; 0054f7d8
    MOV dword ptr [ESP + 0xd4],EAX      ; 0054f7df
    JMP 0x0054f6b9                      ; 0054f7e6
        ;   XREF to: 0054f6b9 (UNCONDITIONAL_JUMP)  ; LAB_0054f6b9

