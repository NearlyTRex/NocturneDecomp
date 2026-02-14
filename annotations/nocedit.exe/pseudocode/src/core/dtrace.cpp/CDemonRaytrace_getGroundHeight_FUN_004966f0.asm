; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   pos
; int *            Stack[0xc]:4   hit_flag
; CVector3f *      Stack[0x10]:4   normal_out
; Local Variables:
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_bugs.cpp_CBugs_FUN_004257f0 at 00425b37
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 at 005716f7
;
; Referenced Globals:
;   float g_GroundCheckOffsetAbove = 2
;   float g_GroundCheckOffsetBelow = -10
;   CVector3f g_TempNormal0
;   undefined4 g_TempNormal0.y
;   undefined4 g_TempNormal0.z
;   CVector3f g_TempNormal1
;   undefined4 g_TempNormal1.y
;   undefined4 g_TempNormal1.z
;   CVector3f g_TempNormal2
;   undefined4 g_TempNormal2.y
;   undefined4 g_TempNormal2.z
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004966f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
    PUSH ESI                            ; 004966f1
    PUSH EDI                            ; 004966f2
    PUSH EBP                            ; 004966f3
    MOV EBP,ESP                         ; 004966f4
    SUB ESP,0x4c                        ; 004966f6
    AND ESP,0xfffffff8                  ; 004966f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004966fc
    MOV ECX,dword ptr [EBP + 0x18]      ; 004966ff
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00496702
    MOV EDI,dword ptr [EBP + 0x20]      ; 00496705
    MOV EAX,dword ptr [ECX]             ; 00496708
    MOV dword ptr [ESP + 0x4],EAX       ; 0049670a
    LEA EAX,[ECX + 0x4]                 ; 0049670e
    MOV dword ptr [ESP + 0x48],EAX      ; 00496711
    MOV EAX,dword ptr [EAX]             ; 00496715
    LEA EDX,[ECX + 0x8]                 ; 00496717
    MOV dword ptr [ESP + 0x8],EAX       ; 0049671a
    MOV EAX,dword ptr [EDX]             ; 0049671e
    MOV dword ptr [ESP + 0xc],EAX       ; 00496720
    MOV EAX,dword ptr [ECX]             ; 00496724
    MOV dword ptr [ESP + 0x10],EAX      ; 00496726
    MOV EAX,dword ptr [ESP + 0x48]      ; 0049672a
    FLD float ptr [ESP + 0x4]           ; 0049672e
    MOV EAX,dword ptr [EAX]             ; 00496732
    FLD float ptr [ESP + 0x8]           ; 00496734
    MOV dword ptr [ESP + 0x14],EAX      ; 00496738
    FADD float ptr [0x00622b6a]         ; 0049673c | g_GroundCheckOffsetAbove
    FLD float ptr [ESP + 0x14]          ; 00496742
    MOV EAX,dword ptr [EDX]             ; 00496746
    FXCH                                ; 00496748
    FSTP float ptr [ESP + 0x8]          ; 0049674a
    FADD float ptr [0x00622b6e]         ; 0049674e | g_GroundCheckOffsetBelow
    MOV dword ptr [ESP + 0x18],EAX      ; 00496754
    FSTP float ptr [ESP + 0x14]         ; 00496758
    FSUB float ptr [EBX + 0x10]         ; 0049675c
    FDIV float ptr [EBX + 0x28]         ; 0049675f
    FLD float ptr [ESP + 0x8]           ; 00496762
    FSUB float ptr [EBX + 0x14]         ; 00496766
    FLD1                                ; 00496769
    FDIV float ptr [EBX + 0x2c]         ; 0049676b
    FLD float ptr [ESP + 0xc]           ; 0049676e
    FSUB float ptr [EBX + 0x18]         ; 00496772
    FDIV float ptr [EBX + 0x30]         ; 00496775
    FLD float ptr [ESP + 0x14]          ; 00496778
    FSUB float ptr [EBX + 0x14]         ; 0049677c
    FXCH ST3                            ; 0049677f
    FMUL ST2                            ; 00496781
    FXCH ST3                            ; 00496783
    FMULP ST2                           ; 00496785
    FLD float ptr [ESP + 0x10]          ; 00496787
    FSUB float ptr [ESP + 0x4]          ; 0049678b
    FLD float ptr [ESP + 0x18]          ; 0049678f
    FXCH ST5                            ; 00496793
    CALL crt_math.c_round_FUN_005fe6b0  ; 00496795
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x40]        ; 0049679a
    FLD float ptr [ESP + 0x14]          ; 0049679e
    FXCH ST5                            ; 004967a2
    FSUB float ptr [ESP + 0xc]          ; 004967a4
    FXCH ST5                            ; 004967a8
    FSUB float ptr [ESP + 0x8]          ; 004967aa
    FXCH ST2                            ; 004967ae
    CALL crt_math.c_round_FUN_005fe6b0  ; 004967b0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 004967b5
    FSTP float ptr [ESP + 0x28]         ; 004967b9
    FSTP float ptr [ESP + 0x2c]         ; 004967bd
    FXCH                                ; 004967c1
    CALL crt_math.c_round_FUN_005fe6b0  ; 004967c3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004967c8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004967ca
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004967cf
    FISTP dword ptr [ESP + 0x34]        ; 004967d1
    FISTP dword ptr [ESP + 0x44]        ; 004967d5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004967d9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004967dd
    FSTP float ptr [ESP + 0x30]         ; 004967e1
    CMP EAX,EDX                         ; 004967e5
    JL 0x00496885                       ; 004967e7
        ;   XREF to: 00496885 (CONDITIONAL_JUMP)  ; LAB_00496885
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004967ed
        ;   Label: LAB_004967ed
    PUSH ECX                            ; 004967f1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004967f2
    PUSH EAX                            ; 004967f6
    MOV EDX,dword ptr [ESP + 0x48]      ; 004967f7
    PUSH EDX                            ; 004967fb
    PUSH EBX                            ; 004967fc
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0 ; 004967fd
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00496802
    TEST EAX,EAX                        ; 00496805
    JZ 0x00496870                       ; 00496807
        ;   XREF to: 00496870 (CONDITIONAL_JUMP)  ; LAB_00496870
    PUSH ESI                            ; 00496809
    LEA EDX,[ESP + 0x20]                ; 0049680a
    PUSH EDX                            ; 0049680e
    LEA EDX,[ESP + 0x30]                ; 0049680f
    PUSH EDX                            ; 00496813
    LEA EDX,[ESP + 0x10]                ; 00496814
    PUSH EDX                            ; 00496818
    PUSH EAX                            ; 00496819
    CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0 ; 0049681a
        ;   XREF to: 004578f0 (UNCONDITIONAL_CALL)  ; float core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0(CDemonCube * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * hit_normal, ...)
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049681f
    FLD float ptr [ESP + 0x5c]          ; 00496823
    ADD ESP,0x14                        ; 00496827
    FST float ptr [ESP]                 ; 0049682a
    FLD1                                ; 0049682d
    FCOMPP                              ; 0049682f
    FNSTSW AX                           ; 00496831
    SAHF                                ; 00496833
    JC 0x00496870                       ; 00496834
        ;   XREF to: 00496870 (CONDITIONAL_JUMP)  ; LAB_00496870
    TEST EDI,EDI                        ; 00496836
    JZ 0x00496856                       ; 00496838
        ;   XREF to: 00496856 (CONDITIONAL_JUMP)  ; LAB_00496856
    LEA EAX,[ESP + 0x1c]                ; 0049683a
    CMP EDI,EAX                         ; 0049683e
    JZ 0x00496856                       ; 00496840
        ;   XREF to: 00496856 (CONDITIONAL_JUMP)  ; LAB_00496856
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00496842
    MOV dword ptr [EDI],EAX             ; 00496846
    MOV EAX,dword ptr [ESP + 0x20]      ; 00496848
    MOV dword ptr [EDI + 0x4],EAX       ; 0049684c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049684f
    MOV dword ptr [EDI + 0x8],EAX       ; 00496853
    FLD float ptr [ESP]                 ; 00496856
        ;   Label: LAB_00496856
    FMUL float ptr [ESP + 0x2c]         ; 00496859
    FADD float ptr [ESP + 0x8]          ; 0049685d
    FSTP float ptr [ESP + 0x38]         ; 00496861
    MOV EAX,dword ptr [ESP + 0x38]      ; 00496865
    MOV ESP,EBP                         ; 00496869
    POP EBP                             ; 0049686b
    POP EDI                             ; 0049686c
    POP ESI                             ; 0049686d
    POP EBX                             ; 0049686e
    RET                                 ; 0049686f
    MOV ECX,dword ptr [ESP + 0x34]      ; 00496870
        ;   Label: LAB_00496870
    DEC ECX                             ; 00496874
    MOV EDX,dword ptr [ESP + 0x44]      ; 00496875
    MOV dword ptr [ESP + 0x34],ECX      ; 00496879
    CMP ECX,EDX                         ; 0049687d
    JGE 0x004967ed                      ; 0049687f
        ;   XREF to: 004967ed (CONDITIONAL_JUMP)  ; LAB_004967ed
    TEST ESI,ESI                        ; 00496885
        ;   Label: LAB_00496885
    JZ 0x0049688f                       ; 00496887
        ;   XREF to: 0049688f (CONDITIONAL_JUMP)  ; LAB_0049688f
    MOV dword ptr [ESI],0x1             ; 00496889
    TEST EDI,EDI                        ; 0049688f
        ;   Label: LAB_0049688f
    JZ 0x004968a7                       ; 00496891
        ;   XREF to: 004968a7 (CONDITIONAL_JUMP)  ; LAB_004968a7
    MOV dword ptr [EDI + 0x4],0x3f800000 ; 00496893
    MOV dword ptr [EDI + 0x8],0x0       ; 0049689a
    MOV dword ptr [EDI],0x0             ; 004968a1
    MOV EAX,0x15c4818                   ; 004968a7 | g_TempNormal2
        ;   Label: LAB_004968a7
    CMP EAX,0x3f87558                   ; 004968ac | g_ZeroVector
    JZ 0x004968d5                       ; 004968b1
        ;   XREF to: 004968d5 (CONDITIONAL_JUMP)  ; LAB_004968d5
    FLD float ptr [0x03f87558]          ; 004968b3 | g_ZeroVector
    FLD float ptr [0x03f87560]          ; 004968b9 | g_ZeroVector.z
    MOV EAX,[0x03f8755c]                ; 004968bf | g_ZeroVector.y
    MOV [0x015c481c],EAX                ; 004968c4 | g_TempNormal2.y
    FSTP float ptr [0x015c4820]         ; 004968c9 | g_TempNormal2.z
    FSTP float ptr [0x015c4818]         ; 004968cf | g_TempNormal2
    MOV EAX,0x15c480c                   ; 004968d5 | g_TempNormal1
        ;   Label: LAB_004968d5
    CMP EAX,0x15c4818                   ; 004968da | g_TempNormal2
    JZ 0x00496903                       ; 004968df
        ;   XREF to: 00496903 (CONDITIONAL_JUMP)  ; LAB_00496903
    FLD float ptr [0x015c4818]          ; 004968e1 | g_TempNormal2
    FLD float ptr [0x015c4820]          ; 004968e7 | g_TempNormal2.z
    MOV EAX,[0x015c481c]                ; 004968ed | g_TempNormal2.y
    MOV [0x015c4810],EAX                ; 004968f2 | g_TempNormal1.y
    FSTP float ptr [0x015c4814]         ; 004968f7 | g_TempNormal1.z
    FSTP float ptr [0x015c480c]         ; 004968fd | g_TempNormal1
    MOV EAX,0x15c4800                   ; 00496903 | g_TempNormal0
        ;   Label: LAB_00496903
    CMP EAX,0x15c480c                   ; 00496908 | g_TempNormal1
    JZ 0x00496931                       ; 0049690d
        ;   XREF to: 00496931 (CONDITIONAL_JUMP)  ; LAB_00496931
    FLD float ptr [0x015c480c]          ; 0049690f | g_TempNormal1
    FLD float ptr [0x015c4814]          ; 00496915 | g_TempNormal1.z
    MOV EAX,[0x015c4810]                ; 0049691b | g_TempNormal1.y
    MOV [0x015c4804],EAX                ; 00496920 | g_TempNormal0.y
    FSTP float ptr [0x015c4808]         ; 00496925 | g_TempNormal0.z
    FSTP float ptr [0x015c4800]         ; 0049692b | g_TempNormal0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00496931
        ;   Label: LAB_00496931
    MOV dword ptr [ESP + 0x38],EAX      ; 00496935
    MOV EAX,dword ptr [ESP + 0x38]      ; 00496939
    MOV ESP,EBP                         ; 0049693d
    POP EBP                             ; 0049693f
    POP EDI                             ; 00496940
    POP ESI                             ; 00496941
    POP EBX                             ; 00496942
    RET                                 ; 00496943

