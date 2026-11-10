; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_004566c0(int *param_1,SIntersectXZCylinder *param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_004583d0 at 004583f3
;
; Called Functions:
;   core_dcube.cpp_intersectXZCylinder_FUN_00456340
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004566c0
        ;   Label: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0
    PUSH ESI                            ; 004566c1
    PUSH EDI                            ; 004566c2
    PUSH EBP                            ; 004566c3
    SUB ESP,0x74                        ; 004566c4
    MOV ESI,dword ptr [ESP + 0x88]      ; 004566c7
    MOV EBX,dword ptr [ESP + 0x8c]      ; 004566ce
    FLD float ptr [ESI + 0xc]           ; 004566d5
    FMUL float ptr [EBX + 0x18]         ; 004566d8
    FLD float ptr [ESI + 0x14]          ; 004566db
    FMUL float ptr [EBX + 0x1c]         ; 004566de
    FADDP                               ; 004566e1
    FLDZ                                ; 004566e3
    FCOMPP                              ; 004566e5
    FNSTSW AX                           ; 004566e7
    SAHF                                ; 004566e9
    JNC 0x00456ac3                      ; 004566ea
        ;   XREF to: 00456ac3 (CONDITIONAL_JUMP)  ; LAB_00456ac3
    MOV EBP,dword ptr [ESI]             ; 004566f0
    FLD float ptr [EBP + 0x8]           ; 004566f2
    FMUL float ptr [EBX + 0x1c]         ; 004566f5
    MOV EDI,dword ptr [ESI + 0x4]       ; 004566f8
    MOV EAX,dword ptr [ESI + 0x8]       ; 004566fb
    FLD float ptr [EDI + 0x8]           ; 004566fe
    FMUL float ptr [EBX + 0x1c]         ; 00456701
    FLD float ptr [EAX + 0x8]           ; 00456704
    FMUL float ptr [EBX + 0x1c]         ; 00456707
    FLD float ptr [EBP]                 ; 0045670a
    FMUL float ptr [EBX + 0x18]         ; 0045670d
    FLD float ptr [EDI]                 ; 00456710
    FMUL float ptr [EBX + 0x18]         ; 00456712
    FLD float ptr [EAX]                 ; 00456715
    FMUL float ptr [EBX + 0x18]         ; 00456717
    MOV dword ptr [ESP + 0x50],EAX      ; 0045671a
    FXCH ST2                            ; 0045671e
    FADDP ST5,ST0                       ; 00456720
    FADDP ST3,ST0                       ; 00456722
    FADDP                               ; 00456724
    FXCH ST2                            ; 00456726
    FSTP float ptr [ESP + 0x54]         ; 00456728
    FSTP float ptr [ESP + 0x64]         ; 0045672c
    FSTP float ptr [ESP + 0x4c]         ; 00456730
    FLD float ptr [ESP + 0x54]          ; 00456734
    FCOMP float ptr [ESP + 0x64]        ; 00456738
    FNSTSW AX                           ; 0045673c
    SAHF                                ; 0045673e
    JA 0x00456acd                       ; 0045673f
        ;   XREF to: 00456acd (CONDITIONAL_JUMP)  ; LAB_00456acd
    FLD float ptr [ESP + 0x64]          ; 00456745
        ;   Label: LAB_00456745
    FCOMP float ptr [ESP + 0x4c]        ; 00456749
    FNSTSW AX                           ; 0045674d
    SAHF                                ; 0045674f
    JBE 0x00456774                      ; 00456750
        ;   XREF to: 00456774 (CONDITIONAL_JUMP)  ; LAB_00456774
    MOV EAX,dword ptr [ESP + 0x64]      ; 00456752
    MOV dword ptr [ESP + 0x40],EAX      ; 00456756
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0045675a
    MOV dword ptr [ESP + 0x64],EAX      ; 0045675e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00456762
    MOV dword ptr [ESP + 0x4c],EAX      ; 00456766
    MOV EAX,EDI                         ; 0045676a
    MOV EDI,dword ptr [ESP + 0x50]      ; 0045676c
    MOV dword ptr [ESP + 0x50],EAX      ; 00456770
    FLD float ptr [ESP + 0x54]          ; 00456774
        ;   Label: LAB_00456774
    FCOMP float ptr [ESP + 0x64]        ; 00456778
    FNSTSW AX                           ; 0045677c
    SAHF                                ; 0045677e
    JBE 0x0045678f                      ; 0045677f
        ;   XREF to: 0045678f (CONDITIONAL_JUMP)  ; LAB_0045678f
    MOV EAX,dword ptr [ESP + 0x64]      ; 00456781
    MOV dword ptr [ESP + 0x54],EAX      ; 00456785
    MOV EAX,EBP                         ; 00456789
    MOV EBP,EDI                         ; 0045678b
    MOV EDI,EAX                         ; 0045678d
    FLD float ptr [ESP + 0x4c]          ; 0045678f
        ;   Label: LAB_0045678f
    FCOMP float ptr [EBX + 0x2c]        ; 00456793
    FNSTSW AX                           ; 00456796
    SAHF                                ; 00456798
    JC 0x00456ac3                       ; 00456799
        ;   XREF to: 00456ac3 (CONDITIONAL_JUMP)  ; LAB_00456ac3
    FLD float ptr [ESP + 0x54]          ; 0045679f
    FCOMP float ptr [EBX + 0x30]        ; 004567a3
    FNSTSW AX                           ; 004567a6
    SAHF                                ; 004567a8
    JA 0x00456ac3                       ; 004567a9
        ;   XREF to: 00456ac3 (CONDITIONAL_JUMP)  ; LAB_00456ac3
    MOV EAX,dword ptr [ESI]             ; 004567af
    XOR EDX,EDX                         ; 004567b1
    FLD float ptr [EAX + 0x4]           ; 004567b3
    MOV dword ptr [ESP + 0x58],EDX      ; 004567b6
    FCOMP float ptr [EBX + 0x24]        ; 004567ba
    FNSTSW AX                           ; 004567bd
    SAHF                                ; 004567bf
    JC 0x004567ca                       ; 004567c0
        ;   XREF to: 004567ca (CONDITIONAL_JUMP)  ; LAB_004567ca
    MOV dword ptr [ESP + 0x58],0x1      ; 004567c2
    MOV EAX,dword ptr [ESI]             ; 004567ca
        ;   Label: LAB_004567ca
    FLD float ptr [EAX + 0x4]           ; 004567cc
    FCOMP float ptr [EBX + 0x28]        ; 004567cf
    FNSTSW AX                           ; 004567d2
    SAHF                                ; 004567d4
    JA 0x004567dc                       ; 004567d5
        ;   XREF to: 004567dc (CONDITIONAL_JUMP)  ; LAB_004567dc
    OR byte ptr [ESP + 0x58],0x2        ; 004567d7
    XOR EAX,EAX                         ; 004567dc
        ;   Label: LAB_004567dc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004567de
    MOV EAX,dword ptr [ESI + 0x4]       ; 004567e2
    FLD float ptr [EAX + 0x4]           ; 004567e5
    FCOMP float ptr [EBX + 0x24]        ; 004567e8
    FNSTSW AX                           ; 004567eb
    SAHF                                ; 004567ed
    JC 0x004567f8                       ; 004567ee
        ;   XREF to: 004567f8 (CONDITIONAL_JUMP)  ; LAB_004567f8
    MOV dword ptr [ESP + 0x5c],0x1      ; 004567f0
    MOV EAX,dword ptr [ESI + 0x4]       ; 004567f8
        ;   Label: LAB_004567f8
    FLD float ptr [EAX + 0x4]           ; 004567fb
    FCOMP float ptr [EBX + 0x28]        ; 004567fe
    FNSTSW AX                           ; 00456801
    SAHF                                ; 00456803
    JA 0x0045680b                       ; 00456804
        ;   XREF to: 0045680b (CONDITIONAL_JUMP)  ; LAB_0045680b
    OR byte ptr [ESP + 0x5c],0x2        ; 00456806
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045680b
        ;   Label: LAB_0045680b
    XOR ECX,ECX                         ; 0045680e
    FLD float ptr [EAX + 0x4]           ; 00456810
    MOV dword ptr [ESP + 0x60],ECX      ; 00456813
    FCOMP float ptr [EBX + 0x24]        ; 00456817
    FNSTSW AX                           ; 0045681a
    SAHF                                ; 0045681c
    JC 0x00456827                       ; 0045681d
        ;   XREF to: 00456827 (CONDITIONAL_JUMP)  ; LAB_00456827
    MOV dword ptr [ESP + 0x60],0x1      ; 0045681f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00456827
        ;   Label: LAB_00456827
    FLD float ptr [EAX + 0x4]           ; 0045682a
    FCOMP float ptr [EBX + 0x28]        ; 0045682d
    FNSTSW AX                           ; 00456830
    SAHF                                ; 00456832
    JA 0x0045683a                       ; 00456833
        ;   XREF to: 0045683a (CONDITIONAL_JUMP)  ; LAB_0045683a
    OR byte ptr [ESP + 0x60],0x2        ; 00456835
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045683a
        ;   Label: LAB_0045683a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0045683e
    MOV ECX,dword ptr [ESP + 0x60]      ; 00456842
    AND EAX,EDX                         ; 00456846
    TEST EAX,ECX                        ; 00456848
    JNZ 0x00456ac3                      ; 0045684a
        ;   XREF to: 00456ac3 (CONDITIONAL_JUMP)  ; LAB_00456ac3
    FLDZ                                ; 00456850
    FCOMP float ptr [ESI + 0x10]        ; 00456852
    FNSTSW AX                           ; 00456855
    SAHF                                ; 00456857
    JA 0x00456986                       ; 00456858
        ;   XREF to: 00456986 (CONDITIONAL_JUMP)  ; LAB_00456986
    MOV EDX,dword ptr [ESP + 0x58]      ; 0045685e
    XOR EDX,dword ptr [ESP + 0x5c]      ; 00456862
    XOR EAX,EAX                         ; 00456866
    TEST DL,0x1                         ; 00456868
    JZ 0x004568a9                       ; 0045686b
        ;   XREF to: 004568a9 (CONDITIONAL_JUMP)  ; LAB_004568a9
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045686d
    MOV EAX,dword ptr [ESI]             ; 00456870
    FLD float ptr [EDX + 0x4]           ; 00456872
    FSUB float ptr [EAX + 0x4]          ; 00456875
    FLD float ptr [EDX]                 ; 00456878
    FLD float ptr [EBX + 0x24]          ; 0045687a
    FSUB float ptr [EAX + 0x4]          ; 0045687d
    FXCH                                ; 00456880
    FSUB float ptr [EAX]                ; 00456882
    FXCH                                ; 00456884
    FDIVRP ST2,ST0                      ; 00456886
    FMUL ST1                            ; 00456888
    FADD float ptr [EAX]                ; 0045688a
    FSTP float ptr [ESP + 0x18]         ; 0045688c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00456890
    MOV EAX,dword ptr [ESI]             ; 00456893
    FLD float ptr [EDX + 0x8]           ; 00456895
    FSUB float ptr [EAX + 0x8]          ; 00456898
    FMULP                               ; 0045689b
    FADD float ptr [EAX + 0x8]          ; 0045689d
    FSTP float ptr [ESP + 0xc]          ; 004568a0
    MOV EAX,0x1                         ; 004568a4
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004568a9
        ;   Label: LAB_004568a9
    XOR EDX,dword ptr [ESP + 0x60]      ; 004568ad
    TEST DL,0x1                         ; 004568b1
    JZ 0x00456900                       ; 004568b4
        ;   XREF to: 00456900 (CONDITIONAL_JUMP)  ; LAB_00456900
    MOV ECX,dword ptr [ESI + 0x8]       ; 004568b6
    MOV EDX,dword ptr [ESI + 0x4]       ; 004568b9
    FLD float ptr [ECX + 0x4]           ; 004568bc
    FSUB float ptr [EDX + 0x4]          ; 004568bf
    FLD float ptr [ECX]                 ; 004568c2
    FLD float ptr [EBX + 0x24]          ; 004568c4
    FSUB float ptr [EDX + 0x4]          ; 004568c7
    FXCH                                ; 004568ca
    FSUB float ptr [EDX]                ; 004568cc
    FXCH                                ; 004568ce
    FDIVRP ST2,ST0                      ; 004568d0
    FMUL ST1                            ; 004568d2
    FADD float ptr [EDX]                ; 004568d4
    FSTP float ptr [ESP + EAX*0x4 + 0x18] ; 004568d6
    MOV ECX,dword ptr [ESI + 0x8]       ; 004568da
    MOV dword ptr [ESP + 0x68],ECX      ; 004568dd
    MOV ECX,dword ptr [ESI + 0x4]       ; 004568e1
    MOV dword ptr [ESP + 0x30],ECX      ; 004568e4
    MOV ECX,dword ptr [ESP + 0x68]      ; 004568e8
    FLD float ptr [ECX + 0x8]           ; 004568ec
    MOV ECX,dword ptr [ESP + 0x30]      ; 004568ef
    FSUB float ptr [ECX + 0x8]          ; 004568f3
    FMULP                               ; 004568f6
    FADD float ptr [ECX + 0x8]          ; 004568f8
    INC EAX                             ; 004568fb
    FSTP float ptr [ESP + EAX*0x4 + 0x8] ; 004568fc
    MOV EDX,dword ptr [ESP + 0x60]      ; 00456900
        ;   Label: LAB_00456900
    XOR EDX,dword ptr [ESP + 0x58]      ; 00456904
    TEST DL,0x1                         ; 00456908
    JZ 0x00456954                       ; 0045690b
        ;   XREF to: 00456954 (CONDITIONAL_JUMP)  ; LAB_00456954
    MOV ECX,dword ptr [ESI]             ; 0045690d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0045690f
    FLD float ptr [ECX + 0x4]           ; 00456912
    FSUB float ptr [EDX + 0x4]          ; 00456915
    FLD float ptr [ECX]                 ; 00456918
    FLD float ptr [EBX + 0x24]          ; 0045691a
    FSUB float ptr [EDX + 0x4]          ; 0045691d
    FXCH                                ; 00456920
    FSUB float ptr [EDX]                ; 00456922
    FXCH                                ; 00456924
    FDIVRP ST2,ST0                      ; 00456926
    FMUL ST1                            ; 00456928
    FADD float ptr [EDX]                ; 0045692a
    LEA EDX,[EAX*0x4 + 0x0]             ; 0045692c
    FSTP float ptr [ESP + EDX*0x1 + 0x18] ; 00456933
    MOV ECX,dword ptr [ESI]             ; 00456937
    MOV dword ptr [ESP + 0x68],EDX      ; 00456939
    MOV EDX,dword ptr [ESI + 0x8]       ; 0045693d
    FLD float ptr [ECX + 0x8]           ; 00456940
    FSUB float ptr [EDX + 0x8]          ; 00456943
    FMULP                               ; 00456946
    FADD float ptr [EDX + 0x8]          ; 00456948
    MOV EDX,dword ptr [ESP + 0x68]      ; 0045694b
    INC EAX                             ; 0045694f
    FSTP float ptr [ESP + EDX*0x1 + 0xc] ; 00456950
    CMP EAX,0x2                         ; 00456954
        ;   Label: LAB_00456954
    JL 0x00456986                       ; 00456957
        ;   XREF to: 00456986 (CONDITIONAL_JUMP)  ; LAB_00456986
    MOV EAX,dword ptr [ESP + 0x18]      ; 00456959
    MOV dword ptr [EBX + 0x3c],EAX      ; 0045695d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00456960
    MOV dword ptr [EBX + 0x40],EAX      ; 00456964
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00456967
    MOV dword ptr [EBX + 0x44],EAX      ; 0045696b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045696e
    PUSH EBX                            ; 00456972
    MOV dword ptr [EBX + 0x48],EAX      ; 00456973
    CALL core_dcube.cpp_intersectXZCylinder_FUN_00456340 ; 00456976
        ;   XREF to: 00456340 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_00456340(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 0045697b
    TEST EAX,EAX                        ; 0045697e
    JNZ 0x00456a84                      ; 00456980
        ;   XREF to: 00456a84 (CONDITIONAL_JUMP)  ; LAB_00456a84
    FLDZ                                ; 00456986
        ;   Label: LAB_00456986
    FCOMP float ptr [ESI + 0x10]        ; 00456988
    FNSTSW AX                           ; 0045698b
    SAHF                                ; 0045698d
    JC 0x00456b30                       ; 0045698e
        ;   XREF to: 00456b30 (CONDITIONAL_JUMP)  ; LAB_00456b30
    MOV EDX,dword ptr [ESP + 0x58]      ; 00456994
    XOR EDX,dword ptr [ESP + 0x5c]      ; 00456998
    XOR EAX,EAX                         ; 0045699c
    TEST DL,0x2                         ; 0045699e
    JNZ 0x00456af0                      ; 004569a1
        ;   XREF to: 00456af0 (CONDITIONAL_JUMP)  ; LAB_00456af0
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004569a7
        ;   Label: LAB_004569a7
    XOR EDX,dword ptr [ESP + 0x60]      ; 004569ab
    TEST DL,0x2                         ; 004569af
    JZ 0x004569fc                       ; 004569b2
        ;   XREF to: 004569fc (CONDITIONAL_JUMP)  ; LAB_004569fc
    MOV ECX,dword ptr [ESI + 0x8]       ; 004569b4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004569b7
    FLD float ptr [ECX + 0x4]           ; 004569ba
    FSUB float ptr [EDX + 0x4]          ; 004569bd
    FLD float ptr [ECX]                 ; 004569c0
    FLD float ptr [EBX + 0x28]          ; 004569c2
    FSUB float ptr [EDX + 0x4]          ; 004569c5
    FXCH                                ; 004569c8
    FSUB float ptr [EDX]                ; 004569ca
    FXCH                                ; 004569cc
    FDIVRP ST2,ST0                      ; 004569ce
    FMUL ST1                            ; 004569d0
    FADD float ptr [EDX]                ; 004569d2
    LEA EDX,[EAX*0x4 + 0x0]             ; 004569d4
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 004569db
    MOV ECX,dword ptr [ESI + 0x8]       ; 004569df
    MOV dword ptr [ESP + 0x68],EDX      ; 004569e2
    MOV EDX,dword ptr [ESI + 0x4]       ; 004569e6
    FLD float ptr [ECX + 0x8]           ; 004569e9
    FSUB float ptr [EDX + 0x8]          ; 004569ec
    FMULP                               ; 004569ef
    FADD float ptr [EDX + 0x8]          ; 004569f1
    MOV EDX,dword ptr [ESP + 0x68]      ; 004569f4
    INC EAX                             ; 004569f8
    FSTP float ptr [ESP + EDX*0x1]      ; 004569f9
    MOV EDX,dword ptr [ESP + 0x60]      ; 004569fc
        ;   Label: LAB_004569fc
    XOR EDX,dword ptr [ESP + 0x58]      ; 00456a00
    TEST DL,0x2                         ; 00456a04
    JZ 0x00456a4f                       ; 00456a07
        ;   XREF to: 00456a4f (CONDITIONAL_JUMP)  ; LAB_00456a4f
    MOV ECX,dword ptr [ESI]             ; 00456a09
    MOV EDX,dword ptr [ESI + 0x8]       ; 00456a0b
    FLD float ptr [ECX + 0x4]           ; 00456a0e
    FSUB float ptr [EDX + 0x4]          ; 00456a11
    FLD float ptr [ECX]                 ; 00456a14
    FLD float ptr [EBX + 0x28]          ; 00456a16
    FSUB float ptr [EDX + 0x4]          ; 00456a19
    FXCH                                ; 00456a1c
    FSUB float ptr [EDX]                ; 00456a1e
    FXCH                                ; 00456a20
    FDIVRP ST2,ST0                      ; 00456a22
    FMUL ST1                            ; 00456a24
    FADD float ptr [EDX]                ; 00456a26
    LEA EDX,[EAX*0x4 + 0x0]             ; 00456a28
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00456a2f
    MOV ECX,dword ptr [ESI]             ; 00456a33
    MOV dword ptr [ESP + 0x68],EDX      ; 00456a35
    MOV EDX,dword ptr [ESI + 0x8]       ; 00456a39
    FLD float ptr [ECX + 0x8]           ; 00456a3c
    FSUB float ptr [EDX + 0x8]          ; 00456a3f
    FMULP                               ; 00456a42
    FADD float ptr [EDX + 0x8]          ; 00456a44
    MOV EDX,dword ptr [ESP + 0x68]      ; 00456a47
    INC EAX                             ; 00456a4b
    FSTP float ptr [ESP + EDX*0x1]      ; 00456a4c
    CMP EAX,0x2                         ; 00456a4f
        ;   Label: LAB_00456a4f
    JL 0x00456b30                       ; 00456a52
        ;   XREF to: 00456b30 (CONDITIONAL_JUMP)  ; LAB_00456b30
    MOV EAX,dword ptr [ESP + 0x24]      ; 00456a58
    MOV dword ptr [EBX + 0x3c],EAX      ; 00456a5c
    MOV EAX,dword ptr [ESP]             ; 00456a5f
    MOV dword ptr [EBX + 0x40],EAX      ; 00456a62
    MOV EAX,dword ptr [ESP + 0x28]      ; 00456a65
    MOV dword ptr [EBX + 0x44],EAX      ; 00456a69
    MOV EAX,dword ptr [ESP + 0x4]       ; 00456a6c
    PUSH EBX                            ; 00456a70
    MOV dword ptr [EBX + 0x48],EAX      ; 00456a71
    CALL core_dcube.cpp_intersectXZCylinder_FUN_00456340 ; 00456a74
        ;   XREF to: 00456340 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_00456340(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00456a79
    TEST EAX,EAX                        ; 00456a7c
    JZ 0x00456b30                       ; 00456a7e
        ;   XREF to: 00456b30 (CONDITIONAL_JUMP)  ; LAB_00456b30
    FLD float ptr [EBX + 0x18]          ; 00456a84
        ;   Label: LAB_00456a84
    FMUL float ptr [EBX + 0x4c]         ; 00456a87
    FLD float ptr [EBX + 0x1c]          ; 00456a8a
    FMUL float ptr [EBX + 0x4c]         ; 00456a8d
    FLD float ptr [EBX + 0x4c]          ; 00456a90
    MOV dword ptr [EBX + 0x8],0x0       ; 00456a93
    MOV EAX,0x1                         ; 00456a9a
    FSTP float ptr [EBX]                ; 00456a9f
    FXCH                                ; 00456aa1
    FADD float ptr [EBX + 0x10]         ; 00456aa3
    FXCH                                ; 00456aa6
    FADD float ptr [EBX + 0x14]         ; 00456aa8
    FLD float ptr [EBX + 0x54]          ; 00456aab
    FLD float ptr [EBX + 0x58]          ; 00456aae
    FSUBP ST2,ST0                       ; 00456ab1
    FSUBP ST2,ST0                       ; 00456ab3
    FSTP float ptr [EBX + 0xc]          ; 00456ab5
    FSTP float ptr [EBX + 0x4]          ; 00456ab8
    ADD ESP,0x74                        ; 00456abb
    POP EBP                             ; 00456abe
    POP EDI                             ; 00456abf
    POP ESI                             ; 00456ac0
    POP EBX                             ; 00456ac1
    RET                                 ; 00456ac2
    XOR EAX,EAX                         ; 00456ac3
        ;   Label: LAB_00456ac3
    ADD ESP,0x74                        ; 00456ac5
    POP EBP                             ; 00456ac8
    POP EDI                             ; 00456ac9
    POP ESI                             ; 00456aca
    POP EBX                             ; 00456acb
    RET                                 ; 00456acc
    MOV EAX,dword ptr [ESP + 0x54]      ; 00456acd
        ;   Label: LAB_00456acd
    MOV dword ptr [ESP + 0x34],EAX      ; 00456ad1
    MOV EAX,dword ptr [ESP + 0x64]      ; 00456ad5
    MOV dword ptr [ESP + 0x54],EAX      ; 00456ad9
    MOV EAX,dword ptr [ESP + 0x34]      ; 00456add
    MOV dword ptr [ESP + 0x64],EAX      ; 00456ae1
    MOV EAX,EBP                         ; 00456ae5
    MOV EBP,EDI                         ; 00456ae7
    MOV EDI,EAX                         ; 00456ae9
    JMP 0x00456745                      ; 00456aeb
        ;   XREF to: 00456745 (UNCONDITIONAL_JUMP)  ; LAB_00456745
    MOV EDX,dword ptr [ESI + 0x4]       ; 00456af0
        ;   Label: LAB_00456af0
    MOV EAX,dword ptr [ESI]             ; 00456af3
    FLD float ptr [EDX + 0x4]           ; 00456af5
    FSUB float ptr [EAX + 0x4]          ; 00456af8
    FLD float ptr [EDX]                 ; 00456afb
    FLD float ptr [EBX + 0x28]          ; 00456afd
    FSUB float ptr [EAX + 0x4]          ; 00456b00
    FXCH                                ; 00456b03
    FSUB float ptr [EAX]                ; 00456b05
    FXCH                                ; 00456b07
    FDIVRP ST2,ST0                      ; 00456b09
    FMUL ST1                            ; 00456b0b
    FADD float ptr [EAX]                ; 00456b0d
    FSTP float ptr [ESP + 0x24]         ; 00456b0f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00456b13
    MOV EAX,dword ptr [ESI]             ; 00456b16
    FLD float ptr [EDX + 0x8]           ; 00456b18
    FSUB float ptr [EAX + 0x8]          ; 00456b1b
    FMULP                               ; 00456b1e
    FADD float ptr [EAX + 0x8]          ; 00456b20
    FSTP float ptr [ESP]                ; 00456b23
    MOV EAX,0x1                         ; 00456b26
    JMP 0x004569a7                      ; 00456b2b
        ;   XREF to: 004569a7 (UNCONDITIONAL_JUMP)  ; LAB_004569a7
    PUSH EDI                            ; 00456b30
        ;   Label: LAB_00456b30
    PUSH EBP                            ; 00456b31
    PUSH EBX                            ; 00456b32
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620 ; 00456b33
        ;   XREF to: 00456620 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620()
    ADD ESP,0xc                         ; 00456b38
    MOV EDI,dword ptr [ESP + 0x50]      ; 00456b3b
    PUSH EDI                            ; 00456b3f
    PUSH EBP                            ; 00456b40
    PUSH EBX                            ; 00456b41
    MOV ESI,EAX                         ; 00456b42
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620 ; 00456b44
        ;   XREF to: 00456620 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00456620()
    ADD ESP,0xc                         ; 00456b49
    OR EAX,ESI                          ; 00456b4c
    ADD ESP,0x74                        ; 00456b4e
    POP EBP                             ; 00456b51
    POP EDI                             ; 00456b52
    POP ESI                             ; 00456b53
    POP EBX                             ; 00456b54
    RET                                 ; 00456b55

