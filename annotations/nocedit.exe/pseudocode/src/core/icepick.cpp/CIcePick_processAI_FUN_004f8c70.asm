; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_processAI_FUN_004f8c70(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f83d6
;
; Referenced Globals:
;   double DOUBLE_0062f7a3 = 6
;   double DOUBLE_0062f7ab = 0.318309886192889
;   double DOUBLE_0062f7b3 = 4
;   double DOUBLE_0062f7bb = 10
;   double DOUBLE_0062f7c3 = -0.25
;   double DOUBLE_0062f7cb = 0.25
;   double DOUBLE_0062f7d3 = 3.14159265350000
;   double DOUBLE_0062f7db = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
;   core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_getPathMap_FUN_00548500
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8c70
        ;   Label: core_icepick.cpp_CIcePick_processAI_FUN_004f8c70
    PUSH ESI                            ; 004f8c71
    PUSH EDI                            ; 004f8c72
    PUSH EBP                            ; 004f8c73
    MOV EBP,ESP                         ; 004f8c74
    SUB ESP,0xa8                        ; 004f8c76
    AND ESP,0xfffffff8                  ; 004f8c7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f8c7f
    MOV EDX,0x3e800000                  ; 004f8c82
    MOV ECX,0x3f490fdb                  ; 004f8c87
    PUSH 0x2c                           ; 004f8c8c
    XOR ESI,ESI                         ; 004f8c8e
    MOV EDI,dword ptr [0x02db87d0]      ; 004f8c90 | g_LocalHeroIndex
    PUSH ESI                            ; 004f8c96
    LEA EAX,[EBX + 0xbe2c]              ; 004f8c97
    MOV dword ptr [ESP + 0xa4],EDX      ; 004f8c9d
    PUSH EAX                            ; 004f8ca4
    MOV dword ptr [ESP + 0xa0],ECX      ; 004f8ca5
    MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0] ; 004f8cac | g_HeroActors
    CALL crt_memory.c_memset_FUN_005fde40 ; 004f8cb3
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 004f8cb8
    ADD ESP,0xc                         ; 004f8cbe
    TEST EAX,EAX                        ; 004f8cc1
    JZ 0x004f90b7                       ; 004f8cc3
        ;   XREF to: 004f90b7 (CONDITIONAL_JUMP)  ; LAB_004f90b7
    MOV EAX,[0x02db87d0]                ; 004f8cc9 | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 004f8cce
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f8cd1 | g_HeroActors
    FLD float ptr [EDX]                 ; 004f8cd8
    FSUB float ptr [EAX + 0x20]         ; 004f8cda
    FSTP float ptr [ESP + 0x4c]         ; 004f8cdd
    FLD float ptr [EDX + 0x4]           ; 004f8ce1
    FSUB float ptr [EAX + 0x24]         ; 004f8ce4
    FST float ptr [ESP + 0x50]          ; 004f8ce7
    FMUL float ptr [ESP + 0x50]         ; 004f8ceb
    FLD float ptr [ESP + 0x4c]          ; 004f8cef
    FMUL ST0                            ; 004f8cf3
    FLD float ptr [EDX + 0x8]           ; 004f8cf5
    FSUB float ptr [EAX + 0x28]         ; 004f8cf8
    FXCH                                ; 004f8cfb
    FADDP ST2,ST0                       ; 004f8cfd
    FST float ptr [ESP + 0x54]          ; 004f8cff
    FMUL float ptr [ESP + 0x54]         ; 004f8d03
    FADDP                               ; 004f8d07
    FSQRT                               ; 004f8d09
    MOV EDX,dword ptr [EBX + 0x1fbd0]   ; 004f8d0b
    FSTP float ptr [ESP + 0x88]         ; 004f8d11
    CMP EDX,0x3                         ; 004f8d18
    JNZ 0x004f8d24                      ; 004f8d1b
        ;   XREF to: 004f8d24 (CONDITIONAL_JUMP)  ; LAB_004f8d24
    MOV dword ptr [ESP + 0x88],ESI      ; 004f8d1d
    MOV dword ptr [ESP + 0x90],0x41a00000 ; 004f8d24
        ;   Label: LAB_004f8d24
    MOV EAX,[0x02db87d0]                ; 004f8d2f | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f8d34 | g_HeroActors
    PUSH EAX                            ; 004f8d3b
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f8d3c
    CALL dword ptr [EDX + 0x15c]        ; 004f8d42
    ADD ESP,0x4                         ; 004f8d48
    TEST EAX,EAX                        ; 004f8d4b
    JZ 0x004f8d5a                       ; 004f8d4d
        ;   XREF to: 004f8d5a (CONDITIONAL_JUMP)  ; LAB_004f8d5a
    MOV dword ptr [ESP + 0x90],0x41f00000 ; 004f8d4f
    FLD float ptr [ESP + 0x88]          ; 004f8d5a
        ;   Label: LAB_004f8d5a
    FCOMP float ptr [ESP + 0x90]        ; 004f8d61
    FNSTSW AX                           ; 004f8d68
    SAHF                                ; 004f8d6a
    JNC 0x004f8dbb                      ; 004f8d6b
        ;   XREF to: 004f8dbb (CONDITIONAL_JUMP)  ; LAB_004f8dbb
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 004f8d6d
    CMP ECX,0x2                         ; 004f8d73
    JNZ 0x004f90be                      ; 004f8d76
        ;   XREF to: 004f90be (CONDITIONAL_JUMP)  ; LAB_004f90be
    LEA EAX,[ESP + 0x7c]                ; 004f8d7c
        ;   Label: LAB_004f8d7c
    PUSH EAX                            ; 004f8d80
    MOV EDX,0x461c3f9a                  ; 004f8d81
    PUSH EBX                            ; 004f8d86
    MOV dword ptr [ESP + 0x84],EDX      ; 004f8d87
    CALL core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960 ; 004f8d8e
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; CEnemy * core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960(CHero * this_ptr, float * out_distance)
    MOV EDX,EAX                         ; 004f8d93
    ADD ESP,0x8                         ; 004f8d95
    TEST EAX,EAX                        ; 004f8d98
    JZ 0x004f90cc                       ; 004f8d9a
        ;   XREF to: 004f90cc (CONDITIONAL_JUMP)  ; LAB_004f90cc
    FLD float ptr [ESP + 0x7c]          ; 004f8da0
    FCOMP float ptr [ESP + 0x90]        ; 004f8da4
    FNSTSW AX                           ; 004f8dab
    SAHF                                ; 004f8dad
    JNC 0x004f90cc                      ; 004f8dae
        ;   XREF to: 004f90cc (CONDITIONAL_JUMP)  ; LAB_004f90cc
    MOV ESI,0x1                         ; 004f8db4
    MOV EDI,EDX                         ; 004f8db9
    LEA EDX,[EDI + 0x20]                ; 004f8dbb
        ;   Label: LAB_004f8dbb
    LEA EAX,[EBX + 0x20]                ; 004f8dbe
    FLD float ptr [EDX]                 ; 004f8dc1
    FSUB float ptr [EAX]                ; 004f8dc3
    FSTP float ptr [ESP + 0x40]         ; 004f8dc5
    FLD float ptr [EDX + 0x4]           ; 004f8dc9
    FSUB float ptr [EAX + 0x4]          ; 004f8dcc
    FSTP float ptr [ESP + 0x44]         ; 004f8dcf
    FLD float ptr [EDX + 0x8]           ; 004f8dd3
    LEA EDX,[ESP + 0x40]                ; 004f8dd6
    FSUB float ptr [EAX + 0x8]          ; 004f8dda
    LEA EAX,[ESP + 0x4c]                ; 004f8ddd
    FSTP float ptr [ESP + 0x48]         ; 004f8de1
    CMP EAX,EDX                         ; 004f8de5
    JZ 0x004f8e01                       ; 004f8de7
        ;   XREF to: 004f8e01 (CONDITIONAL_JUMP)  ; LAB_004f8e01
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f8de9
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f8ded
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f8df1
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8df5
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f8df9
    MOV dword ptr [ESP + 0x54],EAX      ; 004f8dfd
    FLD float ptr [ESP + 0x50]          ; 004f8e01
        ;   Label: LAB_004f8e01
    FMUL ST0                            ; 004f8e05
    FLD float ptr [ESP + 0x4c]          ; 004f8e07
    FMUL ST0                            ; 004f8e0b
    FADDP                               ; 004f8e0d
    FLD float ptr [ESP + 0x54]          ; 004f8e0f
    FMUL ST0                            ; 004f8e13
    FADDP                               ; 004f8e15
    FSQRT                               ; 004f8e17
    MOV dword ptr [EBX + 0x2418],0x0    ; 004f8e19
    FSTP float ptr [ESP + 0xa0]         ; 004f8e23
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004f8e2a
    FLD float ptr [ESP + 0xa0]          ; 004f8e31
    MOV dword ptr [ESP + 0x24],EAX      ; 004f8e38
    FCOMP double ptr [0x0062f7a3]       ; 004f8e3c | DOUBLE_0062f7a3
    FNSTSW AX                           ; 004f8e42
    SAHF                                ; 004f8e44
    JNC 0x004f91a1                      ; 004f8e45
        ;   XREF to: 004f91a1 (CONDITIONAL_JUMP)  ; LAB_004f91a1
    LEA EAX,[EBX + 0x158]               ; 004f8e4b
    CMP ESI,0x1                         ; 004f8e51
    JNZ 0x004f9110                      ; 004f8e54
        ;   XREF to: 004f9110 (CONDITIONAL_JUMP)  ; LAB_004f9110
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f8e5a
    JNZ 0x004f90e8                      ; 004f8e61
        ;   XREF to: 004f90e8 (CONDITIONAL_JUMP)  ; LAB_004f90e8
    MOV dword ptr [EBX + 0xbe44],ESI    ; 004f8e67
    MOV dword ptr [EBX + 0x2dc4],0x0    ; 004f8e6d
        ;   Label: LAB_004f8e6d
    CMP ESI,0x1                         ; 004f8e77
        ;   Label: LAB_004f8e77
    JNZ 0x004f8f45                      ; 004f8e7a
        ;   XREF to: 004f8f45 (CONDITIONAL_JUMP)  ; LAB_004f8f45
    LEA EAX,[ESP + 0x4c]                ; 004f8e80
    PUSH EAX                            ; 004f8e84
    LEA EAX,[ESP + 0x68]                ; 004f8e85
    PUSH EAX                            ; 004f8e89
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f8e8a
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004f8e8f
    ADD ESP,0x8                         ; 004f8e92
    FSUB float ptr [EBX + 0x34]         ; 004f8e95
    SUB ESP,0x4                         ; 004f8e98
    FSTP float ptr [ESP]                ; 004f8e9b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f8e9e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f8ea3
    FLD float ptr [ESP + 0xa8]          ; 004f8eaa
    FMUL double ptr [0x0062f7ab]        ; 004f8eb1 | DOUBLE_0062f7ab
    ADD ESP,0x4                         ; 004f8eb7
    FMUL double ptr [0x0062f7b3]        ; 004f8eba | DOUBLE_0062f7b3
    FLD float ptr [ESP + 0x9c]          ; 004f8ec0
    FCHS                                ; 004f8ec7
    FSTP float ptr [ESP + 0x84]         ; 004f8ec9
    FST float ptr [EBX + 0xbe50]        ; 004f8ed0
    FCOMP float ptr [ESP + 0x84]        ; 004f8ed6
    FNSTSW AX                           ; 004f8edd
    SAHF                                ; 004f8edf
    JNC 0x004f8eef                      ; 004f8ee0
        ;   XREF to: 004f8eef (CONDITIONAL_JUMP)  ; LAB_004f8eef
    MOV EAX,dword ptr [ESP + 0x84]      ; 004f8ee2
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f8ee9
    FLD float ptr [EBX + 0xbe50]        ; 004f8eef
        ;   Label: LAB_004f8eef
    FCOMP float ptr [ESP + 0x9c]        ; 004f8ef5
    FNSTSW AX                           ; 004f8efc
    SAHF                                ; 004f8efe
    JBE 0x004f8f0e                      ; 004f8eff
        ;   XREF to: 004f8f0e (CONDITIONAL_JUMP)  ; LAB_004f8f0e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f8f01
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f8f08
    FLD float ptr [EBX + 0xbe50]        ; 004f8f0e
        ;   Label: LAB_004f8f0e
    FST double ptr [ESP + 0x18]         ; 004f8f14
    FCOMP double ptr [0x0062f7c3]       ; 004f8f18 | DOUBLE_0062f7c3
    FNSTSW AX                           ; 004f8f1e
    SAHF                                ; 004f8f20
    JBE 0x004f8f45                      ; 004f8f21
        ;   XREF to: 004f8f45 (CONDITIONAL_JUMP)  ; LAB_004f8f45
    FLD double ptr [ESP + 0x18]         ; 004f8f23
    FCOMP double ptr [0x0062f7cb]       ; 004f8f27 | DOUBLE_0062f7cb
    FNSTSW AX                           ; 004f8f2d
    SAHF                                ; 004f8f2f
    JNC 0x004f8f45                      ; 004f8f30
        ;   XREF to: 004f8f45 (CONDITIONAL_JUMP)  ; LAB_004f8f45
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004f8f32
    JZ 0x004f8f45                       ; 004f8f39
        ;   XREF to: 004f8f45 (CONDITIONAL_JUMP)  ; LAB_004f8f45
    MOV dword ptr [EBX + 0xbe50],0x0    ; 004f8f3b
    FLDZ                                ; 004f8f45
        ;   Label: LAB_004f8f45
    FLD float ptr [EBX + 0x2418]        ; 004f8f47
    FSTP double ptr [ESP + 0x8]         ; 004f8f4d
    FCOMP double ptr [ESP + 0x8]        ; 004f8f51
    FNSTSW AX                           ; 004f8f55
    SAHF                                ; 004f8f57
    JNC 0x004f9355                      ; 004f8f58
        ;   XREF to: 004f9355 (CONDITIONAL_JUMP)  ; LAB_004f9355
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f8f5e
    MOV dword ptr [EBX + 0x2418],0x0    ; 004f8f65
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f8f6f
    LEA EAX,[EBX + 0x20]                ; 004f8f75
        ;   Label: LAB_004f8f75
    FLD float ptr [EDI + 0x20]          ; 004f8f78
    FSUB float ptr [EAX]                ; 004f8f7b
    FSTP float ptr [ESP + 0x58]         ; 004f8f7d
    FLD float ptr [EDI + 0x24]          ; 004f8f81
    FSUB float ptr [EAX + 0x4]          ; 004f8f84
    LEA EDX,[ESP + 0x4c]                ; 004f8f87
    FSTP float ptr [ESP + 0x5c]         ; 004f8f8b
    FLD float ptr [EDI + 0x28]          ; 004f8f8f
    FSUB float ptr [EAX + 0x8]          ; 004f8f92
    LEA EAX,[ESP + 0x58]                ; 004f8f95
    FSTP float ptr [ESP + 0x60]         ; 004f8f99
    CMP EDX,EAX                         ; 004f8f9d
    JZ 0x004f8fb9                       ; 004f8f9f
        ;   XREF to: 004f8fb9 (CONDITIONAL_JUMP)  ; LAB_004f8fb9
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f8fa1
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f8fa5
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f8fa9
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8fad
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f8fb1
    MOV dword ptr [ESP + 0x54],EAX      ; 004f8fb5
    LEA EAX,[ESP + 0x4c]                ; 004f8fb9
        ;   Label: LAB_004f8fb9
    PUSH EAX                            ; 004f8fbd
    LEA EAX,[ESP + 0x38]                ; 004f8fbe
    PUSH EAX                            ; 004f8fc2
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f8fc3
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004f8fc8
    LEA EAX,[ESP + 0x54]                ; 004f8fca
    ADD ESP,0x8                         ; 004f8fce
    CMP EAX,EDX                         ; 004f8fd1
    JZ 0x004f8fe9                       ; 004f8fd3
        ;   XREF to: 004f8fe9 (CONDITIONAL_JUMP)  ; LAB_004f8fe9
    MOV EAX,dword ptr [EDX]             ; 004f8fd5
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f8fd7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004f8fdb
    MOV dword ptr [ESP + 0x50],EAX      ; 004f8fde
    MOV EAX,dword ptr [EDX + 0x8]       ; 004f8fe2
    MOV dword ptr [ESP + 0x54],EAX      ; 004f8fe5
    FLD float ptr [ESP + 0x50]          ; 004f8fe9
        ;   Label: LAB_004f8fe9
    FSUB float ptr [EBX + 0x34]         ; 004f8fed
    SUB ESP,0x4                         ; 004f8ff0
    FSTP float ptr [ESP]                ; 004f8ff3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f8ff6
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f8ffb
    FLD float ptr [ESP + 0xa8]          ; 004f9002
    ADD ESP,0x4                         ; 004f9009
    FST float ptr [ESP + 0x2c]          ; 004f900c
    FCOMP float ptr [ESP + 0x94]        ; 004f9010
    FNSTSW AX                           ; 004f9017
    SAHF                                ; 004f9019
    JBE 0x004f9027                      ; 004f901a
        ;   XREF to: 004f9027 (CONDITIONAL_JUMP)  ; LAB_004f9027
    MOV EAX,dword ptr [ESP + 0x94]      ; 004f901c
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f9023
    FLD float ptr [ESP + 0x2c]          ; 004f9027
        ;   Label: LAB_004f9027
    FLD float ptr [ESP + 0x94]          ; 004f902b
    FCHS                                ; 004f9032
    FSTP float ptr [ESP + 0x8c]         ; 004f9034
    FCOMP float ptr [ESP + 0x8c]        ; 004f903b
    FNSTSW AX                           ; 004f9042
    SAHF                                ; 004f9044
    JNC 0x004f9052                      ; 004f9045
        ;   XREF to: 004f9052 (CONDITIONAL_JUMP)  ; LAB_004f9052
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f9047
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f904e
    FLD float ptr [ESP + 0x2c]          ; 004f9052
        ;   Label: LAB_004f9052
    FLD float ptr [EBP + 0x18]          ; 004f9056
    FXCH                                ; 004f9059
    FSUB float ptr [EBX + 0x1fbe8]      ; 004f905b
    FXCH                                ; 004f9061
    FMUL double ptr [0x0062f7d3]        ; 004f9063 | DOUBLE_0062f7d3
    FXCH                                ; 004f9069
    FST float ptr [ESP + 0x20]          ; 004f906b
    FXCH                                ; 004f906f
    FSTP double ptr [ESP]               ; 004f9071
    FCOMP double ptr [ESP]              ; 004f9074
    FNSTSW AX                           ; 004f9077
    SAHF                                ; 004f9079
    JBE 0x004f9083                      ; 004f907a
        ;   XREF to: 004f9083 (CONDITIONAL_JUMP)  ; LAB_004f9083
    FLD double ptr [ESP]                ; 004f907c
    FSTP float ptr [ESP + 0x20]         ; 004f907f
    FLD float ptr [EBP + 0x18]          ; 004f9083
        ;   Label: LAB_004f9083
    FMUL double ptr [0x0062f7db]        ; 004f9086 | DOUBLE_0062f7db
    FLD float ptr [ESP + 0x20]          ; 004f908c
    FXCH                                ; 004f9090
    FSTP double ptr [ESP + 0x10]        ; 004f9092
    FCOMP double ptr [ESP + 0x10]       ; 004f9096
    FNSTSW AX                           ; 004f909a
    SAHF                                ; 004f909c
    JNC 0x004f90a7                      ; 004f909d
        ;   XREF to: 004f90a7 (CONDITIONAL_JUMP)  ; LAB_004f90a7
    FLD double ptr [ESP + 0x10]         ; 004f909f
    FSTP float ptr [ESP + 0x20]         ; 004f90a3
    FLD float ptr [EBX + 0x1fbe8]       ; 004f90a7
        ;   Label: LAB_004f90a7
    FADD float ptr [ESP + 0x20]         ; 004f90ad
    FSTP float ptr [EBX + 0x1fbe8]      ; 004f90b1
    MOV ESP,EBP                         ; 004f90b7
        ;   Label: LAB_004f90b7
    POP EBP                             ; 004f90b9
    POP EDI                             ; 004f90ba
    POP ESI                             ; 004f90bb
    POP EBX                             ; 004f90bc
    RET                                 ; 004f90bd
    CMP ECX,0x3                         ; 004f90be
        ;   Label: LAB_004f90be
    JZ 0x004f8d7c                       ; 004f90c1
        ;   XREF to: 004f8d7c (CONDITIONAL_JUMP)  ; LAB_004f8d7c
    JMP 0x004f8dbb                      ; 004f90c7
        ;   XREF to: 004f8dbb (UNCONDITIONAL_JUMP)  ; LAB_004f8dbb
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f90cc
        ;   Label: LAB_004f90cc
    JZ 0x004f8dbb                       ; 004f90d3
        ;   XREF to: 004f8dbb (CONDITIONAL_JUMP)  ; LAB_004f8dbb
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004f90d9
    JMP 0x004f8dbb                      ; 004f90e3
        ;   XREF to: 004f8dbb (UNCONDITIONAL_JUMP)  ; LAB_004f8dbb
    PUSH EAX                            ; 004f90e8
        ;   Label: LAB_004f90e8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f90e9
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f90ee
    ADD ESP,0x4                         ; 004f90f1
    CMP EAX,0x2                         ; 004f90f4
    JZ 0x004f8e6d                       ; 004f90f7
        ;   XREF to: 004f8e6d (CONDITIONAL_JUMP)  ; LAB_004f8e6d
    CMP EAX,ESI                         ; 004f90fd
    JZ 0x004f8e6d                       ; 004f90ff
        ;   XREF to: 004f8e6d (CONDITIONAL_JUMP)  ; LAB_004f8e6d
    MOV dword ptr [EBX + 0xbe38],ESI    ; 004f9105
    JMP 0x004f8e6d                      ; 004f910b
        ;   XREF to: 004f8e6d (UNCONDITIONAL_JUMP)  ; LAB_004f8e6d
    PUSH EAX                            ; 004f9110
        ;   Label: LAB_004f9110
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004f9111
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f9116
    ADD ESP,0x4                         ; 004f9119
    CMP EAX,0xa                         ; 004f911c
    JNZ 0x004f9134                      ; 004f911f
        ;   XREF to: 004f9134 (CONDITIONAL_JUMP)  ; LAB_004f9134
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004f9121
    JZ 0x004f9134                       ; 004f9128
        ;   XREF to: 004f9134 (CONDITIONAL_JUMP)  ; LAB_004f9134
    MOV dword ptr [EBX + 0xbe44],0x1    ; 004f912a
    MOV EAX,[0x02db87d0]                ; 004f9134 | g_LocalHeroIndex
        ;   Label: LAB_004f9134
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f9139 | g_HeroActors
    PUSH EAX                            ; 004f9140
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f9141
    CALL dword ptr [EDX + 0x15c]        ; 004f9147
    ADD ESP,0x4                         ; 004f914d
    TEST EAX,EAX                        ; 004f9150
    JNZ 0x004f8e77                      ; 004f9152
        ;   XREF to: 004f8e77 (CONDITIONAL_JUMP)  ; LAB_004f8e77
    PUSH dword ptr [EBP + 0x18]         ; 004f9158
    PUSH EBX                            ; 004f915b
    CALL core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0 ; 004f915c
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f9161
    CMP EAX,0x1                         ; 004f9164
    JC 0x004f8e77                       ; 004f9167
        ;   XREF to: 004f8e77 (CONDITIONAL_JUMP)  ; LAB_004f8e77
    JA 0x004f9197                       ; 004f916d
        ;   XREF to: 004f9197 (CONDITIONAL_JUMP)  ; LAB_004f9197
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f916f
    JMP 0x004f8e77                      ; 004f9179
        ;   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)  ; LAB_004f8e77
    MOV dword ptr [EBX + 0xbe34],0x1    ; 004f917e
        ;   Label: LAB_004f917e
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f9188
    JMP 0x004f8e77                      ; 004f9192
        ;   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)  ; LAB_004f8e77
    CMP EAX,0x2                         ; 004f9197
        ;   Label: LAB_004f9197
    JZ 0x004f917e                       ; 004f919a
        ;   XREF to: 004f917e (CONDITIONAL_JUMP)  ; LAB_004f917e
    JMP 0x004f8e77                      ; 004f919c
        ;   XREF to: 004f8e77 (UNCONDITIONAL_JUMP)  ; LAB_004f8e77
    XOR EAX,EAX                         ; 004f91a1
        ;   Label: LAB_004f91a1
    MOV dword ptr [ESP + 0x98],EAX      ; 004f91a3
    TEST ESI,ESI                        ; 004f91aa
    JNZ 0x004f931f                      ; 004f91ac
        ;   XREF to: 004f931f (CONDITIONAL_JUMP)  ; LAB_004f931f
    MOV EAX,[0x02db87d0]                ; 004f91b2 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f91b7 | g_HeroActors
    PUSH EAX                            ; 004f91be
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f91bf
    CALL dword ptr [EDX + 0xbc]         ; 004f91c5
    ADD ESP,0x4                         ; 004f91cb
    MOV dword ptr [ESP + 0x98],EAX      ; 004f91ce
    MOV EAX,[0x02db87d0]                ; 004f91d5 | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004f91da | g_HeroActors
    PUSH EAX                            ; 004f91e1
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f91e2
    CALL dword ptr [EDX + 0x15c]        ; 004f91e8
    ADD ESP,0x4                         ; 004f91ee
    TEST EAX,EAX                        ; 004f91f1
    JZ 0x004f92fe                       ; 004f91f3
        ;   XREF to: 004f92fe (CONDITIONAL_JUMP)  ; LAB_004f92fe
    CMP dword ptr [ESP + 0x98],0x0      ; 004f91f9
        ;   Label: LAB_004f91f9
    JNZ 0x004f9216                      ; 004f9201
        ;   XREF to: 004f9216 (CONDITIONAL_JUMP)  ; LAB_004f9216
    LEA EAX,[EDI + 0x20]                ; 004f9203
    PUSH EAX                            ; 004f9206
    CALL core_path.cpp_getPathMap_FUN_00548500 ; 004f9207
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 004f920c
    MOV dword ptr [ESP + 0x98],EAX      ; 004f920f
    MOV ECX,dword ptr [EBX + 0x6c]      ; 004f9216
        ;   Label: LAB_004f9216
    PUSH ECX                            ; 004f9219
    LEA EAX,[ESP + 0x74]                ; 004f921a
    PUSH EAX                            ; 004f921e
    LEA EAX,[EBX + 0x20]                ; 004f921f
    PUSH EAX                            ; 004f9222
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004f9223
    PUSH EAX                            ; 004f922a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004f922b
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004f9230
    TEST EAX,EAX                        ; 004f9233
    JZ 0x004f8f45                       ; 004f9235
        ;   XREF to: 004f8f45 (CONDITIONAL_JUMP)  ; LAB_004f8f45
    FLD float ptr [ESP + 0x74]          ; 004f923b
    FSUB float ptr [EBX + 0x34]         ; 004f923f
    SUB ESP,0x4                         ; 004f9242
    FSTP float ptr [ESP]                ; 004f9245
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f9248
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f924d
    FLD float ptr [ESP + 0xa8]          ; 004f9254
    FMUL double ptr [0x0062f7ab]        ; 004f925b | DOUBLE_0062f7ab
    ADD ESP,0x4                         ; 004f9261
    FMUL double ptr [0x0062f7b3]        ; 004f9264 | DOUBLE_0062f7b3
    FLD float ptr [ESP + 0x9c]          ; 004f926a
    FCHS                                ; 004f9271
    FSTP float ptr [ESP + 0x80]         ; 004f9273
    FST float ptr [EBX + 0xbe50]        ; 004f927a
    FCOMP float ptr [ESP + 0x80]        ; 004f9280
    FNSTSW AX                           ; 004f9287
    SAHF                                ; 004f9289
    JC 0x004f932a                       ; 004f928a
        ;   XREF to: 004f932a (CONDITIONAL_JUMP)  ; LAB_004f932a
    FLD float ptr [EBX + 0xbe50]        ; 004f9290
        ;   Label: LAB_004f9290
    FCOMP float ptr [ESP + 0x9c]        ; 004f9296
    FNSTSW AX                           ; 004f929d
    SAHF                                ; 004f929f
    JBE 0x004f92af                      ; 004f92a0
        ;   XREF to: 004f92af (CONDITIONAL_JUMP)  ; LAB_004f92af
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004f92a2
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f92a9
    FLD float ptr [ESP + 0x24]          ; 004f92af
        ;   Label: LAB_004f92af
    FCOMP double ptr [0x0062f7bb]       ; 004f92b3 | DOUBLE_0062f7bb
    FNSTSW AX                           ; 004f92b9
    SAHF                                ; 004f92bb
    JNC 0x004f933c                      ; 004f92bc
        ;   XREF to: 004f933c (CONDITIONAL_JUMP)  ; LAB_004f933c
    CMP ESI,0x1                         ; 004f92c2
    JZ 0x004f933c                       ; 004f92c5
        ;   XREF to: 004f933c (CONDITIONAL_JUMP)  ; LAB_004f933c
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f92c7
    JMP 0x004f8f45                      ; 004f92d1
        ;   XREF to: 004f8f45 (UNCONDITIONAL_JUMP)  ; LAB_004f8f45
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f92d6
        ;   Label: LAB_004f92d6
    JMP 0x004f91f9                      ; 004f92e0
        ;   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)  ; LAB_004f91f9
    MOV dword ptr [EBX + 0xbe34],0x1    ; 004f92e5
        ;   Label: LAB_004f92e5
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f92ef
    JMP 0x004f91f9                      ; 004f92f9
        ;   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)  ; LAB_004f91f9
    PUSH dword ptr [EBP + 0x18]         ; 004f92fe
        ;   Label: LAB_004f92fe
    PUSH EBX                            ; 004f9301
    CALL core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0 ; 004f9302
        ;   XREF to: 0042ede0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004f9307
    CMP EAX,0x1                         ; 004f930a
    JC 0x004f91f9                       ; 004f930d
        ;   XREF to: 004f91f9 (CONDITIONAL_JUMP)  ; LAB_004f91f9
    JBE 0x004f92d6                      ; 004f9313
        ;   XREF to: 004f92d6 (CONDITIONAL_JUMP)  ; LAB_004f92d6
    CMP EAX,0x2                         ; 004f9315
    JZ 0x004f92e5                       ; 004f9318
        ;   XREF to: 004f92e5 (CONDITIONAL_JUMP)  ; LAB_004f92e5
    JMP 0x004f91f9                      ; 004f931a
        ;   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)  ; LAB_004f91f9
    MOV dword ptr [EBX + 0x2dc4],EAX    ; 004f931f
        ;   Label: LAB_004f931f
    JMP 0x004f91f9                      ; 004f9325
        ;   XREF to: 004f91f9 (UNCONDITIONAL_JUMP)  ; LAB_004f91f9
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f932a
        ;   Label: LAB_004f932a
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004f9331
    JMP 0x004f9290                      ; 004f9337
        ;   XREF to: 004f9290 (UNCONDITIONAL_JUMP)  ; LAB_004f9290
    MOV dword ptr [EBX + 0xbe34],0x1    ; 004f933c
        ;   Label: LAB_004f933c
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004f9346
    JMP 0x004f8f45                      ; 004f9350
        ;   XREF to: 004f8f45 (UNCONDITIONAL_JUMP)  ; LAB_004f8f45
    JBE 0x004f8f75                      ; 004f9355
        ;   XREF to: 004f8f75 (CONDITIONAL_JUMP)  ; LAB_004f8f75
        ;   Label: LAB_004f9355
    FLD float ptr [ESP + 0x9c]          ; 004f935b
    MOV dword ptr [EBX + 0x2418],0x0    ; 004f9362
    FCHS                                ; 004f936c
    FSTP float ptr [EBX + 0xbe50]       ; 004f936e
    JMP 0x004f8f75                      ; 004f9374
        ;   XREF to: 004f8f75 (UNCONDITIONAL_JUMP)  ; LAB_004f8f75

