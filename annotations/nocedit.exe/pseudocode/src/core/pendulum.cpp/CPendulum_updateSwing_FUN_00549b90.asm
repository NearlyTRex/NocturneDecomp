; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_updateSwing_FUN_00549b90(CPendulum *this_ptr,float delta_time)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; CVector3f        Stack[-0x30]:12  local_30
; double           Stack[-0x24]:8  local_24
; double           Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_pendulum.cpp_CPendulum_processInEditor_FUN_0054a790 at 0054a7a4
;   core_pendulum.cpp_CPendulum_process_FUN_0054a180 at 0054a1d4
;
; Referenced Globals:
;   float FLOAT_0063ecb5 = 0.5
;   double DOUBLE_0063ecb9 = 2
;   double DOUBLE_0063ecc1 = 3.14159265350000
;   double DOUBLE_0063ecc9 = -1
;   double DOUBLE_0063ecd1 = 0.100000000000000
;   double DOUBLE_0063ecd9 = -0.5
;   double DOUBLE_0063ece1 = 0.5
;   float FLOAT_0063ece9 = -1
;   double DOUBLE_0063ecf1 = 0.25
;   double DOUBLE_0063ecf9 = 0.75
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549b90
        ;   Label: core_pendulum.cpp_CPendulum_updateSwing_FUN_00549b90
    PUSH ESI                            ; 00549b91
    PUSH EDI                            ; 00549b92
    PUSH EBP                            ; 00549b93
    MOV EBP,ESP                         ; 00549b94
    SUB ESP,0x58                        ; 00549b96
    AND ESP,0xfffffff8                  ; 00549b99
    MOV EBX,dword ptr [EBP + 0x14]      ; 00549b9c
    FLD float ptr [EBX + 0x3a0]         ; 00549b9f
    FSTP double ptr [ESP + 0x44]        ; 00549ba5
    MOV EDX,dword ptr [ESP + 0x48]      ; 00549ba9
    PUSH EDX                            ; 00549bad
    MOV ECX,dword ptr [ESP + 0x48]      ; 00549bae
    PUSH ECX                            ; 00549bb2
    CALL crt_math.c_floor_FUN_005feb90  ; 00549bb3
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00549bb8
    MOV dword ptr [ESP + 0x58],EDX      ; 00549bbc
    FLD double ptr [ESP + 0x54]         ; 00549bc0
    ADD ESP,0x8                         ; 00549bc4
    FLD float ptr [EBP + 0x18]          ; 00549bc7
    FDIV float ptr [EBX + 0x3a4]        ; 00549bca
    MOV ESI,dword ptr [EBX + 0x43c]     ; 00549bd0
    FXCH                                ; 00549bd6
    FSUBR double ptr [ESP + 0x44]       ; 00549bd8
    FXCH                                ; 00549bdc
    FADD float ptr [EBX + 0x3a0]        ; 00549bde
    FXCH                                ; 00549be4
    FSTP float ptr [ESP + 0x24]         ; 00549be6
    FSTP float ptr [EBX + 0x3a0]        ; 00549bea
    TEST ESI,ESI                        ; 00549bf0
    JZ 0x00549c15                       ; 00549bf2
        ;   XREF to: 00549c15 (CONDITIONAL_JUMP)  ; LAB_00549c15
    FLD float ptr [EBX + 0x3a0]         ; 00549bf4
    FLD1                                ; 00549bfa
    FCOMPP                              ; 00549bfc
    FNSTSW AX                           ; 00549bfe
    SAHF                                ; 00549c00
    JNC 0x00549c15                      ; 00549c01
        ;   XREF to: 00549c15 (CONDITIONAL_JUMP)  ; LAB_00549c15
    FLD float ptr [EBX + 0x3a0]         ; 00549c03
    FADD float ptr [0x0063ecb5]         ; 00549c09 | FLOAT_0063ecb5
    FSTP float ptr [EBX + 0x3a0]        ; 00549c0f
    SUB ESP,0x8                         ; 00549c15
        ;   Label: LAB_00549c15
    FLD float ptr [EBX + 0x3a0]         ; 00549c18
    FSTP double ptr [ESP]               ; 00549c1e
    CALL crt_math.c_floor_FUN_005feb90  ; 00549c21
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00549c26
    MOV dword ptr [ESP + 0x58],EDX      ; 00549c2a
    FLD double ptr [ESP + 0x54]         ; 00549c2e
    ADD ESP,0x8                         ; 00549c32
    FSUBR float ptr [EBX + 0x3a0]       ; 00549c35
    FST float ptr [EBX + 0x3a0]         ; 00549c3b
    FMUL double ptr [0x0063ecb9]        ; 00549c41 | DOUBLE_0063ecb9
    FMUL double ptr [0x0063ecc1]        ; 00549c47 | DOUBLE_0063ecc1
    FSIN                                ; 00549c4d
    FMUL float ptr [EBX + 0x3a8]        ; 00549c4f
    FLD float ptr [EBX + 0x434]         ; 00549c55
    FADD float ptr [EBP + 0x18]         ; 00549c5b
    FLD float ptr [EBX + 0x430]         ; 00549c5e
    FMUL double ptr [0x0063ecc9]        ; 00549c64 | DOUBLE_0063ecc9
    FXCH                                ; 00549c6a
    FST float ptr [EBX + 0x434]         ; 00549c6c
    FMULP                               ; 00549c72
    FLD1                                ; 00549c74
    FLDL2E                              ; 00549c76
    FMUL ST2                            ; 00549c78
    FST ST2                             ; 00549c7a
    FPREM                               ; 00549c7c
    F2XM1                               ; 00549c7e
    FADDP                               ; 00549c80
    FSCALE                              ; 00549c82
    FSTP ST1                            ; 00549c84
    FMULP                               ; 00549c86
    PUSH EBX                            ; 00549c88
    FSTP float ptr [EBX + 0x38]         ; 00549c89
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 00549c8c
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00549c91
    LEA EAX,[EBX + 0x410]               ; 00549c94
    PUSH EAX                            ; 00549c9a
    LEA EAX,[ESP + 0x3c]                ; 00549c9b
    PUSH EAX                            ; 00549c9f
    PUSH EBX                            ; 00549ca0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00549ca1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x41c]               ; 00549ca6
    ADD ESP,0xc                         ; 00549cac
    CMP EDX,EAX                         ; 00549caf
    JZ 0x00549cc3                       ; 00549cb1
        ;   XREF to: 00549cc3 (CONDITIONAL_JUMP)  ; LAB_00549cc3
    MOV ECX,dword ptr [EAX]             ; 00549cb3
    MOV dword ptr [EDX],ECX             ; 00549cb5
    MOV ECX,dword ptr [EAX + 0x4]       ; 00549cb7
    MOV dword ptr [EDX + 0x4],ECX       ; 00549cba
    MOV ECX,dword ptr [EAX + 0x8]       ; 00549cbd
    MOV dword ptr [EDX + 0x8],ECX       ; 00549cc0
    FLD float ptr [EBX + 0x430]         ; 00549cc3
        ;   Label: LAB_00549cc3
    FMUL double ptr [0x0063ecc9]        ; 00549cc9 | DOUBLE_0063ecc9
    FMUL float ptr [EBX + 0x434]        ; 00549ccf
    FLD1                                ; 00549cd5
    FLDL2E                              ; 00549cd7
    FMUL ST2                            ; 00549cd9
    FST ST2                             ; 00549cdb
    FPREM                               ; 00549cdd
    F2XM1                               ; 00549cdf
    FADDP                               ; 00549ce1
    FSCALE                              ; 00549ce3
    FSTP ST1                            ; 00549ce5
    FLD float ptr [EBP + 0x18]          ; 00549ce7
    FLDZ                                ; 00549cea
    FXCH ST2                            ; 00549cec
    FSTP float ptr [ESP + 0xc]          ; 00549cee
    FXCH                                ; 00549cf2
    FCOMPP                              ; 00549cf4
    FNSTSW AX                           ; 00549cf6
    SAHF                                ; 00549cf8
    JNC 0x00549f4c                      ; 00549cf9
        ;   XREF to: 00549f4c (CONDITIONAL_JUMP)  ; LAB_00549f4c
    FLD float ptr [ESP + 0xc]           ; 00549cff
    FCOMP double ptr [0x0063ecd1]       ; 00549d03 | DOUBLE_0063ecd1
    FNSTSW AX                           ; 00549d09
    SAHF                                ; 00549d0b
    JBE 0x00549f4c                      ; 00549d0c
        ;   XREF to: 00549f4c (CONDITIONAL_JUMP)  ; LAB_00549f4c
    FLD float ptr [ESP + 0x24]          ; 00549d12
    MOV EAX,dword ptr [ESP + 0x24]      ; 00549d16
    XOR EDI,EDI                         ; 00549d1a
    MOV dword ptr [ESP + 0x20],EAX      ; 00549d1c
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00549d20
    MOV dword ptr [ESP + 0x34],EDI      ; 00549d26
    MOV dword ptr [ESP + 0x28],EAX      ; 00549d2a
    FCOMP double ptr [0x0063ecd9]       ; 00549d2e | DOUBLE_0063ecd9
    FNSTSW AX                           ; 00549d34
    SAHF                                ; 00549d36
    JC 0x00549f53                       ; 00549d37
        ;   XREF to: 00549f53 (CONDITIONAL_JUMP)  ; LAB_00549f53
    FLD float ptr [ESP + 0x34]          ; 00549d3d
        ;   Label: LAB_00549d3d
    FADD double ptr [0x0063ece1]        ; 00549d41 | DOUBLE_0063ece1
    FLD float ptr [ESP + 0x20]          ; 00549d47
    FCOMPP                              ; 00549d4b
    FNSTSW AX                           ; 00549d4d
    SAHF                                ; 00549d4f
    JBE 0x00549d60                      ; 00549d50
        ;   XREF to: 00549d60 (CONDITIONAL_JUMP)  ; LAB_00549d60
    FLD float ptr [ESP + 0x20]          ; 00549d52
    FADD float ptr [0x0063ece9]         ; 00549d56 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x20]         ; 00549d5c
    FLD float ptr [ESP + 0x20]          ; 00549d60
        ;   Label: LAB_00549d60
    FCOMP float ptr [ESP + 0x34]        ; 00549d64
    FNSTSW AX                           ; 00549d68
    SAHF                                ; 00549d6a
    JBE 0x00549f62                      ; 00549d6b
        ;   XREF to: 00549f62 (CONDITIONAL_JUMP)  ; LAB_00549f62
    FLD float ptr [EBX + 0x3cc]         ; 00549d71
        ;   Label: LAB_00549d71
    FADD double ptr [0x0063ecf1]        ; 00549d77 | DOUBLE_0063ecf1
    FSTP float ptr [ESP + 0x54]         ; 00549d7d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00549d81
    FLD float ptr [ESP + 0x54]          ; 00549d85
    MOV dword ptr [ESP + 0x2c],EAX      ; 00549d89
    MOV EAX,dword ptr [ESP + 0x24]      ; 00549d8d
    FADD double ptr [0x0063ecd9]        ; 00549d91 | DOUBLE_0063ecd9
    MOV dword ptr [ESP + 0x14],EAX      ; 00549d97
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00549d9b
    FLD float ptr [ESP + 0x24]          ; 00549da1
    MOV dword ptr [ESP + 0x4],EAX       ; 00549da5
    FCOMPP                              ; 00549da9
    FNSTSW AX                           ; 00549dab
    SAHF                                ; 00549dad
    JNC 0x00549dba                      ; 00549dae
        ;   XREF to: 00549dba (CONDITIONAL_JUMP)  ; LAB_00549dba
    FLD1                                ; 00549db0
    FADD float ptr [ESP + 0x24]         ; 00549db2
    FSTP float ptr [ESP + 0x14]         ; 00549db6
    FLD float ptr [ESP + 0x2c]          ; 00549dba
        ;   Label: LAB_00549dba
    FADD double ptr [0x0063ece1]        ; 00549dbe | DOUBLE_0063ece1
    FLD float ptr [ESP + 0x14]          ; 00549dc4
    FCOMPP                              ; 00549dc8
    FNSTSW AX                           ; 00549dca
    SAHF                                ; 00549dcc
    JBE 0x00549ddd                      ; 00549dcd
        ;   XREF to: 00549ddd (CONDITIONAL_JUMP)  ; LAB_00549ddd
    FLD float ptr [ESP + 0x14]          ; 00549dcf
    FADD float ptr [0x0063ece9]         ; 00549dd3 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x14]         ; 00549dd9
    FLD float ptr [ESP + 0x14]          ; 00549ddd
        ;   Label: LAB_00549ddd
    FCOMP float ptr [ESP + 0x2c]        ; 00549de1
    FNSTSW AX                           ; 00549de5
    SAHF                                ; 00549de7
    JBE 0x0054a004                      ; 00549de8
        ;   XREF to: 0054a004 (CONDITIONAL_JUMP)  ; LAB_0054a004
    FLD float ptr [ESP + 0x24]          ; 00549dee
        ;   Label: LAB_00549dee
    MOV EDX,0x3f000000                  ; 00549df2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00549df7
    FLDZ                                ; 00549dfb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00549dfd
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00549e01
    MOV dword ptr [ESP + 0x10],EDX      ; 00549e07
    MOV dword ptr [ESP + 0x8],EAX       ; 00549e0b
    FCOMPP                              ; 00549e0f
    FNSTSW AX                           ; 00549e11
    SAHF                                ; 00549e13
    JBE 0x00549e20                      ; 00549e14
        ;   XREF to: 00549e20 (CONDITIONAL_JUMP)  ; LAB_00549e20
    FLD1                                ; 00549e16
    FADD float ptr [ESP + 0x24]         ; 00549e18
    FSTP float ptr [ESP + 0x1c]         ; 00549e1c
    FLD float ptr [ESP + 0x10]          ; 00549e20
        ;   Label: LAB_00549e20
    FADD double ptr [0x0063ece1]        ; 00549e24 | DOUBLE_0063ece1
    FLD float ptr [ESP + 0x1c]          ; 00549e2a
    FCOMPP                              ; 00549e2e
    FNSTSW AX                           ; 00549e30
    SAHF                                ; 00549e32
    JBE 0x00549e43                      ; 00549e33
        ;   XREF to: 00549e43 (CONDITIONAL_JUMP)  ; LAB_00549e43
    FLD float ptr [ESP + 0x1c]          ; 00549e35
    FADD float ptr [0x0063ece9]         ; 00549e39 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x1c]         ; 00549e3f
    FLD float ptr [ESP + 0x1c]          ; 00549e43
        ;   Label: LAB_00549e43
    FCOMP float ptr [ESP + 0x10]        ; 00549e47
    FNSTSW AX                           ; 00549e4b
    SAHF                                ; 00549e4d
    JBE 0x0054a0af                      ; 00549e4e
        ;   XREF to: 0054a0af (CONDITIONAL_JUMP)  ; LAB_0054a0af
    FLD float ptr [EBX + 0x3cc]         ; 00549e54
        ;   Label: LAB_00549e54
    FADD double ptr [0x0063ecf9]        ; 00549e5a | DOUBLE_0063ecf9
    FSTP float ptr [ESP + 0x54]         ; 00549e60
    MOV EAX,dword ptr [ESP + 0x54]      ; 00549e64
    FLD float ptr [ESP + 0x54]          ; 00549e68
    MOV dword ptr [ESP + 0x30],EAX      ; 00549e6c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00549e70
    FADD double ptr [0x0063ecd9]        ; 00549e74 | DOUBLE_0063ecd9
    MOV dword ptr [ESP + 0x18],EAX      ; 00549e7a
    MOV EAX,dword ptr [EBX + 0x3a0]     ; 00549e7e
    FLD float ptr [ESP + 0x24]          ; 00549e84
    MOV dword ptr [ESP],EAX             ; 00549e88
    FCOMPP                              ; 00549e8b
    FNSTSW AX                           ; 00549e8d
    SAHF                                ; 00549e8f
    JNC 0x00549e9c                      ; 00549e90
        ;   XREF to: 00549e9c (CONDITIONAL_JUMP)  ; LAB_00549e9c
    FLD1                                ; 00549e92
    FADD float ptr [ESP + 0x24]         ; 00549e94
    FSTP float ptr [ESP + 0x18]         ; 00549e98
    FLD float ptr [ESP + 0x30]          ; 00549e9c
        ;   Label: LAB_00549e9c
    FADD double ptr [0x0063ece1]        ; 00549ea0 | DOUBLE_0063ece1
    FLD float ptr [ESP + 0x18]          ; 00549ea6
    FCOMPP                              ; 00549eaa
    FNSTSW AX                           ; 00549eac
    SAHF                                ; 00549eae
    JBE 0x00549ebf                      ; 00549eaf
        ;   XREF to: 00549ebf (CONDITIONAL_JUMP)  ; LAB_00549ebf
    FLD float ptr [ESP + 0x18]          ; 00549eb1
    FADD float ptr [0x0063ece9]         ; 00549eb5 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x18]         ; 00549ebb
    FLD float ptr [ESP + 0x18]          ; 00549ebf
        ;   Label: LAB_00549ebf
    FCOMP float ptr [ESP + 0x30]        ; 00549ec3
    FNSTSW AX                           ; 00549ec7
    SAHF                                ; 00549ec9
    JA 0x00549f4c                       ; 00549eca
        ;   XREF to: 00549f4c (CONDITIONAL_JUMP)  ; LAB_00549f4c
    FLD float ptr [ESP]                 ; 00549ed0
    FCOMP float ptr [ESP + 0x18]        ; 00549ed3
    FNSTSW AX                           ; 00549ed7
    SAHF                                ; 00549ed9
    JNC 0x00549ee4                      ; 00549eda
        ;   XREF to: 00549ee4 (CONDITIONAL_JUMP)  ; LAB_00549ee4
    FLD1                                ; 00549edc
    FADD float ptr [ESP]                ; 00549ede
    FSTP float ptr [ESP]                ; 00549ee1
    FLD float ptr [ESP]                 ; 00549ee4
        ;   Label: LAB_00549ee4
    FCOMP float ptr [ESP + 0x18]        ; 00549ee7
    FNSTSW AX                           ; 00549eeb
    SAHF                                ; 00549eed
    JNC 0x00549ef8                      ; 00549eee
        ;   XREF to: 00549ef8 (CONDITIONAL_JUMP)  ; LAB_00549ef8
    FLD1                                ; 00549ef0
    FADD float ptr [ESP]                ; 00549ef2
    FSTP float ptr [ESP]                ; 00549ef5
    FLD float ptr [ESP + 0x18]          ; 00549ef8
        ;   Label: LAB_00549ef8
    FLD1                                ; 00549efc
    FADDP                               ; 00549efe
    FLD float ptr [ESP]                 ; 00549f00
    FCOMPP                              ; 00549f03
    FNSTSW AX                           ; 00549f05
    SAHF                                ; 00549f07
    JBE 0x00549f16                      ; 00549f08
        ;   XREF to: 00549f16 (CONDITIONAL_JUMP)  ; LAB_00549f16
    FLD float ptr [ESP]                 ; 00549f0a
    FADD float ptr [0x0063ece9]         ; 00549f0d | FLOAT_0063ece9
    FSTP float ptr [ESP]                ; 00549f13
    FLD float ptr [ESP + 0x18]          ; 00549f16
        ;   Label: LAB_00549f16
    FLD1                                ; 00549f1a
    FADDP                               ; 00549f1c
    FLD float ptr [ESP]                 ; 00549f1e
    FCOMPP                              ; 00549f21
    FNSTSW AX                           ; 00549f23
    SAHF                                ; 00549f25
    JBE 0x00549f34                      ; 00549f26
        ;   XREF to: 00549f34 (CONDITIONAL_JUMP)  ; LAB_00549f34
    FLD float ptr [ESP]                 ; 00549f28
    FADD float ptr [0x0063ece9]         ; 00549f2b | FLOAT_0063ece9
    FSTP float ptr [ESP]                ; 00549f31
    FLD float ptr [ESP]                 ; 00549f34
        ;   Label: LAB_00549f34
    FCOMP float ptr [ESP + 0x30]        ; 00549f37
    FNSTSW AX                           ; 00549f3b
    SAHF                                ; 00549f3d
    SETA AL                             ; 00549f3e
    AND EAX,0xff                        ; 00549f41
    JNZ 0x0054a151                      ; 00549f46
        ;   XREF to: 0054a151 (CONDITIONAL_JUMP)  ; LAB_0054a151
    MOV ESP,EBP                         ; 00549f4c
        ;   Label: LAB_00549f4c
    POP EBP                             ; 00549f4e
    POP EDI                             ; 00549f4f
    POP ESI                             ; 00549f50
    POP EBX                             ; 00549f51
    RET                                 ; 00549f52
    FLD1                                ; 00549f53
        ;   Label: LAB_00549f53
    FADD float ptr [ESP + 0x24]         ; 00549f55
    FSTP float ptr [ESP + 0x20]         ; 00549f59
    JMP 0x00549d3d                      ; 00549f5d
        ;   XREF to: 00549d3d (UNCONDITIONAL_JUMP)  ; LAB_00549d3d
    FLD float ptr [ESP + 0x28]          ; 00549f62
        ;   Label: LAB_00549f62
    FCOMP float ptr [ESP + 0x20]        ; 00549f66
    FNSTSW AX                           ; 00549f6a
    SAHF                                ; 00549f6c
    JNC 0x00549f79                      ; 00549f6d
        ;   XREF to: 00549f79 (CONDITIONAL_JUMP)  ; LAB_00549f79
    FLD1                                ; 00549f6f
    FADD float ptr [ESP + 0x28]         ; 00549f71
    FSTP float ptr [ESP + 0x28]         ; 00549f75
    FLD float ptr [ESP + 0x28]          ; 00549f79
        ;   Label: LAB_00549f79
    FCOMP float ptr [ESP + 0x20]        ; 00549f7d
    FNSTSW AX                           ; 00549f81
    SAHF                                ; 00549f83
    JNC 0x00549f90                      ; 00549f84
        ;   XREF to: 00549f90 (CONDITIONAL_JUMP)  ; LAB_00549f90
    FLD1                                ; 00549f86
    FADD float ptr [ESP + 0x28]         ; 00549f88
    FSTP float ptr [ESP + 0x28]         ; 00549f8c
    FLD float ptr [ESP + 0x20]          ; 00549f90
        ;   Label: LAB_00549f90
    FLD1                                ; 00549f94
    FADDP                               ; 00549f96
    FLD float ptr [ESP + 0x28]          ; 00549f98
    FCOMPP                              ; 00549f9c
    FNSTSW AX                           ; 00549f9e
    SAHF                                ; 00549fa0
    JBE 0x00549fb1                      ; 00549fa1
        ;   XREF to: 00549fb1 (CONDITIONAL_JUMP)  ; LAB_00549fb1
    FLD float ptr [ESP + 0x28]          ; 00549fa3
    FADD float ptr [0x0063ece9]         ; 00549fa7 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x28]         ; 00549fad
    FLD float ptr [ESP + 0x20]          ; 00549fb1
        ;   Label: LAB_00549fb1
    FLD1                                ; 00549fb5
    FADDP                               ; 00549fb7
    FLD float ptr [ESP + 0x28]          ; 00549fb9
    FCOMPP                              ; 00549fbd
    FNSTSW AX                           ; 00549fbf
    SAHF                                ; 00549fc1
    JBE 0x00549fd2                      ; 00549fc2
        ;   XREF to: 00549fd2 (CONDITIONAL_JUMP)  ; LAB_00549fd2
    FLD float ptr [ESP + 0x28]          ; 00549fc4
    FADD float ptr [0x0063ece9]         ; 00549fc8 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x28]         ; 00549fce
    FLD float ptr [ESP + 0x28]          ; 00549fd2
        ;   Label: LAB_00549fd2
    FCOMP float ptr [ESP + 0x34]        ; 00549fd6
    FNSTSW AX                           ; 00549fda
    SAHF                                ; 00549fdc
    SETA AL                             ; 00549fdd
    AND EAX,0xff                        ; 00549fe0
    JZ 0x00549d71                       ; 00549fe5
        ;   XREF to: 00549d71 (CONDITIONAL_JUMP)  ; LAB_00549d71
    LEA EAX,[EBX + 0x3d0]               ; 00549feb
    PUSH EAX                            ; 00549ff1
    MOV EDX,dword ptr [EBX + 0x154]     ; 00549ff2
    PUSH EBX                            ; 00549ff8
    CALL dword ptr [EDX + 0x24]         ; 00549ff9
    ADD ESP,0x8                         ; 00549ffc
    JMP 0x00549d71                      ; 00549fff
        ;   XREF to: 00549d71 (UNCONDITIONAL_JUMP)  ; LAB_00549d71
    FLD float ptr [ESP + 0x4]           ; 0054a004
        ;   Label: LAB_0054a004
    FCOMP float ptr [ESP + 0x14]        ; 0054a008
    FNSTSW AX                           ; 0054a00c
    SAHF                                ; 0054a00e
    JNC 0x0054a01b                      ; 0054a00f
        ;   XREF to: 0054a01b (CONDITIONAL_JUMP)  ; LAB_0054a01b
    FLD1                                ; 0054a011
    FADD float ptr [ESP + 0x4]          ; 0054a013
    FSTP float ptr [ESP + 0x4]          ; 0054a017
    FLD float ptr [ESP + 0x4]           ; 0054a01b
        ;   Label: LAB_0054a01b
    FCOMP float ptr [ESP + 0x14]        ; 0054a01f
    FNSTSW AX                           ; 0054a023
    SAHF                                ; 0054a025
    JNC 0x0054a032                      ; 0054a026
        ;   XREF to: 0054a032 (CONDITIONAL_JUMP)  ; LAB_0054a032
    FLD1                                ; 0054a028
    FADD float ptr [ESP + 0x4]          ; 0054a02a
    FSTP float ptr [ESP + 0x4]          ; 0054a02e
    FLD float ptr [ESP + 0x14]          ; 0054a032
        ;   Label: LAB_0054a032
    FLD1                                ; 0054a036
    FADDP                               ; 0054a038
    FLD float ptr [ESP + 0x4]           ; 0054a03a
    FCOMPP                              ; 0054a03e
    FNSTSW AX                           ; 0054a040
    SAHF                                ; 0054a042
    JBE 0x0054a053                      ; 0054a043
        ;   XREF to: 0054a053 (CONDITIONAL_JUMP)  ; LAB_0054a053
    FLD float ptr [ESP + 0x4]           ; 0054a045
    FADD float ptr [0x0063ece9]         ; 0054a049 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x4]          ; 0054a04f
    FLD float ptr [ESP + 0x14]          ; 0054a053
        ;   Label: LAB_0054a053
    FLD1                                ; 0054a057
    FADDP                               ; 0054a059
    FLD float ptr [ESP + 0x4]           ; 0054a05b
    FCOMPP                              ; 0054a05f
    FNSTSW AX                           ; 0054a061
    SAHF                                ; 0054a063
    JBE 0x0054a074                      ; 0054a064
        ;   XREF to: 0054a074 (CONDITIONAL_JUMP)  ; LAB_0054a074
    FLD float ptr [ESP + 0x4]           ; 0054a066
    FADD float ptr [0x0063ece9]         ; 0054a06a | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x4]          ; 0054a070
    FLD float ptr [ESP + 0x4]           ; 0054a074
        ;   Label: LAB_0054a074
    FCOMP float ptr [ESP + 0x2c]        ; 0054a078
    FNSTSW AX                           ; 0054a07c
    SAHF                                ; 0054a07e
    SETA AL                             ; 0054a07f
    AND EAX,0xff                        ; 0054a082
    JZ 0x00549dee                       ; 0054a087
        ;   XREF to: 00549dee (CONDITIONAL_JUMP)  ; LAB_00549dee
    LEA EAX,[EBX + 0x41c]               ; 0054a08d
    PUSH EAX                            ; 0054a093
    LEA EAX,[EBX + 0x3ac]               ; 0054a094
    PUSH EAX                            ; 0054a09a
    PUSH EBX                            ; 0054a09b
    MOV EAX,[0x00681ef8]                ; 0054a09c | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 0054a0a1 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 0054a0a2
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0054a0a7
    JMP 0x00549dee                      ; 0054a0aa
        ;   XREF to: 00549dee (UNCONDITIONAL_JUMP)  ; LAB_00549dee
    FLD float ptr [ESP + 0x8]           ; 0054a0af
        ;   Label: LAB_0054a0af
    FCOMP float ptr [ESP + 0x1c]        ; 0054a0b3
    FNSTSW AX                           ; 0054a0b7
    SAHF                                ; 0054a0b9
    JNC 0x0054a0c6                      ; 0054a0ba
        ;   XREF to: 0054a0c6 (CONDITIONAL_JUMP)  ; LAB_0054a0c6
    FLD1                                ; 0054a0bc
    FADD float ptr [ESP + 0x8]          ; 0054a0be
    FSTP float ptr [ESP + 0x8]          ; 0054a0c2
    FLD float ptr [ESP + 0x8]           ; 0054a0c6
        ;   Label: LAB_0054a0c6
    FCOMP float ptr [ESP + 0x1c]        ; 0054a0ca
    FNSTSW AX                           ; 0054a0ce
    SAHF                                ; 0054a0d0
    JNC 0x0054a0dd                      ; 0054a0d1
        ;   XREF to: 0054a0dd (CONDITIONAL_JUMP)  ; LAB_0054a0dd
    FLD1                                ; 0054a0d3
    FADD float ptr [ESP + 0x8]          ; 0054a0d5
    FSTP float ptr [ESP + 0x8]          ; 0054a0d9
    FLD float ptr [ESP + 0x1c]          ; 0054a0dd
        ;   Label: LAB_0054a0dd
    FLD1                                ; 0054a0e1
    FADDP                               ; 0054a0e3
    FLD float ptr [ESP + 0x8]           ; 0054a0e5
    FCOMPP                              ; 0054a0e9
    FNSTSW AX                           ; 0054a0eb
    SAHF                                ; 0054a0ed
    JBE 0x0054a0fe                      ; 0054a0ee
        ;   XREF to: 0054a0fe (CONDITIONAL_JUMP)  ; LAB_0054a0fe
    FLD float ptr [ESP + 0x8]           ; 0054a0f0
    FADD float ptr [0x0063ece9]         ; 0054a0f4 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x8]          ; 0054a0fa
    FLD float ptr [ESP + 0x1c]          ; 0054a0fe
        ;   Label: LAB_0054a0fe
    FLD1                                ; 0054a102
    FADDP                               ; 0054a104
    FLD float ptr [ESP + 0x8]           ; 0054a106
    FCOMPP                              ; 0054a10a
    FNSTSW AX                           ; 0054a10c
    SAHF                                ; 0054a10e
    JBE 0x0054a11f                      ; 0054a10f
        ;   XREF to: 0054a11f (CONDITIONAL_JUMP)  ; LAB_0054a11f
    FLD float ptr [ESP + 0x8]           ; 0054a111
    FADD float ptr [0x0063ece9]         ; 0054a115 | FLOAT_0063ece9
    FSTP float ptr [ESP + 0x8]          ; 0054a11b
    FLD float ptr [ESP + 0x8]           ; 0054a11f
        ;   Label: LAB_0054a11f
    FCOMP float ptr [ESP + 0x10]        ; 0054a123
    FNSTSW AX                           ; 0054a127
    SAHF                                ; 0054a129
    SETA AL                             ; 0054a12a
    AND EAX,0xff                        ; 0054a12d
    JZ 0x00549e54                       ; 0054a132
        ;   XREF to: 00549e54 (CONDITIONAL_JUMP)  ; LAB_00549e54
    LEA EAX,[EBX + 0x3f0]               ; 0054a138
    PUSH EAX                            ; 0054a13e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0054a13f
    PUSH EBX                            ; 0054a145
    CALL dword ptr [EDX + 0x24]         ; 0054a146
    ADD ESP,0x8                         ; 0054a149
    JMP 0x00549e54                      ; 0054a14c
        ;   XREF to: 00549e54 (UNCONDITIONAL_JUMP)  ; LAB_00549e54
    LEA EAX,[EBX + 0x41c]               ; 0054a151
        ;   Label: LAB_0054a151
    PUSH EAX                            ; 0054a157
    LEA EAX,[EBX + 0x3ac]               ; 0054a158
    PUSH EAX                            ; 0054a15e
    PUSH EBX                            ; 0054a15f
    MOV ECX,dword ptr [0x00681ef8]      ; 0054a160 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 0054a166 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 0054a167
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0054a16c
    MOV ESP,EBP                         ; 0054a16f
    POP EBP                             ; 0054a171
    POP EDI                             ; 0054a172
    POP ESI                             ; 0054a173
    POP EBX                             ; 0054a174
    RET                                 ; 0054a175

