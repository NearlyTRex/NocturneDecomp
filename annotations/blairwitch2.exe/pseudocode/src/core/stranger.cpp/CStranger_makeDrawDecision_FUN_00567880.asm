; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_makeDrawDecision_FUN_00567880(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined8       Stack[-0x108]:8  local_108
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
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
; XREF[1]:
;   core_stranger.cpp_FUN_00565ff0 at 005660d6
;
; Referenced Globals:
;   TerminatedCString s_core_stranger_cpp_005eb895
;   TerminatedCString s_CStranger_makeDrawDecisi_005eb8aa
;   undefined4 DAT_005eb8e5
;   undefined4 DAT_005eb8ed
;   undefined4 DAT_005eb8f5
;   undefined4 DAT_005eb8fd
;   undefined4 DAT_005eb905
;   undefined4 DAT_005eb90d
;   undefined4 DAT_005eb911
;   undefined4 DAT_005fc200
;   undefined4 DAT_005fc204
;   undefined4 DAT_005fc208
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264be3c
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_charactr.cpp_FUN_0042a5a0
;   core_main.c_FUN_004e4500
;   core_motion.cpp_FUN_00502f10
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_005038a0
;   core_motion.cpp_FUN_00503e60
;   core_motion.cpp_FUN_00503f50
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00545a60
;   core_stranger.cpp_FUN_00567fd0
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567880
        ;   Label: core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880
    PUSH ESI                            ; 00567881
    PUSH EDI                            ; 00567882
    PUSH EBP                            ; 00567883
    MOV EBP,ESP                         ; 00567884
    SUB ESP,0xf4                        ; 00567886
    AND ESP,0xfffffff8                  ; 0056788c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056788f
    MOV EDX,dword ptr [EBX + 0x2d04]    ; 00567892
    TEST EDX,EDX                        ; 00567898
    JL 0x005678a1                       ; 0056789a
        ;   XREF to: 005678a1 (CONDITIONAL_JUMP)  ; LAB_005678a1
    CMP EDX,0x11                        ; 0056789c
    JL 0x005678c4                       ; 0056789f
        ;   XREF to: 005678c4 (CONDITIONAL_JUMP)  ; LAB_005678c4
    MOV ESI,0x5eb895                    ; 005678a1 | = "..\\core\\stranger.cpp"
        ;   Label: LAB_005678a1
    MOV EDI,0xa78                       ; 005678a6
    PUSH 0x5eb8aa                       ; 005678ab | = "CStranger::makeDrawDecision - draw mo..."
    MOV dword ptr [0x01d046a0],ESI      ; 005678b0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005678b6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005678bc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005678c1
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005678c4
        ;   Label: LAB_005678c4
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 005678cc
    SHL EAX,0x3                         ; 005678d2
    MOV ESI,EAX                         ; 005678d5
    SHL EAX,0x3                         ; 005678d7
    SUB EAX,ESI                         ; 005678da
    CMP dword ptr [EBX + EAX*0x1 + 0x2834],0x0 ; 005678dc
    JNZ 0x005678f0                      ; 005678e4
        ;   XREF to: 005678f0 (CONDITIONAL_JUMP)  ; LAB_005678f0
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 005678e6
    MOV dword ptr [ESP + 0x10],EAX      ; 005678ec
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 005678f0
        ;   Label: LAB_005678f0
    SHL EAX,0x3                         ; 005678f6
    MOV ESI,EAX                         ; 005678f9
    SHL EAX,0x3                         ; 005678fb
    SUB EAX,ESI                         ; 005678fe
    CMP dword ptr [EBX + EAX*0x1 + 0x2838],0x0 ; 00567900
    JNZ 0x0056791c                      ; 00567908
        ;   XREF to: 0056791c (CONDITIONAL_JUMP)  ; LAB_0056791c
    FLD float ptr [EBX + 0x2d08]        ; 0056790a
    FLD1                                ; 00567910
    FSUBRP                              ; 00567912
    FMUL float ptr [ESP + 0x10]         ; 00567914
    FSTP float ptr [ESP + 0x10]         ; 00567918
    PUSH 0x28                           ; 0056791c
        ;   Label: LAB_0056791c
    LEA ESI,[EBX + 0x2b4]               ; 0056791e
    PUSH ESI                            ; 00567924
    CALL core_motion.cpp_FUN_005038a0   ; 00567925
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 0056792a
    ADD ESP,0x8                         ; 00567931
    PUSH 0x29                           ; 00567934
    PUSH ESI                            ; 00567936
    CALL core_motion.cpp_FUN_005038a0   ; 00567937
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0056793c
    FLD float ptr [ESP + 0xf8]          ; 00567943
    ADD ESP,0x8                         ; 0056794a
    PUSH 0x24                           ; 0056794d
    FADD float ptr [ESP + 0xdc]         ; 0056794f
    PUSH ESI                            ; 00567956
    FSTP float ptr [ESP + 0xe0]         ; 00567957
    CALL core_motion.cpp_FUN_005038a0   ; 0056795e
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00567963
    FLD float ptr [ESP + 0xf8]          ; 0056796a
    ADD ESP,0x8                         ; 00567971
    PUSH 0x22                           ; 00567974
    FADD float ptr [ESP + 0xdc]         ; 00567976
    PUSH ESI                            ; 0056797d
    FSTP float ptr [ESP + 0xe0]         ; 0056797e
    CALL core_motion.cpp_FUN_005038a0   ; 00567985
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 0056798a
    FLD float ptr [ESP + 0xf8]          ; 00567991
    ADD ESP,0x8                         ; 00567998
    FADD float ptr [ESP + 0xd8]         ; 0056799b
    FLD1                                ; 005679a2
    FSUBRP                              ; 005679a4
    FLD float ptr [ESP + 0x10]          ; 005679a6
    FXCH                                ; 005679aa
    FMUL ST1                            ; 005679ac
    FLDZ                                ; 005679ae
    FXCH                                ; 005679b0
    FSTP ST2                            ; 005679b2
    FXCH                                ; 005679b4
    FSTP float ptr [ESP + 0x10]         ; 005679b6
    FCOMP float ptr [ESP + 0x10]        ; 005679ba
    FNSTSW AX                           ; 005679be
    SAHF                                ; 005679c0
    JBE 0x005679c9                      ; 005679c1
        ;   XREF to: 005679c9 (CONDITIONAL_JUMP)  ; LAB_005679c9
    XOR ESI,ESI                         ; 005679c3
    MOV dword ptr [ESP + 0x10],ESI      ; 005679c5
    CMP dword ptr [EBX + 0x2d04],0xe    ; 005679c9
        ;   Label: LAB_005679c9
    JNZ 0x00567a5a                      ; 005679d0
        ;   XREF to: 00567a5a (CONDITIONAL_JUMP)  ; LAB_00567a5a
    LEA ESI,[EBX + 0x2b4]               ; 005679d6
    PUSH ESI                            ; 005679dc
    CALL core_motion.cpp_FUN_00503e60   ; 005679dd
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xf4],EAX      ; 005679e2
    FLD float ptr [ESP + 0xf4]          ; 005679e9
    ADD ESP,0x4                         ; 005679f0
    MOV EAX,0x3f800000                  ; 005679f3
    PUSH ESI                            ; 005679f8
    FSTP float ptr [ESP + 0x18]         ; 005679f9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005679fd
    CALL core_motion.cpp_FUN_005035c0   ; 00567a04
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00567a09
    ADD ESP,0x4                         ; 00567a0c
    CMP EAX,0x17                        ; 00567a0f
    JNZ 0x00567ea3                      ; 00567a12
        ;   XREF to: 00567ea3 (CONDITIONAL_JUMP)  ; LAB_00567ea3
    FLD float ptr [ESP + 0x14]          ; 00567a18
        ;   Label: LAB_00567a18
    FADD double ptr [0x005eb8f5]        ; 00567a1c | DAT_005eb8f5
    FMUL double ptr [0x005eb8ed]        ; 00567a22 | DAT_005eb8ed
        ;   Label: LAB_00567a22
    FSTP float ptr [ESP + 0xec]         ; 00567a28
    CMP dword ptr [ESP + 0xec],0x3f800000 ; 00567a2f
        ;   Label: LAB_00567a2f
    JLE 0x00567eca                      ; 00567a3a
        ;   XREF to: 00567eca (CONDITIONAL_JUMP)  ; LAB_00567eca
    MOV dword ptr [ESP + 0xec],0x3f800000 ; 00567a40
    FLD float ptr [ESP + 0x10]          ; 00567a4b
        ;   Label: LAB_00567a4b
    FMUL float ptr [ESP + 0xec]         ; 00567a4f
    FSTP float ptr [ESP + 0x10]         ; 00567a56
    FLD float ptr [ESP + 0x10]          ; 00567a5a
        ;   Label: LAB_00567a5a
    FST double ptr [ESP]                ; 00567a5e
    FCOMP double ptr [0x005eb8fd]       ; 00567a61 | DAT_005eb8fd
    FNSTSW AX                           ; 00567a67
    SAHF                                ; 00567a69
    JBE 0x00567e9c                      ; 00567a6a
        ;   XREF to: 00567e9c (CONDITIONAL_JUMP)  ; LAB_00567e9c
    FLD1                                ; 00567a70
    FCOMP double ptr [ESP]              ; 00567a72
    FNSTSW AX                           ; 00567a75
    SAHF                                ; 00567a77
    JNC 0x00567a82                      ; 00567a78
        ;   XREF to: 00567a82 (CONDITIONAL_JUMP)  ; LAB_00567a82
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 00567a7a
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 00567a82
        ;   Label: LAB_00567a82
    SHL EAX,0x3                         ; 00567a88
    MOV ESI,EAX                         ; 00567a8b
    SHL EAX,0x3                         ; 00567a8d
    SUB EAX,ESI                         ; 00567a90
    MOV ESI,EAX                         ; 00567a92
    LEA EAX,[EBX + 0x2834]              ; 00567a94
    ADD EAX,ESI                         ; 00567a9a
    PUSH 0x1                            ; 00567a9c
    ADD EAX,0x8                         ; 00567a9e
    PUSH EAX                            ; 00567aa1
    LEA ESI,[EBX + 0x2b4]               ; 00567aa2
    PUSH ESI                            ; 00567aa8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00567aa9
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567aae
    PUSH EAX                            ; 00567ab1
    CALL core_motion.cpp_FUN_00502f10   ; 00567ab2
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00567ab7
    PUSH dword ptr [EBX + 0x2d08]       ; 00567aba
    PUSH EAX                            ; 00567ac0
    PUSH ESI                            ; 00567ac1
    MOV dword ptr [ESP + 0xf4],EAX      ; 00567ac2
    CALL core_motion.cpp_FUN_00503f50   ; 00567ac9
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [ESP + 0xfc],EAX      ; 00567ace
    FLD float ptr [ESP + 0xfc]          ; 00567ad5
    ADD ESP,0xc                         ; 00567adc
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 00567adf
    FSTP float ptr [ESP + 0xe4]         ; 00567ae5
    CMP EAX,0x9                         ; 00567aec
    JNZ 0x00567b73                      ; 00567aef
        ;   XREF to: 00567b73 (CONDITIONAL_JUMP)  ; LAB_00567b73
    FLD float ptr [EBX + 0x2d08]        ; 00567af5
    FLD1                                ; 00567afb
    FCOMPP                              ; 00567afd
    FNSTSW AX                           ; 00567aff
    SAHF                                ; 00567b01
    JA 0x00567b73                       ; 00567b02
        ;   XREF to: 00567b73 (CONDITIONAL_JUMP)  ; LAB_00567b73
    CMP dword ptr [EBX + 0x256a0],0x0   ; 00567b04
    JZ 0x00567b73                       ; 00567b0b
        ;   XREF to: 00567b73 (CONDITIONAL_JUMP)  ; LAB_00567b73
    PUSH 0x1                            ; 00567b0d
    LEA EAX,[EBX + 0x2a6c]              ; 00567b0f
    PUSH EAX                            ; 00567b15
    PUSH ESI                            ; 00567b16
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00567b17
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567b1c
    PUSH EAX                            ; 00567b1f
    CALL core_motion.cpp_FUN_00502f10   ; 00567b20
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00567b25
    PUSH 0x3f800000                     ; 00567b28
    MOV EDI,EAX                         ; 00567b2d
    PUSH 0x0                            ; 00567b2f
    MOV dword ptr [ESP + 0xf0],EAX      ; 00567b31
    CALL core_actor.cpp_FUN_0040cf60    ; 00567b38
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00567b3d
    FLD float ptr [ESP + 0xf8]          ; 00567b44
    ADD ESP,0x8                         ; 00567b4b
    SUB ESP,0x4                         ; 00567b4e
    FSTP float ptr [ESP]                ; 00567b51
    PUSH EDI                            ; 00567b54
    PUSH ESI                            ; 00567b55
    CALL core_motion.cpp_FUN_00503f50   ; 00567b56
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [ESP + 0xfc],EAX      ; 00567b5b
    FLD float ptr [ESP + 0xfc]          ; 00567b62
    ADD ESP,0xc                         ; 00567b69
    FSTP float ptr [ESP + 0xe4]         ; 00567b6c
    PUSH 0x544cc0                       ; 00567b73
        ;   Label: LAB_00567b73
    MOV ECX,dword ptr [0x0264be74]      ; 00567b78 | DAT_0264be74
    PUSH ECX                            ; 00567b7e
    PUSH dword ptr [ESP + 0x18]         ; 00567b7f
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00567b83
    PUSH dword ptr [ESP + 0xf0]         ; 00567b8a
    PUSH ESI                            ; 00567b91
    LEA EAX,[EBX + 0x2b4]               ; 00567b92
    PUSH EAX                            ; 00567b98
    CALL core_skeleton.cpp_FUN_00545a60 ; 00567b99
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    MOV EDI,dword ptr [EBX + 0x2d04]    ; 00567b9e
    ADD ESP,0x18                        ; 00567ba4
    TEST EDI,EDI                        ; 00567ba7
    JNZ 0x00567c41                      ; 00567ba9
        ;   XREF to: 00567c41 (CONDITIONAL_JUMP)  ; LAB_00567c41
    MOV EAX,[0x0264be48]                ; 00567baf | DAT_0264be48
    LEA ESI,[EBX + 0x964]               ; 00567bb4
    SHL EAX,0x4                         ; 00567bba
    ADD EAX,ESI                         ; 00567bbd
    PUSH dword ptr [EBX + 0x2d08]       ; 00567bbf
    PUSH EAX                            ; 00567bc5
    MOV EAX,[0x0264be68]                ; 00567bc6 | DAT_0264be68
    SHL EAX,0x4                         ; 00567bcb
    ADD EAX,ESI                         ; 00567bce
    PUSH EAX                            ; 00567bd0
    MOV dword ptr [ESP + 0xe4],ESI      ; 00567bd1
    LEA ESI,[ESP + 0x54]                ; 00567bd8
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00567bdc
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    MOV EAX,[0x0264be68]                ; 00567be1 | DAT_0264be68
    SHL EAX,0x4                         ; 00567be6
    LEA ESI,[ESP + 0x54]                ; 00567be9
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 00567bed
    ADD ESP,0xc                         ; 00567bf4
    MOVSD ES:EDI,ESI                    ; 00567bf7
    MOVSD ES:EDI,ESI                    ; 00567bf8
    MOVSD ES:EDI,ESI                    ; 00567bf9
    MOVSD ES:EDI,ESI                    ; 00567bfa
    MOV EAX,[0x0264be44]                ; 00567bfb | DAT_0264be44
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00567c00
    SHL EAX,0x4                         ; 00567c07
    ADD EAX,ESI                         ; 00567c0a
    PUSH dword ptr [EBX + 0x2d08]       ; 00567c0c
    PUSH EAX                            ; 00567c12
    MOV EAX,[0x0264be64]                ; 00567c13 | DAT_0264be64
    SHL EAX,0x4                         ; 00567c18
    ADD EAX,ESI                         ; 00567c1b
    PUSH EAX                            ; 00567c1d
    LEA ESI,[ESP + 0x24]                ; 00567c1e
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00567c22
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    MOV EAX,[0x0264be64]                ; 00567c27 | DAT_0264be64
    SHL EAX,0x4                         ; 00567c2c
    LEA ESI,[ESP + 0x24]                ; 00567c2f
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 00567c33
    ADD ESP,0xc                         ; 00567c3a
    MOVSD ES:EDI,ESI                    ; 00567c3d
    MOVSD ES:EDI,ESI                    ; 00567c3e
    MOVSD ES:EDI,ESI                    ; 00567c3f
    MOVSD ES:EDI,ESI                    ; 00567c40
    CMP dword ptr [EBX + 0x2d04],0x1    ; 00567c41
        ;   Label: LAB_00567c41
    JNZ 0x00567db4                      ; 00567c48
        ;   XREF to: 00567db4 (CONDITIONAL_JUMP)  ; LAB_00567db4
    FLD float ptr [EBX + 0x2565c]       ; 00567c4e
    FADD float ptr [EBX + 0x2567c]      ; 00567c54
    FMUL double ptr [0x005eb905]        ; 00567c5a | DAT_005eb905
    MOV ECX,0x3e860a92                  ; 00567c60
    XOR EDX,EDX                         ; 00567c65
    MOV ESI,0x3f19999a                  ; 00567c67
    MOV dword ptr [ESP + 0x8],EDX       ; 00567c6c
    MOV dword ptr [ESP + 0xe0],ECX      ; 00567c70
    MOV dword ptr [ESP + 0xdc],ESI      ; 00567c77
    FST float ptr [ESP + 0xc]           ; 00567c7e
    FLDZ                                ; 00567c82
    FCOMPP                              ; 00567c84
    FNSTSW AX                           ; 00567c86
    SAHF                                ; 00567c88
    JBE 0x00567cab                      ; 00567c89
        ;   XREF to: 00567cab (CONDITIONAL_JUMP)  ; LAB_00567cab
    FLD float ptr [0x005eb90d]          ; 00567c8b | DAT_005eb90d
    FLD float ptr [ESP + 0xc]           ; 00567c91
    FADD ST0,ST1                        ; 00567c95
    FLD float ptr [0x005fc200]          ; 00567c97 | DAT_005fc200
    FADDP ST2,ST0                       ; 00567c9d
    FDIVRP                              ; 00567c9f
    FMUL float ptr [0x005eb911]         ; 00567ca1 | DAT_005eb911
    FSTP float ptr [ESP + 0x8]          ; 00567ca7
    FLD float ptr [ESP + 0xc]           ; 00567cab
        ;   Label: LAB_00567cab
    FLDZ                                ; 00567caf
    FCOMPP                              ; 00567cb1
    FNSTSW AX                           ; 00567cb3
    SAHF                                ; 00567cb5
    JNC 0x00567cda                      ; 00567cb6
        ;   XREF to: 00567cda (CONDITIONAL_JUMP)  ; LAB_00567cda
    FLD float ptr [ESP + 0xe0]          ; 00567cb8
    FLD float ptr [ESP + 0xc]           ; 00567cbf
    FSUB ST0,ST1                        ; 00567cc3
    FLD float ptr [0x005fc204]          ; 00567cc5 | DAT_005fc204
    FSUBRP ST2,ST0                      ; 00567ccb
    FDIVRP                              ; 00567ccd
    FMUL float ptr [ESP + 0xdc]         ; 00567ccf
    FSTP float ptr [ESP + 0x8]          ; 00567cd6
    PUSH 0x3                            ; 00567cda
        ;   Label: LAB_00567cda
    PUSH EBX                            ; 00567cdc
    CALL core_charactr.cpp_FUN_0042a5a0 ; 00567cdd
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00567ce2
    FLD float ptr [ESP + 0xf8]          ; 00567ce9
    FLD1                                ; 00567cf0
    FSUBRP                              ; 00567cf2
    ADD ESP,0x8                         ; 00567cf4
    FMUL float ptr [ESP + 0x10]         ; 00567cf7
    FMUL float ptr [ESP + 0x8]          ; 00567cfb
    FST float ptr [ESP + 0x8]           ; 00567cff
    FLDZ                                ; 00567d03
    FCOMPP                              ; 00567d05
    FNSTSW AX                           ; 00567d07
    SAHF                                ; 00567d09
    JNC 0x00567d58                      ; 00567d0a
        ;   XREF to: 00567d58 (CONDITIONAL_JUMP)  ; LAB_00567d58
    PUSH 0x5625c0                       ; 00567d0c
    MOV EDI,dword ptr [0x0264be74]      ; 00567d11 | DAT_0264be74
    PUSH EDI                            ; 00567d17
    PUSH dword ptr [ESP + 0x10]         ; 00567d18
    LEA ESI,[ESP + 0x84]                ; 00567d1c
    PUSH dword ptr [ESP + 0x18]         ; 00567d23
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00567d27
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00567d2c
    LEA EAX,[ESP + 0xa4]                ; 00567d2f
    LEA EDI,[ESP + 0xa4]                ; 00567d36
    PUSH EAX                            ; 00567d3d
    LEA EAX,[EBX + 0x2b4]               ; 00567d3e
    LEA ESI,[ESP + 0x88]                ; 00567d44
    PUSH EAX                            ; 00567d4b
    MOVSD ES:EDI,ESI                    ; 00567d4c
    MOVSD ES:EDI,ESI                    ; 00567d4d
    MOVSD ES:EDI,ESI                    ; 00567d4e
    MOVSD ES:EDI,ESI                    ; 00567d4f
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00567d50
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00567d55
    PUSH 0x0                            ; 00567d58
        ;   Label: LAB_00567d58
    PUSH EBX                            ; 00567d5a
    CALL core_stranger.cpp_FUN_00567fd0 ; 00567d5b
        ;   XREF to: 00567fd0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00567fd0(CStranger * this_ptr, int arm_side)
    ADD ESP,0x8                         ; 00567d60
    PUSH 0x1                            ; 00567d63
    PUSH EBX                            ; 00567d65
    CALL core_stranger.cpp_FUN_00567fd0 ; 00567d66
        ;   XREF to: 00567fd0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00567fd0(CStranger * this_ptr, int arm_side)
    MOV EAX,[0x0264be68]                ; 00567d6b | DAT_0264be68
    MOV ESI,dword ptr [0x0264be48]      ; 00567d70 | DAT_0264be48
    SHL EAX,0x4                         ; 00567d76
    SHL ESI,0x4                         ; 00567d79
    LEA EDI,[EBX + EAX*0x1 + 0x964]     ; 00567d7c
    LEA ESI,[ESI + EBX*0x1 + 0x964]     ; 00567d83
    MOVSD ES:EDI,ESI                    ; 00567d8a
    MOVSD ES:EDI,ESI                    ; 00567d8b
    MOVSD ES:EDI,ESI                    ; 00567d8c
    MOVSD ES:EDI,ESI                    ; 00567d8d
    MOV ESI,dword ptr [0x0264be64]      ; 00567d8e | DAT_0264be64
    MOV EAX,[0x0264be44]                ; 00567d94 | DAT_0264be44
    SHL ESI,0x4                         ; 00567d99
    SHL EAX,0x4                         ; 00567d9c
    LEA EDI,[ESI + EBX*0x1 + 0x964]     ; 00567d9f
    LEA ESI,[EBX + EAX*0x1 + 0x964]     ; 00567da6
    ADD ESP,0x8                         ; 00567dad
    MOVSD ES:EDI,ESI                    ; 00567db0
    MOVSD ES:EDI,ESI                    ; 00567db1
    MOVSD ES:EDI,ESI                    ; 00567db2
    MOVSD ES:EDI,ESI                    ; 00567db3
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 00567db4
        ;   Label: LAB_00567db4
    CMP EAX,0x3                         ; 00567dba
    JNZ 0x00567eea                      ; 00567dbd
        ;   XREF to: 00567eea (CONDITIONAL_JUMP)  ; LAB_00567eea
    PUSH 0x3                            ; 00567dc3
        ;   Label: LAB_00567dc3
    PUSH EBX                            ; 00567dc5
    CALL core_charactr.cpp_FUN_0042a5a0 ; 00567dc6
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00567dcb
    FLD float ptr [ESP + 0xf8]          ; 00567dd2
    FLD1                                ; 00567dd9
    FSUBRP                              ; 00567ddb
    ADD ESP,0x8                         ; 00567ddd
    FMUL float ptr [ESP + 0x10]         ; 00567de0
    LEA ESI,[ESP + 0x88]                ; 00567de4
    PUSH dword ptr [EBX + 0x2565c]      ; 00567deb
    FSTP float ptr [ESP + 0xd4]         ; 00567df1
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00567df8
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00567dfd
    PUSH 0x5625c0                       ; 00567e00
    MOV EDX,dword ptr [0x0264be74]      ; 00567e05 | DAT_0264be74
    PUSH EDX                            ; 00567e0b
    LEA EAX,[ESP + 0x30]                ; 00567e0c
    PUSH dword ptr [ESP + 0xd8]         ; 00567e10
    LEA EDI,[ESP + 0x34]                ; 00567e17
    PUSH EAX                            ; 00567e1b
    LEA EAX,[EBX + 0x2b4]               ; 00567e1c
    LEA ESI,[ESP + 0x98]                ; 00567e22
    PUSH EAX                            ; 00567e29
    MOVSD ES:EDI,ESI                    ; 00567e2a
    MOVSD ES:EDI,ESI                    ; 00567e2b
    MOVSD ES:EDI,ESI                    ; 00567e2c
    MOVSD ES:EDI,ESI                    ; 00567e2d
    MOV dword ptr [ESP + 0xec],EAX      ; 00567e2e
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00567e35
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00567e3a
    LEA ESI,[ESP + 0xa8]                ; 00567e3d
    PUSH dword ptr [EBX + 0x25660]      ; 00567e44
    LEA EDI,[ESP + 0xbc]                ; 00567e4a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00567e51
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0xac]                ; 00567e56
    ADD ESP,0x4                         ; 00567e5d
    MOVSD ES:EDI,ESI                    ; 00567e60
    MOVSD ES:EDI,ESI                    ; 00567e61
    MOVSD ES:EDI,ESI                    ; 00567e62
    MOVSD ES:EDI,ESI                    ; 00567e63
    PUSH 0x5625c0                       ; 00567e64
    MOV ESI,dword ptr [0x0264be74]      ; 00567e69 | DAT_0264be74
    PUSH ESI                            ; 00567e6f
    LEA EAX,[ESP + 0xc0]                ; 00567e70
    PUSH dword ptr [ESP + 0xd8]         ; 00567e77
    PUSH EAX                            ; 00567e7e
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00567e7f
    PUSH EDI                            ; 00567e86
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00567e87
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00567e8c
    CMP dword ptr [EBX + 0x2d04],0xe    ; 00567e8f
    JZ 0x00567f27                       ; 00567e96
        ;   XREF to: 00567f27 (CONDITIONAL_JUMP)  ; LAB_00567f27
    MOV ESP,EBP                         ; 00567e9c
        ;   Label: LAB_00567e9c
    POP EBP                             ; 00567e9e
    POP EDI                             ; 00567e9f
    POP ESI                             ; 00567ea0
    POP EBX                             ; 00567ea1
    RET                                 ; 00567ea2
    CMP EAX,0x18                        ; 00567ea3
        ;   Label: LAB_00567ea3
    JZ 0x00567a18                       ; 00567ea6
        ;   XREF to: 00567a18 (CONDITIONAL_JUMP)  ; LAB_00567a18
    CMP EAX,0x19                        ; 00567eac
    JNZ 0x00567ec0                      ; 00567eaf
        ;   XREF to: 00567ec0 (CONDITIONAL_JUMP)  ; LAB_00567ec0
    FLD float ptr [ESP + 0x14]          ; 00567eb1
        ;   Label: LAB_00567eb1
    FSUBR double ptr [0x005eb8e5]       ; 00567eb5 | DAT_005eb8e5
    JMP 0x00567a22                      ; 00567ebb
        ;   XREF to: 00567a22 (UNCONDITIONAL_JUMP)  ; LAB_00567a22
    CMP EAX,0x1a                        ; 00567ec0
        ;   Label: LAB_00567ec0
    JZ 0x00567eb1                       ; 00567ec3
        ;   XREF to: 00567eb1 (CONDITIONAL_JUMP)  ; LAB_00567eb1
    JMP 0x00567a2f                      ; 00567ec5
        ;   XREF to: 00567a2f (UNCONDITIONAL_JUMP)  ; LAB_00567a2f
    FLDZ                                ; 00567eca
        ;   Label: LAB_00567eca
    FCOMP float ptr [ESP + 0xec]        ; 00567ecc
    FNSTSW AX                           ; 00567ed3
    SAHF                                ; 00567ed5
    JBE 0x00567a4b                      ; 00567ed6
        ;   XREF to: 00567a4b (CONDITIONAL_JUMP)  ; LAB_00567a4b
    XOR ECX,ECX                         ; 00567edc
    MOV dword ptr [ESP + 0xec],ECX      ; 00567ede
    JMP 0x00567a4b                      ; 00567ee5
        ;   XREF to: 00567a4b (UNCONDITIONAL_JUMP)  ; LAB_00567a4b
    CMP EAX,0x4                         ; 00567eea
        ;   Label: LAB_00567eea
    JZ 0x00567dc3                       ; 00567eed
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    CMP EAX,0x9                         ; 00567ef3
    JZ 0x00567dc3                       ; 00567ef6
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    CMP EAX,0x6                         ; 00567efc
    JZ 0x00567dc3                       ; 00567eff
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    CMP EAX,0x7                         ; 00567f05
    JZ 0x00567dc3                       ; 00567f08
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    CMP EAX,0x8                         ; 00567f0e
    JZ 0x00567dc3                       ; 00567f11
        ;   XREF to: 00567dc3 (CONDITIONAL_JUMP)  ; LAB_00567dc3
    CMP dword ptr [EBX + 0x2d04],0xe    ; 00567f17
    JZ 0x00567f27                       ; 00567f1e
        ;   XREF to: 00567f27 (CONDITIONAL_JUMP)  ; LAB_00567f27
    MOV ESP,EBP                         ; 00567f20
    POP EBP                             ; 00567f22
    POP EDI                             ; 00567f23
    POP ESI                             ; 00567f24
    POP EBX                             ; 00567f25
    RET                                 ; 00567f26
    FLD float ptr [EBX + 0x2571c]       ; 00567f27
        ;   Label: LAB_00567f27
    FDIV float ptr [0x005fc208]         ; 00567f2d | DAT_005fc208
    FLD1                                ; 00567f33
    FPATAN                              ; 00567f35
    LEA ESI,[ESP + 0x38]                ; 00567f37
    FSTP float ptr [ESP + 0xd4]         ; 00567f3b
    PUSH dword ptr [ESP + 0xd4]         ; 00567f42
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00567f49
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00567f4e
    PUSH 0x544cc0                       ; 00567f51
    MOV EDX,dword ptr [0x0264be40]      ; 00567f56 | DAT_0264be40
    PUSH EDX                            ; 00567f5c
    LEA EAX,[ESP + 0x70]                ; 00567f5d
    PUSH 0x3f800000                     ; 00567f61
    LEA EDI,[ESP + 0x74]                ; 00567f66
    PUSH EAX                            ; 00567f6a
    ADD EBX,0x2b4                       ; 00567f6b
    LEA ESI,[ESP + 0x48]                ; 00567f71
    PUSH EBX                            ; 00567f75
    MOVSD ES:EDI,ESI                    ; 00567f76
    MOVSD ES:EDI,ESI                    ; 00567f77
    MOVSD ES:EDI,ESI                    ; 00567f78
    MOVSD ES:EDI,ESI                    ; 00567f79
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00567f7a
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00567f7f
    LEA ESI,[ESP + 0x58]                ; 00567f82
    FLD float ptr [ESP + 0xd4]          ; 00567f86
    SUB ESP,0x4                         ; 00567f8d
    FCHS                                ; 00567f90
    FSTP float ptr [ESP]                ; 00567f92
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00567f95
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 00567f9a
    PUSH 0x544cc0                       ; 00567f9d
    MOV ECX,dword ptr [0x0264be3c]      ; 00567fa2 | DAT_0264be3c
    PUSH ECX                            ; 00567fa8
    LEA EAX,[ESP + 0x70]                ; 00567fa9
    PUSH 0x3f800000                     ; 00567fad
    PUSH EAX                            ; 00567fb2
    LEA EDI,[ESP + 0x78]                ; 00567fb3
    LEA ESI,[ESP + 0x68]                ; 00567fb7
    PUSH EBX                            ; 00567fbb
    MOVSD ES:EDI,ESI                    ; 00567fbc
    MOVSD ES:EDI,ESI                    ; 00567fbd
    MOVSD ES:EDI,ESI                    ; 00567fbe
    MOVSD ES:EDI,ESI                    ; 00567fbf
    CALL core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40 ; 00567fc0
        ;   XREF to: 00546f40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40(CDeformableModelInstance * this_ptr, CQuaternion4f * rotation_quat, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 00567fc5
    MOV ESP,EBP                         ; 00567fc8
    POP EBP                             ; 00567fca
    POP EDI                             ; 00567fcb
    POP ESI                             ; 00567fcc
    POP EBX                             ; 00567fcd
    RET                                 ; 00567fce

