; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_CWeather_setOriginAndRotation_FUN_005557d0(int *param_1,float *param_2,int *param_3)
;
; Local Variables:
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
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508e12
;
; Referenced Globals:
;   undefined4 DAT_00597ca9
;   undefined4 DAT_00597cb1
;   undefined4 DAT_00597cb9
;   undefined4 DAT_00597cc1
;   undefined4 DAT_00597cc5
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_02ddfa28
;   undefined4 DAT_02ddfa2c
;   undefined4 DAT_02ddfa30
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005557d0
        ;   Label: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005557d0
    PUSH ESI                            ; 005557d1
    PUSH EDI                            ; 005557d2
    PUSH EBP                            ; 005557d3
    MOV EBP,ESP                         ; 005557d4
    SUB ESP,0x40                        ; 005557d6
    AND ESP,0xfffffff8                  ; 005557d9
    MOV EDI,dword ptr [EBP + 0x18]      ; 005557dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005557df
    ADD EAX,0x8                         ; 005557e2
    CMP EAX,EDI                         ; 005557e5
    JNZ 0x005559bb                      ; 005557e7
        ;   XREF to: 005559bb (CONDITIONAL_JUMP)  ; LAB_005559bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005557ed
        ;   Label: LAB_005557ed
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005557f0
    ADD EAX,0x14                        ; 005557f3
    CMP EAX,EDX                         ; 005557f6
    JZ 0x0055580a                       ; 005557f8
        ;   XREF to: 0055580a (CONDITIONAL_JUMP)  ; LAB_0055580a
    MOV ECX,dword ptr [EDX]             ; 005557fa
    MOV dword ptr [EAX],ECX             ; 005557fc
    MOV ECX,dword ptr [EDX + 0x4]       ; 005557fe
    MOV dword ptr [EAX + 0x4],ECX       ; 00555801
    MOV ECX,dword ptr [EDX + 0x8]       ; 00555804
    MOV dword ptr [EAX + 0x8],ECX       ; 00555807
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055580a
        ;   Label: LAB_0055580a
    CMP dword ptr [EAX],0x0             ; 0055580d
    JZ 0x005559b4                       ; 00555810
        ;   XREF to: 005559b4 (CONDITIONAL_JUMP)  ; LAB_005559b4
    MOV EBX,0x2ddfa28                   ; 00555816
    XOR ESI,ESI                         ; 0055581b
    PUSH 0x42480000                     ; 0055581d
        ;   Label: LAB_0055581d
    PUSH 0x40a00000                     ; 00555822
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555827
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x44],EAX      ; 0055582c
    FLD float ptr [ESP + 0x44]          ; 00555830
    ADD ESP,0x8                         ; 00555834
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00555837
    FSTP float ptr [ESP + 0x38]         ; 0055583a
    FLD float ptr [EAX + 0x4]           ; 0055583e
    FLD ST0                             ; 00555841
    FADD double ptr [0x00597cb1]        ; 00555843 | DAT_00597cb1
    SUB ESP,0x4                         ; 00555849
    FSTP float ptr [ESP]                ; 0055584c
    FADD double ptr [0x00597cb9]        ; 0055584f | DAT_00597cb9
    SUB ESP,0x4                         ; 00555855
    FSTP float ptr [ESP]                ; 00555858
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0055585b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x44],EAX      ; 00555860
    FLD float ptr [ESP + 0x44]          ; 00555864
    ADD ESP,0x8                         ; 00555868
    FLD ST0                             ; 0055586b
    FSIN                                ; 0055586d
    FXCH                                ; 0055586f
    FCOS                                ; 00555871
    FLD float ptr [ESP + 0x38]          ; 00555873
    FXCH ST2                            ; 00555877
    FMUL ST2                            ; 00555879
    FADD float ptr [EDI]                ; 0055587b
    FXCH                                ; 0055587d
    FMULP ST2                           ; 0055587f
    FSTP float ptr [ESP + 0x18]         ; 00555881
    MOV EAX,dword ptr [EDI + 0x4]       ; 00555885
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555888
    MOV EDX,ESP                         ; 0055588c
    FADD float ptr [EDI + 0x8]          ; 0055588e
    LEA EAX,[ESP + 0x18]                ; 00555891
    FSTP float ptr [ESP + 0x20]         ; 00555895
    CMP EDX,EAX                         ; 00555899
    JZ 0x005558b4                       ; 0055589b
        ;   XREF to: 005558b4 (CONDITIONAL_JUMP)  ; LAB_005558b4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055589d
    MOV dword ptr [ESP],EAX             ; 005558a1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005558a4
    MOV dword ptr [ESP + 0x4],EAX       ; 005558a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 005558ac
    MOV dword ptr [ESP + 0x8],EAX       ; 005558b0
    LEA EAX,[ESP + 0xc]                 ; 005558b4
        ;   Label: LAB_005558b4
    LEA EDX,[ESP + 0x18]                ; 005558b8
    CMP EAX,EDX                         ; 005558bc
    JZ 0x005558d8                       ; 005558be
        ;   XREF to: 005558d8 (CONDITIONAL_JUMP)  ; LAB_005558d8
    MOV EAX,dword ptr [ESP + 0x18]      ; 005558c0
    MOV dword ptr [ESP + 0xc],EAX       ; 005558c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005558c8
    MOV dword ptr [ESP + 0x10],EAX      ; 005558cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 005558d0
    MOV dword ptr [ESP + 0x14],EAX      ; 005558d4
    FLD float ptr [ESP + 0x4]           ; 005558d8
        ;   Label: LAB_005558d8
    MOV EAX,[0x005be368]                ; 005558dc | DAT_005be368
    FLD float ptr [ESP + 0x10]          ; 005558e1
    PUSH EAX                            ; 005558e5 | DAT_01e57284
    FXCH                                ; 005558e6
    FADD float ptr [0x00597cc1]         ; 005558e8 | DAT_00597cc1
    FXCH                                ; 005558ee
    FADD float ptr [0x00597cc5]         ; 005558f0 | DAT_00597cc5
    FXCH                                ; 005558f6
    FSTP float ptr [ESP + 0x8]          ; 005558f8
    FSTP float ptr [ESP + 0x14]         ; 005558fc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00555900
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 00555905
    MOV EDX,dword ptr [0x005be368]      ; 00555908 | DAT_005be368
    PUSH EDX                            ; 0055590e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0 ; 0055590f
        ;   XREF to: 005117e0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0()
    ADD ESP,0x4                         ; 00555914
    LEA EAX,[ESP + 0xc]                 ; 00555917
    PUSH EAX                            ; 0055591b
    LEA EAX,[ESP + 0x4]                 ; 0055591c
    PUSH EAX                            ; 00555920
    MOV ECX,dword ptr [0x005be368]      ; 00555921 | DAT_005be368
    PUSH ECX                            ; 00555927 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 00555928
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x48],EAX      ; 0055592d
    FLD float ptr [ESP + 0x48]          ; 00555931
    ADD ESP,0xc                         ; 00555935
    FLD float ptr [ESP + 0x10]          ; 00555938
    FSUB float ptr [ESP + 0x4]          ; 0055593c
    FMULP                               ; 00555940
    PUSH 0x3f800000                     ; 00555942
    FADD float ptr [ESP + 0x8]          ; 00555947
    PUSH 0x0                            ; 0055594b
    FST float ptr [ESI + 0x2de0388]     ; 0055594d
    FSTP double ptr [ESP + 0x34]        ; 00555953
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555957
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x44],EAX      ; 0055595c
    FLD float ptr [ESP + 0x44]          ; 00555960
    FMUL double ptr [0x00597ca9]        ; 00555964 | DAT_00597ca9
    ADD ESP,0x8                         ; 0055596a
    FADD double ptr [ESP + 0x2c]        ; 0055596d
    LEA EAX,[ESP + 0x18]                ; 00555971
    FSTP float ptr [ESP + 0x1c]         ; 00555975
    CMP EBX,EAX                         ; 00555979
    JZ 0x00555991                       ; 0055597b
        ;   XREF to: 00555991 (CONDITIONAL_JUMP)  ; LAB_00555991
    MOV EAX,dword ptr [ESP + 0x18]      ; 0055597d
    MOV dword ptr [EBX],EAX             ; 00555981 | DAT_02ddfa28
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00555983
    MOV dword ptr [EBX + 0x4],EAX       ; 00555987 | DAT_02ddfa2c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0055598a
    MOV dword ptr [EBX + 0x8],EAX       ; 0055598e | DAT_02ddfa30
    ADD ESI,0x4                         ; 00555991
        ;   Label: LAB_00555991
    ADD EBX,0xc                         ; 00555994
    CMP ESI,0x320                       ; 00555997
    JNZ 0x0055581d                      ; 0055599d
        ;   XREF to: 0055581d (CONDITIONAL_JUMP)  ; LAB_0055581d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005559a3
    MOV dword ptr [EAX + 0x28],0x0      ; 005559a6
    MOV dword ptr [EAX + 0x24],0x0      ; 005559ad
    MOV ESP,EBP                         ; 005559b4
        ;   Label: LAB_005559b4
    POP EBP                             ; 005559b6
    POP EDI                             ; 005559b7
    POP ESI                             ; 005559b8
    POP EBX                             ; 005559b9
    RET                                 ; 005559ba
    MOV EDX,dword ptr [EDI]             ; 005559bb
        ;   Label: LAB_005559bb
    MOV dword ptr [EAX],EDX             ; 005559bd
    MOV EDX,dword ptr [EDI + 0x4]       ; 005559bf
    MOV dword ptr [EAX + 0x4],EDX       ; 005559c2
    MOV EDX,dword ptr [EDI + 0x8]       ; 005559c5
    MOV dword ptr [EAX + 0x8],EDX       ; 005559c8
    JMP 0x005557ed                      ; 005559cb
        ;   XREF to: 005557ed (UNCONDITIONAL_JUMP)  ; LAB_005557ed

