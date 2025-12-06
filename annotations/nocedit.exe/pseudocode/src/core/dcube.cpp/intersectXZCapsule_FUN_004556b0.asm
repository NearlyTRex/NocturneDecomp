; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dcube.cpp_intersectXZCapsule_FUN_004556b0(SIntersectXZCylinder * cylinder)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_intersectTriangleWithXZCapsule_FUN_00455a30 at 00455de4
;   core_dcube.cpp_intersectXZCapsuleWithHeight_FUN_00455990 at 004559b9
;
; Referenced Globals:
;   float g_IntersectionConstantNegTwo = -2
;   float g_IntersectionConstantFour = 4
;   float g_IntersectionConstantTwo = 2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004556b0
        ;   Label: core_dcube.cpp_intersectXZCapsule_FUN_004556b0
    PUSH EBP                            ; 004556b1
    MOV EBP,ESP                         ; 004556b2
    SUB ESP,0x58                        ; 004556b4
    AND ESP,0xfffffff8                  ; 004556b7
    MOV EDX,dword ptr [EBP + 0xc]       ; 004556ba
    FLD float ptr [EDX + 0x44]          ; 004556bd
    FLD float ptr [EDX + 0x48]          ; 004556c0
    FSUB float ptr [EDX + 0x40]         ; 004556c3
    FXCH                                ; 004556c6
    FSUB float ptr [EDX + 0x3c]         ; 004556c8
    FXCH                                ; 004556cb
    FST float ptr [ESP + 0x1c]          ; 004556cd
    FCHS                                ; 004556d1
    FST float ptr [ESP + 0x50]          ; 004556d3
    FMUL float ptr [ESP + 0x50]         ; 004556d7
    FXCH                                ; 004556db
    FST float ptr [ESP + 0x20]          ; 004556dd
    FMUL float ptr [ESP + 0x20]         ; 004556e1
    FADDP                               ; 004556e5
    FLDZ                                ; 004556e7
    FXCH                                ; 004556e9
    FSTP double ptr [ESP + 0x10]        ; 004556eb
    FCOMP double ptr [ESP + 0x10]       ; 004556ef
    FNSTSW AX                           ; 004556f3
    SAHF                                ; 004556f5
    JNC 0x00455910                      ; 004556f6 | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x10]         ; 004556fc
    FSQRT                               ; 00455700
    FLD float ptr [ESP + 0x50]          ; 00455702
    FLD1                                ; 00455706
    FDIVRP ST2,ST0                      ; 00455708
    FMUL ST1                            ; 0045570a
    FLD float ptr [EDX + 0x10]          ; 0045570c
    FSUB float ptr [EDX + 0x3c]         ; 0045570f
    FXCH                                ; 00455712
    FSTP float ptr [ESP + 0x50]         ; 00455714
    FMUL float ptr [ESP + 0x50]         ; 00455718
    FLD float ptr [ESP + 0x20]          ; 0045571c
    FMULP ST2                           ; 00455720
    FLD float ptr [EDX + 0x14]          ; 00455722
    FSUB float ptr [EDX + 0x40]         ; 00455725
    FXCH ST2                            ; 00455728
    FSTP float ptr [ESP + 0x4c]         ; 0045572a
    FXCH                                ; 0045572e
    FMUL float ptr [ESP + 0x4c]         ; 00455730
    FADDP                               ; 00455734
    FLDZ                                ; 00455736
    FCOMPP                              ; 00455738
    FNSTSW AX                           ; 0045573a
    SAHF                                ; 0045573c
    JC 0x00455917                       ; 0045573d | LAB_00455917
        ;   XREF to: 00455917 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x18]          ; 00455743
        ;   Label: LAB_00455743
    FMUL float ptr [ESP + 0x50]         ; 00455746
    FLD float ptr [EDX + 0x1c]          ; 0045574a
    FMUL float ptr [ESP + 0x4c]         ; 0045574d
    FADDP                               ; 00455751
    FST float ptr [ESP + 0x28]          ; 00455753
    FLDZ                                ; 00455757
    FCOMPP                              ; 00455759
    FNSTSW AX                           ; 0045575b
    SAHF                                ; 0045575d
    JNC 0x00455910                      ; 0045575e | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x50]          ; 00455764
    FLD float ptr [EDX + 0x3c]          ; 00455768
    FMUL ST1                            ; 0045576b
    FLD float ptr [EDX + 0x10]          ; 0045576d
    FMULP ST2                           ; 00455770
    FLD float ptr [ESP + 0x4c]          ; 00455772
    FLD float ptr [EDX + 0x40]          ; 00455776
    FMUL ST1                            ; 00455779
    FLD float ptr [EDX + 0x14]          ; 0045577b
    FMULP ST2                           ; 0045577e
    FADDP ST2,ST0                       ; 00455780
    FADDP ST2,ST0                       ; 00455782
    FSTP float ptr [ESP + 0x40]         ; 00455784
    FCOMP float ptr [ESP + 0x40]        ; 00455788
    FNSTSW AX                           ; 0045578c
    SAHF                                ; 0045578e
    JA 0x00455910                       ; 0045578f | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x50]          ; 00455795
    FLD ST0                             ; 00455799
    FMUL float ptr [EDX + 0x20]         ; 0045579b
    FLD float ptr [ESP + 0x4c]          ; 0045579e
    FLD ST0                             ; 004557a2
    FMUL float ptr [EDX + 0x20]         ; 004557a4
    FXCH ST2                            ; 004557a7
    FADD float ptr [EDX + 0x10]         ; 004557a9
    FXCH ST2                            ; 004557ac
    FADD float ptr [EDX + 0x14]         ; 004557ae
    FXCH ST2                            ; 004557b1
    FST float ptr [ESP + 0x3c]          ; 004557b3
    FMULP ST3                           ; 004557b7
    FXCH                                ; 004557b9
    FST float ptr [ESP + 0x44]          ; 004557bb
    FMULP                               ; 004557bf
    FADDP                               ; 004557c1
    FSUBR float ptr [ESP + 0x40]        ; 004557c3
    FST float ptr [ESP + 0x24]          ; 004557c7
    FCOMP float ptr [ESP + 0x28]        ; 004557cb
    FNSTSW AX                           ; 004557cf
    SAHF                                ; 004557d1
    JA 0x00455910                       ; 004557d2 | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x24]          ; 004557d8
    FDIV float ptr [ESP + 0x28]         ; 004557dc
    FST float ptr [ESP + 0x24]          ; 004557e0
    FCOMP float ptr [EDX]               ; 004557e4
    FNSTSW AX                           ; 004557e6
    SAHF                                ; 004557e8
    JNC 0x00455910                      ; 004557e9 | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x20]          ; 004557ef
    FABS                                ; 004557f3
    FLD float ptr [ESP + 0x1c]          ; 004557f5
    FABS                                ; 004557f9
    FLD float ptr [ESP + 0x24]          ; 004557fb
    FLD float ptr [EDX + 0x18]          ; 004557ff
    FMUL ST1                            ; 00455802
    FLD float ptr [EDX + 0x1c]          ; 00455804
    FMULP ST2                           ; 00455807
    FADD float ptr [ESP + 0x3c]         ; 00455809
    FXCH                                ; 0045580d
    FADD float ptr [ESP + 0x44]         ; 0045580f
    FXCH                                ; 00455813
    FSTP float ptr [EDX + 0x54]         ; 00455815
    FSTP float ptr [EDX + 0x58]         ; 00455818
    FCOMPP                              ; 0045581b
    FNSTSW AX                           ; 0045581d
    SAHF                                ; 0045581f
    JNC 0x00455932                      ; 00455820 | LAB_00455932
        ;   XREF to: 00455932 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x54]          ; 00455826
    FSUB float ptr [EDX + 0x3c]         ; 00455829
    FDIV float ptr [ESP + 0x20]         ; 0045582c
    FSTP float ptr [EDX + 0x50]         ; 00455830
        ;   Label: LAB_00455830
    FLDZ                                ; 00455833
    FLD float ptr [EDX + 0x50]          ; 00455835
    FSTP double ptr [ESP + 0x8]         ; 00455838
    FCOMP double ptr [ESP + 0x8]        ; 0045583c
    FNSTSW AX                           ; 00455840
    SAHF                                ; 00455842
    JBE 0x00455941                      ; 00455843 | LAB_00455941
        ;   XREF to: 00455941 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x50],0x0      ; 00455849
    FLD float ptr [EDX + 0x3c]          ; 00455850
    MOV EAX,dword ptr [EDX + 0x40]      ; 00455853
    MOV dword ptr [EDX + 0x58],EAX      ; 00455856
        ;   Label: LAB_00455856
    FSTP float ptr [EDX + 0x54]         ; 00455859
    FLD float ptr [EDX + 0x18]          ; 0045585c
    FMUL ST0                            ; 0045585f
    FLD float ptr [EDX + 0x18]          ; 00455861
    FLD float ptr [EDX + 0x54]          ; 00455864
    FSUB float ptr [EDX + 0x10]         ; 00455867
    FXCH                                ; 0045586a
    FMUL ST1                            ; 0045586c
    FLD float ptr [EDX + 0x1c]          ; 0045586e
    FMUL ST0                            ; 00455871
    FLD ST2                             ; 00455873
    FMULP ST3                           ; 00455875
    FLD float ptr [EDX + 0x58]          ; 00455877
    FSUB float ptr [EDX + 0x14]         ; 0045587a
    FLD float ptr [EDX + 0x1c]          ; 0045587d
    FMUL ST1                            ; 00455880
    FLD ST1                             ; 00455882
    FXCH ST3                            ; 00455884
    FADDP ST6,ST0                       ; 00455886
    FXCH ST2                            ; 00455888
    FMULP                               ; 0045588a
    FXCH ST4                            ; 0045588c
    FST float ptr [ESP + 0x38]          ; 0045588e
    FMUL float ptr [0x0061a4f2]         ; 00455892 | float g_IntersectionConstantFour
    FXCH ST4                            ; 00455898
    FADDP ST3,ST0                       ; 0045589a
    FADDP                               ; 0045589c
    FLD float ptr [EDX + 0x20]          ; 0045589e
    FMUL ST0                            ; 004558a1
    FXCH                                ; 004558a3
    FMUL float ptr [0x0061a4ee]         ; 004558a5 | float g_IntersectionConstantNegTwo
    FXCH                                ; 004558ab
    FSUBP ST2,ST0                       ; 004558ad
    FXCH ST2                            ; 004558af
    FMULP                               ; 004558b1
    FXCH                                ; 004558b3
    FST float ptr [ESP + 0x48]          ; 004558b5
    FMUL float ptr [ESP + 0x48]         ; 004558b9
    FSUBRP                              ; 004558bd
    FLDZ                                ; 004558bf
    FXCH                                ; 004558c1
    FSTP float ptr [ESP + 0x18]         ; 004558c3
    FCOMP float ptr [ESP + 0x18]        ; 004558c7
    FNSTSW AX                           ; 004558cb
    SAHF                                ; 004558cd
    JA 0x00455910                       ; 004558ce | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x48]          ; 004558d0
    FCHS                                ; 004558d4
    FLD float ptr [ESP + 0x18]          ; 004558d6
    FSQRT                               ; 004558da
    FSUBP                               ; 004558dc
    FLD float ptr [ESP + 0x38]          ; 004558de
    FMUL float ptr [0x0061a4f6]         ; 004558e2 | float g_IntersectionConstantTwo
    FDIVP                               ; 004558e8
    FLDZ                                ; 004558ea
    FXCH                                ; 004558ec
    FST float ptr [EDX + 0x4c]          ; 004558ee
    FSTP double ptr [ESP]               ; 004558f1
    FCOMP double ptr [ESP]              ; 004558f4
    FNSTSW AX                           ; 004558f7
    SAHF                                ; 004558f9
    JA 0x00455910                       ; 004558fa | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD1                                ; 004558fc
    FCOMP double ptr [ESP]              ; 004558fe
    FNSTSW AX                           ; 00455901
    SAHF                                ; 00455903
    JC 0x00455910                       ; 00455904 | LAB_00455910
        ;   XREF to: 00455910 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x4c]          ; 00455906
    FCOMP float ptr [EDX]               ; 00455909
    FNSTSW AX                           ; 0045590b
    SAHF                                ; 0045590d
    JC 0x00455978                       ; 0045590e | LAB_00455978
        ;   XREF to: 00455978 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00455910
        ;   Label: LAB_00455910
    MOV ESP,EBP                         ; 00455912
    POP EBP                             ; 00455914
    POP EBX                             ; 00455915
    RET                                 ; 00455916
    MOV BL,byte ptr [ESP + 0x4f]        ; 00455917
        ;   Label: LAB_00455917
    MOV AH,byte ptr [ESP + 0x53]        ; 0045591b
    XOR BL,0x80                         ; 0045591f
    XOR AH,0x80                         ; 00455922
    MOV byte ptr [ESP + 0x4f],BL        ; 00455925
    MOV byte ptr [ESP + 0x53],AH        ; 00455929
    JMP 0x00455743                      ; 0045592d | LAB_00455743
        ;   XREF to: 00455743 (UNCONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x58]          ; 00455932
        ;   Label: LAB_00455932
    FSUB float ptr [EDX + 0x40]         ; 00455935
    FDIV float ptr [ESP + 0x1c]         ; 00455938
    JMP 0x00455830                      ; 0045593c | LAB_00455830
        ;   XREF to: 00455830 (UNCONDITIONAL_JUMP)
    FLD1                                ; 00455941
        ;   Label: LAB_00455941
    FCOMP double ptr [ESP + 0x8]        ; 00455943
    FNSTSW AX                           ; 00455947
    SAHF                                ; 00455949
    JNC 0x0045595e                      ; 0045594a | LAB_0045595e
        ;   XREF to: 0045595e (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 0045594c
    FLD float ptr [EDX + 0x44]          ; 00455953
    MOV EAX,dword ptr [EDX + 0x48]      ; 00455956
    JMP 0x00455856                      ; 00455959 | LAB_00455856
        ;   XREF to: 00455856 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x24]          ; 0045595e
        ;   Label: LAB_0045595e
    FLDZ                                ; 00455962
    FCOMPP                              ; 00455964
    FNSTSW AX                           ; 00455966
    SAHF                                ; 00455968
    JBE 0x00455971                      ; 00455969 | LAB_00455971
        ;   XREF to: 00455971 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 0045596b
    MOV dword ptr [ESP + 0x24],ECX      ; 0045596d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00455971
        ;   Label: LAB_00455971
    MOV dword ptr [EDX + 0x4c],EAX      ; 00455975
    MOV EAX,0x1                         ; 00455978
        ;   Label: LAB_00455978
    MOV ESP,EBP                         ; 0045597d
    POP EBP                             ; 0045597f
    POP EBX                             ; 00455980
    RET                                 ; 00455981

