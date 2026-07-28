; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcube_cpp_intersectTriangleWithXZCylinder_FUN_00449720(STriangleRef *triangle,SIntersectXZCylinder *cylinder)
;
; Parameters:
; STriangleRef *   Stack[0x4]:4   triangle
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
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
;   core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_0044b430 at 0044b453
;
; Called Functions:
;   core_dcube.cpp_intersectXZCylinder_FUN_004493a0
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449720
        ;   Label: core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720
    PUSH ESI                            ; 00449721
    PUSH EDI                            ; 00449722
    PUSH EBP                            ; 00449723
    SUB ESP,0x74                        ; 00449724
    MOV ESI,dword ptr [ESP + 0x88]      ; 00449727
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0044972e
    FLD float ptr [ESI + 0xc]           ; 00449735
    FMUL float ptr [EBX + 0x18]         ; 00449738
    FLD float ptr [ESI + 0x14]          ; 0044973b
    FMUL float ptr [EBX + 0x1c]         ; 0044973e
    FADDP                               ; 00449741
    FLDZ                                ; 00449743
    FCOMPP                              ; 00449745
    FNSTSW AX                           ; 00449747
    SAHF                                ; 00449749
    JNC 0x00449b23                      ; 0044974a
        ;   XREF to: 00449b23 (CONDITIONAL_JUMP)  ; LAB_00449b23
    MOV EBP,dword ptr [ESI]             ; 00449750
    FLD float ptr [EBP + 0x8]           ; 00449752
    FMUL float ptr [EBX + 0x1c]         ; 00449755
    MOV EDI,dword ptr [ESI + 0x4]       ; 00449758
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044975b
    FLD float ptr [EDI + 0x8]           ; 0044975e
    FMUL float ptr [EBX + 0x1c]         ; 00449761
    FLD float ptr [EAX + 0x8]           ; 00449764
    FMUL float ptr [EBX + 0x1c]         ; 00449767
    FLD float ptr [EBP]                 ; 0044976a
    FMUL float ptr [EBX + 0x18]         ; 0044976d
    FLD float ptr [EDI]                 ; 00449770
    FMUL float ptr [EBX + 0x18]         ; 00449772
    FLD float ptr [EAX]                 ; 00449775
    FMUL float ptr [EBX + 0x18]         ; 00449777
    MOV dword ptr [ESP + 0x50],EAX      ; 0044977a
    FXCH ST2                            ; 0044977e
    FADDP ST5,ST0                       ; 00449780
    FADDP ST3,ST0                       ; 00449782
    FADDP                               ; 00449784
    FXCH ST2                            ; 00449786
    FSTP float ptr [ESP + 0x54]         ; 00449788
    FSTP float ptr [ESP + 0x64]         ; 0044978c
    FSTP float ptr [ESP + 0x4c]         ; 00449790
    FLD float ptr [ESP + 0x54]          ; 00449794
    FCOMP float ptr [ESP + 0x64]        ; 00449798
    FNSTSW AX                           ; 0044979c
    SAHF                                ; 0044979e
    JA 0x00449b2d                       ; 0044979f
        ;   XREF to: 00449b2d (CONDITIONAL_JUMP)  ; LAB_00449b2d
    FLD float ptr [ESP + 0x64]          ; 004497a5
        ;   Label: LAB_004497a5
    FCOMP float ptr [ESP + 0x4c]        ; 004497a9
    FNSTSW AX                           ; 004497ad
    SAHF                                ; 004497af
    JBE 0x004497d4                      ; 004497b0
        ;   XREF to: 004497d4 (CONDITIONAL_JUMP)  ; LAB_004497d4
    MOV EAX,dword ptr [ESP + 0x64]      ; 004497b2
    MOV dword ptr [ESP + 0x40],EAX      ; 004497b6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004497ba
    MOV dword ptr [ESP + 0x64],EAX      ; 004497be
    MOV EAX,dword ptr [ESP + 0x40]      ; 004497c2
    MOV dword ptr [ESP + 0x4c],EAX      ; 004497c6
    MOV EAX,EDI                         ; 004497ca
    MOV EDI,dword ptr [ESP + 0x50]      ; 004497cc
    MOV dword ptr [ESP + 0x50],EAX      ; 004497d0
    FLD float ptr [ESP + 0x54]          ; 004497d4
        ;   Label: LAB_004497d4
    FCOMP float ptr [ESP + 0x64]        ; 004497d8
    FNSTSW AX                           ; 004497dc
    SAHF                                ; 004497de
    JBE 0x004497ef                      ; 004497df
        ;   XREF to: 004497ef (CONDITIONAL_JUMP)  ; LAB_004497ef
    MOV EAX,dword ptr [ESP + 0x64]      ; 004497e1
    MOV dword ptr [ESP + 0x54],EAX      ; 004497e5
    MOV EAX,EBP                         ; 004497e9
    MOV EBP,EDI                         ; 004497eb
    MOV EDI,EAX                         ; 004497ed
    FLD float ptr [ESP + 0x4c]          ; 004497ef
        ;   Label: LAB_004497ef
    FCOMP float ptr [EBX + 0x2c]        ; 004497f3
    FNSTSW AX                           ; 004497f6
    SAHF                                ; 004497f8
    JC 0x00449b23                       ; 004497f9
        ;   XREF to: 00449b23 (CONDITIONAL_JUMP)  ; LAB_00449b23
    FLD float ptr [ESP + 0x54]          ; 004497ff
    FCOMP float ptr [EBX + 0x30]        ; 00449803
    FNSTSW AX                           ; 00449806
    SAHF                                ; 00449808
    JA 0x00449b23                       ; 00449809
        ;   XREF to: 00449b23 (CONDITIONAL_JUMP)  ; LAB_00449b23
    MOV EAX,dword ptr [ESI]             ; 0044980f
    XOR EDX,EDX                         ; 00449811
    FLD float ptr [EAX + 0x4]           ; 00449813
    MOV dword ptr [ESP + 0x58],EDX      ; 00449816
    FCOMP float ptr [EBX + 0x24]        ; 0044981a
    FNSTSW AX                           ; 0044981d
    SAHF                                ; 0044981f
    JC 0x0044982a                       ; 00449820
        ;   XREF to: 0044982a (CONDITIONAL_JUMP)  ; LAB_0044982a
    MOV dword ptr [ESP + 0x58],0x1      ; 00449822
    MOV EAX,dword ptr [ESI]             ; 0044982a
        ;   Label: LAB_0044982a
    FLD float ptr [EAX + 0x4]           ; 0044982c
    FCOMP float ptr [EBX + 0x28]        ; 0044982f
    FNSTSW AX                           ; 00449832
    SAHF                                ; 00449834
    JA 0x0044983c                       ; 00449835
        ;   XREF to: 0044983c (CONDITIONAL_JUMP)  ; LAB_0044983c
    OR byte ptr [ESP + 0x58],0x2        ; 00449837
    XOR EAX,EAX                         ; 0044983c
        ;   Label: LAB_0044983c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044983e
    MOV EAX,dword ptr [ESI + 0x4]       ; 00449842
    FLD float ptr [EAX + 0x4]           ; 00449845
    FCOMP float ptr [EBX + 0x24]        ; 00449848
    FNSTSW AX                           ; 0044984b
    SAHF                                ; 0044984d
    JC 0x00449858                       ; 0044984e
        ;   XREF to: 00449858 (CONDITIONAL_JUMP)  ; LAB_00449858
    MOV dword ptr [ESP + 0x5c],0x1      ; 00449850
    MOV EAX,dword ptr [ESI + 0x4]       ; 00449858
        ;   Label: LAB_00449858
    FLD float ptr [EAX + 0x4]           ; 0044985b
    FCOMP float ptr [EBX + 0x28]        ; 0044985e
    FNSTSW AX                           ; 00449861
    SAHF                                ; 00449863
    JA 0x0044986b                       ; 00449864
        ;   XREF to: 0044986b (CONDITIONAL_JUMP)  ; LAB_0044986b
    OR byte ptr [ESP + 0x5c],0x2        ; 00449866
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044986b
        ;   Label: LAB_0044986b
    XOR ECX,ECX                         ; 0044986e
    FLD float ptr [EAX + 0x4]           ; 00449870
    MOV dword ptr [ESP + 0x60],ECX      ; 00449873
    FCOMP float ptr [EBX + 0x24]        ; 00449877
    FNSTSW AX                           ; 0044987a
    SAHF                                ; 0044987c
    JC 0x00449887                       ; 0044987d
        ;   XREF to: 00449887 (CONDITIONAL_JUMP)  ; LAB_00449887
    MOV dword ptr [ESP + 0x60],0x1      ; 0044987f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00449887
        ;   Label: LAB_00449887
    FLD float ptr [EAX + 0x4]           ; 0044988a
    FCOMP float ptr [EBX + 0x28]        ; 0044988d
    FNSTSW AX                           ; 00449890
    SAHF                                ; 00449892
    JA 0x0044989a                       ; 00449893
        ;   XREF to: 0044989a (CONDITIONAL_JUMP)  ; LAB_0044989a
    OR byte ptr [ESP + 0x60],0x2        ; 00449895
    MOV EAX,dword ptr [ESP + 0x58]      ; 0044989a
        ;   Label: LAB_0044989a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0044989e
    MOV ECX,dword ptr [ESP + 0x60]      ; 004498a2
    AND EAX,EDX                         ; 004498a6
    TEST EAX,ECX                        ; 004498a8
    JNZ 0x00449b23                      ; 004498aa
        ;   XREF to: 00449b23 (CONDITIONAL_JUMP)  ; LAB_00449b23
    FLDZ                                ; 004498b0
    FCOMP float ptr [ESI + 0x10]        ; 004498b2
    FNSTSW AX                           ; 004498b5
    SAHF                                ; 004498b7
    JA 0x004499e6                       ; 004498b8
        ;   XREF to: 004499e6 (CONDITIONAL_JUMP)  ; LAB_004499e6
    MOV EDX,dword ptr [ESP + 0x58]      ; 004498be
    XOR EDX,dword ptr [ESP + 0x5c]      ; 004498c2
    XOR EAX,EAX                         ; 004498c6
    TEST DL,0x1                         ; 004498c8
    JZ 0x00449909                       ; 004498cb
        ;   XREF to: 00449909 (CONDITIONAL_JUMP)  ; LAB_00449909
    MOV EDX,dword ptr [ESI + 0x4]       ; 004498cd
    MOV EAX,dword ptr [ESI]             ; 004498d0
    FLD float ptr [EDX + 0x4]           ; 004498d2
    FSUB float ptr [EAX + 0x4]          ; 004498d5
    FLD float ptr [EDX]                 ; 004498d8
    FLD float ptr [EBX + 0x24]          ; 004498da
    FSUB float ptr [EAX + 0x4]          ; 004498dd
    FXCH                                ; 004498e0
    FSUB float ptr [EAX]                ; 004498e2
    FXCH                                ; 004498e4
    FDIVRP ST2,ST0                      ; 004498e6
    FMUL ST1                            ; 004498e8
    FADD float ptr [EAX]                ; 004498ea
    FSTP float ptr [ESP + 0x18]         ; 004498ec
    MOV EDX,dword ptr [ESI + 0x4]       ; 004498f0
    MOV EAX,dword ptr [ESI]             ; 004498f3
    FLD float ptr [EDX + 0x8]           ; 004498f5
    FSUB float ptr [EAX + 0x8]          ; 004498f8
    FMULP                               ; 004498fb
    FADD float ptr [EAX + 0x8]          ; 004498fd
    FSTP float ptr [ESP + 0xc]          ; 00449900
    MOV EAX,0x1                         ; 00449904
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00449909
        ;   Label: LAB_00449909
    XOR EDX,dword ptr [ESP + 0x60]      ; 0044990d
    TEST DL,0x1                         ; 00449911
    JZ 0x00449960                       ; 00449914
        ;   XREF to: 00449960 (CONDITIONAL_JUMP)  ; LAB_00449960
    MOV ECX,dword ptr [ESI + 0x8]       ; 00449916
    MOV EDX,dword ptr [ESI + 0x4]       ; 00449919
    FLD float ptr [ECX + 0x4]           ; 0044991c
    FSUB float ptr [EDX + 0x4]          ; 0044991f
    FLD float ptr [ECX]                 ; 00449922
    FLD float ptr [EBX + 0x24]          ; 00449924
    FSUB float ptr [EDX + 0x4]          ; 00449927
    FXCH                                ; 0044992a
    FSUB float ptr [EDX]                ; 0044992c
    FXCH                                ; 0044992e
    FDIVRP ST2,ST0                      ; 00449930
    FMUL ST1                            ; 00449932
    FADD float ptr [EDX]                ; 00449934
    FSTP float ptr [ESP + EAX*0x4 + 0x18] ; 00449936
    MOV ECX,dword ptr [ESI + 0x8]       ; 0044993a
    MOV dword ptr [ESP + 0x68],ECX      ; 0044993d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00449941
    MOV dword ptr [ESP + 0x30],ECX      ; 00449944
    MOV ECX,dword ptr [ESP + 0x68]      ; 00449948
    FLD float ptr [ECX + 0x8]           ; 0044994c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044994f
    FSUB float ptr [ECX + 0x8]          ; 00449953
    FMULP                               ; 00449956
    FADD float ptr [ECX + 0x8]          ; 00449958
    INC EAX                             ; 0044995b
    FSTP float ptr [ESP + EAX*0x4 + 0x8] ; 0044995c
    MOV EDX,dword ptr [ESP + 0x60]      ; 00449960
        ;   Label: LAB_00449960
    XOR EDX,dword ptr [ESP + 0x58]      ; 00449964
    TEST DL,0x1                         ; 00449968
    JZ 0x004499b4                       ; 0044996b
        ;   XREF to: 004499b4 (CONDITIONAL_JUMP)  ; LAB_004499b4
    MOV ECX,dword ptr [ESI]             ; 0044996d
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044996f
    FLD float ptr [ECX + 0x4]           ; 00449972
    FSUB float ptr [EDX + 0x4]          ; 00449975
    FLD float ptr [ECX]                 ; 00449978
    FLD float ptr [EBX + 0x24]          ; 0044997a
    FSUB float ptr [EDX + 0x4]          ; 0044997d
    FXCH                                ; 00449980
    FSUB float ptr [EDX]                ; 00449982
    FXCH                                ; 00449984
    FDIVRP ST2,ST0                      ; 00449986
    FMUL ST1                            ; 00449988
    FADD float ptr [EDX]                ; 0044998a
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044998c
    FSTP float ptr [ESP + EDX*0x1 + 0x18] ; 00449993
    MOV ECX,dword ptr [ESI]             ; 00449997
    MOV dword ptr [ESP + 0x68],EDX      ; 00449999
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044999d
    FLD float ptr [ECX + 0x8]           ; 004499a0
    FSUB float ptr [EDX + 0x8]          ; 004499a3
    FMULP                               ; 004499a6
    FADD float ptr [EDX + 0x8]          ; 004499a8
    MOV EDX,dword ptr [ESP + 0x68]      ; 004499ab
    INC EAX                             ; 004499af
    FSTP float ptr [ESP + EDX*0x1 + 0xc] ; 004499b0
    CMP EAX,0x2                         ; 004499b4
        ;   Label: LAB_004499b4
    JL 0x004499e6                       ; 004499b7
        ;   XREF to: 004499e6 (CONDITIONAL_JUMP)  ; LAB_004499e6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004499b9
    MOV dword ptr [EBX + 0x3c],EAX      ; 004499bd
    MOV EAX,dword ptr [ESP + 0xc]       ; 004499c0
    MOV dword ptr [EBX + 0x40],EAX      ; 004499c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004499c7
    MOV dword ptr [EBX + 0x44],EAX      ; 004499cb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004499ce
    PUSH EBX                            ; 004499d2
    MOV dword ptr [EBX + 0x48],EAX      ; 004499d3
    CALL core_dcube.cpp_intersectXZCylinder_FUN_004493a0 ; 004499d6
        ;   XREF to: 004493a0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_004493a0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 004499db
    TEST EAX,EAX                        ; 004499de
    JNZ 0x00449ae4                      ; 004499e0
        ;   XREF to: 00449ae4 (CONDITIONAL_JUMP)  ; LAB_00449ae4
    FLDZ                                ; 004499e6
        ;   Label: LAB_004499e6
    FCOMP float ptr [ESI + 0x10]        ; 004499e8
    FNSTSW AX                           ; 004499eb
    SAHF                                ; 004499ed
    JC 0x00449b90                       ; 004499ee
        ;   XREF to: 00449b90 (CONDITIONAL_JUMP)  ; LAB_00449b90
    MOV EDX,dword ptr [ESP + 0x58]      ; 004499f4
    XOR EDX,dword ptr [ESP + 0x5c]      ; 004499f8
    XOR EAX,EAX                         ; 004499fc
    TEST DL,0x2                         ; 004499fe
    JNZ 0x00449b50                      ; 00449a01
        ;   XREF to: 00449b50 (CONDITIONAL_JUMP)  ; LAB_00449b50
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00449a07
        ;   Label: LAB_00449a07
    XOR EDX,dword ptr [ESP + 0x60]      ; 00449a0b
    TEST DL,0x2                         ; 00449a0f
    JZ 0x00449a5c                       ; 00449a12
        ;   XREF to: 00449a5c (CONDITIONAL_JUMP)  ; LAB_00449a5c
    MOV ECX,dword ptr [ESI + 0x8]       ; 00449a14
    MOV EDX,dword ptr [ESI + 0x4]       ; 00449a17
    FLD float ptr [ECX + 0x4]           ; 00449a1a
    FSUB float ptr [EDX + 0x4]          ; 00449a1d
    FLD float ptr [ECX]                 ; 00449a20
    FLD float ptr [EBX + 0x28]          ; 00449a22
    FSUB float ptr [EDX + 0x4]          ; 00449a25
    FXCH                                ; 00449a28
    FSUB float ptr [EDX]                ; 00449a2a
    FXCH                                ; 00449a2c
    FDIVRP ST2,ST0                      ; 00449a2e
    FMUL ST1                            ; 00449a30
    FADD float ptr [EDX]                ; 00449a32
    LEA EDX,[EAX*0x4 + 0x0]             ; 00449a34
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00449a3b
    MOV ECX,dword ptr [ESI + 0x8]       ; 00449a3f
    MOV dword ptr [ESP + 0x68],EDX      ; 00449a42
    MOV EDX,dword ptr [ESI + 0x4]       ; 00449a46
    FLD float ptr [ECX + 0x8]           ; 00449a49
    FSUB float ptr [EDX + 0x8]          ; 00449a4c
    FMULP                               ; 00449a4f
    FADD float ptr [EDX + 0x8]          ; 00449a51
    MOV EDX,dword ptr [ESP + 0x68]      ; 00449a54
    INC EAX                             ; 00449a58
    FSTP float ptr [ESP + EDX*0x1]      ; 00449a59
    MOV EDX,dword ptr [ESP + 0x60]      ; 00449a5c
        ;   Label: LAB_00449a5c
    XOR EDX,dword ptr [ESP + 0x58]      ; 00449a60
    TEST DL,0x2                         ; 00449a64
    JZ 0x00449aaf                       ; 00449a67
        ;   XREF to: 00449aaf (CONDITIONAL_JUMP)  ; LAB_00449aaf
    MOV ECX,dword ptr [ESI]             ; 00449a69
    MOV EDX,dword ptr [ESI + 0x8]       ; 00449a6b
    FLD float ptr [ECX + 0x4]           ; 00449a6e
    FSUB float ptr [EDX + 0x4]          ; 00449a71
    FLD float ptr [ECX]                 ; 00449a74
    FLD float ptr [EBX + 0x28]          ; 00449a76
    FSUB float ptr [EDX + 0x4]          ; 00449a79
    FXCH                                ; 00449a7c
    FSUB float ptr [EDX]                ; 00449a7e
    FXCH                                ; 00449a80
    FDIVRP ST2,ST0                      ; 00449a82
    FMUL ST1                            ; 00449a84
    FADD float ptr [EDX]                ; 00449a86
    LEA EDX,[EAX*0x4 + 0x0]             ; 00449a88
    FSTP float ptr [ESP + EDX*0x1 + 0x24] ; 00449a8f
    MOV ECX,dword ptr [ESI]             ; 00449a93
    MOV dword ptr [ESP + 0x68],EDX      ; 00449a95
    MOV EDX,dword ptr [ESI + 0x8]       ; 00449a99
    FLD float ptr [ECX + 0x8]           ; 00449a9c
    FSUB float ptr [EDX + 0x8]          ; 00449a9f
    FMULP                               ; 00449aa2
    FADD float ptr [EDX + 0x8]          ; 00449aa4
    MOV EDX,dword ptr [ESP + 0x68]      ; 00449aa7
    INC EAX                             ; 00449aab
    FSTP float ptr [ESP + EDX*0x1]      ; 00449aac
    CMP EAX,0x2                         ; 00449aaf
        ;   Label: LAB_00449aaf
    JL 0x00449b90                       ; 00449ab2
        ;   XREF to: 00449b90 (CONDITIONAL_JUMP)  ; LAB_00449b90
    MOV EAX,dword ptr [ESP + 0x24]      ; 00449ab8
    MOV dword ptr [EBX + 0x3c],EAX      ; 00449abc
    MOV EAX,dword ptr [ESP]             ; 00449abf
    MOV dword ptr [EBX + 0x40],EAX      ; 00449ac2
    MOV EAX,dword ptr [ESP + 0x28]      ; 00449ac5
    MOV dword ptr [EBX + 0x44],EAX      ; 00449ac9
    MOV EAX,dword ptr [ESP + 0x4]       ; 00449acc
    PUSH EBX                            ; 00449ad0
    MOV dword ptr [EBX + 0x48],EAX      ; 00449ad1
    CALL core_dcube.cpp_intersectXZCylinder_FUN_004493a0 ; 00449ad4
        ;   XREF to: 004493a0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinder_FUN_004493a0(SIntersectXZCylinder * cylinder)
    ADD ESP,0x4                         ; 00449ad9
    TEST EAX,EAX                        ; 00449adc
    JZ 0x00449b90                       ; 00449ade
        ;   XREF to: 00449b90 (CONDITIONAL_JUMP)  ; LAB_00449b90
    FLD float ptr [EBX + 0x18]          ; 00449ae4
        ;   Label: LAB_00449ae4
    FMUL float ptr [EBX + 0x4c]         ; 00449ae7
    FLD float ptr [EBX + 0x1c]          ; 00449aea
    FMUL float ptr [EBX + 0x4c]         ; 00449aed
    FLD float ptr [EBX + 0x4c]          ; 00449af0
    MOV dword ptr [EBX + 0x8],0x0       ; 00449af3
    MOV EAX,0x1                         ; 00449afa
    FSTP float ptr [EBX]                ; 00449aff
    FXCH                                ; 00449b01
    FADD float ptr [EBX + 0x10]         ; 00449b03
    FXCH                                ; 00449b06
    FADD float ptr [EBX + 0x14]         ; 00449b08
    FLD float ptr [EBX + 0x54]          ; 00449b0b
    FLD float ptr [EBX + 0x58]          ; 00449b0e
    FSUBP ST2,ST0                       ; 00449b11
    FSUBP ST2,ST0                       ; 00449b13
    FSTP float ptr [EBX + 0xc]          ; 00449b15
    FSTP float ptr [EBX + 0x4]          ; 00449b18
    ADD ESP,0x74                        ; 00449b1b
    POP EBP                             ; 00449b1e
    POP EDI                             ; 00449b1f
    POP ESI                             ; 00449b20
    POP EBX                             ; 00449b21
    RET                                 ; 00449b22
    XOR EAX,EAX                         ; 00449b23
        ;   Label: LAB_00449b23
    ADD ESP,0x74                        ; 00449b25
    POP EBP                             ; 00449b28
    POP EDI                             ; 00449b29
    POP ESI                             ; 00449b2a
    POP EBX                             ; 00449b2b
    RET                                 ; 00449b2c
    MOV EAX,dword ptr [ESP + 0x54]      ; 00449b2d
        ;   Label: LAB_00449b2d
    MOV dword ptr [ESP + 0x34],EAX      ; 00449b31
    MOV EAX,dword ptr [ESP + 0x64]      ; 00449b35
    MOV dword ptr [ESP + 0x54],EAX      ; 00449b39
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449b3d
    MOV dword ptr [ESP + 0x64],EAX      ; 00449b41
    MOV EAX,EBP                         ; 00449b45
    MOV EBP,EDI                         ; 00449b47
    MOV EDI,EAX                         ; 00449b49
    JMP 0x004497a5                      ; 00449b4b
        ;   XREF to: 004497a5 (UNCONDITIONAL_JUMP)  ; LAB_004497a5
    MOV EDX,dword ptr [ESI + 0x4]       ; 00449b50
        ;   Label: LAB_00449b50
    MOV EAX,dword ptr [ESI]             ; 00449b53
    FLD float ptr [EDX + 0x4]           ; 00449b55
    FSUB float ptr [EAX + 0x4]          ; 00449b58
    FLD float ptr [EDX]                 ; 00449b5b
    FLD float ptr [EBX + 0x28]          ; 00449b5d
    FSUB float ptr [EAX + 0x4]          ; 00449b60
    FXCH                                ; 00449b63
    FSUB float ptr [EAX]                ; 00449b65
    FXCH                                ; 00449b67
    FDIVRP ST2,ST0                      ; 00449b69
    FMUL ST1                            ; 00449b6b
    FADD float ptr [EAX]                ; 00449b6d
    FSTP float ptr [ESP + 0x24]         ; 00449b6f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00449b73
    MOV EAX,dword ptr [ESI]             ; 00449b76
    FLD float ptr [EDX + 0x8]           ; 00449b78
    FSUB float ptr [EAX + 0x8]          ; 00449b7b
    FMULP                               ; 00449b7e
    FADD float ptr [EAX + 0x8]          ; 00449b80
    FSTP float ptr [ESP]                ; 00449b83
    MOV EAX,0x1                         ; 00449b86
    JMP 0x00449a07                      ; 00449b8b
        ;   XREF to: 00449a07 (UNCONDITIONAL_JUMP)  ; LAB_00449a07
    PUSH EDI                            ; 00449b90
        ;   Label: LAB_00449b90
    PUSH EBP                            ; 00449b91
    PUSH EBX                            ; 00449b92
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680 ; 00449b93
        ;   XREF to: 00449680 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)
    ADD ESP,0xc                         ; 00449b98
    MOV EDI,dword ptr [ESP + 0x50]      ; 00449b9b
    PUSH EDI                            ; 00449b9f
    PUSH EBP                            ; 00449ba0
    PUSH EBX                            ; 00449ba1
    MOV ESI,EAX                         ; 00449ba2
    CALL core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680 ; 00449ba4
        ;   XREF to: 00449680 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00449680(SIntersectXZCylinder * cylinder, CVector3f * segment_start, CVector3f * segment_end)
    ADD ESP,0xc                         ; 00449ba9
    OR EAX,ESI                          ; 00449bac
    ADD ESP,0x74                        ; 00449bae
    POP EBP                             ; 00449bb1
    POP EDI                             ; 00449bb2
    POP ESI                             ; 00449bb3
    POP EBX                             ; 00449bb4
    RET                                 ; 00449bb5

