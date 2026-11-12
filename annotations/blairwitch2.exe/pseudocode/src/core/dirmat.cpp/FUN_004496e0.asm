; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dirmat_cpp_FUN_004496e0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[11]:
;   core_box.cpp_CBox_processPhysics_FUN_005b22f0 at 005b28f9
;   core_bugs.cpp_FUN_00420e90 at 0042165e
;   core_cloth.cpp_FUN_005b0ce0 at 005b0d0c
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044ac60 at 0044ac90
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830 at 0044ca79
;   core_dlight.cpp_FUN_0044c15e at 0044c1a0
;   core_fire.cpp_FUN_004969a0 at 00496a11
;   core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360 at 0059d3d1
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e0c4
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 at 0046b078
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005cf197
;   undefined4 DAT_005cf19f
;   undefined4 DAT_005cf1a7
;   undefined4 DAT_005cf1af
;   undefined4 DAT_005cf1b7
;   undefined4 DAT_005cf1bf
;   undefined4 DAT_005cf1c3
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;   crt_math.c_asin_FUN_005b98f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004496e0
        ;   Label: core_dirmat.cpp_FUN_004496e0
    PUSH EDI                            ; 004496e1
    PUSH EBP                            ; 004496e2
    MOV EBP,ESP                         ; 004496e3
    SUB ESP,0x90                        ; 004496e5
    AND ESP,0xfffffff8                  ; 004496eb
    MOV ECX,dword ptr [EBP + 0x10]      ; 004496ee
    MOV EDX,ESI                         ; 004496f1
    FLD float ptr [ECX + 0x14]          ; 004496f3
    FCHS                                ; 004496f6
    FST double ptr [ESP + 0x68]         ; 004496f8
    FCOMP double ptr [0x005cf197]       ; 004496fc | DAT_005cf197
    FNSTSW AX                           ; 00449702
    SAHF                                ; 00449704
    JBE 0x004497fe                      ; 00449705
        ;   XREF to: 004497fe (CONDITIONAL_JUMP)  ; LAB_004497fe
    FLD1                                ; 0044970b
    FCOMP double ptr [ESP + 0x68]       ; 0044970d
    FNSTSW AX                           ; 00449711
    SAHF                                ; 00449713
    JA 0x0044980b                       ; 00449714
        ;   XREF to: 0044980b (CONDITIONAL_JUMP)  ; LAB_0044980b
    MOV dword ptr [ESP + 0x7c],0x3fc90fdb ; 0044971a
    FLD float ptr [ECX]                 ; 00449722
        ;   Label: LAB_00449722
    FLD float ptr [ECX + 0x18]          ; 00449724
    FCHS                                ; 00449727
    FSTP double ptr [ESP + 0x60]        ; 00449729
    MOV EAX,dword ptr [ESP + 0x60]      ; 0044972d
    FSTP double ptr [ESP + 0x30]        ; 00449731
    MOV dword ptr [ESP + 0x18],EAX      ; 00449735
    MOV EAX,dword ptr [ESP + 0x64]      ; 00449739
    XOR EDI,EDI                         ; 0044973d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044973f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00449743
    FLD double ptr [ESP + 0x60]         ; 00449747
    MOV dword ptr [ESP + 0x50],EAX      ; 0044974b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044974f
    MOV dword ptr [ESP + 0x84],EDI      ; 00449753
    MOV dword ptr [ESP + 0x54],EAX      ; 0044975a
    FCOMP double ptr [0x005cf19f]       ; 0044975e | DAT_005cf19f
    FNSTSW AX                           ; 00449764
    SAHF                                ; 00449766
    JNC 0x004499e5                      ; 00449767
        ;   XREF to: 004499e5 (CONDITIONAL_JUMP)  ; LAB_004499e5
    FLD double ptr [ESP + 0x60]         ; 0044976d
    FCOMP double ptr [0x005cf1a7]       ; 00449771 | DAT_005cf1a7
    FNSTSW AX                           ; 00449777
    SAHF                                ; 00449779
    JBE 0x004499e5                      ; 0044977a
        ;   XREF to: 004499e5 (CONDITIONAL_JUMP)  ; LAB_004499e5
    FLD double ptr [ESP + 0x60]         ; 00449780
    CALL crt_math.c_asin_FUN_005b98f6   ; 00449784
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 00449789
    FXCH                                ; 0044978b
    FSTP float ptr [ESP + 0x74]         ; 0044978d
    FCOMP double ptr [ESP + 0x30]       ; 00449791
    FNSTSW AX                           ; 00449795
    SAHF                                ; 00449797
    JBE 0x004497a8                      ; 00449798
        ;   XREF to: 004497a8 (CONDITIONAL_JUMP)  ; LAB_004497a8
    FLD float ptr [ESP + 0x74]          ; 0044979a
    FSUBR double ptr [0x005cf1af]       ; 0044979e | DAT_005cf1af
    FSTP float ptr [ESP + 0x74]         ; 004497a4
    FLD float ptr [ESP + 0x74]          ; 004497a8
        ;   Label: LAB_004497a8
    FCOMP double ptr [0x005cf1b7]       ; 004497ac | DAT_005cf1b7
    FNSTSW AX                           ; 004497b2
    SAHF                                ; 004497b4
    JNC 0x004497c5                      ; 004497b5
        ;   XREF to: 004497c5 (CONDITIONAL_JUMP)  ; LAB_004497c5
    FLD float ptr [ESP + 0x74]          ; 004497b7
    FADD float ptr [0x005cf1bf]         ; 004497bb | DAT_005cf1bf
    FSTP float ptr [ESP + 0x74]         ; 004497c1
    FLD float ptr [ESP + 0x74]          ; 004497c5
        ;   Label: LAB_004497c5
    FCOMP double ptr [0x005cf1af]       ; 004497c9 | DAT_005cf1af
    FNSTSW AX                           ; 004497cf
    SAHF                                ; 004497d1
    JBE 0x004497e2                      ; 004497d2
        ;   XREF to: 004497e2 (CONDITIONAL_JUMP)  ; LAB_004497e2
    FLD float ptr [ESP + 0x74]          ; 004497d4
    FADD float ptr [0x005cf1c3]         ; 004497d8 | DAT_005cf1c3
    FSTP float ptr [ESP + 0x74]         ; 004497de
    MOV EAX,dword ptr [ESP + 0x74]      ; 004497e2
        ;   Label: LAB_004497e2
    MOV dword ptr [ESP + 0x80],EAX      ; 004497e6
    LEA ESI,[ESP + 0x7c]                ; 004497ed
    MOV EDI,EDX                         ; 004497f1
    MOVSD ES:EDI,ESI                    ; 004497f3
    MOVSD ES:EDI,ESI                    ; 004497f4
    MOVSD ES:EDI,ESI                    ; 004497f5
    MOV EAX,EDX                         ; 004497f6
    MOV ESP,EBP                         ; 004497f8
    POP EBP                             ; 004497fa
    POP EDI                             ; 004497fb
    POP EBX                             ; 004497fc
    RET                                 ; 004497fd
    MOV dword ptr [ESP + 0x7c],0xbfc90fdb ; 004497fe
        ;   Label: LAB_004497fe
    JMP 0x00449722                      ; 00449806
        ;   XREF to: 00449722 (UNCONDITIONAL_JUMP)  ; LAB_00449722
    FLD double ptr [ESP + 0x68]         ; 0044980b
        ;   Label: LAB_0044980b
    FLD ST0                             ; 0044980f
    CALL crt_math.c_asin_FUN_005b98f6   ; 00449811
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLD ST1                             ; 00449816
    FMULP ST2                           ; 00449818
    FLD1                                ; 0044981a
    FSUBRP ST2,ST0                      ; 0044981c
    FXCH                                ; 0044981e
    FSQRT                               ; 00449820
    FLDZ                                ; 00449822
    FXCH ST2                            ; 00449824
    FSTP float ptr [ESP + 0x7c]         ; 00449826
    FSTP double ptr [ESP + 0x58]        ; 0044982a
    FCOMP double ptr [ESP + 0x58]       ; 0044982e
    FNSTSW AX                           ; 00449832
    SAHF                                ; 00449834
    JNC 0x00449722                      ; 00449835
        ;   XREF to: 00449722 (CONDITIONAL_JUMP)  ; LAB_00449722
    FLD float ptr [ECX + 0x20]          ; 0044983b
    FLD1                                ; 0044983e
    FDIV double ptr [ESP + 0x58]        ; 00449840
    FLD float ptr [ECX + 0x8]           ; 00449844
    FMUL ST1                            ; 00449847
    FXCH ST2                            ; 00449849
    FMULP                               ; 0044984b
    FXCH                                ; 0044984d
    FSTP double ptr [ESP + 0x8]         ; 0044984f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00449853
    MOV dword ptr [ESP + 0x10],EAX      ; 00449857
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044985b
    FSTP double ptr [ESP + 0x40]        ; 0044985f
    MOV dword ptr [ESP + 0x14],EAX      ; 00449863
    MOV EAX,dword ptr [ESP + 0x40]      ; 00449867
    MOV dword ptr [ESP + 0x38],EAX      ; 0044986b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044986f
    FLD double ptr [ESP + 0x8]          ; 00449873
    MOV dword ptr [ESP + 0x3c],EAX      ; 00449877
    FCOMP double ptr [0x005cf19f]       ; 0044987b | DAT_005cf19f
    FNSTSW AX                           ; 00449881
    SAHF                                ; 00449883
    JNC 0x00449a37                      ; 00449884
        ;   XREF to: 00449a37 (CONDITIONAL_JUMP)  ; LAB_00449a37
    FLD double ptr [ESP + 0x8]          ; 0044988a
    FCOMP double ptr [0x005cf1a7]       ; 0044988e | DAT_005cf1a7
    FNSTSW AX                           ; 00449894
    SAHF                                ; 00449896
    JBE 0x00449a37                      ; 00449897
        ;   XREF to: 00449a37 (CONDITIONAL_JUMP)  ; LAB_00449a37
    FLD double ptr [ESP + 0x8]          ; 0044989d
    CALL crt_math.c_asin_FUN_005b98f6   ; 004498a1
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 004498a6
    FXCH                                ; 004498a8
    FSTP float ptr [ESP + 0x78]         ; 004498aa
    FCOMP double ptr [ESP + 0x40]       ; 004498ae
    FNSTSW AX                           ; 004498b2
    SAHF                                ; 004498b4
    JBE 0x004498c5                      ; 004498b5
        ;   XREF to: 004498c5 (CONDITIONAL_JUMP)  ; LAB_004498c5
    FLD float ptr [ESP + 0x78]          ; 004498b7
    FSUBR double ptr [0x005cf1af]       ; 004498bb | DAT_005cf1af
    FSTP float ptr [ESP + 0x78]         ; 004498c1
    FLD float ptr [ESP + 0x78]          ; 004498c5
        ;   Label: LAB_004498c5
    FCOMP double ptr [0x005cf1b7]       ; 004498c9 | DAT_005cf1b7
    FNSTSW AX                           ; 004498cf
    SAHF                                ; 004498d1
    JNC 0x004498e2                      ; 004498d2
        ;   XREF to: 004498e2 (CONDITIONAL_JUMP)  ; LAB_004498e2
    FLD float ptr [ESP + 0x78]          ; 004498d4
    FADD float ptr [0x005cf1bf]         ; 004498d8 | DAT_005cf1bf
    FSTP float ptr [ESP + 0x78]         ; 004498de
    FLD float ptr [ESP + 0x78]          ; 004498e2
        ;   Label: LAB_004498e2
    FCOMP double ptr [0x005cf1af]       ; 004498e6 | DAT_005cf1af
    FNSTSW AX                           ; 004498ec
    SAHF                                ; 004498ee
    JBE 0x004498ff                      ; 004498ef
        ;   XREF to: 004498ff (CONDITIONAL_JUMP)  ; LAB_004498ff
    FLD float ptr [ESP + 0x78]          ; 004498f1
    FADD float ptr [0x005cf1c3]         ; 004498f5 | DAT_005cf1c3
    FSTP float ptr [ESP + 0x78]         ; 004498fb
    FLD float ptr [ECX + 0x10]          ; 004498ff
        ;   Label: LAB_004498ff
    FLD1                                ; 00449902
    FDIV double ptr [ESP + 0x58]        ; 00449904
    FXCH                                ; 00449908
    FMUL ST1                            ; 0044990a
    FLD float ptr [ECX + 0xc]           ; 0044990c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0044990f
    FMULP ST2                           ; 00449913
    MOV dword ptr [ESP + 0x80],EAX      ; 00449915
    FXCH                                ; 0044991c
    FSTP double ptr [ESP]               ; 0044991e
    MOV EAX,dword ptr [ESP]             ; 00449921
    MOV dword ptr [ESP + 0x20],EAX      ; 00449924
    MOV EAX,dword ptr [ESP + 0x4]       ; 00449928
    FSTP double ptr [ESP + 0x28]        ; 0044992c
    MOV dword ptr [ESP + 0x24],EAX      ; 00449930
    MOV EAX,dword ptr [ESP + 0x28]      ; 00449934
    MOV dword ptr [ESP + 0x48],EAX      ; 00449938
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044993c
    FLD double ptr [ESP]                ; 00449940
    MOV dword ptr [ESP + 0x4c],EAX      ; 00449943
    FCOMP double ptr [0x005cf19f]       ; 00449947 | DAT_005cf19f
    FNSTSW AX                           ; 0044994d
    SAHF                                ; 0044994f
    JNC 0x00449a89                      ; 00449950
        ;   XREF to: 00449a89 (CONDITIONAL_JUMP)  ; LAB_00449a89
    FLD double ptr [ESP]                ; 00449956
    FCOMP double ptr [0x005cf1a7]       ; 00449959 | DAT_005cf1a7
    FNSTSW AX                           ; 0044995f
    SAHF                                ; 00449961
    JBE 0x00449a89                      ; 00449962
        ;   XREF to: 00449a89 (CONDITIONAL_JUMP)  ; LAB_00449a89
    FLD double ptr [ESP]                ; 00449968
    CALL crt_math.c_asin_FUN_005b98f6   ; 0044996b
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 00449970
    FXCH                                ; 00449972
    FSTP float ptr [ESP + 0x70]         ; 00449974
    FCOMP double ptr [ESP + 0x28]       ; 00449978
    FNSTSW AX                           ; 0044997c
    SAHF                                ; 0044997e
    JBE 0x0044998f                      ; 0044997f
        ;   XREF to: 0044998f (CONDITIONAL_JUMP)  ; LAB_0044998f
    FLD float ptr [ESP + 0x70]          ; 00449981
    FSUBR double ptr [0x005cf1af]       ; 00449985 | DAT_005cf1af
    FSTP float ptr [ESP + 0x70]         ; 0044998b
    FLD float ptr [ESP + 0x70]          ; 0044998f
        ;   Label: LAB_0044998f
    FCOMP double ptr [0x005cf1b7]       ; 00449993 | DAT_005cf1b7
    FNSTSW AX                           ; 00449999
    SAHF                                ; 0044999b
    JNC 0x004499ac                      ; 0044999c
        ;   XREF to: 004499ac (CONDITIONAL_JUMP)  ; LAB_004499ac
    FLD float ptr [ESP + 0x70]          ; 0044999e
    FADD float ptr [0x005cf1bf]         ; 004499a2 | DAT_005cf1bf
    FSTP float ptr [ESP + 0x70]         ; 004499a8
    FLD float ptr [ESP + 0x70]          ; 004499ac
        ;   Label: LAB_004499ac
    FCOMP double ptr [0x005cf1af]       ; 004499b0 | DAT_005cf1af
    FNSTSW AX                           ; 004499b6
    SAHF                                ; 004499b8
    JBE 0x004499c9                      ; 004499b9
        ;   XREF to: 004499c9 (CONDITIONAL_JUMP)  ; LAB_004499c9
    FLD float ptr [ESP + 0x70]          ; 004499bb
    FADD float ptr [0x005cf1c3]         ; 004499bf | DAT_005cf1c3
    FSTP float ptr [ESP + 0x70]         ; 004499c5
    MOV EAX,dword ptr [ESP + 0x70]      ; 004499c9
        ;   Label: LAB_004499c9
    MOV dword ptr [ESP + 0x84],EAX      ; 004499cd
    LEA ESI,[ESP + 0x7c]                ; 004499d4
    MOV EDI,EDX                         ; 004499d8
    MOVSD ES:EDI,ESI                    ; 004499da
    MOVSD ES:EDI,ESI                    ; 004499db
    MOVSD ES:EDI,ESI                    ; 004499dc
    MOV EAX,EDX                         ; 004499dd
    MOV ESP,EBP                         ; 004499df
    POP EBP                             ; 004499e1
    POP EDI                             ; 004499e2
    POP EBX                             ; 004499e3
    RET                                 ; 004499e4
    FLD double ptr [ESP + 0x50]         ; 004499e5
        ;   Label: LAB_004499e5
    FCOMP double ptr [0x005cf197]       ; 004499e9 | DAT_005cf197
    FNSTSW AX                           ; 004499ef
    SAHF                                ; 004499f1
    JA 0x00449a15                       ; 004499f2
        ;   XREF to: 00449a15 (CONDITIONAL_JUMP)  ; LAB_00449a15
    MOV dword ptr [ESP + 0x74],0x40490fdb ; 004499f4
    FLDZ                                ; 004499fc
        ;   Label: LAB_004499fc
    FCOMP double ptr [ESP + 0x18]       ; 004499fe
    FNSTSW AX                           ; 00449a02
    SAHF                                ; 00449a04
    JBE 0x004497a8                      ; 00449a05
        ;   XREF to: 004497a8 (CONDITIONAL_JUMP)  ; LAB_004497a8
    XOR byte ptr [ESP + 0x77],0x80      ; 00449a0b
    JMP 0x004497a8                      ; 00449a10
        ;   XREF to: 004497a8 (UNCONDITIONAL_JUMP)  ; LAB_004497a8
    FLD1                                ; 00449a15
        ;   Label: LAB_00449a15
    FCOMP double ptr [ESP + 0x50]       ; 00449a17
    FNSTSW AX                           ; 00449a1b
    SAHF                                ; 00449a1d
    JA 0x00449a28                       ; 00449a1e
        ;   XREF to: 00449a28 (CONDITIONAL_JUMP)  ; LAB_00449a28
    XOR EAX,EAX                         ; 00449a20
    MOV dword ptr [ESP + 0x74],EAX      ; 00449a22
    JMP 0x004499fc                      ; 00449a26
        ;   XREF to: 004499fc (UNCONDITIONAL_JUMP)  ; LAB_004499fc
    FLD double ptr [ESP + 0x50]         ; 00449a28
        ;   Label: LAB_00449a28
    CALL crt_math.c_acos_FUN_005b9924   ; 00449a2c
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x74]         ; 00449a31
    JMP 0x004499fc                      ; 00449a35
        ;   XREF to: 004499fc (UNCONDITIONAL_JUMP)  ; LAB_004499fc
    FLD double ptr [ESP + 0x38]         ; 00449a37
        ;   Label: LAB_00449a37
    FCOMP double ptr [0x005cf197]       ; 00449a3b | DAT_005cf197
    FNSTSW AX                           ; 00449a41
    SAHF                                ; 00449a43
    JA 0x00449a67                       ; 00449a44
        ;   XREF to: 00449a67 (CONDITIONAL_JUMP)  ; LAB_00449a67
    MOV dword ptr [ESP + 0x78],0x40490fdb ; 00449a46
    FLDZ                                ; 00449a4e
        ;   Label: LAB_00449a4e
    FCOMP double ptr [ESP + 0x10]       ; 00449a50
    FNSTSW AX                           ; 00449a54
    SAHF                                ; 00449a56
    JBE 0x004498c5                      ; 00449a57
        ;   XREF to: 004498c5 (CONDITIONAL_JUMP)  ; LAB_004498c5
    XOR byte ptr [ESP + 0x7b],0x80      ; 00449a5d
    JMP 0x004498c5                      ; 00449a62
        ;   XREF to: 004498c5 (UNCONDITIONAL_JUMP)  ; LAB_004498c5
    FLD1                                ; 00449a67
        ;   Label: LAB_00449a67
    FCOMP double ptr [ESP + 0x38]       ; 00449a69
    FNSTSW AX                           ; 00449a6d
    SAHF                                ; 00449a6f
    JA 0x00449a7a                       ; 00449a70
        ;   XREF to: 00449a7a (CONDITIONAL_JUMP)  ; LAB_00449a7a
    XOR EBX,EBX                         ; 00449a72
    MOV dword ptr [ESP + 0x78],EBX      ; 00449a74
    JMP 0x00449a4e                      ; 00449a78
        ;   XREF to: 00449a4e (UNCONDITIONAL_JUMP)  ; LAB_00449a4e
    FLD double ptr [ESP + 0x38]         ; 00449a7a
        ;   Label: LAB_00449a7a
    CALL crt_math.c_acos_FUN_005b9924   ; 00449a7e
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x78]         ; 00449a83
    JMP 0x00449a4e                      ; 00449a87
        ;   XREF to: 00449a4e (UNCONDITIONAL_JUMP)  ; LAB_00449a4e
    FLD double ptr [ESP + 0x48]         ; 00449a89
        ;   Label: LAB_00449a89
    FCOMP double ptr [0x005cf197]       ; 00449a8d | DAT_005cf197
    FNSTSW AX                           ; 00449a93
    SAHF                                ; 00449a95
    JA 0x00449ab9                       ; 00449a96
        ;   XREF to: 00449ab9 (CONDITIONAL_JUMP)  ; LAB_00449ab9
    MOV dword ptr [ESP + 0x70],0x40490fdb ; 00449a98
    FLDZ                                ; 00449aa0
        ;   Label: LAB_00449aa0
    FCOMP double ptr [ESP + 0x20]       ; 00449aa2
    FNSTSW AX                           ; 00449aa6
    SAHF                                ; 00449aa8
    JBE 0x0044998f                      ; 00449aa9
        ;   XREF to: 0044998f (CONDITIONAL_JUMP)  ; LAB_0044998f
    XOR byte ptr [ESP + 0x73],0x80      ; 00449aaf
    JMP 0x0044998f                      ; 00449ab4
        ;   XREF to: 0044998f (UNCONDITIONAL_JUMP)  ; LAB_0044998f
    FLD1                                ; 00449ab9
        ;   Label: LAB_00449ab9
    FCOMP double ptr [ESP + 0x48]       ; 00449abb
    FNSTSW AX                           ; 00449abf
    SAHF                                ; 00449ac1
    JA 0x00449acc                       ; 00449ac2
        ;   XREF to: 00449acc (CONDITIONAL_JUMP)  ; LAB_00449acc
    XOR EDI,EDI                         ; 00449ac4
    MOV dword ptr [ESP + 0x70],EDI      ; 00449ac6
    JMP 0x00449aa0                      ; 00449aca
        ;   XREF to: 00449aa0 (UNCONDITIONAL_JUMP)  ; LAB_00449aa0
    FLD double ptr [ESP + 0x48]         ; 00449acc
        ;   Label: LAB_00449acc
    CALL crt_math.c_acos_FUN_005b9924   ; 00449ad0
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x70]         ; 00449ad5
    JMP 0x00449aa0                      ; 00449ad9
        ;   XREF to: 00449aa0 (UNCONDITIONAL_JUMP)  ; LAB_00449aa0

