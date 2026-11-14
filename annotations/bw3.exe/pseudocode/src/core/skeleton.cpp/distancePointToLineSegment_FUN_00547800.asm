; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_distancePointToLineSegment_FUN_00547800(CVector3f *line_start,CVector3f *line_end,CVector3f *test_point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   line_start
; CVector3f *      Stack[0x8]:4   line_end
; CVector3f *      Stack[0xc]:4   test_point
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547800
        ;   Label: core_skeleton.cpp_distancePointToLineSegment_FUN_00547800
    PUSH ESI                            ; 00547801
    PUSH EDI                            ; 00547802
    PUSH EBP                            ; 00547803
    MOV EBP,ESP                         ; 00547804
    SUB ESP,0x9c                        ; 00547806
    AND ESP,0xfffffff8                  ; 0054780c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054780f
    MOV EBX,dword ptr [EBP + 0x18]      ; 00547812
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00547815
    FLD float ptr [EBX]                 ; 00547818
    FLD float ptr [EBX + 0x4]           ; 0054781a
    FLD float ptr [EBX + 0x8]           ; 0054781d
    LEA EDI,[ESP + 0x34]                ; 00547820
    LEA ESI,[ESP + 0x10]                ; 00547824
    FXCH ST2                            ; 00547828
    FSUB float ptr [EDX]                ; 0054782a
    FXCH                                ; 0054782c
    FSUB float ptr [EDX + 0x4]          ; 0054782e
    FXCH ST2                            ; 00547831
    FSUB float ptr [EDX + 0x8]          ; 00547833
    FXCH                                ; 00547836
    FSTP float ptr [ESP + 0x10]         ; 00547838
    FXCH                                ; 0054783c
    FSTP float ptr [ESP + 0x14]         ; 0054783e
    FSTP float ptr [ESP + 0x18]         ; 00547842
    MOVSD ES:EDI,ESI                    ; 00547846
    MOVSD ES:EDI,ESI                    ; 00547847
    MOVSD ES:EDI,ESI                    ; 00547848
    FLD float ptr [ESP + 0x38]          ; 00547849
    FMUL ST0                            ; 0054784d
    FLD float ptr [ESP + 0x34]          ; 0054784f
    FMUL ST0                            ; 00547853
    FADDP                               ; 00547855
    FLD float ptr [ESP + 0x3c]          ; 00547857
    FMUL ST0                            ; 0054785b
    FADDP                               ; 0054785d
    FSQRT                               ; 0054785f
    FLDZ                                ; 00547861
    FXCH                                ; 00547863
    FSTP double ptr [ESP]               ; 00547865
    FCOMP double ptr [ESP]              ; 00547868
    FNSTSW AX                           ; 0054786b
    SAHF                                ; 0054786d
    JNC 0x0054792f                      ; 0054786e
        ;   XREF to: 0054792f (CONDITIONAL_JUMP)  ; LAB_0054792f
    FLD double ptr [ESP]                ; 00547874
    FLD1                                ; 00547877
    FLD float ptr [ESP + 0x34]          ; 00547879
    FXCH ST2                            ; 0054787d
    FSTP float ptr [ESP + 0x74]         ; 0054787f
    FDIV float ptr [ESP + 0x74]         ; 00547883
    FXCH                                ; 00547887
    FMUL ST1                            ; 00547889
    FLD float ptr [ESP + 0x38]          ; 0054788b
    FMUL ST2                            ; 0054788f
    FLD float ptr [ESP + 0x3c]          ; 00547891
    FMULP ST3                           ; 00547895
    FLD float ptr [ECX + 0x4]           ; 00547897
    FXCH                                ; 0054789a
    FSTP float ptr [ESP + 0x38]         ; 0054789c
    FMUL float ptr [ESP + 0x38]         ; 005478a0
    FLD float ptr [EDX + 0x4]           ; 005478a4
    FMUL float ptr [ESP + 0x38]         ; 005478a7
    FXCH ST2                            ; 005478ab
    FSTP float ptr [ESP + 0x34]         ; 005478ad
    FLD float ptr [ECX]                 ; 005478b1
    FMUL float ptr [ESP + 0x34]         ; 005478b3
    FLD float ptr [EDX]                 ; 005478b7
    FMUL float ptr [ESP + 0x34]         ; 005478b9
    FXCH ST4                            ; 005478bd
    FSTP float ptr [ESP + 0x3c]         ; 005478bf
    FXCH ST3                            ; 005478c3
    FADDP ST2,ST0                       ; 005478c5
    FADDP ST2,ST0                       ; 005478c7
    FLD float ptr [EDX + 0x8]           ; 005478c9
    FMUL float ptr [ESP + 0x3c]         ; 005478cc
    FLD float ptr [ECX + 0x8]           ; 005478d0
    FMUL float ptr [ESP + 0x3c]         ; 005478d3
    FXCH                                ; 005478d7
    FADDP ST2,ST0                       ; 005478d9
    FADDP ST2,ST0                       ; 005478db
    FSUBP                               ; 005478dd
    FLDZ                                ; 005478df
    FXCH                                ; 005478e1
    FSTP double ptr [ESP + 0x8]         ; 005478e3
    FCOMP double ptr [ESP + 0x8]        ; 005478e7
    FNSTSW AX                           ; 005478eb
    SAHF                                ; 005478ed
    JNC 0x0054792f                      ; 005478ee
        ;   XREF to: 0054792f (CONDITIONAL_JUMP)  ; LAB_0054792f
    FLD double ptr [ESP + 0x8]          ; 005478f0
    FCOMP double ptr [ESP]              ; 005478f4
    FNSTSW AX                           ; 005478f7
    SAHF                                ; 005478f9
    JC 0x00547949                       ; 005478fa
        ;   XREF to: 00547949 (CONDITIONAL_JUMP)  ; LAB_00547949
    FLD float ptr [ECX]                 ; 005478fc
    FSUB float ptr [EBX]                ; 005478fe
    FMUL ST0                            ; 00547900
    FLD float ptr [ECX + 0x4]           ; 00547902
    FSUB float ptr [EBX + 0x4]          ; 00547905
    FMUL ST0                            ; 00547908
    FLD float ptr [ECX + 0x8]           ; 0054790a
    FXCH                                ; 0054790d
    FADDP ST2,ST0                       ; 0054790f
    FSUB float ptr [EBX + 0x8]          ; 00547911
    FMUL ST0                            ; 00547914
        ;   Label: LAB_00547914
    FADDP                               ; 00547916
    FSQRT                               ; 00547918
    FSTP float ptr [ESP + 0x80]         ; 0054791a
    MOV EAX,dword ptr [ESP + 0x80]      ; 00547921
    MOV ESP,EBP                         ; 00547928
    POP EBP                             ; 0054792a
    POP EDI                             ; 0054792b
    POP ESI                             ; 0054792c
    POP EBX                             ; 0054792d
    RET                                 ; 0054792e
    FLD float ptr [ECX]                 ; 0054792f
        ;   Label: LAB_0054792f
    FSUB float ptr [EDX]                ; 00547931
    FMUL ST0                            ; 00547933
    FLD float ptr [ECX + 0x4]           ; 00547935
    FSUB float ptr [EDX + 0x4]          ; 00547938
    FMUL ST0                            ; 0054793b
    FLD float ptr [ECX + 0x8]           ; 0054793d
    FXCH                                ; 00547940
    FADDP ST2,ST0                       ; 00547942
    FSUB float ptr [EDX + 0x8]          ; 00547944
    JMP 0x00547914                      ; 00547947
        ;   XREF to: 00547914 (UNCONDITIONAL_JUMP)  ; LAB_00547914
    FLD float ptr [ESP + 0x34]          ; 00547949
        ;   Label: LAB_00547949
    FLD double ptr [ESP + 0x8]          ; 0054794d
    FSTP float ptr [ESP + 0x90]         ; 00547951
    FMUL float ptr [ESP + 0x90]         ; 00547958
    FLD float ptr [ESP + 0x38]          ; 0054795f
    FMUL float ptr [ESP + 0x90]         ; 00547963
    FLD float ptr [ESP + 0x3c]          ; 0054796a
    FMUL float ptr [ESP + 0x90]         ; 0054796e
    LEA EDI,[ESP + 0x40]                ; 00547975
    LEA ESI,[ESP + 0x28]                ; 00547979
    FXCH ST2                            ; 0054797d
    FSTP float ptr [ESP + 0x28]         ; 0054797f
    FSTP float ptr [ESP + 0x2c]         ; 00547983
    FSTP float ptr [ESP + 0x30]         ; 00547987
    MOVSD ES:EDI,ESI                    ; 0054798b
    MOVSD ES:EDI,ESI                    ; 0054798c
    MOVSD ES:EDI,ESI                    ; 0054798d
    FLD float ptr [EDX]                 ; 0054798e
    FLD float ptr [EDX + 0x4]           ; 00547990
    FLD float ptr [EDX + 0x8]           ; 00547993
    LEA EDI,[ESP + 0x1c]                ; 00547996
    LEA ESI,[ESP + 0x4c]                ; 0054799a
    FXCH ST2                            ; 0054799e
    FADD float ptr [ESP + 0x40]         ; 005479a0
    FXCH                                ; 005479a4
    FADD float ptr [ESP + 0x44]         ; 005479a6
    FXCH ST2                            ; 005479aa
    FADD float ptr [ESP + 0x48]         ; 005479ac
    FXCH                                ; 005479b0
    FSTP float ptr [ESP + 0x4c]         ; 005479b2
    FXCH                                ; 005479b6
    FSTP float ptr [ESP + 0x50]         ; 005479b8
    FSTP float ptr [ESP + 0x54]         ; 005479bc
    MOVSD ES:EDI,ESI                    ; 005479c0
    MOVSD ES:EDI,ESI                    ; 005479c1
    MOVSD ES:EDI,ESI                    ; 005479c2
    FLD float ptr [ECX]                 ; 005479c3
    FSUB float ptr [ESP + 0x1c]         ; 005479c5
    FMUL ST0                            ; 005479c9
    FLD float ptr [ECX + 0x4]           ; 005479cb
    FSUB float ptr [ESP + 0x20]         ; 005479ce
    FMUL ST0                            ; 005479d2
    FLD float ptr [ECX + 0x8]           ; 005479d4
    FXCH                                ; 005479d7
    FADDP ST2,ST0                       ; 005479d9
    FSUB float ptr [ESP + 0x24]         ; 005479db
    JMP 0x00547914                      ; 005479df
        ;   XREF to: 00547914 (UNCONDITIONAL_JUMP)  ; LAB_00547914

