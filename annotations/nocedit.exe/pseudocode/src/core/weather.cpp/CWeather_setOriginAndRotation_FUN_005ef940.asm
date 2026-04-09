; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_setOriginAndRotation_FUN_005ef940(CWeather *this_ptr,CVector3f *direction,CVector3f *rotation)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; CVector3f *      Stack[0xc]:4   rotation
; Local Variables:
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; CVector3f        Stack[-0x38]:12  local_38
; double           Stack[-0x24]:8  local_24
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b171
;
; Referenced Globals:
;   double DOUBLE_00657c14 = 100
;   double DOUBLE_00657c1c = 0.785398163375000
;   double DOUBLE_00657c24 = -0.785398163375000
;   float FLOAT_00657c2c = 50
;   float FLOAT_00657c30 = -50
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   CVector3f[200] g_WeatherParticlePositions
;   float[200] g_WeatherParticleGroundHeights
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ef940
        ;   Label: core_weather.cpp_CWeather_setOriginAndRotation_FUN_005ef940
    PUSH ESI                            ; 005ef941
    PUSH EDI                            ; 005ef942
    PUSH EBP                            ; 005ef943
    MOV EBP,ESP                         ; 005ef944
    SUB ESP,0x40                        ; 005ef946
    AND ESP,0xfffffff8                  ; 005ef949
    MOV EDI,dword ptr [EBP + 0x18]      ; 005ef94c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef94f
    ADD EAX,0x8                         ; 005ef952
    CMP EAX,EDI                         ; 005ef955
    JNZ 0x005efb2b                      ; 005ef957
        ;   XREF to: 005efb2b (CONDITIONAL_JUMP)  ; LAB_005efb2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef95d
        ;   Label: LAB_005ef95d
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005ef960
    ADD EAX,0x14                        ; 005ef963
    CMP EAX,EDX                         ; 005ef966
    JZ 0x005ef97a                       ; 005ef968
        ;   XREF to: 005ef97a (CONDITIONAL_JUMP)  ; LAB_005ef97a
    MOV ECX,dword ptr [EDX]             ; 005ef96a
    MOV dword ptr [EAX],ECX             ; 005ef96c
    MOV ECX,dword ptr [EDX + 0x4]       ; 005ef96e
    MOV dword ptr [EAX + 0x4],ECX       ; 005ef971
    MOV ECX,dword ptr [EDX + 0x8]       ; 005ef974
    MOV dword ptr [EAX + 0x8],ECX       ; 005ef977
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ef97a
        ;   Label: LAB_005ef97a
    CMP dword ptr [EAX],0x0             ; 005ef97d
    JZ 0x005efb24                       ; 005ef980
        ;   XREF to: 005efb24 (CONDITIONAL_JUMP)  ; LAB_005efb24
    MOV EBX,0x3f95df8                   ; 005ef986 | g_WeatherParticlePositions
    XOR ESI,ESI                         ; 005ef98b
    PUSH 0x42480000                     ; 005ef98d
        ;   Label: LAB_005ef98d
    PUSH 0x40a00000                     ; 005ef992
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ef997
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005ef99c
    FLD float ptr [ESP + 0x44]          ; 005ef9a0
    ADD ESP,0x8                         ; 005ef9a4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ef9a7
    FSTP float ptr [ESP + 0x38]         ; 005ef9aa
    FLD float ptr [EAX + 0x4]           ; 005ef9ae
    FLD ST0                             ; 005ef9b1
    FADD double ptr [0x00657c1c]        ; 005ef9b3 | DOUBLE_00657c1c
    SUB ESP,0x4                         ; 005ef9b9
    FSTP float ptr [ESP]                ; 005ef9bc
    FADD double ptr [0x00657c24]        ; 005ef9bf | DOUBLE_00657c24
    SUB ESP,0x4                         ; 005ef9c5
    FSTP float ptr [ESP]                ; 005ef9c8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ef9cb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005ef9d0
    FLD float ptr [ESP + 0x44]          ; 005ef9d4
    ADD ESP,0x8                         ; 005ef9d8
    FLD ST0                             ; 005ef9db
    FSIN                                ; 005ef9dd
    FXCH                                ; 005ef9df
    FCOS                                ; 005ef9e1
    FLD float ptr [ESP + 0x38]          ; 005ef9e3
    FXCH ST2                            ; 005ef9e7
    FMUL ST2                            ; 005ef9e9
    FADD float ptr [EDI]                ; 005ef9eb
    FXCH                                ; 005ef9ed
    FMULP ST2                           ; 005ef9ef
    FSTP float ptr [ESP + 0x18]         ; 005ef9f1
    MOV EAX,dword ptr [EDI + 0x4]       ; 005ef9f5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ef9f8
    MOV EDX,ESP                         ; 005ef9fc
    FADD float ptr [EDI + 0x8]          ; 005ef9fe
    LEA EAX,[ESP + 0x18]                ; 005efa01
    FSTP float ptr [ESP + 0x20]         ; 005efa05
    CMP EDX,EAX                         ; 005efa09
    JZ 0x005efa24                       ; 005efa0b
        ;   XREF to: 005efa24 (CONDITIONAL_JUMP)  ; LAB_005efa24
    MOV EAX,dword ptr [ESP + 0x18]      ; 005efa0d
    MOV dword ptr [ESP],EAX             ; 005efa11
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005efa14
    MOV dword ptr [ESP + 0x4],EAX       ; 005efa18
    MOV EAX,dword ptr [ESP + 0x20]      ; 005efa1c
    MOV dword ptr [ESP + 0x8],EAX       ; 005efa20
    LEA EAX,[ESP + 0xc]                 ; 005efa24
        ;   Label: LAB_005efa24
    LEA EDX,[ESP + 0x18]                ; 005efa28
    CMP EAX,EDX                         ; 005efa2c
    JZ 0x005efa48                       ; 005efa2e
        ;   XREF to: 005efa48 (CONDITIONAL_JUMP)  ; LAB_005efa48
    MOV EAX,dword ptr [ESP + 0x18]      ; 005efa30
    MOV dword ptr [ESP + 0xc],EAX       ; 005efa34
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005efa38
    MOV dword ptr [ESP + 0x10],EAX      ; 005efa3c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005efa40
    MOV dword ptr [ESP + 0x14],EAX      ; 005efa44
    FLD float ptr [ESP + 0x4]           ; 005efa48
        ;   Label: LAB_005efa48
    MOV EAX,[0x006810c8]                ; 005efa4c | g_CDemonSetPtr | g_CDemonSetInstance
    FLD float ptr [ESP + 0x10]          ; 005efa51
    PUSH EAX                            ; 005efa55 | g_CDemonSetInstance
    FXCH                                ; 005efa56
    FADD float ptr [0x00657c2c]         ; 005efa58 | FLOAT_00657c2c
    FXCH                                ; 005efa5e
    FADD float ptr [0x00657c30]         ; 005efa60 | FLOAT_00657c30
    FXCH                                ; 005efa66
    FSTP float ptr [ESP + 0x8]          ; 005efa68
    FSTP float ptr [ESP + 0x14]         ; 005efa6c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 005efa70
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005efa75
    MOV EDX,dword ptr [0x006810c8]      ; 005efa78 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005efa7e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210 ; 005efa7f
        ;   XREF to: 00574210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005efa84
    LEA EAX,[ESP + 0xc]                 ; 005efa87
    PUSH EAX                            ; 005efa8b
    LEA EAX,[ESP + 0x4]                 ; 005efa8c
    PUSH EAX                            ; 005efa90
    MOV ECX,dword ptr [0x006810c8]      ; 005efa91 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005efa97 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 005efa98
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x48],EAX      ; 005efa9d
    FLD float ptr [ESP + 0x48]          ; 005efaa1
    ADD ESP,0xc                         ; 005efaa5
    FLD float ptr [ESP + 0x10]          ; 005efaa8
    FSUB float ptr [ESP + 0x4]          ; 005efaac
    FMULP                               ; 005efab0
    PUSH 0x3f800000                     ; 005efab2
    FADD float ptr [ESP + 0x8]          ; 005efab7
    PUSH 0x0                            ; 005efabb
    FST float ptr [ESI + 0x3f96758]     ; 005efabd | g_WeatherParticleGroundHeights
    FSTP double ptr [ESP + 0x34]        ; 005efac3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005efac7
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 005efacc
    FLD float ptr [ESP + 0x44]          ; 005efad0
    FMUL double ptr [0x00657c14]        ; 005efad4 | DOUBLE_00657c14
    ADD ESP,0x8                         ; 005efada
    FADD double ptr [ESP + 0x2c]        ; 005efadd
    LEA EAX,[ESP + 0x18]                ; 005efae1
    FSTP float ptr [ESP + 0x1c]         ; 005efae5
    CMP EBX,EAX                         ; 005efae9
    JZ 0x005efb01                       ; 005efaeb
        ;   XREF to: 005efb01 (CONDITIONAL_JUMP)  ; LAB_005efb01
    MOV EAX,dword ptr [ESP + 0x18]      ; 005efaed
    MOV dword ptr [EBX],EAX             ; 005efaf1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005efaf3
    MOV dword ptr [EBX + 0x4],EAX       ; 005efaf7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005efafa
    MOV dword ptr [EBX + 0x8],EAX       ; 005efafe
    ADD ESI,0x4                         ; 005efb01
        ;   Label: LAB_005efb01
    ADD EBX,0xc                         ; 005efb04
    CMP ESI,0x320                       ; 005efb07
    JNZ 0x005ef98d                      ; 005efb0d
        ;   XREF to: 005ef98d (CONDITIONAL_JUMP)  ; LAB_005ef98d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005efb13
    MOV dword ptr [EAX + 0x28],0x0      ; 005efb16
    MOV dword ptr [EAX + 0x24],0x0      ; 005efb1d
    MOV ESP,EBP                         ; 005efb24
        ;   Label: LAB_005efb24
    POP EBP                             ; 005efb26
    POP EDI                             ; 005efb27
    POP ESI                             ; 005efb28
    POP EBX                             ; 005efb29
    RET                                 ; 005efb2a
    MOV EDX,dword ptr [EDI]             ; 005efb2b
        ;   Label: LAB_005efb2b
    MOV dword ptr [EAX],EDX             ; 005efb2d
    MOV EDX,dword ptr [EDI + 0x4]       ; 005efb2f
    MOV dword ptr [EAX + 0x4],EDX       ; 005efb32
    MOV EDX,dword ptr [EDI + 0x8]       ; 005efb35
    MOV dword ptr [EAX + 0x8],EDX       ; 005efb38
    JMP 0x005ef95d                      ; 005efb3b
        ;   XREF to: 005ef95d (UNCONDITIONAL_JUMP)  ; LAB_005ef95d

