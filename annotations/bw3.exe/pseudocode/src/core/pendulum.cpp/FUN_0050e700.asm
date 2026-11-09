; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_FUN_0050e700(CPendulum *this_ptr,float delta_time)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_pendulum.cpp_FUN_0050ed00 at 0050ed54
;
; Referenced Globals:
;   undefined4 DAT_005cbb01
;   undefined4 DAT_005cbb05
;   undefined4 DAT_005cbb0d
;   undefined4 DAT_005cbb15
;   undefined4 DAT_005cbb1d
;   undefined4 DAT_005cbb25
;   undefined4 DAT_005cbb2d
;   undefined4 DAT_005cbb35
;   undefined4 DAT_005cbb3d
;   undefined4 DAT_005cbb45
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b80
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
;   crt_math.c_floor_FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e700
        ;   Label: core_pendulum.cpp_FUN_0050e700
    PUSH ESI                            ; 0050e701
    PUSH EDI                            ; 0050e702
    PUSH EBP                            ; 0050e703
    MOV EBP,ESP                         ; 0050e704
    SUB ESP,0x64                        ; 0050e706
    AND ESP,0xfffffff8                  ; 0050e709
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050e70c
    FLD float ptr [EBX + 0x3a0]         ; 0050e70f
    FSTP double ptr [ESP + 0x50]        ; 0050e715
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050e719
    PUSH EDX                            ; 0050e71d
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050e71e
    PUSH ECX                            ; 0050e722
    CALL crt_math.c_floor_FUN_005a3600  ; 0050e723
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 0050e728
    MOV dword ptr [ESP + 0x64],EDX      ; 0050e72c
    FLD double ptr [ESP + 0x60]         ; 0050e730
    ADD ESP,0x8                         ; 0050e734
    FLD float ptr [EBP + 0x18]          ; 0050e737
    FDIV float ptr [EBX + 0x3a4]        ; 0050e73a
    MOV ESI,dword ptr [EBX + 0x43c]     ; 0050e740
    FXCH                                ; 0050e746
    FSUBR double ptr [ESP + 0x50]       ; 0050e748
    FXCH                                ; 0050e74c
    FADD float ptr [EBX + 0x3a0]        ; 0050e74e
    FXCH                                ; 0050e754
    FSTP float ptr [ESP + 0x28]         ; 0050e756
    FSTP float ptr [EBX + 0x3a0]        ; 0050e75a
    TEST ESI,ESI                        ; 0050e760
    JZ 0x0050e785                       ; 0050e762
        ;   XREF to: 0050e785 (CONDITIONAL_JUMP)  ; LAB_0050e785
    FLD float ptr [EBX + 0x3a0]         ; 0050e764
    FLD1                                ; 0050e76a
    FCOMPP                              ; 0050e76c
    FNSTSW AX                           ; 0050e76e
    SAHF                                ; 0050e770
    JNC 0x0050e785                      ; 0050e771
        ;   XREF to: 0050e785 (CONDITIONAL_JUMP)  ; LAB_0050e785
    FLD float ptr [EBX + 0x3a0]         ; 0050e773
    FADD float ptr [0x005cbb01]         ; 0050e779 | DAT_005cbb01
    FSTP float ptr [EBX + 0x3a0]        ; 0050e77f
    SUB ESP,0x8                         ; 0050e785
        ;   Label: LAB_0050e785
    FLD float ptr [EBX + 0x3a0]         ; 0050e788
    FSTP double ptr [ESP]               ; 0050e78e
    CALL crt_math.c_floor_FUN_005a3600  ; 0050e791
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 0050e796
    MOV dword ptr [ESP + 0x64],EDX      ; 0050e79a
    FLD double ptr [ESP + 0x60]         ; 0050e79e
    ADD ESP,0x8                         ; 0050e7a2
    FSUBR float ptr [EBX + 0x3a0]       ; 0050e7a5
    FST float ptr [EBX + 0x3a0]         ; 0050e7ab
    FMUL double ptr [0x005cbb05]        ; 0050e7b1 | DAT_005cbb05
    FMUL double ptr [0x005cbb0d]        ; 0050e7b7 | DAT_005cbb0d
    FSIN                                ; 0050e7bd
    FMUL float ptr [EBX + 0x3a8]        ; 0050e7bf
    FLD float ptr [EBX + 0x434]         ; 0050e7c5
    FADD float ptr [EBP + 0x18]         ; 0050e7cb
    FLD float ptr [EBX + 0x430]         ; 0050e7ce
    FMUL double ptr [0x005cbb15]        ; 0050e7d4 | DAT_005cbb15
    FXCH                                ; 0050e7da
    FST float ptr [EBX + 0x434]         ; 0050e7dc
    FMULP                               ; 0050e7e2
    FLD1                                ; 0050e7e4
    FLDL2E                              ; 0050e7e6
    FMUL ST2                            ; 0050e7e8
    FST ST2                             ; 0050e7ea
    FPREM                               ; 0050e7ec
    F2XM1                               ; 0050e7ee
    FADDP                               ; 0050e7f0
    FSCALE                              ; 0050e7f2
    FSTP ST1                            ; 0050e7f4
    FMULP                               ; 0050e7f6
    PUSH EBX                            ; 0050e7f8
    FSTP float ptr [EBX + 0x38]         ; 0050e7f9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0050e7fc
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050e801
    LEA EAX,[EBX + 0x410]               ; 0050e804
    PUSH EAX                            ; 0050e80a
    PUSH EBX                            ; 0050e80b
    LEA ESI,[ESP + 0x4c]                ; 0050e80c
    LEA EDI,[ESP + 0x40]                ; 0050e810
    CALL core_actor.cpp_FUN_00408b80    ; 0050e814
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x4c]                ; 0050e819
    LEA EAX,[ESP + 0x40]                ; 0050e81d
    ADD ESP,0x8                         ; 0050e821
    LEA EDX,[EBX + 0x41c]               ; 0050e824
    MOVSD ES:EDI,ESI                    ; 0050e82a
    MOVSD ES:EDI,ESI                    ; 0050e82b
    MOVSD ES:EDI,ESI                    ; 0050e82c
    CMP EDX,EAX                         ; 0050e82d
    JZ 0x0050e845                       ; 0050e82f
        ;   XREF to: 0050e845 (CONDITIONAL_JUMP)  ; LAB_0050e845
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050e831
    MOV dword ptr [EDX],EAX             ; 0050e835
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050e837
    MOV dword ptr [EDX + 0x4],EAX       ; 0050e83b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050e83e
    MOV dword ptr [EDX + 0x8],EAX       ; 0050e842
    FLD float ptr [EBX + 0x430]         ; 0050e845
        ;   Label: LAB_0050e845
    FMUL double ptr [0x005cbb15]        ; 0050e84b | DAT_005cbb15
    FMUL float ptr [EBX + 0x434]        ; 0050e851
    FLD1                                ; 0050e857
    FLDL2E                              ; 0050e859
    FMUL ST2                            ; 0050e85b
    FST ST2                             ; 0050e85d
    FPREM                               ; 0050e85f
    F2XM1                               ; 0050e861
    FADDP                               ; 0050e863
    FSCALE                              ; 0050e865
    FSTP ST1                            ; 0050e867
    FLD float ptr [EBP + 0x18]          ; 0050e869
    FLDZ                                ; 0050e86c
    FXCH ST2                            ; 0050e86e
    FSTP float ptr [ESP + 0x14]         ; 0050e870
    FXCH                                ; 0050e874
    FCOMPP                              ; 0050e876
    FNSTSW AX                           ; 0050e878
    SAHF                                ; 0050e87a
    JNC 0x0050eadb                      ; 0050e87b
        ;   XREF to: 0050eadb (CONDITIONAL_JUMP)  ; LAB_0050eadb
    FLD float ptr [ESP + 0x14]          ; 0050e881
    FCOMP double ptr [0x005cbb1d]       ; 0050e885 | DAT_005cbb1d
    FNSTSW AX                           ; 0050e88b
    SAHF                                ; 0050e88d
    JBE 0x0050eadb                      ; 0050e88e
        ;   XREF to: 0050eadb (CONDITIONAL_JUMP)  ; LAB_0050eadb
    FLD float ptr [ESP + 0x28]          ; 0050e894
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050e898
    XOR EDI,EDI                         ; 0050e89c
    MOV dword ptr [ESP + 0x18],EAX      ; 0050e89e
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0050e8a2
    MOV dword ptr [ESP + 0x24],EDI      ; 0050e8a8
    MOV dword ptr [ESP + 0x8],EAX       ; 0050e8ac
    FCOMP double ptr [0x005cbb25]       ; 0050e8b0 | DAT_005cbb25
    FNSTSW AX                           ; 0050e8b6
    SAHF                                ; 0050e8b8
    JC 0x0050eae2                       ; 0050e8b9
        ;   XREF to: 0050eae2 (CONDITIONAL_JUMP)  ; LAB_0050eae2
    FLD float ptr [ESP + 0x24]          ; 0050e8bf
        ;   Label: LAB_0050e8bf
    FADD double ptr [0x005cbb2d]        ; 0050e8c3 | DAT_005cbb2d
    FLD float ptr [ESP + 0x18]          ; 0050e8c9
    FCOMPP                              ; 0050e8cd
    FNSTSW AX                           ; 0050e8cf
    SAHF                                ; 0050e8d1
    JBE 0x0050e8e2                      ; 0050e8d2
        ;   XREF to: 0050e8e2 (CONDITIONAL_JUMP)  ; LAB_0050e8e2
    FLD float ptr [ESP + 0x18]          ; 0050e8d4
    FADD float ptr [0x005cbb35]         ; 0050e8d8 | DAT_005cbb35
    FSTP float ptr [ESP + 0x18]         ; 0050e8de
    FLD float ptr [ESP + 0x18]          ; 0050e8e2
        ;   Label: LAB_0050e8e2
    FCOMP float ptr [ESP + 0x24]        ; 0050e8e6
    FNSTSW AX                           ; 0050e8ea
    SAHF                                ; 0050e8ec
    JBE 0x0050eaf1                      ; 0050e8ed
        ;   XREF to: 0050eaf1 (CONDITIONAL_JUMP)  ; LAB_0050eaf1
    FLD float ptr [EBX + 0x3cc]         ; 0050e8f3
        ;   Label: LAB_0050e8f3
    FADD double ptr [0x005cbb3d]        ; 0050e8f9 | DAT_005cbb3d
    FSTP float ptr [ESP + 0x60]         ; 0050e8ff
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050e903
    FLD float ptr [ESP + 0x60]          ; 0050e907
    MOV dword ptr [ESP + 0x2c],EAX      ; 0050e90b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050e90f
    FADD double ptr [0x005cbb25]        ; 0050e913 | DAT_005cbb25
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050e919
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0050e91d
    FLD float ptr [ESP + 0x28]          ; 0050e923
    MOV dword ptr [ESP + 0x4],EAX       ; 0050e927
    FCOMPP                              ; 0050e92b
    FNSTSW AX                           ; 0050e92d
    SAHF                                ; 0050e92f
    JNC 0x0050e93c                      ; 0050e930
        ;   XREF to: 0050e93c (CONDITIONAL_JUMP)  ; LAB_0050e93c
    FLD1                                ; 0050e932
    FADD float ptr [ESP + 0x28]         ; 0050e934
    FSTP float ptr [ESP + 0x1c]         ; 0050e938
    FLD float ptr [ESP + 0x2c]          ; 0050e93c
        ;   Label: LAB_0050e93c
    FADD double ptr [0x005cbb2d]        ; 0050e940 | DAT_005cbb2d
    FLD float ptr [ESP + 0x1c]          ; 0050e946
    FCOMPP                              ; 0050e94a
    FNSTSW AX                           ; 0050e94c
    SAHF                                ; 0050e94e
    JBE 0x0050e95f                      ; 0050e94f
        ;   XREF to: 0050e95f (CONDITIONAL_JUMP)  ; LAB_0050e95f
    FLD float ptr [ESP + 0x1c]          ; 0050e951
    FADD float ptr [0x005cbb35]         ; 0050e955 | DAT_005cbb35
    FSTP float ptr [ESP + 0x1c]         ; 0050e95b
    FLD float ptr [ESP + 0x1c]          ; 0050e95f
        ;   Label: LAB_0050e95f
    FCOMP float ptr [ESP + 0x2c]        ; 0050e963
    FNSTSW AX                           ; 0050e967
    SAHF                                ; 0050e969
    JBE 0x0050eb93                      ; 0050e96a
        ;   XREF to: 0050eb93 (CONDITIONAL_JUMP)  ; LAB_0050eb93
    FLD float ptr [ESP + 0x28]          ; 0050e970
        ;   Label: LAB_0050e970
    MOV EDX,0x3f000000                  ; 0050e974
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050e979
    FLDZ                                ; 0050e97d
    MOV dword ptr [ESP + 0x20],EAX      ; 0050e97f
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0050e983
    MOV dword ptr [ESP + 0x30],EDX      ; 0050e989
    MOV dword ptr [ESP],EAX             ; 0050e98d
    FCOMPP                              ; 0050e990
    FNSTSW AX                           ; 0050e992
    SAHF                                ; 0050e994
    JBE 0x0050e9a1                      ; 0050e995
        ;   XREF to: 0050e9a1 (CONDITIONAL_JUMP)  ; LAB_0050e9a1
    FLD1                                ; 0050e997
    FADD float ptr [ESP + 0x28]         ; 0050e999
    FSTP float ptr [ESP + 0x20]         ; 0050e99d
    FLD float ptr [ESP + 0x30]          ; 0050e9a1
        ;   Label: LAB_0050e9a1
    FADD double ptr [0x005cbb2d]        ; 0050e9a5 | DAT_005cbb2d
    FLD float ptr [ESP + 0x20]          ; 0050e9ab
    FCOMPP                              ; 0050e9af
    FNSTSW AX                           ; 0050e9b1
    SAHF                                ; 0050e9b3
    JBE 0x0050e9c4                      ; 0050e9b4
        ;   XREF to: 0050e9c4 (CONDITIONAL_JUMP)  ; LAB_0050e9c4
    FLD float ptr [ESP + 0x20]          ; 0050e9b6
    FADD float ptr [0x005cbb35]         ; 0050e9ba | DAT_005cbb35
    FSTP float ptr [ESP + 0x20]         ; 0050e9c0
    FLD float ptr [ESP + 0x20]          ; 0050e9c4
        ;   Label: LAB_0050e9c4
    FCOMP float ptr [ESP + 0x30]        ; 0050e9c8
    FNSTSW AX                           ; 0050e9cc
    SAHF                                ; 0050e9ce
    JBE 0x0050ec3e                      ; 0050e9cf
        ;   XREF to: 0050ec3e (CONDITIONAL_JUMP)  ; LAB_0050ec3e
    FLD float ptr [EBX + 0x3cc]         ; 0050e9d5
        ;   Label: LAB_0050e9d5
    FADD double ptr [0x005cbb45]        ; 0050e9db | DAT_005cbb45
    FSTP float ptr [ESP + 0x60]         ; 0050e9e1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0050e9e5
    FLD float ptr [ESP + 0x60]          ; 0050e9e9
    MOV dword ptr [ESP + 0x10],EAX      ; 0050e9ed
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050e9f1
    FADD double ptr [0x005cbb25]        ; 0050e9f5 | DAT_005cbb25
    MOV dword ptr [ESP + 0x34],EAX      ; 0050e9fb
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 0050e9ff
    FLD float ptr [ESP + 0x28]          ; 0050ea05
    MOV dword ptr [ESP + 0xc],EAX       ; 0050ea09
    FCOMPP                              ; 0050ea0d
    FNSTSW AX                           ; 0050ea0f
    SAHF                                ; 0050ea11
    JNC 0x0050ea1e                      ; 0050ea12
        ;   XREF to: 0050ea1e (CONDITIONAL_JUMP)  ; LAB_0050ea1e
    FLD1                                ; 0050ea14
    FADD float ptr [ESP + 0x28]         ; 0050ea16
    FSTP float ptr [ESP + 0x34]         ; 0050ea1a
    FLD float ptr [ESP + 0x10]          ; 0050ea1e
        ;   Label: LAB_0050ea1e
    FADD double ptr [0x005cbb2d]        ; 0050ea22 | DAT_005cbb2d
    FLD float ptr [ESP + 0x34]          ; 0050ea28
    FCOMPP                              ; 0050ea2c
    FNSTSW AX                           ; 0050ea2e
    SAHF                                ; 0050ea30
    JBE 0x0050ea41                      ; 0050ea31
        ;   XREF to: 0050ea41 (CONDITIONAL_JUMP)  ; LAB_0050ea41
    FLD float ptr [ESP + 0x34]          ; 0050ea33
    FADD float ptr [0x005cbb35]         ; 0050ea37 | DAT_005cbb35
    FSTP float ptr [ESP + 0x34]         ; 0050ea3d
    FLD float ptr [ESP + 0x34]          ; 0050ea41
        ;   Label: LAB_0050ea41
    FCOMP float ptr [ESP + 0x10]        ; 0050ea45
    FNSTSW AX                           ; 0050ea49
    SAHF                                ; 0050ea4b
    JA 0x0050eadb                       ; 0050ea4c
        ;   XREF to: 0050eadb (CONDITIONAL_JUMP)  ; LAB_0050eadb
    FLD float ptr [ESP + 0xc]           ; 0050ea52
    FCOMP float ptr [ESP + 0x34]        ; 0050ea56
    FNSTSW AX                           ; 0050ea5a
    SAHF                                ; 0050ea5c
    JNC 0x0050ea69                      ; 0050ea5d
        ;   XREF to: 0050ea69 (CONDITIONAL_JUMP)  ; LAB_0050ea69
    FLD1                                ; 0050ea5f
    FADD float ptr [ESP + 0xc]          ; 0050ea61
    FSTP float ptr [ESP + 0xc]          ; 0050ea65
    FLD float ptr [ESP + 0xc]           ; 0050ea69
        ;   Label: LAB_0050ea69
    FCOMP float ptr [ESP + 0x34]        ; 0050ea6d
    FNSTSW AX                           ; 0050ea71
    SAHF                                ; 0050ea73
    JNC 0x0050ea80                      ; 0050ea74
        ;   XREF to: 0050ea80 (CONDITIONAL_JUMP)  ; LAB_0050ea80
    FLD1                                ; 0050ea76
    FADD float ptr [ESP + 0xc]          ; 0050ea78
    FSTP float ptr [ESP + 0xc]          ; 0050ea7c
    FLD float ptr [ESP + 0x34]          ; 0050ea80
        ;   Label: LAB_0050ea80
    FLD1                                ; 0050ea84
    FADDP                               ; 0050ea86
    FLD float ptr [ESP + 0xc]           ; 0050ea88
    FCOMPP                              ; 0050ea8c
    FNSTSW AX                           ; 0050ea8e
    SAHF                                ; 0050ea90
    JBE 0x0050eaa1                      ; 0050ea91
        ;   XREF to: 0050eaa1 (CONDITIONAL_JUMP)  ; LAB_0050eaa1
    FLD float ptr [ESP + 0xc]           ; 0050ea93
    FADD float ptr [0x005cbb35]         ; 0050ea97 | DAT_005cbb35
    FSTP float ptr [ESP + 0xc]          ; 0050ea9d
    FLD float ptr [ESP + 0x34]          ; 0050eaa1
        ;   Label: LAB_0050eaa1
    FLD1                                ; 0050eaa5
    FADDP                               ; 0050eaa7
    FLD float ptr [ESP + 0xc]           ; 0050eaa9
    FCOMPP                              ; 0050eaad
    FNSTSW AX                           ; 0050eaaf
    SAHF                                ; 0050eab1
    JBE 0x0050eac2                      ; 0050eab2
        ;   XREF to: 0050eac2 (CONDITIONAL_JUMP)  ; LAB_0050eac2
    FLD float ptr [ESP + 0xc]           ; 0050eab4
    FADD float ptr [0x005cbb35]         ; 0050eab8 | DAT_005cbb35
    FSTP float ptr [ESP + 0xc]          ; 0050eabe
    FLD float ptr [ESP + 0xc]           ; 0050eac2
        ;   Label: LAB_0050eac2
    FCOMP float ptr [ESP + 0x10]        ; 0050eac6
    FNSTSW AX                           ; 0050eaca
    SAHF                                ; 0050eacc
    SETA AL                             ; 0050eacd
    AND EAX,0xff                        ; 0050ead0
    JNZ 0x0050ecd3                      ; 0050ead5
        ;   XREF to: 0050ecd3 (CONDITIONAL_JUMP)  ; LAB_0050ecd3
    MOV ESP,EBP                         ; 0050eadb
        ;   Label: LAB_0050eadb
    POP EBP                             ; 0050eadd
    POP EDI                             ; 0050eade
    POP ESI                             ; 0050eadf
    POP EBX                             ; 0050eae0
    RET                                 ; 0050eae1
    FLD1                                ; 0050eae2
        ;   Label: LAB_0050eae2
    FADD float ptr [ESP + 0x28]         ; 0050eae4
    FSTP float ptr [ESP + 0x18]         ; 0050eae8
    JMP 0x0050e8bf                      ; 0050eaec
        ;   XREF to: 0050e8bf (UNCONDITIONAL_JUMP)  ; LAB_0050e8bf
    FLD float ptr [ESP + 0x8]           ; 0050eaf1
        ;   Label: LAB_0050eaf1
    FCOMP float ptr [ESP + 0x18]        ; 0050eaf5
    FNSTSW AX                           ; 0050eaf9
    SAHF                                ; 0050eafb
    JNC 0x0050eb08                      ; 0050eafc
        ;   XREF to: 0050eb08 (CONDITIONAL_JUMP)  ; LAB_0050eb08
    FLD1                                ; 0050eafe
    FADD float ptr [ESP + 0x8]          ; 0050eb00
    FSTP float ptr [ESP + 0x8]          ; 0050eb04
    FLD float ptr [ESP + 0x8]           ; 0050eb08
        ;   Label: LAB_0050eb08
    FCOMP float ptr [ESP + 0x18]        ; 0050eb0c
    FNSTSW AX                           ; 0050eb10
    SAHF                                ; 0050eb12
    JNC 0x0050eb1f                      ; 0050eb13
        ;   XREF to: 0050eb1f (CONDITIONAL_JUMP)  ; LAB_0050eb1f
    FLD1                                ; 0050eb15
    FADD float ptr [ESP + 0x8]          ; 0050eb17
    FSTP float ptr [ESP + 0x8]          ; 0050eb1b
    FLD float ptr [ESP + 0x18]          ; 0050eb1f
        ;   Label: LAB_0050eb1f
    FLD1                                ; 0050eb23
    FADDP                               ; 0050eb25
    FLD float ptr [ESP + 0x8]           ; 0050eb27
    FCOMPP                              ; 0050eb2b
    FNSTSW AX                           ; 0050eb2d
    SAHF                                ; 0050eb2f
    JBE 0x0050eb40                      ; 0050eb30
        ;   XREF to: 0050eb40 (CONDITIONAL_JUMP)  ; LAB_0050eb40
    FLD float ptr [ESP + 0x8]           ; 0050eb32
    FADD float ptr [0x005cbb35]         ; 0050eb36 | DAT_005cbb35
    FSTP float ptr [ESP + 0x8]          ; 0050eb3c
    FLD float ptr [ESP + 0x18]          ; 0050eb40
        ;   Label: LAB_0050eb40
    FLD1                                ; 0050eb44
    FADDP                               ; 0050eb46
    FLD float ptr [ESP + 0x8]           ; 0050eb48
    FCOMPP                              ; 0050eb4c
    FNSTSW AX                           ; 0050eb4e
    SAHF                                ; 0050eb50
    JBE 0x0050eb61                      ; 0050eb51
        ;   XREF to: 0050eb61 (CONDITIONAL_JUMP)  ; LAB_0050eb61
    FLD float ptr [ESP + 0x8]           ; 0050eb53
    FADD float ptr [0x005cbb35]         ; 0050eb57 | DAT_005cbb35
    FSTP float ptr [ESP + 0x8]          ; 0050eb5d
    FLD float ptr [ESP + 0x8]           ; 0050eb61
        ;   Label: LAB_0050eb61
    FCOMP float ptr [ESP + 0x24]        ; 0050eb65
    FNSTSW AX                           ; 0050eb69
    SAHF                                ; 0050eb6b
    SETA AL                             ; 0050eb6c
    AND EAX,0xff                        ; 0050eb6f
    JZ 0x0050e8f3                       ; 0050eb74
        ;   XREF to: 0050e8f3 (CONDITIONAL_JUMP)  ; LAB_0050e8f3
    LEA EAX,[EBX + 0x3d0]               ; 0050eb7a
    PUSH EAX                            ; 0050eb80
    MOV EDX,dword ptr [EBX + 0x154]     ; 0050eb81
    PUSH EBX                            ; 0050eb87
    CALL dword ptr [EDX + 0x2c]         ; 0050eb88
    ADD ESP,0x8                         ; 0050eb8b
    JMP 0x0050e8f3                      ; 0050eb8e
        ;   XREF to: 0050e8f3 (UNCONDITIONAL_JUMP)  ; LAB_0050e8f3
    FLD float ptr [ESP + 0x4]           ; 0050eb93
        ;   Label: LAB_0050eb93
    FCOMP float ptr [ESP + 0x1c]        ; 0050eb97
    FNSTSW AX                           ; 0050eb9b
    SAHF                                ; 0050eb9d
    JNC 0x0050ebaa                      ; 0050eb9e
        ;   XREF to: 0050ebaa (CONDITIONAL_JUMP)  ; LAB_0050ebaa
    FLD1                                ; 0050eba0
    FADD float ptr [ESP + 0x4]          ; 0050eba2
    FSTP float ptr [ESP + 0x4]          ; 0050eba6
    FLD float ptr [ESP + 0x4]           ; 0050ebaa
        ;   Label: LAB_0050ebaa
    FCOMP float ptr [ESP + 0x1c]        ; 0050ebae
    FNSTSW AX                           ; 0050ebb2
    SAHF                                ; 0050ebb4
    JNC 0x0050ebc1                      ; 0050ebb5
        ;   XREF to: 0050ebc1 (CONDITIONAL_JUMP)  ; LAB_0050ebc1
    FLD1                                ; 0050ebb7
    FADD float ptr [ESP + 0x4]          ; 0050ebb9
    FSTP float ptr [ESP + 0x4]          ; 0050ebbd
    FLD float ptr [ESP + 0x1c]          ; 0050ebc1
        ;   Label: LAB_0050ebc1
    FLD1                                ; 0050ebc5
    FADDP                               ; 0050ebc7
    FLD float ptr [ESP + 0x4]           ; 0050ebc9
    FCOMPP                              ; 0050ebcd
    FNSTSW AX                           ; 0050ebcf
    SAHF                                ; 0050ebd1
    JBE 0x0050ebe2                      ; 0050ebd2
        ;   XREF to: 0050ebe2 (CONDITIONAL_JUMP)  ; LAB_0050ebe2
    FLD float ptr [ESP + 0x4]           ; 0050ebd4
    FADD float ptr [0x005cbb35]         ; 0050ebd8 | DAT_005cbb35
    FSTP float ptr [ESP + 0x4]          ; 0050ebde
    FLD float ptr [ESP + 0x1c]          ; 0050ebe2
        ;   Label: LAB_0050ebe2
    FLD1                                ; 0050ebe6
    FADDP                               ; 0050ebe8
    FLD float ptr [ESP + 0x4]           ; 0050ebea
    FCOMPP                              ; 0050ebee
    FNSTSW AX                           ; 0050ebf0
    SAHF                                ; 0050ebf2
    JBE 0x0050ec03                      ; 0050ebf3
        ;   XREF to: 0050ec03 (CONDITIONAL_JUMP)  ; LAB_0050ec03
    FLD float ptr [ESP + 0x4]           ; 0050ebf5
    FADD float ptr [0x005cbb35]         ; 0050ebf9 | DAT_005cbb35
    FSTP float ptr [ESP + 0x4]          ; 0050ebff
    FLD float ptr [ESP + 0x4]           ; 0050ec03
        ;   Label: LAB_0050ec03
    FCOMP float ptr [ESP + 0x2c]        ; 0050ec07
    FNSTSW AX                           ; 0050ec0b
    SAHF                                ; 0050ec0d
    SETA AL                             ; 0050ec0e
    AND EAX,0xff                        ; 0050ec11
    JZ 0x0050e970                       ; 0050ec16
        ;   XREF to: 0050e970 (CONDITIONAL_JUMP)  ; LAB_0050e970
    LEA EAX,[EBX + 0x41c]               ; 0050ec1c
    PUSH EAX                            ; 0050ec22
    LEA EAX,[EBX + 0x3ac]               ; 0050ec23
    PUSH EAX                            ; 0050ec29
    PUSH EBX                            ; 0050ec2a
    MOV EAX,[0x006045f8]                ; 0050ec2b | DAT_006045f8
    PUSH EAX                            ; 0050ec30
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0050ec31
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0050ec36
    JMP 0x0050e970                      ; 0050ec39
        ;   XREF to: 0050e970 (UNCONDITIONAL_JUMP)  ; LAB_0050e970
    FLD float ptr [ESP]                 ; 0050ec3e
        ;   Label: LAB_0050ec3e
    FCOMP float ptr [ESP + 0x20]        ; 0050ec41
    FNSTSW AX                           ; 0050ec45
    SAHF                                ; 0050ec47
    JNC 0x0050ec52                      ; 0050ec48
        ;   XREF to: 0050ec52 (CONDITIONAL_JUMP)  ; LAB_0050ec52
    FLD1                                ; 0050ec4a
    FADD float ptr [ESP]                ; 0050ec4c
    FSTP float ptr [ESP]                ; 0050ec4f
    FLD float ptr [ESP]                 ; 0050ec52
        ;   Label: LAB_0050ec52
    FCOMP float ptr [ESP + 0x20]        ; 0050ec55
    FNSTSW AX                           ; 0050ec59
    SAHF                                ; 0050ec5b
    JNC 0x0050ec66                      ; 0050ec5c
        ;   XREF to: 0050ec66 (CONDITIONAL_JUMP)  ; LAB_0050ec66
    FLD1                                ; 0050ec5e
    FADD float ptr [ESP]                ; 0050ec60
    FSTP float ptr [ESP]                ; 0050ec63
    FLD float ptr [ESP + 0x20]          ; 0050ec66
        ;   Label: LAB_0050ec66
    FLD1                                ; 0050ec6a
    FADDP                               ; 0050ec6c
    FLD float ptr [ESP]                 ; 0050ec6e
    FCOMPP                              ; 0050ec71
    FNSTSW AX                           ; 0050ec73
    SAHF                                ; 0050ec75
    JBE 0x0050ec84                      ; 0050ec76
        ;   XREF to: 0050ec84 (CONDITIONAL_JUMP)  ; LAB_0050ec84
    FLD float ptr [ESP]                 ; 0050ec78
    FADD float ptr [0x005cbb35]         ; 0050ec7b | DAT_005cbb35
    FSTP float ptr [ESP]                ; 0050ec81
    FLD float ptr [ESP + 0x20]          ; 0050ec84
        ;   Label: LAB_0050ec84
    FLD1                                ; 0050ec88
    FADDP                               ; 0050ec8a
    FLD float ptr [ESP]                 ; 0050ec8c
    FCOMPP                              ; 0050ec8f
    FNSTSW AX                           ; 0050ec91
    SAHF                                ; 0050ec93
    JBE 0x0050eca2                      ; 0050ec94
        ;   XREF to: 0050eca2 (CONDITIONAL_JUMP)  ; LAB_0050eca2
    FLD float ptr [ESP]                 ; 0050ec96
    FADD float ptr [0x005cbb35]         ; 0050ec99 | DAT_005cbb35
    FSTP float ptr [ESP]                ; 0050ec9f
    FLD float ptr [ESP]                 ; 0050eca2
        ;   Label: LAB_0050eca2
    FCOMP float ptr [ESP + 0x30]        ; 0050eca5
    FNSTSW AX                           ; 0050eca9
    SAHF                                ; 0050ecab
    SETA AL                             ; 0050ecac
    AND EAX,0xff                        ; 0050ecaf
    JZ 0x0050e9d5                       ; 0050ecb4
        ;   XREF to: 0050e9d5 (CONDITIONAL_JUMP)  ; LAB_0050e9d5
    LEA EAX,[EBX + 0x3f0]               ; 0050ecba
    PUSH EAX                            ; 0050ecc0
    MOV EDX,dword ptr [EBX + 0x154]     ; 0050ecc1
    PUSH EBX                            ; 0050ecc7
    CALL dword ptr [EDX + 0x2c]         ; 0050ecc8
    ADD ESP,0x8                         ; 0050eccb
    JMP 0x0050e9d5                      ; 0050ecce
        ;   XREF to: 0050e9d5 (UNCONDITIONAL_JUMP)  ; LAB_0050e9d5
    LEA EAX,[EBX + 0x41c]               ; 0050ecd3
        ;   Label: LAB_0050ecd3
    PUSH EAX                            ; 0050ecd9
    LEA EAX,[EBX + 0x3ac]               ; 0050ecda
    PUSH EAX                            ; 0050ece0
    PUSH EBX                            ; 0050ece1
    MOV ECX,dword ptr [0x006045f8]      ; 0050ece2 | DAT_006045f8
    PUSH ECX                            ; 0050ece8
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0050ece9
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0050ecee
    MOV ESP,EBP                         ; 0050ecf1
    POP EBP                             ; 0050ecf3
    POP EDI                             ; 0050ecf4
    POP ESI                             ; 0050ecf5
    POP EBX                             ; 0050ecf6
    RET                                 ; 0050ecf7

