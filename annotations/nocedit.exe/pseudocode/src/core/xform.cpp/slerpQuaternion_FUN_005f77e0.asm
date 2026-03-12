; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack3_esi core_xform_cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f *quat1_in,CQuaternion4f *quat2_in,float t,CQuaternion4f *quat_out)
;
; Parameters:
; CQuaternion4f *  Stack[0x4]:4   quat1_in
; CQuaternion4f *  Stack[0x8]:4   quat2_in
; float            Stack[0xc]:4   t
; Local Variables:
; double           Stack[-0x80]:8  local_80
; double           Stack[-0x78]:8  local_78
; double           Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; undefined1       Stack[-0x50]:1  local_50
; CQuaternion4f[2] Stack[-0x40]:32  local_40
; double           Stack[-0x18]:8  local_18
;
; XREF[15]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c146
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 at 0042dd79
;   core_course.cpp_CCourse_interpolate_FUN_004427a0 at 004428e5
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d54c1
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0 at 0054cb94
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0 at 00558677
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 at 0059f802
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 at 0059f085
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 at 0059f5c5
;   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 at 0059a0f5
;   ... and 5 more
;
; Referenced Globals:
;   double g_SlerpDotProductThreshold = 0.999990000000000
;
; Called Functions:
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f77e0
        ;   Label: core_xform.cpp_slerpQuaternion_FUN_005f77e0
    PUSH EDI                            ; 005f77e1
    PUSH EBP                            ; 005f77e2
    MOV EBP,ESP                         ; 005f77e3
    SUB ESP,0x70                        ; 005f77e5
    AND ESP,0xfffffff8                  ; 005f77e8
    MOV EDX,dword ptr [EBP + 0x10]      ; 005f77eb
    MOV ECX,ESI                         ; 005f77ee
    MOV ESI,dword ptr [EBP + 0x14]      ; 005f77f0
    FLD float ptr [EBP + 0x18]          ; 005f77f3
    FLDZ                                ; 005f77f6
    FXCH                                ; 005f77f8
    FSTP double ptr [ESP + 0x18]        ; 005f77fa
    FCOMP double ptr [ESP + 0x18]       ; 005f77fe
    FNSTSW AX                           ; 005f7802
    SAHF                                ; 005f7804
    JNC 0x005f7912                      ; 005f7805
        ;   XREF to: 005f7912 (CONDITIONAL_JUMP)  ; LAB_005f7912
    FLD1                                ; 005f780b
    FCOMP double ptr [ESP + 0x18]       ; 005f780d
    FNSTSW AX                           ; 005f7811
    SAHF                                ; 005f7813
    JBE 0x005f791a                      ; 005f7814
        ;   XREF to: 005f791a (CONDITIONAL_JUMP)  ; LAB_005f791a
    FLD float ptr [EDX + 0x4]           ; 005f781a
    FMUL float ptr [ESI + 0x4]          ; 005f781d
    FLD float ptr [EDX + 0x8]           ; 005f7820
    FMUL float ptr [ESI + 0x8]          ; 005f7823
    FADDP                               ; 005f7826
    MOV EAX,dword ptr [ESI]             ; 005f7828
    FLD float ptr [EDX + 0xc]           ; 005f782a
    FMUL float ptr [ESI + 0xc]          ; 005f782d
    MOV dword ptr [ESP + 0x24],EAX      ; 005f7830
    FADDP                               ; 005f7834
    MOV EAX,dword ptr [ESI + 0x4]       ; 005f7836
    FLD float ptr [EDX]                 ; 005f7839
    FMUL float ptr [ESI]                ; 005f783b
    MOV dword ptr [ESP + 0x28],EAX      ; 005f783d
    MOV EAX,dword ptr [ESI + 0x8]       ; 005f7841
    FLDZ                                ; 005f7844
    MOV dword ptr [ESP + 0x20],EAX      ; 005f7846
    MOV EAX,dword ptr [ESI + 0xc]       ; 005f784a
    FXCH                                ; 005f784d
    FADDP ST2,ST0                       ; 005f784f
    MOV dword ptr [ESP + 0x2c],EAX      ; 005f7851
    FXCH                                ; 005f7855
    FSTP double ptr [ESP]               ; 005f7857
    FCOMP double ptr [ESP]              ; 005f785a
    FNSTSW AX                           ; 005f785d
    SAHF                                ; 005f785f
    JA 0x005f7920                       ; 005f7860
        ;   XREF to: 005f7920 (CONDITIONAL_JUMP)  ; LAB_005f7920
    FLD double ptr [ESP]                ; 005f7866
        ;   Label: LAB_005f7866
    FCOMP double ptr [0x006583fd]       ; 005f7869 | g_SlerpDotProductThreshold
    FNSTSW AX                           ; 005f786f
    SAHF                                ; 005f7871
    JBE 0x005f795b                      ; 005f7872
        ;   XREF to: 005f795b (CONDITIONAL_JUMP)  ; LAB_005f795b
    FLD float ptr [EBP + 0x18]          ; 005f7878
    FLD1                                ; 005f787b
    FXCH                                ; 005f787d
    FSTP double ptr [ESP + 0x68]        ; 005f787f
    MOV EAX,dword ptr [ESP + 0x68]      ; 005f7883
    FSUB double ptr [ESP + 0x68]        ; 005f7887
    MOV dword ptr [ESP + 0x8],EAX       ; 005f788b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005f788f
    FSTP double ptr [ESP + 0x10]        ; 005f7893
    MOV dword ptr [ESP + 0xc],EAX       ; 005f7897
    FLD double ptr [ESP + 0x10]         ; 005f789b
        ;   Label: LAB_005f789b
    FLD float ptr [EDX + 0x4]           ; 005f789f
    FMUL ST1                            ; 005f78a2
    FLD float ptr [EDX + 0x8]           ; 005f78a4
    FMUL ST2                            ; 005f78a7
    FLD float ptr [EDX + 0xc]           ; 005f78a9
    FMUL ST3                            ; 005f78ac
    FLD float ptr [EDX]                 ; 005f78ae
    FMULP ST4                           ; 005f78b0
    FLD float ptr [ESP + 0x28]          ; 005f78b2
    FMUL double ptr [ESP + 0x8]         ; 005f78b6
    FLD float ptr [ESP + 0x20]          ; 005f78ba
    FMUL double ptr [ESP + 0x8]         ; 005f78be
    FLD float ptr [ESP + 0x2c]          ; 005f78c2
    FMUL double ptr [ESP + 0x8]         ; 005f78c6
    FXCH ST2                            ; 005f78ca
    FADDP ST5,ST0                       ; 005f78cc
    FLD float ptr [ESP + 0x24]          ; 005f78ce
    FMUL double ptr [ESP + 0x8]         ; 005f78d2
    LEA EDI,[ESP + 0x30]                ; 005f78d6
    LEA ESI,[ESP + 0x40]                ; 005f78da
    FXCH                                ; 005f78de
    FADDP ST4,ST0                       ; 005f78e0
    FXCH                                ; 005f78e2
    FADDP ST2,ST0                       ; 005f78e4
    FADDP ST4,ST0                       ; 005f78e6
    FXCH                                ; 005f78e8
    FSTP float ptr [ESP + 0x48]         ; 005f78ea
    FSTP float ptr [ESP + 0x4c]         ; 005f78ee
    FXCH                                ; 005f78f2
    FSTP float ptr [ESP + 0x40]         ; 005f78f4
    FSTP float ptr [ESP + 0x44]         ; 005f78f8
    MOVSD ES:EDI,ESI                    ; 005f78fc
        ;   Label: LAB_005f78fc
    MOVSD ES:EDI,ESI                    ; 005f78fd
    MOVSD ES:EDI,ESI                    ; 005f78fe
    MOVSD ES:EDI,ESI                    ; 005f78ff
    LEA ESI,[ESP + 0x30]                ; 005f7900
    MOV EDI,ECX                         ; 005f7904
    MOVSD ES:EDI,ESI                    ; 005f7906
    MOVSD ES:EDI,ESI                    ; 005f7907
    MOVSD ES:EDI,ESI                    ; 005f7908
    MOVSD ES:EDI,ESI                    ; 005f7909
    MOV EAX,ECX                         ; 005f790a
    MOV ESP,EBP                         ; 005f790c
    POP EBP                             ; 005f790e
    POP EDI                             ; 005f790f
    POP EBX                             ; 005f7910
    RET                                 ; 005f7911
    LEA EDI,[ESP + 0x30]                ; 005f7912
        ;   Label: LAB_005f7912
    MOV ESI,EDX                         ; 005f7916
    JMP 0x005f78fc                      ; 005f7918
        ;   XREF to: 005f78fc (UNCONDITIONAL_JUMP)  ; LAB_005f78fc
    LEA EDI,[ESP + 0x30]                ; 005f791a
        ;   Label: LAB_005f791a
    JMP 0x005f78fc                      ; 005f791e
        ;   XREF to: 005f78fc (UNCONDITIONAL_JUMP)  ; LAB_005f78fc
    MOV AH,byte ptr [ESP + 0x27]        ; 005f7920
        ;   Label: LAB_005f7920
    MOV BL,byte ptr [ESP + 0x2b]        ; 005f7924
    XOR AH,0x80                         ; 005f7928
    XOR BL,0x80                         ; 005f792b
    MOV byte ptr [ESP + 0x27],AH        ; 005f792e
    MOV AL,byte ptr [ESP + 0x2f]        ; 005f7932
    MOV byte ptr [ESP + 0x2b],BL        ; 005f7936
    XOR AL,0x80                         ; 005f793a
    MOV BH,byte ptr [ESP + 0x23]        ; 005f793c
    MOV byte ptr [ESP + 0x2f],AL        ; 005f7940
    MOV AH,byte ptr [ESP + 0x7]         ; 005f7944
    XOR BH,0x80                         ; 005f7948
    XOR AH,0x80                         ; 005f794b
    MOV byte ptr [ESP + 0x23],BH        ; 005f794e
    MOV byte ptr [ESP + 0x7],AH         ; 005f7952
    JMP 0x005f7866                      ; 005f7956
        ;   XREF to: 005f7866 (UNCONDITIONAL_JUMP)  ; LAB_005f7866
    FLD double ptr [ESP]                ; 005f795b
        ;   Label: LAB_005f795b
    FLD ST0                             ; 005f795e
    FMUL ST1                            ; 005f7960
    FLD1                                ; 005f7962
    FSUBRP                              ; 005f7964
    FSQRT                               ; 005f7966
    FLD ST0                             ; 005f7968
    FLD ST2                             ; 005f796a
    FXCH                                ; 005f796c
    CALL crt_math.c_atan2_FUN_006013b1  ; 005f796e
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FSTP ST2                            ; 005f7973
    FLD float ptr [EBP + 0x18]          ; 005f7975
    FLD1                                ; 005f7978
    FSUB ST0,ST1                        ; 005f797a
    FMUL ST3                            ; 005f797c
    FSIN                                ; 005f797e
    FXCH                                ; 005f7980
    FMULP ST3                           ; 005f7982
    FXCH ST2                            ; 005f7984
    FSIN                                ; 005f7986
    FLD1                                ; 005f7988
    FDIVRP ST2,ST0                      ; 005f798a
    FXCH ST2                            ; 005f798c
    FMUL ST1                            ; 005f798e
    FXCH ST2                            ; 005f7990
    FMULP                               ; 005f7992
    FXCH                                ; 005f7994
    FSTP double ptr [ESP + 0x10]        ; 005f7996
    FSTP double ptr [ESP + 0x8]         ; 005f799a
    JMP 0x005f789b                      ; 005f799e
        ;   XREF to: 005f789b (UNCONDITIONAL_JUMP)  ; LAB_005f789b

