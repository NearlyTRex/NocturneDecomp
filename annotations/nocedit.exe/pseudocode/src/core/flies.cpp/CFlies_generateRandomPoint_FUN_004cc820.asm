; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
; CVector3f *      Stack[0xc]:4   reference_point
; Local Variables:
; CVector3f[2]     Stack[-0x44]:24  local_44
; CVector3f        Stack[-0x2c]:12  local_2c
; float            Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004cc760 at 004cc797
;   core_flies.cpp_CFlies_process_FUN_004cbf00 at 004cc1fd
;
; Referenced Globals:
;   double DOUBLE_0062a456 = 0.5
;   double DOUBLE_0062a45e = -0.5
;   double DOUBLE_0062a466 = 4
;   float FLOAT_0062a46e = 4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc820
        ;   Label: core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820
    PUSH ESI                            ; 004cc821
    PUSH EDI                            ; 004cc822
    PUSH EBP                            ; 004cc823
    MOV EBP,ESP                         ; 004cc824
    SUB ESP,0x6c                        ; 004cc826
    AND ESP,0xfffffff8                  ; 004cc829
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cc82c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004cc82f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004cc832
    PUSH 0x3f800000                     ; 004cc835
    PUSH 0x0                            ; 004cc83a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004cc83c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 004cc841
    MOV EAX,dword ptr [ESP + 0x70]      ; 004cc845
    MOV dword ptr [EBX + 0x4],EAX       ; 004cc849
    FLD float ptr [EBX + 0x4]           ; 004cc84c
    FMUL ST0                            ; 004cc84f
    FMUL float ptr [EDI + 0x15c]        ; 004cc851
    ADD ESP,0x8                         ; 004cc857
    FSTP float ptr [EBX + 0x4]          ; 004cc85a
    FLD float ptr [EDI + 0x158]         ; 004cc85d
    FLD ST0                             ; 004cc863
    FMUL double ptr [0x0062a456]        ; 004cc865 | DOUBLE_0062a456
    SUB ESP,0x4                         ; 004cc86b
    FXCH                                ; 004cc86e
    FMUL double ptr [0x0062a45e]        ; 004cc870 | DOUBLE_0062a45e
    FXCH                                ; 004cc876
    FSTP float ptr [ESP]                ; 004cc878
    SUB ESP,0x4                         ; 004cc87b
    FSTP float ptr [ESP]                ; 004cc87e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004cc881
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 004cc886
    MOV EAX,dword ptr [ESP + 0x70]      ; 004cc88a
    MOV dword ptr [EBX],EAX             ; 004cc88e
    ADD ESP,0x8                         ; 004cc890
    FLD float ptr [EDI + 0x160]         ; 004cc893
    FLD ST0                             ; 004cc899
    FMUL double ptr [0x0062a456]        ; 004cc89b | DOUBLE_0062a456
    SUB ESP,0x4                         ; 004cc8a1
    FXCH                                ; 004cc8a4
    FMUL double ptr [0x0062a45e]        ; 004cc8a6 | DOUBLE_0062a45e
    FXCH                                ; 004cc8ac
    FSTP float ptr [ESP]                ; 004cc8ae
    SUB ESP,0x4                         ; 004cc8b1
    FSTP float ptr [ESP]                ; 004cc8b4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004cc8b7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x70],EAX      ; 004cc8bc
    MOV EAX,dword ptr [ESP + 0x70]      ; 004cc8c0
    MOV dword ptr [EBX + 0x8],EAX       ; 004cc8c4
    ADD ESP,0x8                         ; 004cc8c7
    TEST ESI,ESI                        ; 004cc8ca
    JZ 0x004cc99c                       ; 004cc8cc
        ;   XREF to: 004cc99c (CONDITIONAL_JUMP)  ; LAB_004cc99c
    FLD float ptr [EBX]                 ; 004cc8d2
    FSUB float ptr [ESI]                ; 004cc8d4
    FSTP float ptr [ESP + 0x30]         ; 004cc8d6
    FLD float ptr [EBX + 0x4]           ; 004cc8da
    FSUB float ptr [ESI + 0x4]          ; 004cc8dd
    FST float ptr [ESP + 0x34]          ; 004cc8e0
    FMUL float ptr [ESP + 0x34]         ; 004cc8e4
    FLD float ptr [ESP + 0x30]          ; 004cc8e8
    FMUL ST0                            ; 004cc8ec
    FLD float ptr [EBX + 0x8]           ; 004cc8ee
    FSUB float ptr [ESI + 0x8]          ; 004cc8f1
    FXCH                                ; 004cc8f4
    FADDP ST2,ST0                       ; 004cc8f6
    FST float ptr [ESP + 0x38]          ; 004cc8f8
    FMUL float ptr [ESP + 0x38]         ; 004cc8fc
    FADDP                               ; 004cc900
    FSQRT                               ; 004cc902
    FST float ptr [ESP + 0x8]           ; 004cc904
    FST double ptr [ESP]                ; 004cc908
    FCOMP double ptr [0x0062a466]       ; 004cc90b | DOUBLE_0062a466
    FNSTSW AX                           ; 004cc911
    SAHF                                ; 004cc913
    JA 0x004cc9a5                       ; 004cc914
        ;   XREF to: 004cc9a5 (CONDITIONAL_JUMP)  ; LAB_004cc9a5
    FLD1                                ; 004cc91a
    FCOMP double ptr [ESP]              ; 004cc91c
    FNSTSW AX                           ; 004cc91f
    SAHF                                ; 004cc921
    JBE 0x004cc99c                      ; 004cc922
        ;   XREF to: 004cc99c (CONDITIONAL_JUMP)  ; LAB_004cc99c
    FLDZ                                ; 004cc924
    FCOMP double ptr [ESP]              ; 004cc926
    FNSTSW AX                           ; 004cc929
    SAHF                                ; 004cc92b
    JNC 0x004cc99c                      ; 004cc92c
        ;   XREF to: 004cc99c (CONDITIONAL_JUMP)  ; LAB_004cc99c
    FLD1                                ; 004cc92e
    FLD float ptr [ESP + 0x30]          ; 004cc930
    FXCH                                ; 004cc934
    FDIV float ptr [ESP + 0x8]          ; 004cc936
    FXCH                                ; 004cc93a
    FMUL ST1                            ; 004cc93c
    FLD float ptr [ESP + 0x34]          ; 004cc93e
    MOV EAX,dword ptr [ESP + 0x30]      ; 004cc942
    FMUL ST2                            ; 004cc946
    MOV dword ptr [ESP + 0x48],EAX      ; 004cc948
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cc94c
    FLD float ptr [ESP + 0x38]          ; 004cc950
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cc954
    MOV EAX,dword ptr [ESP + 0x38]      ; 004cc958
    FMULP ST3                           ; 004cc95c
    MOV dword ptr [ESP + 0x50],EAX      ; 004cc95e
    FXCH                                ; 004cc962
    FSTP float ptr [ESP + 0xc]          ; 004cc964
    FSTP float ptr [ESP + 0x10]         ; 004cc968
    FSTP float ptr [ESP + 0x14]         ; 004cc96c
    FLD float ptr [ESI]                 ; 004cc970
    FADD float ptr [ESP + 0xc]          ; 004cc972
    FSTP float ptr [ESP + 0x3c]         ; 004cc976
    FLD float ptr [ESI + 0x4]           ; 004cc97a
    FADD float ptr [ESP + 0x10]         ; 004cc97d
    FSTP float ptr [ESP + 0x40]         ; 004cc981
    FLD float ptr [ESI + 0x8]           ; 004cc985
    FADD float ptr [ESP + 0x14]         ; 004cc988
    LEA EAX,[ESP + 0x3c]                ; 004cc98c
    FSTP float ptr [ESP + 0x44]         ; 004cc990
    CMP EBX,EAX                         ; 004cc994
    JNZ 0x004cca32                      ; 004cc996
        ;   XREF to: 004cca32 (CONDITIONAL_JUMP)  ; LAB_004cca32
    MOV EAX,EBX                         ; 004cc99c
        ;   Label: LAB_004cc99c
    MOV ESP,EBP                         ; 004cc99e
    POP EBP                             ; 004cc9a0
    POP EDI                             ; 004cc9a1
    POP ESI                             ; 004cc9a2
    POP EBX                             ; 004cc9a3
    RET                                 ; 004cc9a4
    FLD float ptr [0x0062a46e]          ; 004cc9a5 | FLOAT_0062a46e
        ;   Label: LAB_004cc9a5
    FLD float ptr [ESP + 0x30]          ; 004cc9ab
    FMUL ST1                            ; 004cc9af
    FLD float ptr [ESP + 0x34]          ; 004cc9b1
    FMUL ST2                            ; 004cc9b5
    FLD float ptr [ESP + 0x38]          ; 004cc9b7
    FMULP ST3                           ; 004cc9bb
    FLD1                                ; 004cc9bd
    FXCH ST2                            ; 004cc9bf
    FST float ptr [ESP + 0x24]          ; 004cc9c1
    FXCH ST2                            ; 004cc9c5
    FDIV float ptr [ESP + 0x8]          ; 004cc9c7
    FXCH ST2                            ; 004cc9cb
    FMUL ST2                            ; 004cc9cd
    FXCH                                ; 004cc9cf
    FST float ptr [ESP + 0x28]          ; 004cc9d1
    FMUL ST2                            ; 004cc9d5
    FXCH ST3                            ; 004cc9d7
    FST float ptr [ESP + 0x2c]          ; 004cc9d9
    FMULP ST2                           ; 004cc9dd
    FSTP float ptr [ESP + 0x18]         ; 004cc9df
    FXCH                                ; 004cc9e3
    FSTP float ptr [ESP + 0x1c]         ; 004cc9e5
    FSTP float ptr [ESP + 0x20]         ; 004cc9e9
    FLD float ptr [ESI]                 ; 004cc9ed
    FADD float ptr [ESP + 0x18]         ; 004cc9ef
    FSTP float ptr [ESP + 0x54]         ; 004cc9f3
    FLD float ptr [ESI + 0x4]           ; 004cc9f7
    FADD float ptr [ESP + 0x1c]         ; 004cc9fa
    FSTP float ptr [ESP + 0x58]         ; 004cc9fe
    FLD float ptr [ESI + 0x8]           ; 004cca02
    FADD float ptr [ESP + 0x20]         ; 004cca05
    LEA EAX,[ESP + 0x54]                ; 004cca09
    FSTP float ptr [ESP + 0x5c]         ; 004cca0d
    CMP EBX,EAX                         ; 004cca11
    JZ 0x004cc99c                       ; 004cca13
        ;   XREF to: 004cc99c (CONDITIONAL_JUMP)  ; LAB_004cc99c
    MOV EAX,dword ptr [ESP + 0x54]      ; 004cca15
    MOV dword ptr [EBX],EAX             ; 004cca19
    MOV EAX,dword ptr [ESP + 0x58]      ; 004cca1b
    MOV dword ptr [EBX + 0x4],EAX       ; 004cca1f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004cca22
    MOV dword ptr [EBX + 0x8],EAX       ; 004cca26
    MOV EAX,EBX                         ; 004cca29
    MOV ESP,EBP                         ; 004cca2b
    POP EBP                             ; 004cca2d
    POP EDI                             ; 004cca2e
    POP ESI                             ; 004cca2f
    POP EBX                             ; 004cca30
    RET                                 ; 004cca31
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004cca32
        ;   Label: LAB_004cca32
    MOV dword ptr [EBX],EAX             ; 004cca36
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cca38
    MOV dword ptr [EBX + 0x4],EAX       ; 004cca3c
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cca3f
    MOV dword ptr [EBX + 0x8],EAX       ; 004cca43
    MOV EAX,EBX                         ; 004cca46
    MOV ESP,EBP                         ; 004cca48
    POP EBP                             ; 004cca4a
    POP EDI                             ; 004cca4b
    POP ESI                             ; 004cca4c
    POP EBX                             ; 004cca4d
    RET                                 ; 004cca4e

