; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_updateListeners_FUN_005b1870(void)
;
; Local Variables:
; int[965]         Stack[-0x10cc]:3860  aiStackY_10cc
; float            Stack[-0x160]:4  local_160
; CMatrix3x3f      Stack[-0x15c]:36  local_15c
; float[10]        Stack[-0x134]:40  local_134
; float[10]        Stack[-0x10c]:40  local_10c
; CVector3i        Stack[-0xe4]:12  local_e4
; CVector3f        Stack[-0xd8]:12  local_d8
; float            Stack[-0xcc]:4  local_cc
; float            Stack[-0xc8]:4  local_c8
; float            Stack[-0xc4]:4  local_c4
; CVector3f        Stack[-0xc0]:12  local_c0
; CVector3f        Stack[-0xb4]:12  local_b4
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; float            Stack[-0x94]:4  local_94
; int              Stack[-0x90]:4  local_90
; int[2]           Stack[-0x8c]:8  local_8c
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; CVector3f        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; CVector3i        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2e0d
;   core_sound.cpp_CSound_process_FUN_005b2fd0 at 005b300f
;
; Referenced Globals:
;   TerminatedCString s_castle_00652506
;   double DOUBLE_0065250e = 0.000100000000000000
;   double DOUBLE_00652516 = 0.00390625
;   double DOUBLE_0065251e = 0.0200000000000000
;   double DOUBLE_00652526 = 0.0166666666666667
;   float FLOAT_0065252e = 0.015625
;   float FLOAT_00652532 = 0.3000000
;   double DOUBLE_00652536 = 50
;   double DOUBLE_0065253e = -50
;   double DOUBLE_00652546 = 60
;   double DOUBLE_0065254e = -60
;   float FLOAT_00652556 = 0.2000000
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonLightInstance.base.base.position
;   ... and 15 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
;   crt_string.c__strnicmp_FUN_005ff070
;   sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0
;   sound_sndmain.cpp_set3DListenerPos_FUN_005aa020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1870
        ;   Label: core_sound.cpp_updateListeners_FUN_005b1870
    PUSH ESI                            ; 005b1871
    PUSH EDI                            ; 005b1872
    PUSH EBP                            ; 005b1873
    MOV EBP,ESP                         ; 005b1874
    SUB ESP,0x160                       ; 005b1876
    AND ESP,0xfffffff8                  ; 005b187c
    MOV EAX,[0x0067b654]                ; 005b187f | g_CGamePtr
    CMP dword ptr [EAX + 0x240],0x0     ; 005b1884 | g_CGameInstance.block_auto_save
    JNZ 0x005b1b09                      ; 005b188b
        ;   XREF to: 005b1b09 (CONDITIONAL_JUMP)  ; LAB_005b1b09
    MOV EAX,[0x032758e8]                ; 005b1891 | g_CDemonCameraInstance.base.position
    MOV dword ptr [ESP + 0x128],EAX     ; 005b1896
    MOV EAX,0x32758e8                   ; 005b189d | g_CDemonCameraInstance.base.position
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b18a2 | g_CDemonCameraInstance.base.position+4
    MOV dword ptr [ESP + 0x12c],EAX     ; 005b18a5
    MOV EAX,0x32758e8                   ; 005b18ac | g_CDemonCameraInstance.base.position
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b18b1 | g_CDemonCameraInstance.base.position+8
    LEA EDX,[ESP + 0xa4]                ; 005b18b4
    MOV dword ptr [ESP + 0x130],EAX     ; 005b18bb
    LEA EAX,[ESP + 0x128]               ; 005b18c2
    CMP EDX,EAX                         ; 005b18c9
    JZ 0x005b18f7                       ; 005b18cb
        ;   XREF to: 005b18f7 (CONDITIONAL_JUMP)  ; LAB_005b18f7
    MOV EAX,dword ptr [ESP + 0x128]     ; 005b18cd
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b18d4
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005b18db
    MOV dword ptr [ESP + 0xa8],EAX      ; 005b18e2
    MOV EAX,dword ptr [ESP + 0x130]     ; 005b18e9
    MOV dword ptr [ESP + 0xac],EAX      ; 005b18f0
    FLD float ptr [ESP + 0xa4]          ; 005b18f7
        ;   Label: LAB_005b18f7
    FLD float ptr [ESP + 0xa8]          ; 005b18fe
    FSUB float ptr [0x03f6af74]         ; 005b1905 | g_SoundListenerPrev.y
    FXCH                                ; 005b190b
    FSUB float ptr [0x03f6af70]         ; 005b190d | g_SoundListenerPrev
    FXCH                                ; 005b1913
    FST float ptr [ESP + 0x108]         ; 005b1915
    FMUL float ptr [ESP + 0x108]        ; 005b191c
    FXCH                                ; 005b1923
    FST float ptr [ESP + 0x104]         ; 005b1925
    FMUL float ptr [ESP + 0x104]        ; 005b192c
    FLD float ptr [ESP + 0xac]          ; 005b1933
    FSUB float ptr [0x03f6af78]         ; 005b193a | g_SoundListenerPrev.z
    FXCH                                ; 005b1940
    FADDP ST2,ST0                       ; 005b1942
    FST float ptr [ESP + 0x10c]         ; 005b1944
    FMUL float ptr [ESP + 0x10c]        ; 005b194b
    FADDP                               ; 005b1952
    FSQRT                               ; 005b1954
    FCOMP double ptr [0x0065250e]       ; 005b1956 | DOUBLE_0065250e
    FNSTSW AX                           ; 005b195c
    SAHF                                ; 005b195e
    JC 0x005b1b02                       ; 005b195f
        ;   XREF to: 005b1b02 (CONDITIONAL_JUMP)  ; LAB_005b1b02
    JMP 0x03fc3169                      ; 005b1965
        ;   XREF to: 03fc3169 (UNCONDITIONAL_JUMP)  ; LAB_03fc3169
    MOV ECX,0xa                         ; 005b1975
        ;   Label: LAB_005b1975
    LEA EDI,[ESP + 0x14]                ; 005b197a
    LEA ESI,[ESP + 0x64]                ; 005b197e
    MOVSD.REP ES:EDI,ESI                ; 005b1982
        ;   Label: LAB_005b1982
    FLD float ptr [ESP + 0xac]          ; 005b1984
    SUB ESP,0x8                         ; 005b198b
    FSTP double ptr [ESP]               ; 005b198e
    FLD float ptr [ESP + 0xb0]          ; 005b1991
    SUB ESP,0x8                         ; 005b1998
    FSTP double ptr [ESP]               ; 005b199b
    FLD float ptr [ESP + 0xb4]          ; 005b199e
    SUB ESP,0x8                         ; 005b19a5
    FSTP double ptr [ESP]               ; 005b19a8
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_005aa020 ; 005b19ab
        ;   XREF to: 005aa020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerPos_FUN_005aa020(double pos_x, double pos_y, double pos_z)
    ADD ESP,0x18                        ; 005b19b0
    LEA EAX,[ESP + 0x98]                ; 005b19b3
    XOR EBX,EBX                         ; 005b19ba
    PUSH EAX                            ; 005b19bc
    LEA EAX,[ESP + 0x144]               ; 005b19bd
    MOV ECX,0x3f800000                  ; 005b19c4
    PUSH EAX                            ; 005b19c9
    LEA EAX,[ESP + 0x1c]                ; 005b19ca
    MOV dword ptr [ESP + 0xa0],ECX      ; 005b19ce
    PUSH EAX                            ; 005b19d5
    MOV dword ptr [ESP + 0xa8],EBX      ; 005b19d6
    MOV dword ptr [ESP + 0xac],EBX      ; 005b19dd
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005b19e4
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EAX,0x3f800000                  ; 005b19e9
    ADD ESP,0xc                         ; 005b19ee
    MOV dword ptr [ESP + 0x114],EAX     ; 005b19f1
    LEA EAX,[ESP + 0x110]               ; 005b19f8
    PUSH EAX                            ; 005b19ff
    LEA EAX,[ESP + 0xb4]                ; 005b1a00
    PUSH EAX                            ; 005b1a07
    LEA EAX,[ESP + 0x1c]                ; 005b1a08
    PUSH EAX                            ; 005b1a0c
    MOV dword ptr [ESP + 0x11c],EBX     ; 005b1a0d
    MOV dword ptr [ESP + 0x124],EBX     ; 005b1a14
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005b1a1b
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005b1a20
    LEA EAX,[ESP + 0xbc]                ; 005b1a23
    PUSH EAX                            ; 005b1a2a
    LEA EAX,[ESP + 0xfc]                ; 005b1a2b
    MOV ESI,0x3f800000                  ; 005b1a32
    PUSH EAX                            ; 005b1a37
    LEA EAX,[ESP + 0x1c]                ; 005b1a38
    MOV dword ptr [ESP + 0xc4],EBX      ; 005b1a3c
    PUSH EAX                            ; 005b1a43
    MOV dword ptr [ESP + 0xcc],EBX      ; 005b1a44
    MOV dword ptr [ESP + 0xd0],ESI      ; 005b1a4b
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005b1a52
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005b1a57
    FLD float ptr [ESP + 0x100]         ; 005b1a5a
    SUB ESP,0x8                         ; 005b1a61
    FSTP double ptr [ESP]               ; 005b1a64
    FLD float ptr [ESP + 0x104]         ; 005b1a67
    SUB ESP,0x8                         ; 005b1a6e
    FSTP double ptr [ESP]               ; 005b1a71
    FLD float ptr [ESP + 0x108]         ; 005b1a74
    SUB ESP,0x8                         ; 005b1a7b
    FSTP double ptr [ESP]               ; 005b1a7e
    FLD float ptr [ESP + 0xd0]          ; 005b1a81
    SUB ESP,0x8                         ; 005b1a88
    FSTP double ptr [ESP]               ; 005b1a8b
    FLD float ptr [ESP + 0xd4]          ; 005b1a8e
    SUB ESP,0x8                         ; 005b1a95
    FSTP double ptr [ESP]               ; 005b1a98
    FLD float ptr [ESP + 0xd8]          ; 005b1a9b
    SUB ESP,0x8                         ; 005b1aa2
    FSTP double ptr [ESP]               ; 005b1aa5
    FLD float ptr [ESP + 0x178]         ; 005b1aa8
    SUB ESP,0x8                         ; 005b1aaf
    FSTP double ptr [ESP]               ; 005b1ab2
    FLD float ptr [ESP + 0x17c]         ; 005b1ab5
    SUB ESP,0x8                         ; 005b1abc
    FSTP double ptr [ESP]               ; 005b1abf
    FLD float ptr [ESP + 0x180]         ; 005b1ac2
    SUB ESP,0x8                         ; 005b1ac9
    FSTP double ptr [ESP]               ; 005b1acc
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0 ; 005b1acf
        ;   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrient_FUN_005aa0a0(double front_x, double front_y, double front_z, double up_x, ...)
    MOV EAX,[0x0067b654]                ; 005b1ad4 | g_CGamePtr
    ADD ESP,0x48                        ; 005b1ad9
    MOV EDX,dword ptr [EAX + 0x240]     ; 005b1adc | g_CGameInstance.block_auto_save
    MOV dword ptr [0x03f6af7c],EBX      ; 005b1ae2 | CVector3f_03f6af7c
    TEST EDX,EDX                        ; 005b1ae8
    JZ 0x005b1b91                       ; 005b1aea
        ;   XREF to: 005b1b91 (CONDITIONAL_JUMP)  ; LAB_005b1b91
    LEA EAX,[ESP + 0xa4]                ; 005b1af0
        ;   Label: LAB_005b1af0
    CMP EAX,0x3f6af70                   ; 005b1af7 | g_SoundListenerPrev
    JNZ 0x005b1e9c                      ; 005b1afc
        ;   XREF to: 005b1e9c (CONDITIONAL_JUMP)  ; LAB_005b1e9c
    MOV ESP,EBP                         ; 005b1b02
        ;   Label: LAB_005b1b02
    POP EBP                             ; 005b1b04
    POP EDI                             ; 005b1b05
    POP ESI                             ; 005b1b06
    POP EBX                             ; 005b1b07
    RET                                 ; 005b1b08
    MOV EAX,[0x02d7eaf4]                ; 005b1b09 | g_CDemonLightInstance.base.base.position
        ;   Label: LAB_005b1b09
    MOV dword ptr [ESP + 0xc8],EAX      ; 005b1b0e
    MOV EAX,0x2d7eaf4                   ; 005b1b15 | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b1b1a | g_CDemonLightInstance.base.base.position+4
    MOV dword ptr [ESP + 0xcc],EAX      ; 005b1b1d
    MOV EAX,0x2d7eaf4                   ; 005b1b24 | g_CDemonLightInstance.base.base.position
    MOV EAX,dword ptr [EAX + 0x8]       ; 005b1b29 | g_CDemonLightInstance.base.base.position+8
    LEA EDX,[ESP + 0xa4]                ; 005b1b2c
    MOV dword ptr [ESP + 0xd0],EAX      ; 005b1b33
    LEA EAX,[ESP + 0xc8]                ; 005b1b3a
    CMP EDX,EAX                         ; 005b1b41
    JZ 0x005b1b6f                       ; 005b1b43
        ;   XREF to: 005b1b6f (CONDITIONAL_JUMP)  ; LAB_005b1b6f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005b1b45
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b1b4c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005b1b53
    MOV dword ptr [ESP + 0xa8],EAX      ; 005b1b5a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005b1b61
    MOV dword ptr [ESP + 0xac],EAX      ; 005b1b68
    JMP 0x03fc31be                      ; 005b1b6f
        ;   XREF to: 03fc31be (UNCONDITIONAL_JUMP)  ; LAB_03fc31be
        ;   Label: LAB_005b1b6f
    MOV ECX,0xa                         ; 005b1b7f
        ;   Label: LAB_005b1b7f
    LEA EDI,[ESP + 0x14]                ; 005b1b84
    LEA ESI,[ESP + 0x3c]                ; 005b1b88
    JMP 0x005b1982                      ; 005b1b8c
        ;   XREF to: 005b1982 (UNCONDITIONAL_JUMP)  ; LAB_005b1982
    PUSH 0x6                            ; 005b1b91
        ;   Label: LAB_005b1b91
    MOV EAX,[0x006810c8]                ; 005b1b93 | g_CDemonSetPtr
    PUSH 0x652506                       ; 005b1b98 | = "castle"
    ADD EAX,0x14d0f0                    ; 005b1b9d
    PUSH EAX                            ; 005b1ba2 | g_CDemonSetInstance.geometry_filename[0]
    CALL crt_string.c__strnicmp_FUN_005ff070 ; 005b1ba3
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005b1ba8
    TEST EAX,EAX                        ; 005b1bab
    JNZ 0x005b1cc0                      ; 005b1bad
        ;   XREF to: 005b1cc0 (CONDITIONAL_JUMP)  ; LAB_005b1cc0
    MOV dword ptr [ESP + 0x154],0x1     ; 005b1bb3
    MOV EAX,dword ptr [ESP + 0x154]     ; 005b1bbe
        ;   Label: LAB_005b1bbe
    MOV EBX,0x1                         ; 005b1bc5
    MOV dword ptr [ESP + 0x158],EAX     ; 005b1bca
    MOV EDX,dword ptr [0x03275a28]      ; 005b1bd1 | g_ScreenHeightForFonts
        ;   Label: LAB_005b1bd1
    IMUL EDX,EBX                        ; 005b1bd7
    MOV EAX,EDX                         ; 005b1bda
    SAR EDX,0x1f                        ; 005b1bdc
    SHL EDX,0x5                         ; 005b1bdf
    SBB EAX,EDX                         ; 005b1be2
    SAR EAX,0x5                         ; 005b1be4
    MOV EDI,dword ptr [ESP + 0x158]     ; 005b1be7
    MOV EDX,dword ptr [0x03275a2c]      ; 005b1bee | g_CDemonCameraInstance.framebuffer_height
    IMUL EDX,EDI                        ; 005b1bf4
    MOV ESI,EAX                         ; 005b1bf7
    MOV EAX,EDX                         ; 005b1bf9
    SAR EDX,0x1f                        ; 005b1bfb
    SHL EDX,0x5                         ; 005b1bfe
    SBB EAX,EDX                         ; 005b1c01
    SAR EAX,0x5                         ; 005b1c03
    PUSH EAX                            ; 005b1c06
    PUSH ESI                            ; 005b1c07
    PUSH 0x32758e4                      ; 005b1c08 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x140]               ; 005b1c0d
    LEA EDI,[ESP + 0x98]                ; 005b1c14
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0 ; 005b1c1b
        ;   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0(CDemonCamera * this_ptr, int screen_x, int screen_y, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x140]               ; 005b1c20
    ADD ESP,0xc                         ; 005b1c27
    JMP 0x0060c6f0                      ; 005b1c2a
        ;   XREF to: 0060c6f0 (UNCONDITIONAL_JUMP)  ; LAB_0060c6f0
    MOV EDX,dword ptr [ESP + 0x94]      ; 005b1c2f
        ;   Label: LAB_005b1c2f
    MOV dword ptr [ESP + 0x10],EAX      ; 005b1c36
    CMP EDX,0x7fffffff                  ; 005b1c3a
    JL 0x005b1d0b                       ; 005b1c40
        ;   XREF to: 005b1d0b (CONDITIONAL_JUMP)  ; LAB_005b1d0b
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005b1c46
    FLD float ptr [ESP + 0x10]          ; 005b1c4e
        ;   Label: LAB_005b1c4e
    FLDZ                                ; 005b1c52
    FCOMPP                              ; 005b1c54
    FNSTSW AX                           ; 005b1c56
    SAHF                                ; 005b1c58
    JNC 0x005b1c69                      ; 005b1c59
        ;   XREF to: 005b1c69 (CONDITIONAL_JUMP)  ; LAB_005b1c69
    FLD float ptr [ESP + 0x10]          ; 005b1c5b
    FADD float ptr [0x00652556]         ; 005b1c5f | FLOAT_00652556
    FSTP float ptr [ESP + 0x10]         ; 005b1c65
    FLD float ptr [ESP + 0x10]          ; 005b1c69
        ;   Label: LAB_005b1c69
    FMUL ST0                            ; 005b1c6d
    FST float ptr [ESP + 0x10]          ; 005b1c6f
    FLD1                                ; 005b1c73
    FCOMPP                              ; 005b1c75
    FNSTSW AX                           ; 005b1c77
    SAHF                                ; 005b1c79
    JNC 0x005b1c84                      ; 005b1c7a
        ;   XREF to: 005b1c84 (CONDITIONAL_JUMP)  ; LAB_005b1c84
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 005b1c7c
    FLD float ptr [ESP + 0x10]          ; 005b1c84
        ;   Label: LAB_005b1c84
    FMUL float ptr [0x0065252e]         ; 005b1c88 | FLOAT_0065252e
    FADD float ptr [0x03f6af7c]         ; 005b1c8e | CVector3f_03f6af7c
    ADD EBX,0x2                         ; 005b1c94
    FSTP float ptr [0x03f6af7c]         ; 005b1c97 | CVector3f_03f6af7c
    CMP EBX,0x21                        ; 005b1c9d
    JNZ 0x005b1bd1                      ; 005b1ca0
        ;   XREF to: 005b1bd1 (CONDITIONAL_JUMP)  ; LAB_005b1bd1
    MOV EBX,dword ptr [ESP + 0x154]     ; 005b1ca6
    ADD EBX,0x2                         ; 005b1cad
    MOV dword ptr [ESP + 0x154],EBX     ; 005b1cb0
    CMP EBX,0x21                        ; 005b1cb7
    JNZ 0x005b1bbe                      ; 005b1cba
        ;   XREF to: 005b1bbe (CONDITIONAL_JUMP)  ; LAB_005b1bbe
    FLD float ptr [0x03f6af7c]          ; 005b1cc0 | CVector3f_03f6af7c
        ;   Label: LAB_005b1cc0
    FMUL ST0                            ; 005b1cc6
    FST float ptr [0x03f6af7c]          ; 005b1cc8 | CVector3f_03f6af7c
    FLDZ                                ; 005b1cce
    FCOMPP                              ; 005b1cd0
    FNSTSW AX                           ; 005b1cd2
    SAHF                                ; 005b1cd4
    JNC 0x005b1ce9                      ; 005b1cd5
        ;   XREF to: 005b1ce9 (CONDITIONAL_JUMP)  ; LAB_005b1ce9
    FLD float ptr [0x03f6af7c]          ; 005b1cd7 | CVector3f_03f6af7c
    FADD float ptr [0x00652532]         ; 005b1cdd | FLOAT_00652532
    FSTP float ptr [0x03f6af7c]         ; 005b1ce3 | CVector3f_03f6af7c
    FLD float ptr [0x03f6af7c]          ; 005b1ce9 | CVector3f_03f6af7c
        ;   Label: LAB_005b1ce9
    FLD1                                ; 005b1cef
    FCOMPP                              ; 005b1cf1
    FNSTSW AX                           ; 005b1cf3
    SAHF                                ; 005b1cf5
    JNC 0x005b1af0                      ; 005b1cf6
        ;   XREF to: 005b1af0 (CONDITIONAL_JUMP)  ; LAB_005b1af0
    MOV dword ptr [0x03f6af7c],0x3f800000 ; 005b1cfc | CVector3f_03f6af7c
    JMP 0x005b1af0                      ; 005b1d06
        ;   XREF to: 005b1af0 (UNCONDITIONAL_JUMP)  ; LAB_005b1af0
    LEA ECX,[EDX + 0xfffffd00]          ; 005b1d0b
        ;   Label: LAB_005b1d0b
    MOV dword ptr [ESP + 0x94],ECX      ; 005b1d11
    CMP ECX,0x1                         ; 005b1d18
    JGE 0x005b1d28                      ; 005b1d1b
        ;   XREF to: 005b1d28 (CONDITIONAL_JUMP)  ; LAB_005b1d28
    MOV dword ptr [ESP + 0x94],0x1      ; 005b1d1d
    LEA EAX,[ESP + 0x8c]                ; 005b1d28
        ;   Label: LAB_005b1d28
    PUSH EAX                            ; 005b1d2f
    PUSH 0x32758e4                      ; 005b1d30 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x124]               ; 005b1d35
    LEA EDI,[ESP + 0xe8]                ; 005b1d3c
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 ; 005b1d43
        ;   XREF to: 0044d370 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x124]               ; 005b1d48
    ADD ESP,0x8                         ; 005b1d4f
    JMP 0x0060c70d                      ; 005b1d52
        ;   XREF to: 0060c70d (UNCONDITIONAL_JUMP)  ; LAB_0060c70d
    MOV dword ptr [ESP + 0x15c],EAX     ; 005b1d5c
        ;   Label: LAB_005b1d5c
    FILD dword ptr [ESP + 0x15c]        ; 005b1d63
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005b1d6a
    FLD double ptr [0x00652516]         ; 005b1d71 | DOUBLE_00652516
    FXCH                                ; 005b1d77
    FMUL ST1                            ; 005b1d79
    MOV dword ptr [ESP + 0x15c],EAX     ; 005b1d7b
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005b1d82
    FILD dword ptr [ESP + 0x15c]        ; 005b1d89
    MOV dword ptr [ESP + 0x15c],EAX     ; 005b1d90
    FMUL ST2                            ; 005b1d97
    FILD dword ptr [ESP + 0x15c]        ; 005b1d99
    FMULP ST3                           ; 005b1da0
    FXCH                                ; 005b1da2
    FST float ptr [ESP + 0xec]          ; 005b1da4
    FXCH                                ; 005b1dab
    FST float ptr [ESP + 0xf0]          ; 005b1dad
    FSUB float ptr [ESP + 0xa8]         ; 005b1db4
    FXCH                                ; 005b1dbb
    FSUB float ptr [ESP + 0xa4]         ; 005b1dbd
    FXCH                                ; 005b1dc4
    FST float ptr [ESP + 0xd8]          ; 005b1dc6
    FMUL float ptr [ESP + 0xd8]         ; 005b1dcd
    FXCH                                ; 005b1dd4
    FST float ptr [ESP + 0xd4]          ; 005b1dd6
    FMUL float ptr [ESP + 0xd4]         ; 005b1ddd
    FXCH ST2                            ; 005b1de4
    FST float ptr [ESP + 0xf4]          ; 005b1de6
    FSUB float ptr [ESP + 0xac]         ; 005b1ded
    FXCH ST2                            ; 005b1df4
    FADDP                               ; 005b1df6
    FXCH                                ; 005b1df8
    FST float ptr [ESP + 0xdc]          ; 005b1dfa
    FMUL float ptr [ESP + 0xdc]         ; 005b1e01
    FADDP                               ; 005b1e08
    FSQRT                               ; 005b1e0a
    FST double ptr [ESP]                ; 005b1e0c
    FCOMP double ptr [0x00652536]       ; 005b1e0f | DOUBLE_00652536
    FNSTSW AX                           ; 005b1e15
    SAHF                                ; 005b1e17
    JBE 0x005b1e31                      ; 005b1e18
        ;   XREF to: 005b1e31 (CONDITIONAL_JUMP)  ; LAB_005b1e31
    FLD double ptr [ESP]                ; 005b1e1a
    FADD double ptr [0x0065253e]        ; 005b1e1d | DOUBLE_0065253e
    FMUL double ptr [0x0065251e]        ; 005b1e23 | DOUBLE_0065251e
    FADD float ptr [ESP + 0x10]         ; 005b1e29
    FSTP float ptr [ESP + 0x10]         ; 005b1e2d
    LEA EAX,[ESP + 0xec]                ; 005b1e31
        ;   Label: LAB_005b1e31
    FLD1                                ; 005b1e38
    PUSH EAX                            ; 005b1e3a
    MOV EAX,[0x006810c8]                ; 005b1e3b | g_CDemonSetInstance | g_CDemonSetPtr
    FADD float ptr [ESP + 0xf4]         ; 005b1e40
    PUSH EAX                            ; 005b1e47 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf8]         ; 005b1e48
    CALL core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340 ; 005b1e4f
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340(CDemonSet * this_ptr, CVector3f * position)
    MOV dword ptr [ESP + 0x164],EAX     ; 005b1e54
    FLD float ptr [ESP + 0x164]         ; 005b1e5b
    ADD ESP,0x8                         ; 005b1e62
    FSUB float ptr [ESP + 0xf0]         ; 005b1e65
    FST double ptr [ESP + 0x8]          ; 005b1e6c
    FCOMP double ptr [0x00652546]       ; 005b1e70 | DOUBLE_00652546
    FNSTSW AX                           ; 005b1e76
    SAHF                                ; 005b1e78
    JBE 0x005b1c4e                      ; 005b1e79
        ;   XREF to: 005b1c4e (CONDITIONAL_JUMP)  ; LAB_005b1c4e
    FLD double ptr [ESP + 0x8]          ; 005b1e7f
    FADD double ptr [0x0065254e]        ; 005b1e83 | DOUBLE_0065254e
    FMUL double ptr [0x00652526]        ; 005b1e89 | DOUBLE_00652526
    FADD float ptr [ESP + 0x10]         ; 005b1e8f
    FSTP float ptr [ESP + 0x10]         ; 005b1e93
    JMP 0x005b1c4e                      ; 005b1e97
        ;   XREF to: 005b1c4e (UNCONDITIONAL_JUMP)  ; LAB_005b1c4e
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005b1e9c
        ;   Label: LAB_005b1e9c
    MOV [0x03f6af70],EAX                ; 005b1ea3 | g_SoundListenerPrev
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005b1ea8
    MOV [0x03f6af74],EAX                ; 005b1eaf | g_SoundListenerPrev.y
    MOV EAX,dword ptr [ESP + 0xac]      ; 005b1eb4
    MOV [0x03f6af78],EAX                ; 005b1ebb | g_SoundListenerPrev.z
    MOV ESP,EBP                         ; 005b1ec0
    POP EBP                             ; 005b1ec2
    POP EDI                             ; 005b1ec3
    POP ESI                             ; 005b1ec4
    POP EBX                             ; 005b1ec5
    RET                                 ; 005b1ec6
    MOV ECX,dword ptr [ESI]             ; 0060c6f0
        ;   Label: LAB_0060c6f0
    MOV dword ptr [EDI],ECX             ; 0060c6f2
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c6f4
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c6f7
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c6fa
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c6fd
    ADD ESI,0xc                         ; 0060c700
    ADD EDI,0xc                         ; 0060c703
    XOR EAX,EAX                         ; 0060c706
    JMP 0x005b1c2f                      ; 0060c708
        ;   XREF to: 005b1c2f (UNCONDITIONAL_JUMP)  ; LAB_005b1c2f
    MOV ECX,dword ptr [ESI]             ; 0060c70d
        ;   Label: LAB_0060c70d
    MOV dword ptr [EDI],ECX             ; 0060c70f
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c711
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c714
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c717
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c71a
    ADD ESI,0xc                         ; 0060c71d
    ADD EDI,0xc                         ; 0060c720
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0060c723
    JMP 0x005b1d5c                      ; 0060c72a
        ;   XREF to: 005b1d5c (UNCONDITIONAL_JUMP)  ; LAB_005b1d5c
    MOV ECX,0xa                         ; 03fc3169
        ;   Label: LAB_03fc3169
    LEA EDI,[ESP + 0x64]                ; 03fc316e
    MOV ESI,0x32758f4                   ; 03fc3172
    MOV ECX,dword ptr [ESI]             ; 03fc3177
    MOV dword ptr [EDI],ECX             ; 03fc3179
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc317b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc317e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3181
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3184
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3187
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc318a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc318d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3190
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3193
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3196
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3199
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc319c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc319f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc31a2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc31a5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc31a8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc31ab
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc31ae
    ADD ESI,0x28                        ; 03fc31b1
    ADD EDI,0x28                        ; 03fc31b4
    XOR ECX,ECX                         ; 03fc31b7
    JMP 0x005b1975                      ; 03fc31b9
        ;   XREF to: 005b1975 (UNCONDITIONAL_JUMP)  ; LAB_005b1975
    MOV ECX,0xa                         ; 03fc31be
        ;   Label: LAB_03fc31be
    LEA EDI,[ESP + 0x3c]                ; 03fc31c3
    MOV ESI,0x2d7eb00                   ; 03fc31c7
    MOV ECX,dword ptr [ESI]             ; 03fc31cc
    MOV dword ptr [EDI],ECX             ; 03fc31ce
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc31d0
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc31d3
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc31d6
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc31d9
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc31dc
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc31df
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc31e2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc31e5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc31e8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc31eb
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc31ee
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc31f1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc31f4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc31f7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc31fa
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc31fd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3200
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3203
    ADD ESI,0x28                        ; 03fc3206
    ADD EDI,0x28                        ; 03fc3209
    XOR ECX,ECX                         ; 03fc320c
    JMP 0x005b1b7f                      ; 03fc320e
        ;   XREF to: 005b1b7f (UNCONDITIONAL_JUMP)  ; LAB_005b1b7f

