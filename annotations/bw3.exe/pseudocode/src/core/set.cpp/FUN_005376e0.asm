; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_FUN_005376e0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
; Local Variables:
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
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
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
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20 at 00537e4d
;
; Referenced Globals:
;   undefined4 DAT_005d063f
;   undefined4 DAT_005d0647
;   undefined4 DAT_005e3bc0
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_0203a598
;   undefined4 DAT_0203a59c
;   undefined4 DAT_0203ad1c
;   undefined4 DAT_0203ad30
;   undefined4 DAT_0203b1e8
;   undefined4 DAT_0203b1ec
;   undefined4 DAT_0203b3e8
;   undefined4 DAT_0203b3ec
;   undefined4 DAT_0203b3f0
;   undefined4 DAT_0207f958
;   undefined4 DAT_0207f95c
;   ... and 10 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20
;   core_dglobe.cpp_FUN_0045af60
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005376e0
        ;   Label: core_set.cpp_FUN_005376e0
    PUSH ESI                            ; 005376e1
    PUSH EDI                            ; 005376e2
    PUSH EBP                            ; 005376e3
    MOV EBP,ESP                         ; 005376e4
    SUB ESP,0xd0                        ; 005376e6
    AND ESP,0xfffffff8                  ; 005376ec
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005376ef
    MOV EDX,dword ptr [EBP + 0x18]      ; 005376f2
    TEST EDX,EDX                        ; 005376f5
    JNZ 0x005377f7                      ; 005376f7
        ;   XREF to: 005377f7 (CONDITIONAL_JUMP)  ; LAB_005377f7
    MOV EDI,dword ptr [0x0203ad1c]      ; 005376fd | DAT_0203ad1c
    MOV dword ptr [0x0207fadc],EDX      ; 00537703 | DAT_0207fadc
    TEST EDI,EDI                        ; 00537709
    JLE 0x00537742                      ; 0053770b
        ;   XREF to: 00537742 (CONDITIONAL_JUMP)  ; LAB_00537742
    LEA ESI,[EDI*0x4 + 0x0]             ; 0053770d
    XOR EAX,EAX                         ; 00537714
    MOV EBX,dword ptr [EAX + 0x203ad20] ; 00537716
        ;   Label: LAB_00537716
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 0053771c
    JZ 0x0053773b                       ; 00537723
        ;   XREF to: 0053773b (CONDITIONAL_JUMP)  ; LAB_0053773b
    MOV ECX,dword ptr [0x0207fadc]      ; 00537725 | DAT_0207fadc
    ADD EDX,0x4                         ; 0053772b
    INC ECX                             ; 0053772e
    MOV dword ptr [EDX + 0x207fadc],EBX ; 0053772f
    MOV dword ptr [0x0207fadc],ECX      ; 00537735 | DAT_0207fadc
    ADD EAX,0x4                         ; 0053773b
        ;   Label: LAB_0053773b
    CMP EAX,ESI                         ; 0053773e
    JL 0x00537716                       ; 00537740
        ;   XREF to: 00537716 (CONDITIONAL_JUMP)  ; LAB_00537716
    XOR EBX,EBX                         ; 00537742
        ;   Label: LAB_00537742
    MOV ESI,dword ptr [0x0203a598]      ; 00537744 | DAT_0203a598
    MOV dword ptr [0x0207f958],EBX      ; 0053774a | DAT_0207f958
    TEST ESI,ESI                        ; 00537750
    JLE 0x00537787                      ; 00537752
        ;   XREF to: 00537787 (CONDITIONAL_JUMP)  ; LAB_00537787
    SHL ESI,0x2                         ; 00537754
    XOR EDX,EDX                         ; 00537757
    XOR EAX,EAX                         ; 00537759
    MOV EBX,dword ptr [EAX + 0x203a59c] ; 0053775b | DAT_0203a59c
        ;   Label: LAB_0053775b
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 00537761
    JZ 0x00537780                       ; 00537768
        ;   XREF to: 00537780 (CONDITIONAL_JUMP)  ; LAB_00537780
    MOV ECX,dword ptr [0x0207f958]      ; 0053776a | DAT_0207f958
    ADD EDX,0x4                         ; 00537770
    INC ECX                             ; 00537773
    MOV dword ptr [EDX + 0x207f958],EBX ; 00537774
    MOV dword ptr [0x0207f958],ECX      ; 0053777a | DAT_0207f958
    ADD EAX,0x4                         ; 00537780
        ;   Label: LAB_00537780
    CMP EAX,ESI                         ; 00537783
    JL 0x0053775b                       ; 00537785
        ;   XREF to: 0053775b (CONDITIONAL_JUMP)  ; LAB_0053775b
    MOV EAX,[0x0203ad30]                ; 00537787 | DAT_0203ad30
        ;   Label: LAB_00537787
    MOV [0x0207faf0],EAX                ; 0053778c | DAT_0207faf0
    TEST EAX,EAX                        ; 00537791
    JLE 0x005377c0                      ; 00537793
        ;   XREF to: 005377c0 (CONDITIONAL_JUMP)  ; LAB_005377c0
    MOV EBX,dword ptr [0x0203ad30]      ; 00537795 | DAT_0203ad30
    XOR EAX,EAX                         ; 0053779b
    SHL EBX,0x2                         ; 0053779d
    ADD EAX,0x4                         ; 005377a0
        ;   Label: LAB_005377a0
    MOV EDX,dword ptr [EAX + 0x203ad30] ; 005377a3
    MOV dword ptr [EAX + 0x207faf0],EDX ; 005377a9
    CMP EAX,EBX                         ; 005377af
    JL 0x005377a0                       ; 005377b1
        ;   XREF to: 005377a0 (CONDITIONAL_JUMP)  ; LAB_005377a0
    LEA EAX,[EAX]                       ; 005377b3
    LEA EDX,[EDX]                       ; 005377b9
    NOP                                 ; 005377bf
    MOV EAX,[0x0203b3e8]                ; 005377c0 | DAT_0203b3e8
        ;   Label: LAB_005377c0
    MOV [0x0207fc84],EAX                ; 005377c5 | DAT_0207fc84
    TEST EAX,EAX                        ; 005377ca
    JLE 0x005377f0                      ; 005377cc
        ;   XREF to: 005377f0 (CONDITIONAL_JUMP)  ; LAB_005377f0
    MOV EBX,dword ptr [0x0203b3e8]      ; 005377ce | DAT_0203b3e8
    XOR EAX,EAX                         ; 005377d4
    SHL EBX,0x2                         ; 005377d6
    ADD EAX,0x4                         ; 005377d9
        ;   Label: LAB_005377d9
    MOV EDX,dword ptr [EAX + 0x203b3e8] ; 005377dc | DAT_0203b3ec | DAT_0203b3f0
    MOV dword ptr [EAX + 0x207fc84],EDX ; 005377e2
    CMP EAX,EBX                         ; 005377e8
    JL 0x005377d9                       ; 005377ea
        ;   XREF to: 005377d9 (CONDITIONAL_JUMP)  ; LAB_005377d9
    LEA EAX,[EAX]                       ; 005377ec
    MOV ESP,EBP                         ; 005377f0
        ;   Label: LAB_005377f0
    POP EBP                             ; 005377f2
    POP EDI                             ; 005377f3
    POP ESI                             ; 005377f4
    POP EBX                             ; 005377f5
    RET                                 ; 005377f6
    MOV EBX,dword ptr [0x0203ad1c]      ; 005377f7 | DAT_0203ad1c
        ;   Label: LAB_005377f7
    XOR ECX,ECX                         ; 005377fd
    XOR ESI,ESI                         ; 005377ff
    MOV dword ptr [0x0207fadc],ECX      ; 00537801 | DAT_0207fadc
    TEST EBX,EBX                        ; 00537807
    JLE 0x0053785e                      ; 00537809
        ;   XREF to: 0053785e (CONDITIONAL_JUMP)  ; LAB_0053785e
    XOR EBX,EBX                         ; 0053780b
    MOV EAX,dword ptr [EBX + 0x203ad20] ; 0053780d
        ;   Label: LAB_0053780d
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00537813
    JZ 0x00537851                       ; 0053781a
        ;   XREF to: 00537851 (CONDITIONAL_JUMP)  ; LAB_00537851
    MOV ECX,dword ptr [EBP + 0x24]      ; 0053781c
    PUSH ECX                            ; 0053781f
    MOV EDX,dword ptr [EBP + 0x20]      ; 00537820
    PUSH EDX                            ; 00537823
    PUSH EDI                            ; 00537824
    MOV ECX,dword ptr [EBP + 0x18]      ; 00537825
    PUSH ECX                            ; 00537828
    PUSH EAX                            ; 00537829
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20 ; 0053782a
        ;   XREF to: 0044ef20 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 0053782f
    TEST EAX,EAX                        ; 00537832
    JZ 0x00537851                       ; 00537834
        ;   XREF to: 00537851 (CONDITIONAL_JUMP)  ; LAB_00537851
    MOV EDX,dword ptr [0x0207fadc]      ; 00537836 | DAT_0207fadc
    MOV EAX,dword ptr [EBX + 0x203ad20] ; 0053783c
    MOV dword ptr [EDX*0x4 + 0x207fae0],EAX ; 00537842 | DAT_0207fae0
    LEA EAX,[EDX + 0x1]                 ; 00537849
    MOV [0x0207fadc],EAX                ; 0053784c | DAT_0207fadc
    MOV EAX,[0x0203ad1c]                ; 00537851 | DAT_0203ad1c
        ;   Label: LAB_00537851
    INC ESI                             ; 00537856
    ADD EBX,0x4                         ; 00537857
    CMP ESI,EAX                         ; 0053785a
    JL 0x0053780d                       ; 0053785c
        ;   XREF to: 0053780d (CONDITIONAL_JUMP)  ; LAB_0053780d
    MOV ECX,dword ptr [0x0203a598]      ; 0053785e | DAT_0203a598
        ;   Label: LAB_0053785e
    XOR EDX,EDX                         ; 00537864
    XOR ESI,ESI                         ; 00537866
    MOV dword ptr [0x0207f958],EDX      ; 00537868 | DAT_0207f958
    TEST ECX,ECX                        ; 0053786e
    JLE 0x005378c3                      ; 00537870
        ;   XREF to: 005378c3 (CONDITIONAL_JUMP)  ; LAB_005378c3
    XOR EBX,EBX                         ; 00537872
    MOV EAX,dword ptr [EBX + 0x203a59c] ; 00537874 | DAT_0203a59c
        ;   Label: LAB_00537874
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 0053787a
    JZ 0x005378b5                       ; 00537881
        ;   XREF to: 005378b5 (CONDITIONAL_JUMP)  ; LAB_005378b5
    MOV ECX,dword ptr [EBP + 0x24]      ; 00537883
    PUSH ECX                            ; 00537886
    MOV EDX,dword ptr [EBP + 0x20]      ; 00537887
    PUSH EDX                            ; 0053788a
    PUSH EDI                            ; 0053788b
    MOV ECX,dword ptr [EBP + 0x18]      ; 0053788c
    PUSH ECX                            ; 0053788f
    PUSH EAX                            ; 00537890
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20 ; 00537891
        ;   XREF to: 0044ef20 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 00537896
    TEST EAX,EAX                        ; 00537899
    JZ 0x005378b5                       ; 0053789b
        ;   XREF to: 005378b5 (CONDITIONAL_JUMP)  ; LAB_005378b5
    MOV EAX,[0x0207f958]                ; 0053789d | DAT_0207f958
    INC EAX                             ; 005378a2
    MOV EDX,dword ptr [EBX + 0x203a59c] ; 005378a3 | DAT_0203a59c
    MOV dword ptr [EAX*0x4 + 0x207f958],EDX ; 005378a9 | DAT_0207f95c
    MOV [0x0207f958],EAX                ; 005378b0 | DAT_0207f958
    MOV EDX,dword ptr [0x0203a598]      ; 005378b5 | DAT_0203a598
        ;   Label: LAB_005378b5
    INC ESI                             ; 005378bb
    ADD EBX,0x4                         ; 005378bc
    CMP ESI,EDX                         ; 005378bf
    JL 0x00537874                       ; 005378c1
        ;   XREF to: 00537874 (CONDITIONAL_JUMP)  ; LAB_00537874
    XOR ECX,ECX                         ; 005378c3
        ;   Label: LAB_005378c3
    MOV ESI,dword ptr [0x0203b3e8]      ; 005378c5 | DAT_0203b3e8
    MOV dword ptr [ESP + 0xcc],ECX      ; 005378cb
    MOV dword ptr [0x0207fc84],ECX      ; 005378d2 | DAT_0207fc84
    TEST ESI,ESI                        ; 005378d8
    JLE 0x005379c9                      ; 005378da
        ;   XREF to: 005379c9 (CONDITIONAL_JUMP)  ; LAB_005379c9
    MOV dword ptr [ESP + 0xc8],ECX      ; 005378e0
    MOV EBX,dword ptr [ESP + 0xc8]      ; 005378e7
        ;   Label: LAB_005378e7
    MOV EBX,dword ptr [EBX + 0x203b3ec] ; 005378ee | DAT_0203b3ec | DAT_0203b3f0
    MOV EDX,dword ptr [EBP + 0x18]      ; 005378f4
    LEA EAX,[EBX + 0x104]               ; 005378f7
    LEA EDI,[ESP + 0x78]                ; 005378fd
    LEA ESI,[ESP + 0x84]                ; 00537901
    FLD float ptr [EAX + 0x4]           ; 00537908
    FLD float ptr [EAX + 0x8]           ; 0053790b
    FLD float ptr [EAX]                 ; 0053790e
    LEA EAX,[ESP + 0x78]                ; 00537910
    FSUB float ptr [EDX]                ; 00537914
    FXCH ST2                            ; 00537916
    FSUB float ptr [EDX + 0x4]          ; 00537918
    FXCH                                ; 0053791b
    FSUB float ptr [EDX + 0x8]          ; 0053791d
    FXCH ST2                            ; 00537920
    FSTP float ptr [ESP + 0x84]         ; 00537922
    FSTP float ptr [ESP + 0x88]         ; 00537929
    FSTP float ptr [ESP + 0x8c]         ; 00537930
    PUSH EAX                            ; 00537937
    MOV EDX,dword ptr [EBP + 0x28]      ; 00537938
    MOVSD ES:EDI,ESI                    ; 0053793b
    MOVSD ES:EDI,ESI                    ; 0053793c
    MOVSD ES:EDI,ESI                    ; 0053793d
    PUSH EDX                            ; 0053793e
    LEA ESI,[ESP + 0x98]                ; 0053793f
    LEA EDI,[ESP + 0x20]                ; 00537946
    CALL core_dirmat.cpp_FUN_0045b870   ; 0053794a
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x98]                ; 0053794f
    LEA EAX,[ESP + 0x20]                ; 00537956
    ADD ESP,0x8                         ; 0053795a
    LEA EDX,[ESP + 0x78]                ; 0053795d
    MOVSD ES:EDI,ESI                    ; 00537961
    MOVSD ES:EDI,ESI                    ; 00537962
    MOVSD ES:EDI,ESI                    ; 00537963
    CMP EDX,EAX                         ; 00537964
    JZ 0x00537983                       ; 00537966
        ;   XREF to: 00537983 (CONDITIONAL_JUMP)  ; LAB_00537983
    MOV EAX,dword ptr [ESP + 0x18]      ; 00537968
    MOV dword ptr [ESP + 0x78],EAX      ; 0053796c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00537970
    MOV dword ptr [ESP + 0x7c],EAX      ; 00537974
    MOV EAX,dword ptr [ESP + 0x20]      ; 00537978
    MOV dword ptr [ESP + 0x80],EAX      ; 0053797c
    FLD float ptr [ESP + 0x78]          ; 00537983
        ;   Label: LAB_00537983
    FADD float ptr [EBX + 0x11d4]       ; 00537987
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053798d
    FCOMP float ptr [EAX]               ; 00537990
    FNSTSW AX                           ; 00537992
    SAHF                                ; 00537994
    JNC 0x00537cba                      ; 00537995
        ;   XREF to: 00537cba (CONDITIONAL_JUMP)  ; LAB_00537cba
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0053799b
        ;   Label: LAB_0053799b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005379a2
    MOV EBX,dword ptr [0x0203b3e8]      ; 005379a9 | DAT_0203b3e8
    ADD EDX,0x4                         ; 005379af
    INC ECX                             ; 005379b2
    MOV dword ptr [ESP + 0xc8],EDX      ; 005379b3
    MOV dword ptr [ESP + 0xcc],ECX      ; 005379ba
    CMP ECX,EBX                         ; 005379c1
    JL 0x005378e7                       ; 005379c3
        ;   XREF to: 005378e7 (CONDITIONAL_JUMP)  ; LAB_005378e7
    XOR ESI,ESI                         ; 005379c9
        ;   Label: LAB_005379c9
    MOV EDI,dword ptr [0x0203ad30]      ; 005379cb | DAT_0203ad30
    MOV dword ptr [0x0207faf0],ESI      ; 005379d1 | DAT_0207faf0
    TEST EDI,EDI                        ; 005379d7
    JLE 0x00537a2a                      ; 005379d9
        ;   XREF to: 00537a2a (CONDITIONAL_JUMP)  ; LAB_00537a2a
    XOR EBX,EBX                         ; 005379db
    MOV EDX,dword ptr [EBP + 0x24]      ; 005379dd
        ;   Label: LAB_005379dd
    PUSH EDX                            ; 005379e0
    MOV ECX,dword ptr [EBP + 0x20]      ; 005379e1
    PUSH ECX                            ; 005379e4
    MOV EDI,dword ptr [EBP + 0x28]      ; 005379e5
    PUSH EDI                            ; 005379e8
    MOV EAX,dword ptr [EBP + 0x18]      ; 005379e9
    PUSH EAX                            ; 005379ec
    MOV EDX,dword ptr [EBX + 0x203ad34] ; 005379ed
    PUSH EDX                            ; 005379f3
    CALL core_dglobe.cpp_FUN_0045af60   ; 005379f4
        ;   XREF to: 0045af60 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_FUN_0045af60(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 005379f9
    TEST EAX,EAX                        ; 005379fc
    JZ 0x00537a1c                       ; 005379fe
        ;   XREF to: 00537a1c (CONDITIONAL_JUMP)  ; LAB_00537a1c
    MOV EDX,dword ptr [0x0207faf0]      ; 00537a00 | DAT_0207faf0
    MOV EAX,dword ptr [EBX + 0x203ad34] ; 00537a06
    LEA ECX,[EDX + 0x1]                 ; 00537a0c
    MOV dword ptr [EDX*0x4 + 0x207faf4],EAX ; 00537a0f | DAT_0207faf4
    MOV dword ptr [0x0207faf0],ECX      ; 00537a16 | DAT_0207faf0
    MOV EDI,dword ptr [0x0203ad30]      ; 00537a1c | DAT_0203ad30
        ;   Label: LAB_00537a1c
    INC ESI                             ; 00537a22
    ADD EBX,0x4                         ; 00537a23
    CMP ESI,EDI                         ; 00537a26
    JL 0x005379dd                       ; 00537a28
        ;   XREF to: 005379dd (CONDITIONAL_JUMP)  ; LAB_005379dd
    MOV EAX,[0x0203b1e8]                ; 00537a2a | DAT_0203b1e8
        ;   Label: LAB_00537a2a
    XOR EDI,EDI                         ; 00537a2f
    TEST EAX,EAX                        ; 00537a31
    JLE 0x00537a84                      ; 00537a33
        ;   XREF to: 00537a84 (CONDITIONAL_JUMP)  ; LAB_00537a84
    XOR ESI,ESI                         ; 00537a35
    MOV EDX,dword ptr [EBP + 0x24]      ; 00537a37
        ;   Label: LAB_00537a37
    PUSH EDX                            ; 00537a3a
    MOV ECX,dword ptr [EBP + 0x20]      ; 00537a3b
    PUSH ECX                            ; 00537a3e
    MOV EBX,dword ptr [EBP + 0x28]      ; 00537a3f
    PUSH EBX                            ; 00537a42
    MOV EAX,dword ptr [EBP + 0x18]      ; 00537a43
    PUSH EAX                            ; 00537a46
    MOV EDX,dword ptr [ESI + 0x203b1ec] ; 00537a47 | DAT_0203b1ec
    PUSH EDX                            ; 00537a4d
    CALL core_dglobe.cpp_FUN_0045af60   ; 00537a4e
        ;   XREF to: 0045af60 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_FUN_0045af60(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 00537a53
    TEST EAX,EAX                        ; 00537a56
    JZ 0x00537a76                       ; 00537a58
        ;   XREF to: 00537a76 (CONDITIONAL_JUMP)  ; LAB_00537a76
    MOV EDX,dword ptr [0x0207faf0]      ; 00537a5a | DAT_0207faf0
    MOV EAX,dword ptr [ESI + 0x203b1ec] ; 00537a60 | DAT_0203b1ec
    LEA ECX,[EDX + 0x1]                 ; 00537a66
    MOV dword ptr [EDX*0x4 + 0x207faf4],EAX ; 00537a69 | DAT_0207faf8
    MOV dword ptr [0x0207faf0],ECX      ; 00537a70 | DAT_0207faf0
    MOV EBX,dword ptr [0x0203b1e8]      ; 00537a76 | DAT_0203b1e8
        ;   Label: LAB_00537a76
    INC EDI                             ; 00537a7c
    ADD ESI,0x4                         ; 00537a7d
    CMP EDI,EBX                         ; 00537a80
    JL 0x00537a37                       ; 00537a82
        ;   XREF to: 00537a37 (CONDITIONAL_JUMP)  ; LAB_00537a37
    CMP dword ptr [0x0207fc84],0x0      ; 00537a84 | DAT_0207fc84
        ;   Label: LAB_00537a84
    JLE 0x005377f0                      ; 00537a8b
        ;   XREF to: 005377f0 (CONDITIONAL_JUMP)  ; LAB_005377f0
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537a91
    FLD float ptr [EAX]                 ; 00537a94
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537a96
    FSUB float ptr [EAX]                ; 00537a99
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537a9b
    FLD float ptr [EAX + 0x4]           ; 00537a9e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537aa1
    FSUB float ptr [EAX + 0x4]          ; 00537aa4
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537aa7
    LEA EDI,[ESP + 0x48]                ; 00537aaa
    MOV ESI,ESP                         ; 00537aae
    FLD float ptr [EAX + 0x8]           ; 00537ab0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537ab3
    FXCH ST2                            ; 00537ab6
    FSTP float ptr [ESP]                ; 00537ab8
    FXCH                                ; 00537abb
    FSUB float ptr [EAX + 0x8]          ; 00537abd
    FXCH                                ; 00537ac0
    FSTP float ptr [ESP + 0x4]          ; 00537ac2
    FSTP float ptr [ESP + 0x8]          ; 00537ac6
    LEA EAX,[ESP + 0x48]                ; 00537aca
    MOVSD ES:EDI,ESI                    ; 00537ace
    MOVSD ES:EDI,ESI                    ; 00537acf
    MOVSD ES:EDI,ESI                    ; 00537ad0
    PUSH EAX                            ; 00537ad1
    MOV EDI,dword ptr [EBP + 0x28]      ; 00537ad2
    PUSH EDI                            ; 00537ad5
    LEA ESI,[ESP + 0xa4]                ; 00537ad6
    CALL core_dirmat.cpp_FUN_0045b800   ; 00537add
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA EDI,[ESP + 0x44]                ; 00537ae2
    ADD ESP,0x8                         ; 00537ae6
    LEA ESI,[ESP + 0x9c]                ; 00537ae9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00537af0
    MOVSD ES:EDI,ESI                    ; 00537af3
    MOVSD ES:EDI,ESI                    ; 00537af4
    MOVSD ES:EDI,ESI                    ; 00537af5
    FLD float ptr [EAX + 0x4]           ; 00537af6
    FLD float ptr [EAX + 0x8]           ; 00537af9
    FLD float ptr [EAX]                 ; 00537afc
    LEA EDI,[ESP + 0x6c]                ; 00537afe
    LEA ESI,[ESP + 0x60]                ; 00537b02
    XOR EAX,EAX                         ; 00537b06
    FADD float ptr [ESP + 0x3c]         ; 00537b08
    FXCH ST2                            ; 00537b0c
    FADD float ptr [ESP + 0x40]         ; 00537b0e
    FXCH                                ; 00537b12
    FADD float ptr [ESP + 0x44]         ; 00537b14
    FXCH ST2                            ; 00537b18
    FSTP float ptr [ESP + 0x60]         ; 00537b1a
    FSTP float ptr [ESP + 0x64]         ; 00537b1e
    FSTP float ptr [ESP + 0x68]         ; 00537b22
    MOV dword ptr [ESP + 0x2c],EAX      ; 00537b26
    MOV dword ptr [ESP + 0x28],EAX      ; 00537b2a
    MOV dword ptr [ESP + 0x24],EAX      ; 00537b2e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00537b32
    MOV dword ptr [ESP + 0x58],EAX      ; 00537b36
    MOV dword ptr [ESP + 0x54],EAX      ; 00537b3a
    MOVSD ES:EDI,ESI                    ; 00537b3e
    MOVSD ES:EDI,ESI                    ; 00537b3f
    MOVSD ES:EDI,ESI                    ; 00537b40
    MOV EAX,[0x0207fc84]                ; 00537b41 | DAT_0207fc84
    XOR ESI,ESI                         ; 00537b46
    TEST EAX,EAX                        ; 00537b48
    JLE 0x00537be4                      ; 00537b4a
        ;   XREF to: 00537be4 (CONDITIONAL_JUMP)  ; LAB_00537be4
    LEA EDI,[EAX*0x4 + 0x0]             ; 00537b50
    XOR EBX,EBX                         ; 00537b57
    MOV EDX,dword ptr [EBX + 0x207fc88] ; 00537b59
        ;   Label: LAB_00537b59
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00537b5f
    JZ 0x00537d56                       ; 00537b69
        ;   XREF to: 00537d56 (CONDITIONAL_JUMP)  ; LAB_00537d56
    FLD float ptr [EDX + 0x108]         ; 00537b6f
    FLD float ptr [EDX + 0x104]         ; 00537b75
    FSUB float ptr [ESP + 0x6c]         ; 00537b7b
    FXCH                                ; 00537b7f
    FSUB float ptr [ESP + 0x70]         ; 00537b81
    FXCH                                ; 00537b85
    FST float ptr [ESP + 0xc0]          ; 00537b87
    FMUL float ptr [ESP + 0xc0]         ; 00537b8e
    FXCH                                ; 00537b95
    FST float ptr [ESP + 0xbc]          ; 00537b97
    FMUL float ptr [ESP + 0xbc]         ; 00537b9e
    FLD float ptr [EDX + 0x10c]         ; 00537ba5
    FSUB float ptr [ESP + 0x74]         ; 00537bab
    FXCH                                ; 00537baf
    FADDP ST2,ST0                       ; 00537bb1
    FST float ptr [ESP + 0xb8]          ; 00537bb3
    FMUL float ptr [ESP + 0xb8]         ; 00537bba
    FADDP                               ; 00537bc1
    FST float ptr [ESP + 0xc4]          ; 00537bc3
    FCOMP float ptr [EDX + 0x11d8]      ; 00537bca
    FNSTSW AX                           ; 00537bd0
    SAHF                                ; 00537bd2
    JBE 0x00537d86                      ; 00537bd3
        ;   XREF to: 00537d86 (CONDITIONAL_JUMP)  ; LAB_00537d86
    ADD EBX,0x4                         ; 00537bd9
        ;   Label: LAB_00537bd9
    CMP EBX,EDI                         ; 00537bdc
    JL 0x00537b59                       ; 00537bde
        ;   XREF to: 00537b59 (CONDITIONAL_JUMP)  ; LAB_00537b59
    TEST ESI,ESI                        ; 00537be4
        ;   Label: LAB_00537be4
    JZ 0x00537e04                       ; 00537be6
        ;   XREF to: 00537e04 (CONDITIONAL_JUMP)  ; LAB_00537e04
    LEA EBX,[ESP + 0xc]                 ; 00537bec
    LEA EAX,[ESP + 0x54]                ; 00537bf0
    FLD float ptr [EAX]                 ; 00537bf4
    FMUL float ptr [0x005e3bc0]         ; 00537bf6 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 00537bfc
    FLD float ptr [EAX + 0x4]           ; 00537bfe
    FMUL float ptr [0x005e3bc0]         ; 00537c01 | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 00537c07
    FLD float ptr [EAX + 0x8]           ; 00537c0a
    FMUL float ptr [0x005e3bc0]         ; 00537c0d | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 00537c13
    LEA EBX,[ESP + 0x30]                ; 00537c16
        ;   Label: LAB_00537c16
    LEA EAX,[ESP + 0x24]                ; 00537c1a
    FLD float ptr [EAX]                 ; 00537c1e
    FMUL float ptr [0x005e3bc0]         ; 00537c20 | DAT_005e3bc0
    FISTP dword ptr [EBX]               ; 00537c26
    FLD float ptr [EAX + 0x4]           ; 00537c28
    FMUL float ptr [0x005e3bc0]         ; 00537c2b | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x4]         ; 00537c31
    FLD float ptr [EAX + 0x8]           ; 00537c34
    FMUL float ptr [0x005e3bc0]         ; 00537c37 | DAT_005e3bc0
    FISTP dword ptr [EBX + 0x8]         ; 00537c3d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00537c40
    ADD EAX,dword ptr [ESP + 0xc]       ; 00537c44
    MOV ECX,dword ptr [ESP + 0x10]      ; 00537c48
    MOV [0x02080004],EAX                ; 00537c4c | DAT_02080004
    MOV EAX,dword ptr [ESP + 0x34]      ; 00537c51
    ADD EAX,ECX                         ; 00537c55
    MOV EBX,dword ptr [ESP + 0x14]      ; 00537c57
    MOV [0x02080008],EAX                ; 00537c5b | DAT_02080008
    MOV EAX,dword ptr [ESP + 0x38]      ; 00537c60
    ADD EAX,EBX                         ; 00537c64
    MOV ESI,dword ptr [0x02080004]      ; 00537c66 | DAT_02080004
    MOV [0x0208000c],EAX                ; 00537c6c | DAT_0208000c
    CMP ESI,0xffff                      ; 00537c71
    JLE 0x00537c83                      ; 00537c77
        ;   XREF to: 00537c83 (CONDITIONAL_JUMP)  ; LAB_00537c83
    MOV dword ptr [0x02080004],0xffff   ; 00537c79 | DAT_02080004
    CMP dword ptr [0x02080008],0xffff   ; 00537c83 | DAT_02080008
        ;   Label: LAB_00537c83
    JLE 0x00537c99                      ; 00537c8d
        ;   XREF to: 00537c99 (CONDITIONAL_JUMP)  ; LAB_00537c99
    MOV dword ptr [0x02080008],0xffff   ; 00537c8f | DAT_02080008
    CMP dword ptr [0x0208000c],0xffff   ; 00537c99 | DAT_0208000c
        ;   Label: LAB_00537c99
    JLE 0x005377f0                      ; 00537ca3
        ;   XREF to: 005377f0 (CONDITIONAL_JUMP)  ; LAB_005377f0
    MOV dword ptr [0x0208000c],0xffff   ; 00537ca9 | DAT_0208000c
    MOV ESP,EBP                         ; 00537cb3
    POP EBP                             ; 00537cb5
    POP EDI                             ; 00537cb6
    POP ESI                             ; 00537cb7
    POP EBX                             ; 00537cb8
    RET                                 ; 00537cb9
    FLD float ptr [ESP + 0x7c]          ; 00537cba
        ;   Label: LAB_00537cba
    FADD float ptr [EBX + 0x11d4]       ; 00537cbe
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537cc4
    FCOMP float ptr [EAX + 0x4]         ; 00537cc7
    FNSTSW AX                           ; 00537cca
    SAHF                                ; 00537ccc
    JC 0x0053799b                       ; 00537ccd
        ;   XREF to: 0053799b (CONDITIONAL_JUMP)  ; LAB_0053799b
    FLD float ptr [ESP + 0x80]          ; 00537cd3
    FADD float ptr [EBX + 0x11d4]       ; 00537cda
    MOV EAX,dword ptr [EBP + 0x20]      ; 00537ce0
    FCOMP float ptr [EAX + 0x8]         ; 00537ce3
    FNSTSW AX                           ; 00537ce6
    SAHF                                ; 00537ce8
    JC 0x0053799b                       ; 00537ce9
        ;   XREF to: 0053799b (CONDITIONAL_JUMP)  ; LAB_0053799b
    FLD float ptr [ESP + 0x78]          ; 00537cef
    FSUB float ptr [EBX + 0x11d4]       ; 00537cf3
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537cf9
    FCOMP float ptr [EAX]               ; 00537cfc
    FNSTSW AX                           ; 00537cfe
    SAHF                                ; 00537d00
    JA 0x0053799b                       ; 00537d01
        ;   XREF to: 0053799b (CONDITIONAL_JUMP)  ; LAB_0053799b
    FLD float ptr [ESP + 0x7c]          ; 00537d07
    FSUB float ptr [EBX + 0x11d4]       ; 00537d0b
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537d11
    FCOMP float ptr [EAX + 0x4]         ; 00537d14
    FNSTSW AX                           ; 00537d17
    SAHF                                ; 00537d19
    JA 0x0053799b                       ; 00537d1a
        ;   XREF to: 0053799b (CONDITIONAL_JUMP)  ; LAB_0053799b
    FLD float ptr [ESP + 0x80]          ; 00537d20
    FSUB float ptr [EBX + 0x11d4]       ; 00537d27
    MOV EAX,dword ptr [EBP + 0x24]      ; 00537d2d
    FCOMP float ptr [EAX + 0x8]         ; 00537d30
    FNSTSW AX                           ; 00537d33
    SAHF                                ; 00537d35
    JA 0x0053799b                       ; 00537d36
        ;   XREF to: 0053799b (CONDITIONAL_JUMP)  ; LAB_0053799b
    MOV EAX,[0x0207fc84]                ; 00537d3c | DAT_0207fc84
    LEA ECX,[EAX + 0x1]                 ; 00537d41
    MOV dword ptr [EAX*0x4 + 0x207fc88],EBX ; 00537d44 | DAT_0207fc88
    MOV dword ptr [0x0207fc84],ECX      ; 00537d4b | DAT_0207fc84
    JMP 0x0053799b                      ; 00537d51
        ;   XREF to: 0053799b (UNCONDITIONAL_JUMP)  ; LAB_0053799b
    FLD float ptr [EDX + 0x11c4]        ; 00537d56
        ;   Label: LAB_00537d56
    FADD float ptr [ESP + 0x54]         ; 00537d5c
    FSTP float ptr [ESP + 0x54]         ; 00537d60
    FLD float ptr [EDX + 0x11c8]        ; 00537d64
    FADD float ptr [ESP + 0x58]         ; 00537d6a
    FSTP float ptr [ESP + 0x58]         ; 00537d6e
    FLD float ptr [EDX + 0x11cc]        ; 00537d72
    FADD float ptr [ESP + 0x5c]         ; 00537d78
    INC ESI                             ; 00537d7c
    FSTP float ptr [ESP + 0x5c]         ; 00537d7d
    JMP 0x00537bd9                      ; 00537d81
        ;   XREF to: 00537bd9 (UNCONDITIONAL_JUMP)  ; LAB_00537bd9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00537d86
        ;   Label: LAB_00537d86
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00537d8d | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00537d93
    ADD EAX,ECX                         ; 00537d95
    MOV dword ptr [ESP + 0xb0],EAX      ; 00537d97
    FLD float ptr [ESP + 0xb0]          ; 00537d9e
    FMUL float ptr [EDX + 0x11dc]       ; 00537da5
    FLD1                                ; 00537dab
    FSUBRP                              ; 00537dad
    FLD ST0                             ; 00537daf
    FMUL float ptr [0x005d063f]         ; 00537db1 | DAT_005d063f
    FST ST1                             ; 00537db7
    FMUL float ptr [EDX + 0x11c4]       ; 00537db9
    FLD double ptr [0x005d0647]         ; 00537dbf | DAT_005d0647
    FXCH                                ; 00537dc5
    FMUL ST1                            ; 00537dc7
    FLD float ptr [ESP + 0x24]          ; 00537dc9
    FXCH                                ; 00537dcd
    FADD ST0,ST1                        ; 00537dcf
    FLD ST3                             ; 00537dd1
    FXCH                                ; 00537dd3
    FSTP ST2                            ; 00537dd5
    FXCH                                ; 00537dd7
    FSTP float ptr [ESP + 0x24]         ; 00537dd9
    FMUL float ptr [EDX + 0x11c8]       ; 00537ddd
    FMUL ST1                            ; 00537de3
    FADD float ptr [ESP + 0x28]         ; 00537de5
    FSTP float ptr [ESP + 0x28]         ; 00537de9
    FXCH                                ; 00537ded
    FMUL float ptr [EDX + 0x11cc]       ; 00537def
    FMULP                               ; 00537df5
    FADD float ptr [ESP + 0x2c]         ; 00537df7
    FSTP float ptr [ESP + 0x2c]         ; 00537dfb
    JMP 0x00537bd9                      ; 00537dff
        ;   XREF to: 00537bd9 (UNCONDITIONAL_JUMP)  ; LAB_00537bd9
    MOV EBX,0xaaaa                      ; 00537e04
        ;   Label: LAB_00537e04
    MOV dword ptr [ESP + 0x10],EBX      ; 00537e09
    MOV dword ptr [ESP + 0x14],EBX      ; 00537e0d
    MOV dword ptr [ESP + 0xc],EBX       ; 00537e11
    JMP 0x00537c16                      ; 00537e15
        ;   XREF to: 00537c16 (UNCONDITIONAL_JUMP)  ; LAB_00537c16

