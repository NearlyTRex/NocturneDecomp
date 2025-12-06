; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_scat.cpp_FUN_005578e0()
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_scat.cpp_FUN_005571f0 at 00557663
;
; Referenced Globals:
;   double DOUBLE_006413dc = 15
;   double DOUBLE_006413e4 = 0.900000000000000
;   double DOUBLE_006413ec = 8
;   double DOUBLE_006413f4 = 0.318309886192889
;   double DOUBLE_006413fc = 4
;   double DOUBLE_00641404 = 10
;   double DOUBLE_0064140c = 3.14159265350000
;   double DOUBLE_00641414 = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_FUN_00428d80
;   core_hero.cpp_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005578e0
        ;   Label: core_scat.cpp_FUN_005578e0
    PUSH ESI                            ; 005578e1
    PUSH EDI                            ; 005578e2
    PUSH EBP                            ; 005578e3
    MOV EBP,ESP                         ; 005578e4
    SUB ESP,0x7c                        ; 005578e6
    AND ESP,0xfffffff8                  ; 005578e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005578ec
    MOV EDX,0x3e800000                  ; 005578ef
    MOV ECX,0x3f490fdb                  ; 005578f4
    MOV ESI,dword ptr [0x02db87d0]      ; 005578f9 | int g_LocalHeroIndex
    MOV EDI,dword ptr [EBX + 0x1fbd0]   ; 005578ff
    MOV dword ptr [ESP + 0x70],EDX      ; 00557905
    MOV dword ptr [ESP + 0x74],ECX      ; 00557909
    MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0] ; 0055790d | CHero *[4] g_HeroActors
    TEST EDI,EDI                        ; 00557914
    JNZ 0x0055791f                      ; 00557916 | LAB_0055791f
        ;   XREF to: 0055791f (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00557918
    POP EBP                             ; 0055791a
    POP EDI                             ; 0055791b
    POP ESI                             ; 0055791c
    POP EBX                             ; 0055791d
    RET                                 ; 0055791e
    PUSH 0x2c                           ; 0055791f
        ;   Label: LAB_0055791f
    PUSH 0x0                            ; 00557921
    LEA EAX,[EBX + 0xbe2c]              ; 00557923
    PUSH EAX                            ; 00557929
    CALL crt_memory.c_memset_FUN_005fde40 ; 0055792a | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02db87d0]                ; 0055792f | int g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 00557934
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00557937 | CHero *[4] g_HeroActors
    FLD float ptr [EDX]                 ; 0055793e
    FSUB float ptr [EAX + 0x20]         ; 00557940
    ADD ESP,0xc                         ; 00557943
    FSTP float ptr [ESP + 0x54]         ; 00557946
    FLD float ptr [EDX + 0x4]           ; 0055794a
    FSUB float ptr [EAX + 0x24]         ; 0055794d
    FSTP float ptr [ESP + 0x58]         ; 00557950
    FLD float ptr [EDX + 0x8]           ; 00557954
    FSUB float ptr [EAX + 0x28]         ; 00557957
    FSTP float ptr [ESP + 0x5c]         ; 0055795a
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 0055795e
    XOR EDI,EDI                         ; 00557964
    CMP EAX,0x2                         ; 00557966
    JNZ 0x00557c94                      ; 00557969 | LAB_00557c94
        ;   XREF to: 00557c94 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1f738]             ; 0055796f
        ;   Label: LAB_0055796f
    MOV EAX,dword ptr [EAX + 0x330]     ; 00557975
    TEST EAX,EAX                        ; 0055797b
    JZ 0x005579b3                       ; 0055797d | LAB_005579b3
        ;   XREF to: 005579b3 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x568],0x0     ; 0055797f
    JLE 0x005579b3                      ; 00557986 | LAB_005579b3
        ;   XREF to: 005579b3 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x60],0x461c3f9a ; 00557988
    LEA EAX,[ESP + 0x60]                ; 00557990
    PUSH EAX                            ; 00557994
    PUSH EBX                            ; 00557995
    CALL core_hero.cpp_FUN_004f3960     ; 00557996 | undefined core_hero.cpp_FUN_004f3960()
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055799b
    TEST EAX,EAX                        ; 0055799e
    JZ 0x005579b3                       ; 005579a0 | LAB_005579b3
        ;   XREF to: 005579b3 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x60],0x41f00000 ; 005579a2
    JGE 0x005579b3                      ; 005579aa | LAB_005579b3
        ;   XREF to: 005579b3 (CONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 005579ac
    MOV ESI,EAX                         ; 005579b1
    CMP EDI,dword ptr [EBX + 0x1fbd4]   ; 005579b3
        ;   Label: LAB_005579b3
    JZ 0x005579c5                       ; 005579b9 | LAB_005579c5
        ;   XREF to: 005579c5 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe44],0x1    ; 005579bb
    LEA EDX,[ESI + 0x20]                ; 005579c5
        ;   Label: LAB_005579c5
    LEA EAX,[EBX + 0x20]                ; 005579c8
    FLD float ptr [EDX]                 ; 005579cb
    FSUB float ptr [EAX]                ; 005579cd
    FSTP float ptr [ESP + 0x30]         ; 005579cf
    FLD float ptr [EDX + 0x4]           ; 005579d3
    FSUB float ptr [EAX + 0x4]          ; 005579d6
    FSTP float ptr [ESP + 0x34]         ; 005579d9
    FLD float ptr [EDX + 0x8]           ; 005579dd
    LEA EDX,[ESP + 0x54]                ; 005579e0
    FSUB float ptr [EAX + 0x8]          ; 005579e4
    LEA EAX,[ESP + 0x30]                ; 005579e7
    FSTP float ptr [ESP + 0x38]         ; 005579eb
    CMP EDX,EAX                         ; 005579ef
    JZ 0x00557a0b                       ; 005579f1 | LAB_00557a0b
        ;   XREF to: 00557a0b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x30]      ; 005579f3
    MOV dword ptr [ESP + 0x54],EAX      ; 005579f7
    MOV EAX,dword ptr [ESP + 0x34]      ; 005579fb
    MOV dword ptr [ESP + 0x58],EAX      ; 005579ff
    MOV EAX,dword ptr [ESP + 0x38]      ; 00557a03
    MOV dword ptr [ESP + 0x5c],EAX      ; 00557a07
    FLD float ptr [ESP + 0x58]          ; 00557a0b
        ;   Label: LAB_00557a0b
    FMUL ST0                            ; 00557a0f
    FLD float ptr [ESP + 0x54]          ; 00557a11
    FMUL ST0                            ; 00557a15
    FADDP                               ; 00557a17
    FLD float ptr [ESP + 0x5c]          ; 00557a19
    FMUL ST0                            ; 00557a1d
    FADDP                               ; 00557a1f
    FSQRT                               ; 00557a21
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 00557a23
    FSTP float ptr [ESP + 0x14]         ; 00557a29
    CMP EAX,0x3                         ; 00557a2d
    JNZ 0x00557a38                      ; 00557a30 | LAB_00557a38
        ;   XREF to: 00557a38 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00557a32
    MOV dword ptr [ESP + 0x14],EDX      ; 00557a34
    MOV ECX,dword ptr [EBX + 0x1fbe8]   ; 00557a38
        ;   Label: LAB_00557a38
    TEST ECX,ECX                        ; 00557a3e
    JZ 0x00557b63                       ; 00557a40 | LAB_00557b63
        ;   XREF to: 00557b63 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00557a46
    MOV EDX,dword ptr [ECX + 0x2e0]     ; 00557a48
    MOV dword ptr [ESP + 0x64],EAX      ; 00557a4e
    CMP EDX,0x8                         ; 00557a52
    JNZ 0x00557ca2                      ; 00557a55 | LAB_00557ca2
        ;   XREF to: 00557ca2 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 00557a5b
    FCOMP double ptr [0x006413ec]       ; 00557a5f | double DOUBLE_006413ec
    FNSTSW AX                           ; 00557a65
    SAHF                                ; 00557a67
    JNC 0x00557a9f                      ; 00557a68 | LAB_00557a9f
        ;   XREF to: 00557a9f (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x158]               ; 00557a6a
    PUSH EAX                            ; 00557a70
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00557a71 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00557a76
    ADD ESP,0x4                         ; 00557a79
    CMP EAX,0x7                         ; 00557a7c
    JNZ 0x00557a94                      ; 00557a7f | LAB_00557a94
        ;   XREF to: 00557a94 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 00557a81
    JZ 0x00557a94                       ; 00557a88 | LAB_00557a94
        ;   XREF to: 00557a94 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe38],0x1    ; 00557a8a
    CMP dword ptr [ESP + 0x64],0x0      ; 00557a94
        ;   Label: LAB_00557a94
    JZ 0x00557b63                       ; 00557a99 | LAB_00557b63
        ;   XREF to: 00557b63 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00557a9f
        ;   Label: LAB_00557a9f
    MOV EAX,dword ptr [ESI + 0x154]     ; 00557aa0
    CALL dword ptr [EAX + 0xbc]         ; 00557aa6
    ADD ESP,0x4                         ; 00557aac
    MOV EDX,EAX                         ; 00557aaf
    TEST EAX,EAX                        ; 00557ab1
    JNZ 0x00557ac3                      ; 00557ab3 | LAB_00557ac3
        ;   XREF to: 00557ac3 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + 0x20]                ; 00557ab5
    PUSH EAX                            ; 00557ab8
    CALL core_path.cpp_FUN_00548500     ; 00557ab9 | undefined core_path.cpp_FUN_00548500()
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00557abe
    MOV EDX,EAX                         ; 00557ac1
    MOV ECX,dword ptr [EBX + 0x6c]      ; 00557ac3
        ;   Label: LAB_00557ac3
    PUSH ECX                            ; 00557ac6
    LEA EAX,[ESP + 0x40]                ; 00557ac7
    PUSH EAX                            ; 00557acb
    LEA EAX,[EBX + 0x20]                ; 00557acc
    PUSH EAX                            ; 00557acf
    PUSH EDX                            ; 00557ad0
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 00557ad1 | int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00557ad6
    TEST EAX,EAX                        ; 00557ad9
    JZ 0x00557b63                       ; 00557adb | LAB_00557b63
        ;   XREF to: 00557b63 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x40]          ; 00557ae1
    FSUB float ptr [EBX + 0x34]         ; 00557ae5
    SUB ESP,0x4                         ; 00557ae8
    FSTP float ptr [ESP]                ; 00557aeb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00557aee | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 00557af3
    FLD float ptr [ESP + 0x7c]          ; 00557af7
    FMUL double ptr [0x006413f4]        ; 00557afb | double DOUBLE_006413f4
    ADD ESP,0x4                         ; 00557b01
    FMUL double ptr [0x006413fc]        ; 00557b04 | double DOUBLE_006413fc
    FLD float ptr [ESP + 0x70]          ; 00557b0a
    FCHS                                ; 00557b0e
    FSTP float ptr [ESP + 0x6c]         ; 00557b10
    FST float ptr [EBX + 0xbe50]        ; 00557b14
    FCOMP float ptr [ESP + 0x6c]        ; 00557b1a
    FNSTSW AX                           ; 00557b1e
    SAHF                                ; 00557b20
    JNC 0x00557b2d                      ; 00557b21 | LAB_00557b2d
        ;   XREF to: 00557b2d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00557b23
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00557b27
    FLD float ptr [EBX + 0xbe50]        ; 00557b2d
        ;   Label: LAB_00557b2d
    FCOMP float ptr [ESP + 0x70]        ; 00557b33
    FNSTSW AX                           ; 00557b37
    SAHF                                ; 00557b39
    JBE 0x00557b46                      ; 00557b3a | LAB_00557b46
        ;   XREF to: 00557b46 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x70]      ; 00557b3c
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00557b40
    FLD float ptr [ESP + 0x14]          ; 00557b46
        ;   Label: LAB_00557b46
    FCOMP double ptr [0x00641404]       ; 00557b4a | double DOUBLE_00641404
    FNSTSW AX                           ; 00557b50
    SAHF                                ; 00557b52
    JNC 0x00557d0c                      ; 00557b53 | LAB_00557d0c
        ;   XREF to: 00557d0c (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 00557b59
        ;   Label: LAB_00557b59
    LEA EAX,[EBX + 0x20]                ; 00557b63
        ;   Label: LAB_00557b63
    FLD float ptr [ESI + 0x20]          ; 00557b66
    FSUB float ptr [EAX]                ; 00557b69
    FSTP float ptr [ESP + 0x18]         ; 00557b6b
    FLD float ptr [ESI + 0x24]          ; 00557b6f
    FSUB float ptr [EAX + 0x4]          ; 00557b72
    LEA EDX,[ESP + 0x54]                ; 00557b75
    FSTP float ptr [ESP + 0x1c]         ; 00557b79
    FLD float ptr [ESI + 0x28]          ; 00557b7d
    FSUB float ptr [EAX + 0x8]          ; 00557b80
    LEA EAX,[ESP + 0x18]                ; 00557b83
    FSTP float ptr [ESP + 0x20]         ; 00557b87
    CMP EDX,EAX                         ; 00557b8b
    JZ 0x00557ba7                       ; 00557b8d | LAB_00557ba7
        ;   XREF to: 00557ba7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00557b8f
    MOV dword ptr [ESP + 0x54],EAX      ; 00557b93
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00557b97
    MOV dword ptr [ESP + 0x58],EAX      ; 00557b9b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00557b9f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00557ba3
    LEA EAX,[ESP + 0x54]                ; 00557ba7
        ;   Label: LAB_00557ba7
    PUSH EAX                            ; 00557bab
    LEA EAX,[ESP + 0x28]                ; 00557bac
    PUSH EAX                            ; 00557bb0
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00557bb1 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 00557bb6
    LEA EAX,[ESP + 0x5c]                ; 00557bb8
    ADD ESP,0x8                         ; 00557bbc
    CMP EAX,ESI                         ; 00557bbf
    JZ 0x00557bd7                       ; 00557bc1 | LAB_00557bd7
        ;   XREF to: 00557bd7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00557bc3
    MOV dword ptr [ESP + 0x54],EAX      ; 00557bc5
    MOV EAX,dword ptr [ESI + 0x4]       ; 00557bc9
    MOV dword ptr [ESP + 0x58],EAX      ; 00557bcc
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557bd0
    MOV dword ptr [ESP + 0x5c],EAX      ; 00557bd3
    FLD float ptr [ESP + 0x58]          ; 00557bd7
        ;   Label: LAB_00557bd7
    FSUB float ptr [EBX + 0x34]         ; 00557bdb
    SUB ESP,0x4                         ; 00557bde
    FSTP float ptr [ESP]                ; 00557be1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00557be4 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x7c],EAX      ; 00557be9
    FLD float ptr [ESP + 0x7c]          ; 00557bed
    ADD ESP,0x4                         ; 00557bf1
    FST float ptr [ESP + 0x4c]          ; 00557bf4
    FCOMP float ptr [ESP + 0x74]        ; 00557bf8
    FNSTSW AX                           ; 00557bfc
    SAHF                                ; 00557bfe
    JBE 0x00557c09                      ; 00557bff | LAB_00557c09
        ;   XREF to: 00557c09 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x74]      ; 00557c01
    MOV dword ptr [ESP + 0x4c],EAX      ; 00557c05
    FLD float ptr [ESP + 0x4c]          ; 00557c09
        ;   Label: LAB_00557c09
    FLD float ptr [ESP + 0x74]          ; 00557c0d
    FCHS                                ; 00557c11
    FSTP float ptr [ESP + 0x68]         ; 00557c13
    FCOMP float ptr [ESP + 0x68]        ; 00557c17
    FNSTSW AX                           ; 00557c1b
    SAHF                                ; 00557c1d
    JNC 0x00557c28                      ; 00557c1e | LAB_00557c28
        ;   XREF to: 00557c28 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x68]      ; 00557c20
    MOV dword ptr [ESP + 0x4c],EAX      ; 00557c24
    FLD float ptr [ESP + 0x4c]          ; 00557c28
        ;   Label: LAB_00557c28
    FLD float ptr [EBP + 0x18]          ; 00557c2c
    FXCH                                ; 00557c2f
    FSUB float ptr [EBX + 0x1fbdc]      ; 00557c31
    FXCH                                ; 00557c37
    FMUL double ptr [0x0064140c]        ; 00557c39 | double DOUBLE_0064140c
    FXCH                                ; 00557c3f
    FST float ptr [ESP + 0x10]          ; 00557c41
    FXCH                                ; 00557c45
    FSTP double ptr [ESP]               ; 00557c47
    FCOMP double ptr [ESP]              ; 00557c4a
    FNSTSW AX                           ; 00557c4d
    SAHF                                ; 00557c4f
    JBE 0x00557c59                      ; 00557c50 | LAB_00557c59
        ;   XREF to: 00557c59 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 00557c52
    FSTP float ptr [ESP + 0x10]         ; 00557c55
    FLD float ptr [EBP + 0x18]          ; 00557c59
        ;   Label: LAB_00557c59
    FMUL double ptr [0x00641414]        ; 00557c5c | double DOUBLE_00641414
    FLD float ptr [ESP + 0x10]          ; 00557c62
    FXCH                                ; 00557c66
    FSTP double ptr [ESP + 0x8]         ; 00557c68
    FCOMP double ptr [ESP + 0x8]        ; 00557c6c
    FNSTSW AX                           ; 00557c70
    SAHF                                ; 00557c72
    JNC 0x00557c7d                      ; 00557c73 | LAB_00557c7d
        ;   XREF to: 00557c7d (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x8]          ; 00557c75
    FSTP float ptr [ESP + 0x10]         ; 00557c79
    FLD float ptr [EBX + 0x1fbdc]       ; 00557c7d
        ;   Label: LAB_00557c7d
    FADD float ptr [ESP + 0x10]         ; 00557c83
    FSTP float ptr [EBX + 0x1fbdc]      ; 00557c87
    MOV ESP,EBP                         ; 00557c8d
    POP EBP                             ; 00557c8f
    POP EDI                             ; 00557c90
    POP ESI                             ; 00557c91
    POP EBX                             ; 00557c92
    RET                                 ; 00557c93
    CMP EAX,0x3                         ; 00557c94
        ;   Label: LAB_00557c94
    JZ 0x0055796f                       ; 00557c97 | LAB_0055796f
        ;   XREF to: 0055796f (CONDITIONAL_JUMP)
    JMP 0x005579b3                      ; 00557c9d | LAB_005579b3
        ;   XREF to: 005579b3 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 00557ca2
        ;   Label: LAB_00557ca2
    FCOMP double ptr [0x006413dc]       ; 00557ca6 | double DOUBLE_006413dc
    FNSTSW AX                           ; 00557cac
    SAHF                                ; 00557cae
    JNC 0x00557a9f                      ; 00557caf | LAB_00557a9f
        ;   XREF to: 00557a9f (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 00557cb5
    JZ 0x00557cf3                       ; 00557cbc | LAB_00557cf3
        ;   XREF to: 00557cf3 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00557cbe
    JZ 0x00557cf3                       ; 00557cc0 | LAB_00557cf3
        ;   XREF to: 00557cf3 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2a90]        ; 00557cc2
    FCOMP double ptr [0x006413e4]       ; 00557cc8 | double DOUBLE_006413e4
    FNSTSW AX                           ; 00557cce
    SAHF                                ; 00557cd0
    JBE 0x00557ce6                      ; 00557cd1 | LAB_00557ce6
        ;   XREF to: 00557ce6 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x1fbfc],0x0   ; 00557cd3
    JZ 0x00557ce6                       ; 00557cda | LAB_00557ce6
        ;   XREF to: 00557ce6 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe38],0x1    ; 00557cdc
    LEA EAX,[ESI + 0x20]                ; 00557ce6
        ;   Label: LAB_00557ce6
    PUSH EAX                            ; 00557ce9
    PUSH EBX                            ; 00557cea
    CALL core_charactr.cpp_CCharacter_FUN_00428d80 ; 00557ceb | void core_charactr.cpp_CCharacter_FUN_00428d80(CCharacter * this_ptr)
        ;   XREF to: 00428d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00557cf0
    MOV dword ptr [EBX + 0xbe34],0x0    ; 00557cf3
        ;   Label: LAB_00557cf3
    MOV dword ptr [EBX + 0xbe2c],0x0    ; 00557cfd
    JMP 0x00557a94                      ; 00557d07 | LAB_00557a94
        ;   XREF to: 00557a94 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0xbe34],0x1    ; 00557d0c
        ;   Label: LAB_00557d0c
    JMP 0x00557b59                      ; 00557d16 | LAB_00557b59
        ;   XREF to: 00557b59 (UNCONDITIONAL_JUMP)

