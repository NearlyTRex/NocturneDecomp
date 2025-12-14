; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_skeleton.cpp_distancePointToLineSegment_FUN_005996e0(CVector3f * line_start, CVector3f * line_end, CVector3f * test_point)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   line_start
; CVector3f *      Stack[0x8]:4   line_end
; CVector3f *      Stack[0xc]:4   test_point
; Local Variables:
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005996e0
        ;   Label: core_skeleton.cpp_distancePointToLineSegment_FUN_005996e0
    PUSH EBP                            ; 005996e1
    MOV EBP,ESP                         ; 005996e2
    SUB ESP,0x78                        ; 005996e4
    AND ESP,0xfffffff8                  ; 005996e7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005996ea
    MOV EBX,dword ptr [EBP + 0x10]      ; 005996ed
    MOV EDX,dword ptr [EBP + 0x14]      ; 005996f0
    FLD float ptr [EBX]                 ; 005996f3
    FSUB float ptr [ECX]                ; 005996f5
    FSTP float ptr [ESP + 0x10]         ; 005996f7
    FLD float ptr [EBX + 0x4]           ; 005996fb
    FSUB float ptr [ECX + 0x4]          ; 005996fe
    FST float ptr [ESP + 0x14]          ; 00599701
    FMUL float ptr [ESP + 0x14]         ; 00599705
    FLD float ptr [ESP + 0x10]          ; 00599709
    FMUL ST0                            ; 0059970d
    FLD float ptr [EBX + 0x8]           ; 0059970f
    FSUB float ptr [ECX + 0x8]          ; 00599712
    FXCH                                ; 00599715
    FADDP ST2,ST0                       ; 00599717
    FST float ptr [ESP + 0x18]          ; 00599719
    FMUL float ptr [ESP + 0x18]         ; 0059971d
    FADDP                               ; 00599721
    FSQRT                               ; 00599723
    FLDZ                                ; 00599725
    FXCH                                ; 00599727
    FSTP double ptr [ESP + 0x8]         ; 00599729
    FCOMP double ptr [ESP + 0x8]        ; 0059972d
    FNSTSW AX                           ; 00599731
    SAHF                                ; 00599733
    JNC 0x005997e8                      ; 00599734
        ;   XREF to: 005997e8 (CONDITIONAL_JUMP)  ; LAB_005997e8
    FLD double ptr [ESP + 0x8]          ; 0059973a
    FLD1                                ; 0059973e
    FLD float ptr [ESP + 0x10]          ; 00599740
    FXCH ST2                            ; 00599744
    FSTP float ptr [ESP + 0x5c]         ; 00599746
    FDIV float ptr [ESP + 0x5c]         ; 0059974a
    FXCH                                ; 0059974e
    FMUL ST1                            ; 00599750
    FLD float ptr [ESP + 0x14]          ; 00599752
    FMUL ST2                            ; 00599756
    FLD float ptr [ESP + 0x18]          ; 00599758
    FMULP ST3                           ; 0059975c
    FXCH                                ; 0059975e
    FSTP float ptr [ESP + 0x10]         ; 00599760
    FSTP float ptr [ESP + 0x14]         ; 00599764
    FSTP float ptr [ESP + 0x18]         ; 00599768
    FLD float ptr [ECX + 0x4]           ; 0059976c
    FMUL float ptr [ESP + 0x14]         ; 0059976f
    FLD float ptr [EDX + 0x4]           ; 00599773
    FMUL float ptr [ESP + 0x14]         ; 00599776
    FLD float ptr [ECX]                 ; 0059977a
    FMUL float ptr [ESP + 0x10]         ; 0059977c
    FLD float ptr [EDX]                 ; 00599780
    FMUL float ptr [ESP + 0x10]         ; 00599782
    FXCH                                ; 00599786
    FADDP ST3,ST0                       ; 00599788
    FADDP                               ; 0059978a
    FLD float ptr [ECX + 0x8]           ; 0059978c
    FMUL float ptr [ESP + 0x18]         ; 0059978f
    FLD float ptr [EDX + 0x8]           ; 00599793
    FMUL float ptr [ESP + 0x18]         ; 00599796
    FXCH                                ; 0059979a
    FADDP ST3,ST0                       ; 0059979c
    FADDP                               ; 0059979e
    FSUBRP                              ; 005997a0
    FLDZ                                ; 005997a2
    FXCH                                ; 005997a4
    FSTP double ptr [ESP]               ; 005997a6
    FCOMP double ptr [ESP]              ; 005997a9
    FNSTSW AX                           ; 005997ac
    SAHF                                ; 005997ae
    JNC 0x005997e8                      ; 005997af
        ;   XREF to: 005997e8 (CONDITIONAL_JUMP)  ; LAB_005997e8
    FLD double ptr [ESP]                ; 005997b1
    FCOMP double ptr [ESP + 0x8]        ; 005997b4
    FNSTSW AX                           ; 005997b8
    SAHF                                ; 005997ba
    JC 0x00599802                       ; 005997bb
        ;   XREF to: 00599802 (CONDITIONAL_JUMP)  ; LAB_00599802
    FLD float ptr [EDX]                 ; 005997bd
    FSUB float ptr [EBX]                ; 005997bf
    FMUL ST0                            ; 005997c1
    FLD float ptr [EDX + 0x4]           ; 005997c3
    FSUB float ptr [EBX + 0x4]          ; 005997c6
    FMUL ST0                            ; 005997c9
    FLD float ptr [EDX + 0x8]           ; 005997cb
    FXCH                                ; 005997ce
    FADDP ST2,ST0                       ; 005997d0
    FSUB float ptr [EBX + 0x8]          ; 005997d2
    FMUL ST0                            ; 005997d5
        ;   Label: LAB_005997d5
    FADDP                               ; 005997d7
    FSQRT                               ; 005997d9
    FSTP float ptr [ESP + 0x6c]         ; 005997db
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005997df
    MOV ESP,EBP                         ; 005997e3
    POP EBP                             ; 005997e5
    POP EBX                             ; 005997e6
    RET                                 ; 005997e7
    FLD float ptr [EDX]                 ; 005997e8
        ;   Label: LAB_005997e8
    FSUB float ptr [ECX]                ; 005997ea
    FMUL ST0                            ; 005997ec
    FLD float ptr [EDX + 0x4]           ; 005997ee
    FSUB float ptr [ECX + 0x4]          ; 005997f1
    FMUL ST0                            ; 005997f4
    FLD float ptr [EDX + 0x8]           ; 005997f6
    FXCH                                ; 005997f9
    FADDP ST2,ST0                       ; 005997fb
    FSUB float ptr [ECX + 0x8]          ; 005997fd
    JMP 0x005997d5                      ; 00599800
        ;   XREF to: 005997d5 (UNCONDITIONAL_JUMP)  ; LAB_005997d5
    FLD float ptr [ESP + 0x10]          ; 00599802
        ;   Label: LAB_00599802
    FLD double ptr [ESP]                ; 00599806
    FSTP float ptr [ESP + 0x74]         ; 00599809
    FMUL float ptr [ESP + 0x74]         ; 0059980d
    FLD float ptr [ESP + 0x14]          ; 00599811
    FMUL float ptr [ESP + 0x74]         ; 00599815
    FLD float ptr [ESP + 0x18]          ; 00599819
    FMUL float ptr [ESP + 0x74]         ; 0059981d
    FXCH ST2                            ; 00599821
    FSTP float ptr [ESP + 0x1c]         ; 00599823
    FSTP float ptr [ESP + 0x20]         ; 00599827
    FSTP float ptr [ESP + 0x24]         ; 0059982b
    FLD float ptr [ECX]                 ; 0059982f
    FADD float ptr [ESP + 0x1c]         ; 00599831
    FSTP float ptr [ESP + 0x28]         ; 00599835
    FLD float ptr [ECX + 0x4]           ; 00599839
    FADD float ptr [ESP + 0x20]         ; 0059983c
    FSTP float ptr [ESP + 0x2c]         ; 00599840
    FLD float ptr [ECX + 0x8]           ; 00599844
    FADD float ptr [ESP + 0x24]         ; 00599847
    FSTP float ptr [ESP + 0x30]         ; 0059984b
    FLD float ptr [EDX]                 ; 0059984f
    FSUB float ptr [ESP + 0x28]         ; 00599851
    FMUL ST0                            ; 00599855
    FLD float ptr [EDX + 0x4]           ; 00599857
    FSUB float ptr [ESP + 0x2c]         ; 0059985a
    FMUL ST0                            ; 0059985e
    FLD float ptr [EDX + 0x8]           ; 00599860
    FXCH                                ; 00599863
    FADDP ST2,ST0                       ; 00599865
    FSUB float ptr [ESP + 0x30]         ; 00599867
    FMUL ST0                            ; 0059986b
    FADDP                               ; 0059986d
    FSQRT                               ; 0059986f
    FSTP float ptr [ESP + 0x6c]         ; 00599871
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00599875
    MOV ESP,EBP                         ; 00599879
    POP EBP                             ; 0059987b
    POP EBX                             ; 0059987c
    RET                                 ; 0059987d

