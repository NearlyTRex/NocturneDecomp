; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_scat_cpp_FUN_00558cf0(void)
;
; Local Variables:
; undefined1       Stack[-0xf8]:1  local_f8
;
; XREF[1]:
;   core_scat.cpp_FUN_00558720 at 00558a17
;
; Referenced Globals:
;   double DOUBLE_00641474 = 30
;   double DOUBLE_0064147c = -0.781490709825871
;   double DOUBLE_00641484 = 1.56298141965174
;   double DOUBLE_0064148c = 35
;   double DOUBLE_00641494 = -0.785398163375000
;   double DOUBLE_0064149c = 1.57079632675000
;   float FLOAT_006414a4 = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032613bc
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558cf0
        ;   Label: core_scat.cpp_FUN_00558cf0
    PUSH ESI                            ; 00558cf1
    PUSH EDI                            ; 00558cf2
    PUSH EBP                            ; 00558cf3
    MOV EBP,ESP                         ; 00558cf4
    SUB ESP,0x100                       ; 00558cf6
    AND ESP,0xfffffff8                  ; 00558cfc
    MOV EDI,dword ptr [EBP + 0x14]      ; 00558cff
    MOV ESI,dword ptr [EBP + 0x18]      ; 00558d02
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00558d05 | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 00558d0b
    PUSH ESI                            ; 00558d0c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00558d0d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00558d12
    PUSH 0x6598c0                       ; 00558d15 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00558d1a
    MOV EBX,EAX                         ; 00558d1c
    LEA EAX,[ESP + 0x20]                ; 00558d1e
    PUSH EAX                            ; 00558d22
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00558d23
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00558d28
    LEA EAX,[ESP + 0x18]                ; 00558d2b
    PUSH EAX                            ; 00558d2f
    MOV EDX,dword ptr [ESI + 0x154]     ; 00558d30
    PUSH ESI                            ; 00558d36
    CALL dword ptr [EDX + 0x4c]         ; 00558d37
    ADD ESP,0x8                         ; 00558d3a
    TEST EAX,EAX                        ; 00558d3d
    JZ 0x00558d59                       ; 00558d3f
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    TEST EBX,EBX                        ; 00558d41
    JZ 0x00558d72                       ; 00558d43
        ;   XREF to: 00558d72 (CONDITIONAL_JUMP)  ; LAB_00558d72
    PUSH EBX                            ; 00558d45
    MOV EAX,dword ptr [EBX + 0x154]     ; 00558d46
    CALL dword ptr [EAX + 0x120]        ; 00558d4c
    ADD ESP,0x4                         ; 00558d52
    TEST EAX,EAX                        ; 00558d55
    JLE 0x00558d72                      ; 00558d57
        ;   XREF to: 00558d72 (CONDITIONAL_JUMP)  ; LAB_00558d72
    MOV dword ptr [ESP + 0xf8],0xbf800000 ; 00558d59
        ;   Label: LAB_00558d59
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00558d64
    MOV ESP,EBP                         ; 00558d6b
    POP EBP                             ; 00558d6d
    POP EDI                             ; 00558d6e
    POP ESI                             ; 00558d6f
    POP EBX                             ; 00558d70
    RET                                 ; 00558d71
    LEA EAX,[ESI + 0x20]                ; 00558d72
        ;   Label: LAB_00558d72
    PUSH EAX                            ; 00558d75
    LEA EAX,[ESP + 0xc4]                ; 00558d76
    PUSH EAX                            ; 00558d7d
    PUSH EDI                            ; 00558d7e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00558d7f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00558d84
    FLD float ptr [ESP + 0xc8]          ; 00558d87
    FLDZ                                ; 00558d8e
    FCOMPP                              ; 00558d90
    FNSTSW AX                           ; 00558d92
    SAHF                                ; 00558d94
    JNC 0x00558d59                      ; 00558d95
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    FLD float ptr [ESP + 0xc4]          ; 00558d97
    FMUL ST0                            ; 00558d9e
    FLD float ptr [ESP + 0xc0]          ; 00558da0
    FMUL ST0                            ; 00558da7
    FADDP                               ; 00558da9
    FLD float ptr [ESP + 0xc8]          ; 00558dab
    FMUL ST0                            ; 00558db2
    FADDP                               ; 00558db4
    FSQRT                               ; 00558db6
    FSTP float ptr [ESP + 0x14]         ; 00558db8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00558dbc
    MOV dword ptr [ESP + 0xf0],EAX      ; 00558dc0
    LEA EAX,[ESP + 0xc0]                ; 00558dc7
    PUSH EAX                            ; 00558dce
    LEA EAX,[ESP + 0xac]                ; 00558dcf
    PUSH EAX                            ; 00558dd6
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00558dd7
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00558ddc
    MOV EAX,dword ptr [EAX + 0x4]       ; 00558ddf
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00558de2
    MOV dword ptr [ESP + 0x10],EAX      ; 00558de5
    TEST ECX,ECX                        ; 00558de9
    JZ 0x00558e2b                       ; 00558deb
        ;   XREF to: 00558e2b (CONDITIONAL_JUMP)  ; LAB_00558e2b
    FLD float ptr [ESP + 0x14]          ; 00558ded
    FCOMP double ptr [0x0064148c]       ; 00558df1 | DOUBLE_0064148c
    FNSTSW AX                           ; 00558df7
    SAHF                                ; 00558df9
    JA 0x00558d59                       ; 00558dfa
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    FLD float ptr [ESP + 0x10]          ; 00558e00
    FST double ptr [ESP + 0x8]          ; 00558e04
    FCOMP double ptr [0x00641494]       ; 00558e08 | DOUBLE_00641494
    FNSTSW AX                           ; 00558e0e
    SAHF                                ; 00558e10
    JC 0x00558d59                       ; 00558e11
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    FLD double ptr [ESP + 0x8]          ; 00558e17
    FCOMP double ptr [0x0064149c]       ; 00558e1b | DOUBLE_0064149c
    FNSTSW AX                           ; 00558e21
    SAHF                                ; 00558e23
    JBE 0x00558e66                      ; 00558e24
        ;   XREF to: 00558e66 (CONDITIONAL_JUMP)  ; LAB_00558e66
    JMP 0x00558d59                      ; 00558e26
        ;   XREF to: 00558d59 (UNCONDITIONAL_JUMP)  ; LAB_00558d59
    FLD float ptr [ESP + 0x14]          ; 00558e2b
        ;   Label: LAB_00558e2b
    FCOMP double ptr [0x00641474]       ; 00558e2f | DOUBLE_00641474
    FNSTSW AX                           ; 00558e35
    SAHF                                ; 00558e37
    JA 0x00558d59                       ; 00558e38
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    FLD float ptr [ESP + 0x10]          ; 00558e3e
    FST double ptr [ESP]                ; 00558e42
    FCOMP double ptr [0x0064147c]       ; 00558e45 | DOUBLE_0064147c
    FNSTSW AX                           ; 00558e4b
    SAHF                                ; 00558e4d
    JC 0x00558d59                       ; 00558e4e
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    FLD double ptr [ESP]                ; 00558e54
    FCOMP double ptr [0x00641484]       ; 00558e57 | DOUBLE_00641484
    FNSTSW AX                           ; 00558e5d
    SAHF                                ; 00558e5f
    JA 0x00558d59                       ; 00558e60
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    LEA EBX,[ESP + 0x90]                ; 00558e66
        ;   Label: LAB_00558e66
    PUSH EBX                            ; 00558e6d
    MOV EAX,dword ptr [EDI + 0x154]     ; 00558e6e
    PUSH EDI                            ; 00558e74
    CALL dword ptr [EAX + 0x14]         ; 00558e75
    LEA EBX,[EAX + 0xc]                 ; 00558e78
    FLD float ptr [EAX]                 ; 00558e7b
    FADD float ptr [EBX]                ; 00558e7d
    ADD ESP,0x8                         ; 00558e7f
    FST float ptr [ESP + 0xd8]          ; 00558e82
    FLD float ptr [EAX + 0x4]           ; 00558e89
    FADD float ptr [EBX + 0x4]          ; 00558e8c
    FXCH                                ; 00558e8f
    FLD float ptr [0x006414a4]          ; 00558e91 | FLOAT_006414a4
    FXCH                                ; 00558e97
    FMUL ST1                            ; 00558e99
    FXCH ST2                            ; 00558e9b
    FST float ptr [ESP + 0xdc]          ; 00558e9d
    FLD float ptr [EAX + 0x8]           ; 00558ea4
    FADD float ptr [EBX + 0x8]          ; 00558ea7
    FXCH                                ; 00558eaa
    FMUL ST2                            ; 00558eac
    FXCH                                ; 00558eae
    FST float ptr [ESP + 0xe0]          ; 00558eb0
    FMULP ST2                           ; 00558eb7
    LEA EAX,[EDI + 0x20]                ; 00558eb9
    FXCH ST2                            ; 00558ebc
    FSTP float ptr [ESP + 0xe4]         ; 00558ebe
    FXCH                                ; 00558ec5
    FSTP float ptr [ESP + 0xe8]         ; 00558ec7
    FSTP float ptr [ESP + 0xec]         ; 00558ece
    FLD float ptr [EAX]                 ; 00558ed5
    FADD float ptr [ESP + 0xe4]         ; 00558ed7
    FSTP float ptr [ESP + 0xb4]         ; 00558ede
    FLD float ptr [EAX + 0x4]           ; 00558ee5
    FADD float ptr [ESP + 0xe8]         ; 00558ee8
    FSTP float ptr [ESP + 0xb8]         ; 00558eef
    FLD float ptr [EAX + 0x8]           ; 00558ef6
    LEA EAX,[ESP + 0x18]                ; 00558ef9
    PUSH EAX                            ; 00558efd
    LEA EAX,[ESP + 0xd0]                ; 00558efe
    PUSH EAX                            ; 00558f05
    FADD float ptr [ESP + 0xf4]         ; 00558f06
    PUSH ESI                            ; 00558f0d
    FSTP float ptr [ESP + 0xc8]         ; 00558f0e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00558f15
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00558f1a
    PUSH 0x1                            ; 00558f1d
    MOV EAX,[0x006810c8]                ; 00558f1f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00558f24 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 00558f25
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00558f2a
    PUSH EDI                            ; 00558f2d
    MOV EDX,dword ptr [0x006810c8]      ; 00558f2e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 00558f34 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 00558f35
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00558f3a
    LEA EAX,[ESP + 0xcc]                ; 00558f3d
    PUSH EAX                            ; 00558f44
    LEA EAX,[ESP + 0xb8]                ; 00558f45
    PUSH EAX                            ; 00558f4c
    MOV ECX,dword ptr [0x006810c8]      ; 00558f4d | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00558f53 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 00558f54
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x108],EAX     ; 00558f59
    FLD float ptr [ESP + 0x108]         ; 00558f60
    ADD ESP,0xc                         ; 00558f67
    MOV EBX,dword ptr [0x006810c8]      ; 00558f6a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00558f70 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf8]         ; 00558f71
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 00558f78
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00558f7d
    FLD float ptr [ESP + 0xf4]          ; 00558f80
    FLD1                                ; 00558f87
    FCOMPP                              ; 00558f89
    FNSTSW AX                           ; 00558f8b
    SAHF                                ; 00558f8d
    JC 0x00558d59                       ; 00558f8e
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    MOV EAX,[0x006810c8]                ; 00558f94 | g_CDemonSetPtr
    CMP ESI,dword ptr [EAX + 0x14d144]  ; 00558f99 | DAT_032613bc
    JNZ 0x00558d59                      ; 00558f9f
        ;   XREF to: 00558d59 (CONDITIONAL_JUMP)  ; LAB_00558d59
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00558fa5
    MOV dword ptr [ESP + 0xf8],EAX      ; 00558fac
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00558fb3
    MOV ESP,EBP                         ; 00558fba
    POP EBP                             ; 00558fbc
    POP EDI                             ; 00558fbd
    POP ESI                             ; 00558fbe
    POP EBX                             ; 00558fbf
    RET                                 ; 00558fc0

