; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr)
;
; Parameters:
; CParticle *      Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x74]:12  local_74
; undefined1[52]   Stack[-0x68]:52  local_68
; float[2]         Stack[-0x34]:8  afStack_34
; CVector3f        Stack[-0x2c]:12  local_2c
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0b51
;   core_fire.cpp_CGlassParticle_process_FUN_004c20f0 at 004c2121
;   core_fire.cpp_CRock_process_FUN_004c17f0 at 004c17f9
;   core_fire.cpp_CShell_process_FUN_004c6300 at 004c631a
;   core_fire.cpp_CSpark_process_FUN_004c0240 at 004c0298
;
; Referenced Globals:
;   float FLOAT_0063e728 = 0.8000000
;   float FLOAT_0063e72c = 2
;   float FLOAT_0063e730 = -0.7000000
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545760
        ;   Label: core_particle.cpp_CParticle_process_FUN_00545760
    PUSH ESI                            ; 00545761
    PUSH EDI                            ; 00545762
    PUSH EBP                            ; 00545763
    MOV EBP,ESP                         ; 00545764
    SUB ESP,0xa0                        ; 00545766
    AND ESP,0xfffffff8                  ; 0054576c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054576f
    FLD float ptr [EBX + 0x18]          ; 00545772
    FLDZ                                ; 00545775
    FCOMPP                              ; 00545777
    FNSTSW AX                           ; 00545779
    SAHF                                ; 0054577b
    JNC 0x0054596e                      ; 0054577c
        ;   XREF to: 0054596e (CONDITIONAL_JUMP)  ; LAB_0054596e
    LEA EAX,[EBX + 0x24]                ; 00545782
    CMP EAX,EBX                         ; 00545785
    JZ 0x00545799                       ; 00545787
        ;   XREF to: 00545799 (CONDITIONAL_JUMP)  ; LAB_00545799
    MOV EDX,dword ptr [EBX]             ; 00545789
    MOV dword ptr [EAX],EDX             ; 0054578b
    MOV EDX,dword ptr [EBX + 0x4]       ; 0054578d
    MOV dword ptr [EAX + 0x4],EDX       ; 00545790
    MOV EDX,dword ptr [EBX + 0x8]       ; 00545793
    MOV dword ptr [EAX + 0x8],EDX       ; 00545796
    MOV EAX,dword ptr [EBX + 0x20]      ; 00545799
        ;   Label: LAB_00545799
    MOV dword ptr [EBX + 0x30],EAX      ; 0054579c
    MOV EAX,[0x0067b654]                ; 0054579f | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x264]     ; 005457a4 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x90],EAX      ; 005457aa
    FLD float ptr [EBX + 0x1c]          ; 005457b1
    FMUL float ptr [ESP + 0x90]         ; 005457b4
    MOV dword ptr [ESP + 0x94],EAX      ; 005457bb
    FADD float ptr [EBX + 0x10]         ; 005457c2
    LEA EAX,[EBX + 0xc]                 ; 005457c5
    FSTP float ptr [EBX + 0x10]         ; 005457c8
    FLD float ptr [EAX]                 ; 005457cb
    FMUL float ptr [ESP + 0x90]         ; 005457cd
    FSTP float ptr [ESP + 0x18]         ; 005457d4
    FLD float ptr [EAX + 0x4]           ; 005457d8
    FMUL float ptr [ESP + 0x90]         ; 005457db
    FSTP float ptr [ESP + 0x1c]         ; 005457e2
    FLD float ptr [EAX + 0x8]           ; 005457e6
    FMUL float ptr [ESP + 0x90]         ; 005457e9
    LEA ESI,[ESP + 0x78]                ; 005457f0
    PUSH EBX                            ; 005457f4
    FSTP float ptr [ESP + 0x24]         ; 005457f5
    FLD float ptr [EBX]                 ; 005457f9
    FADD float ptr [ESP + 0x1c]         ; 005457fb
    FLD float ptr [EBX + 0x4]           ; 005457ff
    FXCH                                ; 00545802
    FSTP float ptr [EBX]                ; 00545804
    FADD float ptr [ESP + 0x20]         ; 00545806
    FLD float ptr [EBX + 0x8]           ; 0054580a
    FXCH                                ; 0054580d
    FSTP float ptr [EBX + 0x4]          ; 0054580f
    FADD float ptr [ESP + 0x24]         ; 00545812
    PUSH 0x3277d14                      ; 00545816 | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x8]          ; 0054581b
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 0054581e
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    ADD ESP,0x8                         ; 00545823
    LEA EAX,[ESP + 0x3c]                ; 00545826
    PUSH EAX                            ; 0054582a
    LEA EDI,[ESP + 0x40]                ; 0054582b
    LEA ESI,[ESP + 0x7c]                ; 0054582f
    JMP 0x0061084a                      ; 00545833
        ;   XREF to: 0061084a (UNCONDITIONAL_JUMP)  ; LAB_0061084a
    ADD ESP,0x8                         ; 00545840
    MOV dword ptr [EBX + 0x20],EAX      ; 00545843
    TEST EAX,EAX                        ; 00545846
    JZ 0x00545975                       ; 00545848
        ;   XREF to: 00545975 (CONDITIONAL_JUMP)  ; LAB_00545975
    PUSH 0x0                            ; 0054584e
        ;   Label: LAB_0054584e
    LEA EAX,[ESP + 0x88]                ; 00545850
    PUSH EAX                            ; 00545857
    PUSH EBX                            ; 00545858
    LEA ESI,[EBX + 0x24]                ; 00545859
    PUSH ESI                            ; 0054585c
    PUSH 0x3277d14                      ; 0054585d | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 ; 00545862
        ;   XREF to: 00495b70 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0xb0],EAX      ; 00545867
    FLD float ptr [ESP + 0xb0]          ; 0054586e
    ADD ESP,0x14                        ; 00545875
    FLDZ                                ; 00545878
    FXCH                                ; 0054587a
    FST float ptr [ESP + 0x8]           ; 0054587c
    FSTP double ptr [ESP]               ; 00545880
    FCOMP double ptr [ESP]              ; 00545883
    FNSTSW AX                           ; 00545886
    SAHF                                ; 00545888
    JA 0x00545954                       ; 00545889
        ;   XREF to: 00545954 (CONDITIONAL_JUMP)  ; LAB_00545954
    FLD1                                ; 0054588f
    FCOMP double ptr [ESP]              ; 00545891
    FNSTSW AX                           ; 00545894
    SAHF                                ; 00545896
    JBE 0x00545954                      ; 00545897
        ;   XREF to: 00545954 (CONDITIONAL_JUMP)  ; LAB_00545954
    FLD float ptr [EBX]                 ; 0054589d
    FSUB float ptr [ESI]                ; 0054589f
    FST float ptr [ESP + 0x60]          ; 005458a1
    FLD float ptr [EBX + 0x4]           ; 005458a5
    FSUB float ptr [ESI + 0x4]          ; 005458a8
    FXCH                                ; 005458ab
    FLD float ptr [ESP + 0x8]           ; 005458ad
    FXCH                                ; 005458b1
    FMUL ST1                            ; 005458b3
    FXCH ST2                            ; 005458b5
    FST float ptr [ESP + 0x64]          ; 005458b7
    FLD float ptr [EBX + 0x8]           ; 005458bb
    FSUB float ptr [ESI + 0x8]          ; 005458be
    FXCH                                ; 005458c1
    FMUL ST2                            ; 005458c3
    FXCH                                ; 005458c5
    FST float ptr [ESP + 0x68]          ; 005458c7
    FMULP ST2                           ; 005458cb
    FXCH ST2                            ; 005458cd
    FST float ptr [ESP + 0x30]          ; 005458cf
    FLD float ptr [0x0063e728]          ; 005458d3 | FLOAT_0063e728
    FXCH                                ; 005458d9
    FMUL ST1                            ; 005458db
    FXCH ST3                            ; 005458dd
    FST float ptr [ESP + 0x34]          ; 005458df
    FMUL ST1                            ; 005458e3
    FXCH ST2                            ; 005458e5
    FST float ptr [ESP + 0x38]          ; 005458e7
    FMULP                               ; 005458eb
    FXCH ST2                            ; 005458ed
    FSTP float ptr [ESP + 0x24]         ; 005458ef
    FSTP float ptr [ESP + 0x28]         ; 005458f3
    FSTP float ptr [ESP + 0x2c]         ; 005458f7
    FLD float ptr [ESI]                 ; 005458fb
    FADD float ptr [ESP + 0x24]         ; 005458fd
    FSTP float ptr [ESP + 0x48]         ; 00545901
    FLD float ptr [ESI + 0x4]           ; 00545905
    FADD float ptr [ESP + 0x28]         ; 00545908
    FSTP float ptr [ESP + 0x4c]         ; 0054590c
    FLD float ptr [ESI + 0x8]           ; 00545910
    FADD float ptr [ESP + 0x2c]         ; 00545913
    LEA EAX,[ESP + 0x48]                ; 00545917
    FSTP float ptr [ESP + 0x50]         ; 0054591b
    CMP EBX,EAX                         ; 0054591f
    JZ 0x00545937                       ; 00545921
        ;   XREF to: 00545937 (CONDITIONAL_JUMP)  ; LAB_00545937
    MOV EAX,dword ptr [ESP + 0x48]      ; 00545923
    MOV dword ptr [EBX],EAX             ; 00545927
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00545929
    MOV dword ptr [EBX + 0x4],EAX       ; 0054592d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00545930
    MOV dword ptr [EBX + 0x8],EAX       ; 00545934
    LEA EAX,[ESP + 0x84]                ; 00545937
        ;   Label: LAB_00545937
    PUSH EAX                            ; 0054593e
    MOV EDX,dword ptr [EBX + 0x34]      ; 0054593f
    PUSH EBX                            ; 00545942
    CALL dword ptr [EDX + 0xc]          ; 00545943
    ADD ESP,0x8                         ; 00545946
    TEST EAX,EAX                        ; 00545949
    JZ 0x00545981                       ; 0054594b
        ;   XREF to: 00545981 (CONDITIONAL_JUMP)  ; LAB_00545981
    MOV dword ptr [EBX + 0x18],0x0      ; 0054594d
    FLD float ptr [EBX + 0x18]          ; 00545954
        ;   Label: LAB_00545954
    FSUB float ptr [ESP + 0x94]         ; 00545957
    FST float ptr [EBX + 0x18]          ; 0054595e
    FLDZ                                ; 00545961
    FCOMPP                              ; 00545963
    FNSTSW AX                           ; 00545965
    SAHF                                ; 00545967
    JA 0x00545a72                       ; 00545968
        ;   XREF to: 00545a72 (CONDITIONAL_JUMP)  ; LAB_00545a72
    MOV ESP,EBP                         ; 0054596e
        ;   Label: LAB_0054596e
    POP EBP                             ; 00545970
    POP EDI                             ; 00545971
    POP ESI                             ; 00545972
    POP EBX                             ; 00545973
    RET                                 ; 00545974
    CMP dword ptr [EBX + 0x30],0x0      ; 00545975
        ;   Label: LAB_00545975
    JNZ 0x0054584e                      ; 00545979
        ;   XREF to: 0054584e (CONDITIONAL_JUMP)  ; LAB_0054584e
    JMP 0x00545954                      ; 0054597f
        ;   XREF to: 00545954 (UNCONDITIONAL_JUMP)  ; LAB_00545954
    LEA EDX,[EBX + 0xc]                 ; 00545981
        ;   Label: LAB_00545981
    FLD float ptr [ESP + 0x88]          ; 00545984
    FMUL float ptr [EDX + 0x4]          ; 0054598b
    FLD float ptr [ESP + 0x84]          ; 0054598e
    FMUL float ptr [EDX]                ; 00545995
    FADDP                               ; 00545997
    FLD float ptr [ESP + 0x8c]          ; 00545999
    FMUL float ptr [EDX + 0x8]          ; 005459a0
    FADDP                               ; 005459a3
    FMUL float ptr [0x0063e72c]         ; 005459a5 | FLOAT_0063e72c
    FLD float ptr [ESP + 0x84]          ; 005459ab
    FXCH                                ; 005459b2
    FSTP float ptr [ESP + 0x98]         ; 005459b4
    FMUL float ptr [ESP + 0x98]         ; 005459bb
    FLD float ptr [ESP + 0x88]          ; 005459c2
    FMUL float ptr [ESP + 0x98]         ; 005459c9
    FLD float ptr [ESP + 0x8c]          ; 005459d0
    FMUL float ptr [ESP + 0x98]         ; 005459d7
    FXCH ST2                            ; 005459de
    FSTP float ptr [ESP + 0xc]          ; 005459e0
    FSTP float ptr [ESP + 0x10]         ; 005459e4
    FSTP float ptr [ESP + 0x14]         ; 005459e8
    FLD float ptr [ESP + 0xc]           ; 005459ec
    FSUB float ptr [EDX]                ; 005459f0
    FLD float ptr [ESP + 0x10]          ; 005459f2
    FXCH                                ; 005459f6
    FSTP float ptr [ESP + 0x54]         ; 005459f8
    FSUB float ptr [EDX + 0x4]          ; 005459fc
    FLD float ptr [ESP + 0x14]          ; 005459ff
    FXCH                                ; 00545a03
    FSTP float ptr [ESP + 0x58]         ; 00545a05
    FSUB float ptr [EDX + 0x8]          ; 00545a09
    LEA EAX,[ESP + 0x54]                ; 00545a0c
    FSTP float ptr [ESP + 0x5c]         ; 00545a10
    CMP EDX,EAX                         ; 00545a14
    JZ 0x00545a2c                       ; 00545a16
        ;   XREF to: 00545a2c (CONDITIONAL_JUMP)  ; LAB_00545a2c
    MOV EAX,dword ptr [ESP + 0x54]      ; 00545a18
    MOV dword ptr [EDX],EAX             ; 00545a1c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00545a1e
    MOV dword ptr [EDX + 0x4],EAX       ; 00545a22
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00545a25
    MOV dword ptr [EDX + 0x8],EAX       ; 00545a29
    LEA EDX,[EBX + 0xc]                 ; 00545a2c
        ;   Label: LAB_00545a2c
    FLD float ptr [0x0063e730]          ; 00545a2f | FLOAT_0063e730
    FLD float ptr [EDX]                 ; 00545a35
    FMUL ST1                            ; 00545a37
    FSTP float ptr [ESP + 0x6c]         ; 00545a39
    FLD float ptr [EDX + 0x4]           ; 00545a3d
    FMUL ST1                            ; 00545a40
    FSTP float ptr [ESP + 0x70]         ; 00545a42
    FMUL float ptr [EDX + 0x8]          ; 00545a46
    LEA EAX,[ESP + 0x6c]                ; 00545a49
    FSTP float ptr [ESP + 0x74]         ; 00545a4d
    CMP EDX,EAX                         ; 00545a51
    JZ 0x00545954                       ; 00545a53
        ;   XREF to: 00545954 (CONDITIONAL_JUMP)  ; LAB_00545954
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00545a59
    MOV dword ptr [EDX],EAX             ; 00545a5d
    MOV EAX,dword ptr [ESP + 0x70]      ; 00545a5f
    MOV dword ptr [EDX + 0x4],EAX       ; 00545a63
    MOV EAX,dword ptr [ESP + 0x74]      ; 00545a66
    MOV dword ptr [EDX + 0x8],EAX       ; 00545a6a
    JMP 0x00545954                      ; 00545a6d
        ;   XREF to: 00545954 (UNCONDITIONAL_JUMP)  ; LAB_00545954
    MOV dword ptr [EBX + 0x18],0x0      ; 00545a72
        ;   Label: LAB_00545a72
    MOV ESP,EBP                         ; 00545a79
    POP EBP                             ; 00545a7b
    POP EDI                             ; 00545a7c
    POP ESI                             ; 00545a7d
    POP EBX                             ; 00545a7e
    RET                                 ; 00545a7f
    PUSH 0x3277d14                      ; 0061084a
        ;   Label: LAB_0061084a
    MOV ECX,dword ptr [ESI]             ; 0061084f
    MOV dword ptr [EDI],ECX             ; 00610851
    MOV ECX,dword ptr [ESI + 0x4]       ; 00610853
    MOV dword ptr [EDI + 0x4],ECX       ; 00610856
    MOV ECX,dword ptr [ESI + 0x8]       ; 00610859
    MOV dword ptr [EDI + 0x8],ECX       ; 0061085c
    ADD ESI,0xc                         ; 0061085f
    ADD EDI,0xc                         ; 00610862
    JMP 0x0054583c                      ; 00610865
        ;   XREF to: 0054583c (UNCONDITIONAL_JUMP)  ; LAB_0054583c

