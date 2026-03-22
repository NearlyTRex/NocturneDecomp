; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CQuaternion4f *  Stack[0x10]:4   out_orient
; Local Variables:
; double           Stack[-0x90]:8  local_90
; float            Stack[-0x7c]:4  local_7c
; float            Stack[-0x78]:4  local_78
; CQuaternion4f    Stack[-0x74]:16  local_74
; CQuaternion4f    Stack[-0x64]:16  local_64
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_course.cpp_CCourse_evaluate_FUN_00442710 at 00442739
;   core_platfrm.cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530 at 0054e616
;
; Referenced Globals:
;   double DOUBLE_00618fab = 0.00100000000000000
;
; Called Functions:
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004427a0
        ;   Label: core_course.cpp_CCourse_interpolate_FUN_004427a0
    PUSH ESI                            ; 004427a1
    PUSH EDI                            ; 004427a2
    PUSH EBP                            ; 004427a3
    MOV EBP,ESP                         ; 004427a4
    SUB ESP,0x80                        ; 004427a6
    AND ESP,0xfffffff8                  ; 004427ac
    MOV ESI,dword ptr [EBP + 0x14]      ; 004427af
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004427b2
    MOV EDX,dword ptr [ESI + 0x8]       ; 004427b5
    TEST EDX,EDX                        ; 004427b8
    JNZ 0x00442913                      ; 004427ba
        ;   XREF to: 00442913 (CONDITIONAL_JUMP)  ; LAB_00442913
    FLD float ptr [EBP + 0x18]          ; 004427c0
    FLDZ                                ; 004427c3
    FCOMPP                              ; 004427c5
    FNSTSW AX                           ; 004427c7
    SAHF                                ; 004427c9
    JC 0x004429d1                       ; 004427ca
        ;   XREF to: 004429d1 (CONDITIONAL_JUMP)  ; LAB_004429d1
    MOV dword ptr [ESP + 0x78],EDX      ; 004427d0
    MOV dword ptr [ESP + 0x18],EDX      ; 004427d4
    XOR EDI,EDI                         ; 004427d8
        ;   Label: LAB_004427d8
    MOV EAX,dword ptr [ESP + 0x78]      ; 004427da
        ;   Label: LAB_004427da
    FLD float ptr [ESP + 0x18]          ; 004427de
    SHL EAX,0x2                         ; 004427e2
    FSTP double ptr [ESP]               ; 004427e5
    LEA ECX,[EAX*0x8 + 0x0]             ; 004427e8
    FLD double ptr [ESP]                ; 004427ef
    SUB ECX,EAX                         ; 004427f2
    FCOMP double ptr [0x00618fab]       ; 004427f4 | DOUBLE_00618fab
    FNSTSW AX                           ; 004427fa
    SAHF                                ; 004427fc
    JBE 0x00442a1f                      ; 004427fd
        ;   XREF to: 00442a1f (CONDITIONAL_JUMP)  ; LAB_00442a1f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00442803
    MOV EDX,EAX                         ; 0044280a
    SHL EAX,0x3                         ; 0044280c
    SUB EAX,EDX                         ; 0044280f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00442811
    ADD EAX,EDX                         ; 00442814
    FLD float ptr [ESP + 0x18]          ; 00442816
    FLD float ptr [EAX]                 ; 0044281a
    FMUL ST1                            ; 0044281c
    FSTP float ptr [ESP + 0x48]         ; 0044281e
    FLD float ptr [EAX + 0x4]           ; 00442822
    FMUL ST1                            ; 00442825
    FSTP float ptr [ESP + 0x4c]         ; 00442827
    FMUL float ptr [EAX + 0x8]          ; 0044282b
    FLD1                                ; 0044282e
    FSUB double ptr [ESP]               ; 00442830
    FXCH                                ; 00442833
    FSTP float ptr [ESP + 0x50]         ; 00442835
    MOV EAX,dword ptr [ESI + 0x4]       ; 00442839
    FSTP float ptr [ESP + 0x74]         ; 0044283c
    FLD float ptr [ECX + EAX*0x1]       ; 00442840
    FMUL float ptr [ESP + 0x74]         ; 00442843
    FSTP float ptr [ESP + 0x3c]         ; 00442847
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 0044284b
    FMUL float ptr [ESP + 0x74]         ; 0044284f
    FSTP float ptr [ESP + 0x40]         ; 00442853
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00442857
    FMUL float ptr [ESP + 0x74]         ; 0044285b
    LEA EDX,[ESP + 0x60]                ; 0044285f
    FLD float ptr [ESP + 0x3c]          ; 00442863
    FADD float ptr [ESP + 0x48]         ; 00442867
    FLD float ptr [ESP + 0x40]          ; 0044286b
    FXCH                                ; 0044286f
    FSTP float ptr [ESP + 0x60]         ; 00442871
    LEA EAX,[ESP + 0x54]                ; 00442875
    FADD float ptr [ESP + 0x4c]         ; 00442879
    FXCH                                ; 0044287d
    FST float ptr [ESP + 0x44]          ; 0044287f
    FADD float ptr [ESP + 0x50]         ; 00442883
    FXCH                                ; 00442887
    FSTP float ptr [ESP + 0x64]         ; 00442889
    FSTP float ptr [ESP + 0x68]         ; 0044288d
    CMP EAX,EDX                         ; 00442891
    JZ 0x004428ad                       ; 00442893
        ;   XREF to: 004428ad (CONDITIONAL_JUMP)  ; LAB_004428ad
    MOV EAX,dword ptr [ESP + 0x60]      ; 00442895
    MOV dword ptr [ESP + 0x54],EAX      ; 00442899
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044289d
    MOV dword ptr [ESP + 0x58],EAX      ; 004428a1
    MOV EAX,dword ptr [ESP + 0x68]      ; 004428a5
    MOV dword ptr [ESP + 0x5c],EAX      ; 004428a9
    SHL EDI,0x2                         ; 004428ad
        ;   Label: LAB_004428ad
    LEA EAX,[EDI*0x8 + 0x0]             ; 004428b0
    MOV ESI,dword ptr [ESI + 0x4]       ; 004428b7
    SUB EAX,EDI                         ; 004428ba
    ADD EAX,ESI                         ; 004428bc
    ADD EAX,0xc                         ; 004428be
    PUSH dword ptr [ESP + 0x18]         ; 004428c1
    PUSH EAX                            ; 004428c5
    MOV EAX,dword ptr [ESP + 0x80]      ; 004428c6
    SHL EAX,0x2                         ; 004428cd
    MOV EDX,EAX                         ; 004428d0
    SHL EAX,0x3                         ; 004428d2
    SUB EAX,EDX                         ; 004428d5
    ADD EAX,ESI                         ; 004428d7
    ADD EAX,0xc                         ; 004428d9
    PUSH EAX                            ; 004428dc
    LEA ESI,[ESP + 0x38]                ; 004428dd
    LEA EDI,[ESP + 0x28]                ; 004428e1
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 004428e5
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x38]                ; 004428ea
    ADD ESP,0xc                         ; 004428ee
    JMP 0x006054e4                      ; 004428f1
        ;   XREF to: 006054e4 (UNCONDITIONAL_JUMP)  ; LAB_006054e4
        ;   Label: LAB_004428f1
    CMP EBX,EAX                         ; 004428f9
        ;   Label: LAB_004428f9
    JNZ 0x00442a5e                      ; 004428fb
        ;   XREF to: 00442a5e (CONDITIONAL_JUMP)  ; LAB_00442a5e
    MOV EDI,dword ptr [EBP + 0x20]      ; 00442901
    LEA ESI,[ESP + 0x1c]                ; 00442904
    JMP 0x00605509                      ; 00442908
        ;   XREF to: 00605509 (UNCONDITIONAL_JUMP)  ; LAB_00605509
    POP EBP                             ; 0044290e
        ;   Label: LAB_0044290e
    POP EDI                             ; 0044290f
    POP ESI                             ; 00442910
    POP EBX                             ; 00442911
    RET                                 ; 00442912
    FLD float ptr [EBP + 0x18]          ; 00442913
        ;   Label: LAB_00442913
    FLDZ                                ; 00442916
    FILD dword ptr [ESI]                ; 00442918
    FSTP float ptr [ESP + 0x10]         ; 0044291a
    FXCH                                ; 0044291e
    FSTP double ptr [ESP + 0x8]         ; 00442920
    FCOMP double ptr [ESP + 0x8]        ; 00442924
    FNSTSW AX                           ; 00442928
    SAHF                                ; 0044292a
    JBE 0x004429a6                      ; 0044292b
        ;   XREF to: 004429a6 (CONDITIONAL_JUMP)  ; LAB_004429a6
    FLD float ptr [EBP + 0x18]          ; 0044292d
    FCHS                                ; 00442930
    FDIV float ptr [ESP + 0x10]         ; 00442932
    SUB ESP,0x8                         ; 00442936
    FSTP double ptr [ESP]               ; 00442939
    CALL crt_math.c_floor_FUN_005feb90  ; 0044293c
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 00442941
    MOV dword ptr [ESP + 0x78],EDX      ; 00442945
    FLD double ptr [ESP + 0x74]         ; 00442949
    ADD ESP,0x8                         ; 0044294d
    FMUL float ptr [ESP + 0x10]         ; 00442950
    FADD double ptr [ESP + 0x8]         ; 00442954
    FST float ptr [ESP + 0x14]          ; 00442958
    FLDZ                                ; 0044295c
    FCOMPP                              ; 0044295e
    FNSTSW AX                           ; 00442960
    SAHF                                ; 00442962
    JBE 0x00442971                      ; 00442963
        ;   XREF to: 00442971 (CONDITIONAL_JUMP)  ; LAB_00442971
    FLD float ptr [ESP + 0x14]          ; 00442965
    FADD float ptr [ESP + 0x10]         ; 00442969
    FSTP float ptr [ESP + 0x14]         ; 0044296d
        ;   Label: LAB_0044296d
    FLD float ptr [ESP + 0x14]          ; 00442971
        ;   Label: LAB_00442971
    FLD ST0                             ; 00442975
    CALL crt_math.c_round_FUN_005fe6b0  ; 00442977
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 0044297c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00442980
    MOV ECX,dword ptr [ESI]             ; 00442984
    MOV dword ptr [ESP + 0x7c],EAX      ; 00442986
    MOV EDI,dword ptr [ESP + 0x78]      ; 0044298a
    FILD dword ptr [ESP + 0x7c]         ; 0044298e
    FSUBP                               ; 00442992
    INC EDI                             ; 00442994
    FSTP float ptr [ESP + 0x18]         ; 00442995
    CMP EDI,ECX                         ; 00442999
    JL 0x004427da                       ; 0044299b
        ;   XREF to: 004427da (CONDITIONAL_JUMP)  ; LAB_004427da
    JMP 0x004427d8                      ; 004429a1
        ;   XREF to: 004427d8 (UNCONDITIONAL_JUMP)  ; LAB_004427d8
    FLD float ptr [EBP + 0x18]          ; 004429a6
        ;   Label: LAB_004429a6
    FDIV float ptr [ESP + 0x10]         ; 004429a9
    SUB ESP,0x8                         ; 004429ad
    FSTP double ptr [ESP]               ; 004429b0
    CALL crt_math.c_floor_FUN_005feb90  ; 004429b3
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x74],EAX      ; 004429b8
    MOV dword ptr [ESP + 0x78],EDX      ; 004429bc
    FLD double ptr [ESP + 0x74]         ; 004429c0
    ADD ESP,0x8                         ; 004429c4
    FMUL float ptr [ESP + 0x10]         ; 004429c7
    FSUBR double ptr [ESP + 0x8]        ; 004429cb
    JMP 0x0044296d                      ; 004429cf
        ;   XREF to: 0044296d (UNCONDITIONAL_JUMP)  ; LAB_0044296d
    MOV EDX,dword ptr [ESI]             ; 004429d1
        ;   Label: LAB_004429d1
    DEC EDX                             ; 004429d3
    MOV dword ptr [ESP + 0x7c],EDX      ; 004429d4
    FILD dword ptr [ESP + 0x7c]         ; 004429d8
    FCOMP float ptr [EBP + 0x18]        ; 004429dc
    FNSTSW AX                           ; 004429df
    SAHF                                ; 004429e1
    JA 0x004429f5                       ; 004429e2
        ;   XREF to: 004429f5 (CONDITIONAL_JUMP)  ; LAB_004429f5
    MOV dword ptr [ESP + 0x78],EDX      ; 004429e4
    XOR ECX,ECX                         ; 004429e8
    MOV EDI,EDX                         ; 004429ea
    MOV dword ptr [ESP + 0x18],ECX      ; 004429ec
    JMP 0x004427da                      ; 004429f0
        ;   XREF to: 004427da (UNCONDITIONAL_JUMP)  ; LAB_004427da
    FLD float ptr [EBP + 0x18]          ; 004429f5
        ;   Label: LAB_004429f5
    FLD ST0                             ; 004429f8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004429fa
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 004429ff
    MOV EAX,dword ptr [ESP + 0x78]      ; 00442a03
    MOV dword ptr [ESP + 0x7c],EAX      ; 00442a07
    MOV EDI,dword ptr [ESP + 0x78]      ; 00442a0b
    FILD dword ptr [ESP + 0x7c]         ; 00442a0f
    FSUBP                               ; 00442a13
    INC EDI                             ; 00442a15
    FSTP float ptr [ESP + 0x18]         ; 00442a16
    JMP 0x004427da                      ; 00442a1a
        ;   XREF to: 004427da (UNCONDITIONAL_JUMP)  ; LAB_004427da
    MOV EDI,dword ptr [ESI + 0x4]       ; 00442a1f
        ;   Label: LAB_00442a1f
    LEA EAX,[ESP + 0x54]                ; 00442a22
    ADD EDI,ECX                         ; 00442a26
    CMP EAX,EDI                         ; 00442a28
    JZ 0x00442a40                       ; 00442a2a
        ;   XREF to: 00442a40 (CONDITIONAL_JUMP)  ; LAB_00442a40
    MOV EAX,dword ptr [EDI]             ; 00442a2c
    MOV dword ptr [ESP + 0x54],EAX      ; 00442a2e
    MOV EAX,dword ptr [EDI + 0x4]       ; 00442a32
    MOV dword ptr [ESP + 0x58],EAX      ; 00442a35
    MOV EAX,dword ptr [EDI + 0x8]       ; 00442a39
    MOV dword ptr [ESP + 0x5c],EAX      ; 00442a3c
    MOV EAX,dword ptr [ESP + 0x78]      ; 00442a40
        ;   Label: LAB_00442a40
    SHL EAX,0x2                         ; 00442a44
    MOV EDX,EAX                         ; 00442a47
    SHL EAX,0x3                         ; 00442a49
    MOV ESI,dword ptr [ESI + 0x4]       ; 00442a4c
    SUB EAX,EDX                         ; 00442a4f
    LEA EDI,[ESP + 0x1c]                ; 00442a51
    LEA ESI,[ESI + EAX*0x1 + 0xc]       ; 00442a55
    JMP 0x004428f1                      ; 00442a59
        ;   XREF to: 004428f1 (UNCONDITIONAL_JUMP)  ; LAB_004428f1
    MOV EAX,dword ptr [ESP + 0x54]      ; 00442a5e
        ;   Label: LAB_00442a5e
    MOV dword ptr [EBX],EAX             ; 00442a62
    MOV EAX,dword ptr [ESP + 0x58]      ; 00442a64
    MOV dword ptr [EBX + 0x4],EAX       ; 00442a68
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00442a6b
    MOV dword ptr [EBX + 0x8],EAX       ; 00442a6f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00442a72
    LEA ESI,[ESP + 0x1c]                ; 00442a75
    JMP 0x0060552c                      ; 00442a79
        ;   XREF to: 0060552c (UNCONDITIONAL_JUMP)  ; LAB_0060552c
    POP EBP                             ; 00442a7f
        ;   Label: LAB_00442a7f
    POP EDI                             ; 00442a80
    POP ESI                             ; 00442a81
    POP EBX                             ; 00442a82
    RET                                 ; 00442a83
    MOV ECX,dword ptr [ESI]             ; 006054e4
        ;   Label: LAB_006054e4
    MOV dword ptr [EDI],ECX             ; 006054e6
    MOV ECX,dword ptr [ESI + 0x4]       ; 006054e8
    MOV dword ptr [EDI + 0x4],ECX       ; 006054eb
    MOV ECX,dword ptr [ESI + 0x8]       ; 006054ee
    MOV dword ptr [EDI + 0x8],ECX       ; 006054f1
    MOV ECX,dword ptr [ESI + 0xc]       ; 006054f4
    MOV dword ptr [EDI + 0xc],ECX       ; 006054f7
    ADD ESI,0x10                        ; 006054fa
    ADD EDI,0x10                        ; 006054fd
    LEA EAX,[ESP + 0x54]                ; 00605500
    JMP 0x004428f9                      ; 00605504
        ;   XREF to: 004428f9 (UNCONDITIONAL_JUMP)  ; LAB_004428f9
    MOV ECX,dword ptr [ESI]             ; 00605509
        ;   Label: LAB_00605509
    MOV dword ptr [EDI],ECX             ; 0060550b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060550d
    MOV dword ptr [EDI + 0x4],ECX       ; 00605510
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605513
    MOV dword ptr [EDI + 0x8],ECX       ; 00605516
    MOV ECX,dword ptr [ESI + 0xc]       ; 00605519
    MOV dword ptr [EDI + 0xc],ECX       ; 0060551c
    ADD ESI,0x10                        ; 0060551f
    ADD EDI,0x10                        ; 00605522
    MOV ESP,EBP                         ; 00605525
    JMP 0x0044290e                      ; 00605527
        ;   XREF to: 0044290e (UNCONDITIONAL_JUMP)  ; LAB_0044290e
    MOV ECX,dword ptr [ESI]             ; 0060552c
        ;   Label: LAB_0060552c
    MOV dword ptr [EDI],ECX             ; 0060552e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00605530
    MOV dword ptr [EDI + 0x4],ECX       ; 00605533
    MOV ECX,dword ptr [ESI + 0x8]       ; 00605536
    MOV dword ptr [EDI + 0x8],ECX       ; 00605539
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060553c
    MOV dword ptr [EDI + 0xc],ECX       ; 0060553f
    ADD ESI,0x10                        ; 00605542
    ADD EDI,0x10                        ; 00605545
    MOV ESP,EBP                         ; 00605548
    JMP 0x00442a7f                      ; 0060554a
        ;   XREF to: 00442a7f (UNCONDITIONAL_JUMP)  ; LAB_00442a7f

