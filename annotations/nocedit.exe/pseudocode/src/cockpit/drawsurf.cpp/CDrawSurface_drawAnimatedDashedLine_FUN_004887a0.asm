; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0 at 00488a10
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990 at 004889a2
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30 at 00488a7c
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 at 00488676
;
; Referenced Globals:
;   double g_TimeNormalizationFactor = 0.0000152587890625
;   int g_DashLength = 0x1
;   float g_DashAnimationThreshold = 0.1000000
;   float g_DashAnimationAccumulator
;   float g_DashOffsetCounter
;   int g_LastAnimationTimerValue
;   int g_GlobalDeltaTimeInt
;   int g_AnimationTimerValue
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004887a0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
    PUSH ESI                            ; 004887a1
    PUSH EDI                            ; 004887a2
    PUSH EBP                            ; 004887a3
    SUB ESP,0x10                        ; 004887a4
    MOV ESI,dword ptr [ESP + 0x24]      ; 004887a7
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004887ab
    MOV EDI,dword ptr [ESP + 0x30]      ; 004887af
    MOV ECX,dword ptr [0x02cf6a84]      ; 004887b3 | int g_AnimationTimerValue
    CMP ECX,dword ptr [0x02c6d2cc]      ; 004887b9 | int g_LastAnimationTimerValue
    JNZ 0x004888f3                      ; 004887bf | LAB_004888f3
        ;   XREF to: 004888f3 (CONDITIONAL_JUMP)
    FLD float ptr [0x02c6d2c8]          ; 004887c5 | float g_DashOffsetCounter
        ;   Label: LAB_004887c5
    MOV EDX,dword ptr [ESP + 0x28]      ; 004887cb
    CALL crt_math.c_round_FUN_005fe6b0  ; 004887cf | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x8]         ; 004887d4
    CMP EDI,EDX                         ; 004887d8
    JGE 0x004887e2                      ; 004887da | LAB_004887e2
        ;   XREF to: 004887e2 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x28],EDI      ; 004887dc
    MOV EDI,EDX                         ; 004887e0
    MOV ECX,dword ptr [ESP + 0x34]      ; 004887e2
        ;   Label: LAB_004887e2
    CMP EBP,ECX                         ; 004887e6
    JLE 0x004887f2                      ; 004887e8 | LAB_004887f2
        ;   XREF to: 004887f2 (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 004887ea
    MOV EBP,ECX                         ; 004887ec
    MOV dword ptr [ESP + 0x34],EDX      ; 004887ee
    MOV EBX,dword ptr [ESP + 0x28]      ; 004887f2
        ;   Label: LAB_004887f2
    CMP EDI,EBX                         ; 004887f6
    JLE 0x0048882e                      ; 004887f8 | LAB_0048882e
        ;   XREF to: 0048882e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 004887fa
        ;   Label: LAB_004887fa
    MOV ECX,dword ptr [0x006703dc]      ; 004887fe | int g_DashLength
    MOV EDX,EAX                         ; 00488804
    ADD ECX,ECX                         ; 00488806
    SAR EDX,0x1f                        ; 00488808
    IDIV ECX                            ; 0048880b
    CMP EDX,dword ptr [0x006703dc]      ; 0048880d | int g_DashLength
    JGE 0x00488820                      ; 00488813 | LAB_00488820
        ;   XREF to: 00488820 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00488815
    PUSH EBX                            ; 00488816
    PUSH ESI                            ; 00488817
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00488818 | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048881d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00488820
        ;   Label: LAB_00488820
    INC EDX                             ; 00488824
    INC EBX                             ; 00488825
    MOV dword ptr [ESP + 0x8],EDX       ; 00488826
    CMP EBX,EDI                         ; 0048882a
    JL 0x004887fa                       ; 0048882c | LAB_004887fa
        ;   XREF to: 004887fa (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x34]      ; 0048882e
        ;   Label: LAB_0048882e
    MOV EBX,EBP                         ; 00488832
    CMP EBP,ECX                         ; 00488834
    JGE 0x00488870                      ; 00488836 | LAB_00488870
        ;   XREF to: 00488870 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 00488838
        ;   Label: LAB_00488838
    MOV ECX,dword ptr [0x006703dc]      ; 0048883c | int g_DashLength
    MOV EDX,EAX                         ; 00488842
    ADD ECX,ECX                         ; 00488844
    SAR EDX,0x1f                        ; 00488846
    IDIV ECX                            ; 00488849
    CMP EDX,dword ptr [0x006703dc]      ; 0048884b | int g_DashLength
    JGE 0x0048885e                      ; 00488851 | LAB_0048885e
        ;   XREF to: 0048885e (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00488853
    PUSH EDI                            ; 00488854
    PUSH ESI                            ; 00488855
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00488856 | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048885b
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048885e
        ;   Label: LAB_0048885e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00488862
    INC EDX                             ; 00488866
    INC EBX                             ; 00488867
    MOV dword ptr [ESP + 0x8],EDX       ; 00488868
    CMP EBX,ECX                         ; 0048886c
    JL 0x00488838                       ; 0048886e | LAB_00488838
        ;   XREF to: 00488838 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x28]      ; 00488870
        ;   Label: LAB_00488870
    MOV EBX,EDI                         ; 00488874
    CMP EDI,EAX                         ; 00488876
    JLE 0x004888b6                      ; 00488878 | LAB_004888b6
        ;   XREF to: 004888b6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048887a
        ;   Label: LAB_0048887a
    MOV EDI,dword ptr [0x006703dc]      ; 0048887e | int g_DashLength
    MOV EDX,EAX                         ; 00488884
    ADD EDI,EDI                         ; 00488886
    SAR EDX,0x1f                        ; 00488888
    IDIV EDI                            ; 0048888b
    CMP EDX,dword ptr [0x006703dc]      ; 0048888d | int g_DashLength
    JGE 0x004888a4                      ; 00488893 | LAB_004888a4
        ;   XREF to: 004888a4 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x34]      ; 00488895
    PUSH EDI                            ; 00488899
    PUSH EBX                            ; 0048889a
    PUSH ESI                            ; 0048889b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048889c | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004888a1
    MOV EDI,dword ptr [ESP + 0x8]       ; 004888a4
        ;   Label: LAB_004888a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 004888a8
    INC EDI                             ; 004888ac
    DEC EBX                             ; 004888ad
    MOV dword ptr [ESP + 0x8],EDI       ; 004888ae
    CMP EBX,EAX                         ; 004888b2
    JG 0x0048887a                       ; 004888b4 | LAB_0048887a
        ;   XREF to: 0048887a (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x34]      ; 004888b6
        ;   Label: LAB_004888b6
    CMP EBP,EBX                         ; 004888ba
    JGE 0x004888eb                      ; 004888bc | LAB_004888eb
        ;   XREF to: 004888eb (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 004888be
        ;   Label: LAB_004888be
    MOV EDI,dword ptr [0x006703dc]      ; 004888c2 | int g_DashLength
    MOV EDX,EAX                         ; 004888c8
    ADD EDI,EDI                         ; 004888ca
    SAR EDX,0x1f                        ; 004888cc
    IDIV EDI                            ; 004888cf
    CMP EDX,dword ptr [0x006703dc]      ; 004888d1 | int g_DashLength
    JL 0x0048896f                       ; 004888d7 | LAB_0048896f
        ;   XREF to: 0048896f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 004888dd
        ;   Label: LAB_004888dd
    INC EAX                             ; 004888e1
    DEC EBX                             ; 004888e2
    MOV dword ptr [ESP + 0x8],EAX       ; 004888e3
    CMP EBX,EBP                         ; 004888e7
    JG 0x004888be                       ; 004888e9 | LAB_004888be
        ;   XREF to: 004888be (CONDITIONAL_JUMP)
    ADD ESP,0x10                        ; 004888eb
        ;   Label: LAB_004888eb
    POP EBP                             ; 004888ee
    POP EDI                             ; 004888ef
    POP ESI                             ; 004888f0
    POP EBX                             ; 004888f1
    RET                                 ; 004888f2
    FILD dword ptr [0x02cf6a80]         ; 004888f3 | int g_GlobalDeltaTimeInt
        ;   Label: LAB_004888f3
    FMUL double ptr [0x00621e3e]        ; 004888f9 | double g_TimeNormalizationFactor
    FLD float ptr [0x02c6d2c4]          ; 004888ff | float g_DashAnimationAccumulator
    FXCH                                ; 00488905
    FADD ST0,ST1                        ; 00488907
    MOV dword ptr [0x02c6d2cc],ECX      ; 00488909 | int g_LastAnimationTimerValue
    FSTP ST1                            ; 0048890f
    FST float ptr [0x02c6d2c4]          ; 00488911 | float g_DashAnimationAccumulator
    FCOMP float ptr [0x006703e0]        ; 00488917 | float g_DashAnimationThreshold
    FNSTSW AX                           ; 0048891d
    SAHF                                ; 0048891f
    JBE 0x004887c5                      ; 00488920 | LAB_004887c5
        ;   XREF to: 004887c5 (CONDITIONAL_JUMP)
    FLD float ptr [0x02c6d2c4]          ; 00488926 | float g_DashAnimationAccumulator
    FDIV float ptr [0x006703e0]         ; 0048892c | float g_DashAnimationThreshold
    MOV EDX,dword ptr [0x006703dc]      ; 00488932 | int g_DashLength
    ADD EDX,EDX                         ; 00488938
    MOV dword ptr [ESP + 0xc],EDX       ; 0048893a
    FADD float ptr [0x02c6d2c8]         ; 0048893e | float g_DashOffsetCounter
    FILD dword ptr [ESP + 0xc]          ; 00488944
    FXCH                                ; 00488948
    FSTP float ptr [0x02c6d2c8]         ; 0048894a | float g_DashOffsetCounter
    FCOMP float ptr [0x02c6d2c8]        ; 00488950 | float g_DashOffsetCounter
    FNSTSW AX                           ; 00488956
    SAHF                                ; 00488958
    JNC 0x00488963                      ; 00488959 | LAB_00488963
        ;   XREF to: 00488963 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0048895b
    MOV dword ptr [0x02c6d2c8],EBX      ; 0048895d | float g_DashOffsetCounter
    XOR EAX,EAX                         ; 00488963
        ;   Label: LAB_00488963
    MOV [0x02c6d2c4],EAX                ; 00488965 | float g_DashAnimationAccumulator
    JMP 0x004887c5                      ; 0048896a | LAB_004887c5
        ;   XREF to: 004887c5 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0048896f
        ;   Label: LAB_0048896f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00488970
    PUSH EDI                            ; 00488974
    PUSH ESI                            ; 00488975
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00488976 | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048897b
    JMP 0x004888dd                      ; 0048897e | LAB_004888dd
        ;   XREF to: 004888dd (UNCONDITIONAL_JUMP)

