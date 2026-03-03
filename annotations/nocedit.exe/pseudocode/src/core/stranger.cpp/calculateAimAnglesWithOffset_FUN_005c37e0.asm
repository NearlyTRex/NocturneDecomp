; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_stranger_cpp_calculateAimAnglesWithOffset_FUN_005c37e0(CVector3f *out_angles,CVector3f *direction,float *offset_pair)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_angles
; CVector3f *      Stack[0x8]:4   direction
; float *          Stack[0xc]:4   offset_pair
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00653c8c = 0.0100000000000000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_math.c_acos_FUN_00600162
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c37e0
        ;   Label: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_005c37e0
    PUSH ESI                            ; 005c37e1
    PUSH EDI                            ; 005c37e2
    PUSH EBP                            ; 005c37e3
    MOV EBP,ESP                         ; 005c37e4
    SUB ESP,0x3c                        ; 005c37e6
    AND ESP,0xfffffff8                  ; 005c37e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c37ec
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c37ef
    PUSH ESI                            ; 005c37f2
    PUSH EBX                            ; 005c37f3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005c37f4
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [ESI + 0x4]           ; 005c37f9
    FMUL ST0                            ; 005c37fc
    FLD float ptr [ESI]                 ; 005c37fe
    FMUL ST0                            ; 005c3800
    FADDP                               ; 005c3802
    FLD float ptr [ESI + 0x8]           ; 005c3804
    FMUL ST0                            ; 005c3807
    FADDP                               ; 005c3809
    FSQRT                               ; 005c380b
    ADD ESP,0x8                         ; 005c380d
    FST float ptr [ESP + 0x20]          ; 005c3810
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c3814
    FST double ptr [ESP + 0x10]         ; 005c3818
    MOV dword ptr [ESP + 0x24],ESI      ; 005c381c
    FCOMP double ptr [0x00653c8c]       ; 005c3820 | DOUBLE_00653c8c
    FNSTSW AX                           ; 005c3826
    SAHF                                ; 005c3828
    JBE 0x005c38ce                      ; 005c3829
        ;   XREF to: 005c38ce (CONDITIONAL_JUMP)  ; LAB_005c38ce
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005c382f
    FLD float ptr [ESI]                 ; 005c3832
    FCHS                                ; 005c3834
    LEA ESI,[EBX + 0x4]                 ; 005c3836
    FSTP float ptr [ESP + 0x30]         ; 005c3839
    MOV EDI,ESI                         ; 005c383d
    JNC 0x005c38d7                      ; 005c383f
        ;   XREF to: 005c38d7 (CONDITIONAL_JUMP)  ; LAB_005c38d7
    FLD float ptr [ESP + 0x24]          ; 005c3845
        ;   Label: LAB_005c3845
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005c3849
    MOV ESI,EBX                         ; 005c384c
    FSTP double ptr [ESP + 0x8]         ; 005c384e
    MOV EDI,dword ptr [EDI + 0x4]       ; 005c3852
    FLD double ptr [ESP + 0x8]          ; 005c3855
    MOV dword ptr [ESP + 0x34],EDI      ; 005c3859
    FCOMP double ptr [0x00653c8c]       ; 005c385d | DOUBLE_00653c8c
    FNSTSW AX                           ; 005c3863
    SAHF                                ; 005c3865
    JC 0x005c38ce                       ; 005c3866
        ;   XREF to: 005c38ce (CONDITIONAL_JUMP)  ; LAB_005c38ce
    FLD float ptr [ESP + 0x24]          ; 005c3868
    FMUL ST0                            ; 005c386c
    FLD float ptr [ESP + 0x34]          ; 005c386e
    FMUL ST0                            ; 005c3872
    FSUBP                               ; 005c3874
    FSQRT                               ; 005c3876
    FDIV double ptr [ESP + 0x8]         ; 005c3878
    FLD1                                ; 005c387c
    FXCH                                ; 005c387e
    FSTP double ptr [ESP]               ; 005c3880
    FCOMP double ptr [ESP]              ; 005c3883
    FNSTSW AX                           ; 005c3886
    SAHF                                ; 005c3888
    JBE 0x005c38ce                      ; 005c3889
        ;   XREF to: 005c38ce (CONDITIONAL_JUMP)  ; LAB_005c38ce
    FLDZ                                ; 005c388b
    FCOMP double ptr [ESP]              ; 005c388d
    FNSTSW AX                           ; 005c3890
    SAHF                                ; 005c3892
    JA 0x005c38ce                       ; 005c3893
        ;   XREF to: 005c38ce (CONDITIONAL_JUMP)  ; LAB_005c38ce
    FLD double ptr [ESP]                ; 005c3895
    CALL crt_math.c_acos_FUN_00600162   ; 005c3898
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FLDZ                                ; 005c389d
    FXCH                                ; 005c389f
    FSTP float ptr [ESP + 0x2c]         ; 005c38a1
    FCOMP float ptr [ESP + 0x34]        ; 005c38a5
    FNSTSW AX                           ; 005c38a9
    SAHF                                ; 005c38ab
    JBE 0x005c3952                      ; 005c38ac
        ;   XREF to: 005c3952 (CONDITIONAL_JUMP)  ; LAB_005c3952
    FLD float ptr [EBX]                 ; 005c38b2
    FSUB float ptr [ESP + 0x2c]         ; 005c38b4
    FSTP float ptr [EBX]                ; 005c38b8
        ;   Label: LAB_005c38b8
    PUSH dword ptr [ESI]                ; 005c38ba
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c38bc
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c38c1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005c38c5
    MOV dword ptr [ESI],EAX             ; 005c38c9
    ADD ESP,0x4                         ; 005c38cb
    MOV EAX,EBX                         ; 005c38ce
        ;   Label: LAB_005c38ce
    MOV ESP,EBP                         ; 005c38d0
    POP EBP                             ; 005c38d2
    POP EDI                             ; 005c38d3
    POP ESI                             ; 005c38d4
    POP EBX                             ; 005c38d5
    RET                                 ; 005c38d6
    FLD float ptr [ESP + 0x20]          ; 005c38d7
        ;   Label: LAB_005c38d7
    FMUL ST0                            ; 005c38db
    FLD float ptr [ESP + 0x30]          ; 005c38dd
    FMUL ST0                            ; 005c38e1
    FSUBP                               ; 005c38e3
    FSQRT                               ; 005c38e5
    FDIV double ptr [ESP + 0x10]        ; 005c38e7
    FLD1                                ; 005c38eb
    FXCH                                ; 005c38ed
    FSTP double ptr [ESP + 0x18]        ; 005c38ef
    FCOMP double ptr [ESP + 0x18]       ; 005c38f3
    FNSTSW AX                           ; 005c38f7
    SAHF                                ; 005c38f9
    JBE 0x005c3845                      ; 005c38fa
        ;   XREF to: 005c3845 (CONDITIONAL_JUMP)  ; LAB_005c3845
    FLDZ                                ; 005c3900
    FCOMP double ptr [ESP + 0x18]       ; 005c3902
    FNSTSW AX                           ; 005c3906
    SAHF                                ; 005c3908
    JA 0x005c3845                       ; 005c3909
        ;   XREF to: 005c3845 (CONDITIONAL_JUMP)  ; LAB_005c3845
    FLD double ptr [ESP + 0x18]         ; 005c390f
    CALL crt_math.c_acos_FUN_00600162   ; 005c3913
        ;   XREF to: 00600162 (UNCONDITIONAL_CALL)  ; double crt_math.c_acos_FUN_00600162(double x)
    FLDZ                                ; 005c3918
    FXCH                                ; 005c391a
    FSTP float ptr [ESP + 0x28]         ; 005c391c
    FCOMP float ptr [ESP + 0x30]        ; 005c3920
    FNSTSW AX                           ; 005c3924
    SAHF                                ; 005c3926
    JBE 0x005c394a                      ; 005c3927
        ;   XREF to: 005c394a (CONDITIONAL_JUMP)  ; LAB_005c394a
    FLD float ptr [ESI]                 ; 005c3929
    FSUB float ptr [ESP + 0x28]         ; 005c392b
    FSTP float ptr [ESI]                ; 005c392f
        ;   Label: LAB_005c392f
    PUSH dword ptr [EDI]                ; 005c3931
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005c3933
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x3c],EAX      ; 005c3938
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005c393c
    MOV dword ptr [EDI],EAX             ; 005c3940
    ADD ESP,0x4                         ; 005c3942
    JMP 0x005c3845                      ; 005c3945
        ;   XREF to: 005c3845 (UNCONDITIONAL_JUMP)  ; LAB_005c3845
    FLD float ptr [ESI]                 ; 005c394a
        ;   Label: LAB_005c394a
    FADD float ptr [ESP + 0x28]         ; 005c394c
    JMP 0x005c392f                      ; 005c3950
        ;   XREF to: 005c392f (UNCONDITIONAL_JUMP)  ; LAB_005c392f
    FLD float ptr [EBX]                 ; 005c3952
        ;   Label: LAB_005c3952
    FADD float ptr [ESP + 0x2c]         ; 005c3954
    JMP 0x005c38b8                      ; 005c3958
        ;   XREF to: 005c38b8 (UNCONDITIONAL_JUMP)  ; LAB_005c38b8

