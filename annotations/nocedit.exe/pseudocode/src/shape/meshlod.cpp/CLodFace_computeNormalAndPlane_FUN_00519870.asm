; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodFace_computeNormalAndPlane_FUN_00519870(CLodFace *this_ptr,CVector3f *vertex0_pos,CVector3f *vertex1_pos,CVector3f *vertex2_pos)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex0_pos
; CVector3f *      Stack[0xc]:4   vertex1_pos
; CVector3f *      Stack[0x10]:4   vertex2_pos
; Local Variables:
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x20]:4  local_20
; CLodFace *       Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830 at 00519860
;
; Referenced Globals:
;   double DOUBLE_00637a55 = 0.333333333333333
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519870
        ;   Label: shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870
    PUSH ESI                            ; 00519871
    PUSH EDI                            ; 00519872
    PUSH EBP                            ; 00519873
    MOV EBP,ESP                         ; 00519874
    SUB ESP,0x74                        ; 00519876
    AND ESP,0xfffffff8                  ; 00519879
    MOV ESI,dword ptr [EBP + 0x18]      ; 0051987c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0051987f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00519882
    FLD float ptr [EBX]                 ; 00519885
    FSUB float ptr [ESI]                ; 00519887
    FSTP float ptr [ESP + 0x40]         ; 00519889
    FLD float ptr [EBX + 0x4]           ; 0051988d
    FSUB float ptr [ESI + 0x4]          ; 00519890
    FSTP float ptr [ESP + 0x44]         ; 00519893
    FLD float ptr [EBX + 0x8]           ; 00519897
    FSUB float ptr [ESI + 0x8]          ; 0051989a
    FSTP float ptr [ESP + 0x48]         ; 0051989d
    FLD float ptr [EDI]                 ; 005198a1
    FSUB float ptr [EBX]                ; 005198a3
    FSTP float ptr [ESP + 0x58]         ; 005198a5
    FLD float ptr [EDI + 0x4]           ; 005198a9
    FSUB float ptr [EBX + 0x4]          ; 005198ac
    FLD float ptr [ESP + 0x40]          ; 005198af
    FXCH                                ; 005198b3
    FSTP float ptr [ESP + 0x5c]         ; 005198b5
    FMUL float ptr [ESP + 0x5c]         ; 005198b9
    FLD float ptr [ESP + 0x48]          ; 005198bd
    FMUL float ptr [ESP + 0x58]         ; 005198c1
    FLD float ptr [ESP + 0x44]          ; 005198c5
    FMUL float ptr [ESP + 0x58]         ; 005198c9
    FLD float ptr [EDI + 0x8]           ; 005198cd
    FSUB float ptr [EBX + 0x8]          ; 005198d0
    FLD float ptr [ESP + 0x44]          ; 005198d3
    FXCH                                ; 005198d7
    FSTP float ptr [ESP + 0x60]         ; 005198d9
    FMUL float ptr [ESP + 0x60]         ; 005198dd
    FLD float ptr [ESP + 0x40]          ; 005198e1
    FMUL float ptr [ESP + 0x60]         ; 005198e5
    FLD float ptr [ESP + 0x48]          ; 005198e9
    FMUL float ptr [ESP + 0x5c]         ; 005198ed
    MOV EDX,dword ptr [EBP + 0x14]      ; 005198f1
    LEA EAX,[ESP + 0x4c]                ; 005198f4
    FXCH ST3                            ; 005198f8
    FSUBP ST5,ST0                       ; 005198fa
    ADD EDX,0x44                        ; 005198fc
    FXCH ST4                            ; 005198ff
    FSTP float ptr [ESP + 0x54]         ; 00519901
    FXCH ST3                            ; 00519905
    FSUBP ST2,ST0                       ; 00519907
    FSUBP ST2,ST0                       ; 00519909
    FSTP float ptr [ESP + 0x50]         ; 0051990b
    FSTP float ptr [ESP + 0x4c]         ; 0051990f
    CMP EDX,EAX                         ; 00519913
    JNZ 0x00519b05                      ; 00519915
        ;   XREF to: 00519b05 (CONDITIONAL_JUMP)  ; LAB_00519b05
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051991b
        ;   Label: LAB_0051991b
    FLD float ptr [EDX + 0x48]          ; 0051991e
    FMUL ST0                            ; 00519921
    FLD float ptr [EDX + 0x44]          ; 00519923
    FMUL ST0                            ; 00519926
    FADDP                               ; 00519928
    FLD float ptr [EDX + 0x4c]          ; 0051992a
    FMUL ST0                            ; 0051992d
    FADDP                               ; 0051992f
    FSQRT                               ; 00519931
    ADD EDX,0x44                        ; 00519933
    FST float ptr [ESP]                 ; 00519936
    FLDZ                                ; 00519939
    FCOMPP                              ; 0051993b
    FNSTSW AX                           ; 0051993d
    SAHF                                ; 0051993f
    JNC 0x00519b1e                      ; 00519940
        ;   XREF to: 00519b1e (CONDITIONAL_JUMP)  ; LAB_00519b1e
    FLD1                                ; 00519946
    FLD float ptr [EDX]                 ; 00519948
    FXCH                                ; 0051994a
    FDIV float ptr [ESP]                ; 0051994c
    FXCH                                ; 0051994f
    FMUL ST1                            ; 00519951
    FLD float ptr [EDX + 0x4]           ; 00519953
    FMUL ST2                            ; 00519956
    FLD float ptr [EDX + 0x8]           ; 00519958
    FMULP ST3                           ; 0051995b
    FXCH                                ; 0051995d
    FSTP float ptr [EDX]                ; 0051995f
    FSTP float ptr [EDX + 0x4]          ; 00519961
    FSTP float ptr [EDX + 0x8]          ; 00519964
    FLD float ptr [ESI + 0x4]           ; 00519967
    FMUL float ptr [EDX + 0x4]          ; 0051996a
    FLD float ptr [EBX + 0x4]           ; 0051996d
    FMUL float ptr [EDX + 0x4]          ; 00519970
    FLD float ptr [EDI + 0x4]           ; 00519973
    FMUL float ptr [EDX + 0x4]          ; 00519976
    FLD float ptr [ESI]                 ; 00519979
    FMUL float ptr [EDX]                ; 0051997b
    FLD float ptr [EBX]                 ; 0051997d
    FMUL float ptr [EDX]                ; 0051997f
    FLD float ptr [EDI]                 ; 00519981
    FXCH ST2                            ; 00519983
    FADDP ST5,ST0                       ; 00519985
    FXCH                                ; 00519987
    FMUL float ptr [EDX]                ; 00519989
    FLD float ptr [ESI + 0x8]           ; 0051998b
    FMUL float ptr [EDX + 0x8]          ; 0051998e
    FXCH ST2                            ; 00519991
    FADDP ST4,ST0                       ; 00519993
    FADDP ST2,ST0                       ; 00519995
    FLD float ptr [EBX + 0x8]           ; 00519997
    FMUL float ptr [EDX + 0x8]          ; 0051999a
    FLD float ptr [EDI + 0x8]           ; 0051999d
    FMUL float ptr [EDX + 0x8]          ; 005199a0
    FXCH ST2                            ; 005199a3
    FADDP ST5,ST0                       ; 005199a5
    FADDP ST3,ST0                       ; 005199a7
    FADDP                               ; 005199a9
    FXCH                                ; 005199ab
    FADDP ST2,ST0                       ; 005199ad
    FADDP                               ; 005199af
    FMUL double ptr [0x00637a55]        ; 005199b1 | DOUBLE_00637a55
    PUSH 0x6598c0                       ; 005199b7 | g_CVectorTypeInfo
    MOV EAX,dword ptr [EBP + 0x14]      ; 005199bc
    PUSH 0x3                            ; 005199bf
    FSTP float ptr [EAX + 0x50]         ; 005199c1
    LEA EAX,[ESP + 0xc]                 ; 005199c4
    PUSH EAX                            ; 005199c8
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 005199c9
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EAX,[ESP + 0x10]                ; 005199ce
    ADD ESP,0xc                         ; 005199d2
    CMP EAX,ESI                         ; 005199d5
    JZ 0x005199ed                       ; 005199d7
        ;   XREF to: 005199ed (CONDITIONAL_JUMP)  ; LAB_005199ed
    MOV EAX,dword ptr [ESI]             ; 005199d9
    MOV dword ptr [ESP + 0x4],EAX       ; 005199db
    MOV EAX,dword ptr [ESI + 0x4]       ; 005199df
    MOV dword ptr [ESP + 0x8],EAX       ; 005199e2
    MOV EAX,dword ptr [ESI + 0x8]       ; 005199e6
    MOV dword ptr [ESP + 0xc],EAX       ; 005199e9
    LEA EAX,[ESP + 0x10]                ; 005199ed
        ;   Label: LAB_005199ed
    CMP EAX,EBX                         ; 005199f1
    JZ 0x00519a09                       ; 005199f3
        ;   XREF to: 00519a09 (CONDITIONAL_JUMP)  ; LAB_00519a09
    MOV EAX,dword ptr [EBX]             ; 005199f5
    MOV dword ptr [ESP + 0x10],EAX      ; 005199f7
    MOV EAX,dword ptr [EBX + 0x4]       ; 005199fb
    MOV dword ptr [ESP + 0x14],EAX      ; 005199fe
    MOV EAX,dword ptr [EBX + 0x8]       ; 00519a02
    MOV dword ptr [ESP + 0x18],EAX      ; 00519a05
    LEA EAX,[ESP + 0x1c]                ; 00519a09
        ;   Label: LAB_00519a09
    CMP EAX,EDI                         ; 00519a0d
    JNZ 0x00519b31                      ; 00519a0f
        ;   XREF to: 00519b31 (CONDITIONAL_JUMP)  ; LAB_00519b31
    MOV EDX,dword ptr [EBP + 0x14]      ; 00519a15
        ;   Label: LAB_00519a15
    MOV ECX,dword ptr [EBP + 0x14]      ; 00519a18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00519a1b
    LEA EBX,[ESP + 0x4]                 ; 00519a1e
    XOR ESI,ESI                         ; 00519a22
    ADD EDX,0x54                        ; 00519a24
    ADD ECX,0x44                        ; 00519a27
    MOV dword ptr [ESP + 0x6c],EAX      ; 00519a2a
    LEA EAX,[ESI + 0x1]                 ; 00519a2e
        ;   Label: LAB_00519a2e
    MOV dword ptr [ESP + 0x70],EBX      ; 00519a31
    CMP EAX,0x3                         ; 00519a35
    JL 0x00519a3c                       ; 00519a38
        ;   XREF to: 00519a3c (CONDITIONAL_JUMP)  ; LAB_00519a3c
    XOR EAX,EAX                         ; 00519a3a
    IMUL EAX,EAX,0xc                    ; 00519a3c
        ;   Label: LAB_00519a3c
    MOV dword ptr [ESP + 0x68],EAX      ; 00519a3f
    LEA EAX,[ESP + 0x4]                 ; 00519a43
    ADD EAX,dword ptr [ESP + 0x68]      ; 00519a47
    MOV EDI,dword ptr [ESP + 0x70]      ; 00519a4b
    FLD float ptr [EAX]                 ; 00519a4f
    FSUB float ptr [EDI]                ; 00519a51
    FSTP float ptr [ESP + 0x34]         ; 00519a53
    FLD float ptr [EAX + 0x4]           ; 00519a57
    FSUB float ptr [EDI + 0x4]          ; 00519a5a
    FSTP float ptr [ESP + 0x38]         ; 00519a5d
    FLD float ptr [EAX + 0x8]           ; 00519a61
    FSUB float ptr [EDI + 0x8]          ; 00519a64
    FLD float ptr [ESP + 0x38]          ; 00519a67
    FXCH                                ; 00519a6b
    FSTP float ptr [ESP + 0x3c]         ; 00519a6d
    FMUL float ptr [ECX + 0x8]          ; 00519a71
    FLD float ptr [ESP + 0x3c]          ; 00519a74
    FMUL float ptr [ECX + 0x4]          ; 00519a78
    FSUBP                               ; 00519a7b
    FLD float ptr [ESP + 0x3c]          ; 00519a7d
    FXCH                                ; 00519a81
    FSTP float ptr [ESP + 0x28]         ; 00519a83
    FMUL float ptr [ECX]                ; 00519a87
    FLD float ptr [ESP + 0x34]          ; 00519a89
    FMUL float ptr [ECX + 0x8]          ; 00519a8d
    FSUBP                               ; 00519a90
    FLD float ptr [ESP + 0x34]          ; 00519a92
    FXCH                                ; 00519a96
    FSTP float ptr [ESP + 0x2c]         ; 00519a98
    FMUL float ptr [ECX + 0x4]          ; 00519a9c
    FLD float ptr [ESP + 0x38]          ; 00519a9f
    FMUL float ptr [ECX]                ; 00519aa3
    FSUBP                               ; 00519aa5
    LEA EAX,[ESP + 0x28]                ; 00519aa7
    FSTP float ptr [ESP + 0x30]         ; 00519aab
    CMP EDX,EAX                         ; 00519aaf
    JZ 0x00519ac7                       ; 00519ab1
        ;   XREF to: 00519ac7 (CONDITIONAL_JUMP)  ; LAB_00519ac7
    MOV EAX,dword ptr [ESP + 0x28]      ; 00519ab3
    MOV dword ptr [EDX],EAX             ; 00519ab7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00519ab9
    MOV dword ptr [EDX + 0x4],EAX       ; 00519abd
    MOV EAX,dword ptr [ESP + 0x30]      ; 00519ac0
    MOV dword ptr [EDX + 0x8],EAX       ; 00519ac4
    FLD float ptr [EDX + 0x4]           ; 00519ac7
        ;   Label: LAB_00519ac7
    FMUL float ptr [EBX + 0x4]          ; 00519aca
    FLD float ptr [EDX]                 ; 00519acd
    FMUL float ptr [EBX]                ; 00519acf
    FADDP                               ; 00519ad1
    FLD float ptr [EDX + 0x8]           ; 00519ad3
    FMUL float ptr [EBX + 0x8]          ; 00519ad6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00519ad9
    ADD EDX,0xc                         ; 00519add
    ADD EBX,0xc                         ; 00519ae0
    INC ESI                             ; 00519ae3
    ADD EAX,0x4                         ; 00519ae4
    FADDP                               ; 00519ae7
    MOV dword ptr [ESP + 0x6c],EAX      ; 00519ae9
    FSTP float ptr [EAX + 0x74]         ; 00519aed
    CMP ESI,0x3                         ; 00519af0
    JL 0x00519a2e                       ; 00519af3
        ;   XREF to: 00519a2e (CONDITIONAL_JUMP)  ; LAB_00519a2e
    MOV EAX,0x1                         ; 00519af9
    MOV ESP,EBP                         ; 00519afe
        ;   Label: LAB_00519afe
    POP EBP                             ; 00519b00
    POP EDI                             ; 00519b01
    POP ESI                             ; 00519b02
    POP EBX                             ; 00519b03
    RET                                 ; 00519b04
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00519b05
        ;   Label: LAB_00519b05
    MOV dword ptr [EDX],EAX             ; 00519b09
    MOV EAX,dword ptr [ESP + 0x50]      ; 00519b0b
    MOV dword ptr [EDX + 0x4],EAX       ; 00519b0f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00519b12
    MOV dword ptr [EDX + 0x8],EAX       ; 00519b16
    JMP 0x0051991b                      ; 00519b19
        ;   XREF to: 0051991b (UNCONDITIONAL_JUMP)  ; LAB_0051991b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00519b1e
        ;   Label: LAB_00519b1e
    MOV dword ptr [EAX + 0x40],0x1      ; 00519b21
    XOR EAX,EAX                         ; 00519b28
    MOV ESP,EBP                         ; 00519b2a
    POP EBP                             ; 00519b2c
    POP EDI                             ; 00519b2d
    POP ESI                             ; 00519b2e
    POP EBX                             ; 00519b2f
    RET                                 ; 00519b30
    MOV EAX,dword ptr [EDI]             ; 00519b31
        ;   Label: LAB_00519b31
    MOV dword ptr [ESP + 0x1c],EAX      ; 00519b33
    MOV EAX,dword ptr [EDI + 0x4]       ; 00519b37
    MOV dword ptr [ESP + 0x20],EAX      ; 00519b3a
    MOV EAX,dword ptr [EDI + 0x8]       ; 00519b3e
    MOV dword ptr [ESP + 0x24],EAX      ; 00519b41
    JMP 0x00519a15                      ; 00519b45
        ;   XREF to: 00519a15 (UNCONDITIONAL_JUMP)  ; LAB_00519a15

