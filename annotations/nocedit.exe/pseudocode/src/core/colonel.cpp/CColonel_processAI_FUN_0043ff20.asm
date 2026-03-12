; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043ff20(CColonel *this_ptr,float delta_time)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xac]:4  local_ac
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; CVector3f        Stack[-0x84]:12  local_84
; CVector3f        Stack[-0x78]:12  local_78
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; float            Stack[-0x44]:4  local_44
; CVector3f        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fa7b
;
; Referenced Globals:
;   float FLOAT_00618cf1 = 20
;   double DOUBLE_00618cf9 = 20
;   double DOUBLE_00618d01 = 6
;   double DOUBLE_00618d09 = 0.318309886192889
;   double DOUBLE_00618d11 = 4
;   double DOUBLE_00618d19 = 10
;   double DOUBLE_00618d21 = -0.25
;   double DOUBLE_00618d29 = 0.25
;   double DOUBLE_00618d31 = 3.14159265350000
;   double DOUBLE_00618d39 = -3.14159265350000
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_getPathMap_FUN_00548500
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ff20
        ;   Label: core_colonel.cpp_CColonel_processAI_FUN_0043ff20
    PUSH ESI                            ; 0043ff21
    PUSH EDI                            ; 0043ff22
    PUSH EBP                            ; 0043ff23
    MOV EBP,ESP                         ; 0043ff24
    SUB ESP,0x98                        ; 0043ff26
    AND ESP,0xfffffff8                  ; 0043ff2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0043ff2f
    MOV EDX,0x3e800000                  ; 0043ff32
    MOV ECX,0x3f490fdb                  ; 0043ff37
    PUSH 0x2c                           ; 0043ff3c
    XOR ESI,ESI                         ; 0043ff3e
    MOV EDI,dword ptr [0x02db87d0]      ; 0043ff40 | g_LocalHeroIndex
    PUSH ESI                            ; 0043ff46
    LEA EAX,[EBX + 0xbe2c]              ; 0043ff47
    MOV dword ptr [ESP + 0x94],EDX      ; 0043ff4d
    PUSH EAX                            ; 0043ff54
    MOV dword ptr [ESP + 0x94],ECX      ; 0043ff55
    MOV EDI,dword ptr [EDI*0x4 + 0x2db87c0] ; 0043ff5c | g_HeroActors
    CALL crt_memory.c_memset_FUN_005fde40 ; 0043ff63
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EAX,dword ptr [EBX + 0x1fbd0]   ; 0043ff68
    ADD ESP,0xc                         ; 0043ff6e
    TEST EAX,EAX                        ; 0043ff71
    JZ 0x004402b6                       ; 0043ff73
        ;   XREF to: 004402b6 (CONDITIONAL_JUMP)  ; LAB_004402b6
    MOV EAX,[0x02db87d0]                ; 0043ff79 | g_LocalHeroIndex
    LEA EDX,[EBX + 0x20]                ; 0043ff7e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 0043ff81 | g_HeroActors
    FLD float ptr [EDX]                 ; 0043ff88
    FSUB float ptr [EAX + 0x20]         ; 0043ff8a
    FSTP float ptr [ESP + 0x54]         ; 0043ff8d
    FLD float ptr [EDX + 0x4]           ; 0043ff91
    FSUB float ptr [EAX + 0x24]         ; 0043ff94
    FST float ptr [ESP + 0x58]          ; 0043ff97
    FMUL float ptr [ESP + 0x58]         ; 0043ff9b
    FLD float ptr [ESP + 0x54]          ; 0043ff9f
    FMUL ST0                            ; 0043ffa3
    FLD float ptr [EDX + 0x8]           ; 0043ffa5
    FSUB float ptr [EAX + 0x28]         ; 0043ffa8
    FXCH                                ; 0043ffab
    FADDP ST2,ST0                       ; 0043ffad
    FST float ptr [ESP + 0x5c]          ; 0043ffaf
    FMUL float ptr [ESP + 0x5c]         ; 0043ffb3
    FADDP                               ; 0043ffb7
    FSQRT                               ; 0043ffb9
    MOV EDX,dword ptr [EBX + 0x1fbd0]   ; 0043ffbb
    FSTP float ptr [ESP + 0x7c]         ; 0043ffc1
    CMP EDX,0x3                         ; 0043ffc5
    JNZ 0x004402bd                      ; 0043ffc8
        ;   XREF to: 004402bd (CONDITIONAL_JUMP)  ; LAB_004402bd
    MOV ECX,dword ptr [EBX + 0x1fbd0]   ; 0043ffce
        ;   Label: LAB_0043ffce
    CMP ECX,0x2                         ; 0043ffd4
    JNZ 0x004402d5                      ; 0043ffd7
        ;   XREF to: 004402d5 (CONDITIONAL_JUMP)  ; LAB_004402d5
    LEA EAX,[ESP + 0x20]                ; 0043ffdd
        ;   Label: LAB_0043ffdd
    PUSH EAX                            ; 0043ffe1
    PUSH EBX                            ; 0043ffe2
    CALL core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960 ; 0043ffe3
        ;   XREF to: 004f3960 (UNCONDITIONAL_CALL)  ; CEnemy * core_hero.cpp_CHero_findNearestEnemy_FUN_004f3960(CHero * this_ptr, float * out_distance)
    MOV EDX,EAX                         ; 0043ffe8
    ADD ESP,0x8                         ; 0043ffea
    TEST EAX,EAX                        ; 0043ffed
    JZ 0x00440007                       ; 0043ffef
        ;   XREF to: 00440007 (CONDITIONAL_JUMP)  ; LAB_00440007
    FLD float ptr [ESP + 0x20]          ; 0043fff1
    FCOMP double ptr [0x00618cf9]       ; 0043fff5 | DOUBLE_00618cf9
    FNSTSW AX                           ; 0043fffb
    SAHF                                ; 0043fffd
    JNC 0x00440007                      ; 0043fffe
        ;   XREF to: 00440007 (CONDITIONAL_JUMP)  ; LAB_00440007
    MOV ESI,0x1                         ; 00440000
    MOV EDI,EDX                         ; 00440005
    LEA EDX,[EDI + 0x20]                ; 00440007
        ;   Label: LAB_00440007
    LEA EAX,[EBX + 0x20]                ; 0044000a
    FLD float ptr [EDX]                 ; 0044000d
    FSUB float ptr [EAX]                ; 0044000f
    FSTP float ptr [ESP + 0x48]         ; 00440011
    FLD float ptr [EDX + 0x4]           ; 00440015
    FSUB float ptr [EAX + 0x4]          ; 00440018
    FSTP float ptr [ESP + 0x4c]         ; 0044001b
    FLD float ptr [EDX + 0x8]           ; 0044001f
    LEA EDX,[ESP + 0x54]                ; 00440022
    FSUB float ptr [EAX + 0x8]          ; 00440026
    LEA EAX,[ESP + 0x48]                ; 00440029
    FSTP float ptr [ESP + 0x50]         ; 0044002d
    CMP EDX,EAX                         ; 00440031
    JZ 0x0044004d                       ; 00440033
        ;   XREF to: 0044004d (CONDITIONAL_JUMP)  ; LAB_0044004d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00440035
    MOV dword ptr [ESP + 0x54],EAX      ; 00440039
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044003d
    MOV dword ptr [ESP + 0x58],EAX      ; 00440041
    MOV EAX,dword ptr [ESP + 0x50]      ; 00440045
    MOV dword ptr [ESP + 0x5c],EAX      ; 00440049
    FLD float ptr [ESP + 0x58]          ; 0044004d
        ;   Label: LAB_0044004d
    FMUL ST0                            ; 00440051
    FLD float ptr [ESP + 0x54]          ; 00440053
    FMUL ST0                            ; 00440057
    FADDP                               ; 00440059
    FLD float ptr [ESP + 0x5c]          ; 0044005b
    FMUL ST0                            ; 0044005f
    FADDP                               ; 00440061
    FSQRT                               ; 00440063
    FSTP float ptr [ESP + 0x78]         ; 00440065
    MOV EAX,dword ptr [ESP + 0x78]      ; 00440069
    FLD float ptr [ESP + 0x78]          ; 0044006d
    MOV dword ptr [ESP + 0x18],EAX      ; 00440071
    FCOMP double ptr [0x00618d01]       ; 00440075 | DOUBLE_00618d01
    FNSTSW AX                           ; 0044007b
    SAHF                                ; 0044007d
    JNC 0x00440319                      ; 0044007e
        ;   XREF to: 00440319 (CONDITIONAL_JUMP)  ; LAB_00440319
    LEA EAX,[EBX + 0x158]               ; 00440084
    CMP ESI,0x1                         ; 0044008a
    JNZ 0x0044030b                      ; 0044008d
        ;   XREF to: 0044030b (CONDITIONAL_JUMP)  ; LAB_0044030b
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 00440093
    JNZ 0x004402e3                      ; 0044009a
        ;   XREF to: 004402e3 (CONDITIONAL_JUMP)  ; LAB_004402e3
    MOV dword ptr [EBX + 0xbe44],ESI    ; 004400a0
    CMP ESI,0x1                         ; 004400a6
        ;   Label: LAB_004400a6
    JNZ 0x00440174                      ; 004400a9
        ;   XREF to: 00440174 (CONDITIONAL_JUMP)  ; LAB_00440174
    LEA EAX,[ESP + 0x54]                ; 004400af
    PUSH EAX                            ; 004400b3
    LEA EAX,[ESP + 0x70]                ; 004400b4
    PUSH EAX                            ; 004400b8
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004400b9
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004400be
    ADD ESP,0x8                         ; 004400c1
    FSUB float ptr [EBX + 0x34]         ; 004400c4
    SUB ESP,0x4                         ; 004400c7
    FSTP float ptr [ESP]                ; 004400ca
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004400cd
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 004400d2
    FLD float ptr [ESP + 0x98]          ; 004400d9
    FMUL double ptr [0x00618d09]        ; 004400e0 | DOUBLE_00618d09
    ADD ESP,0x4                         ; 004400e6
    FMUL double ptr [0x00618d11]        ; 004400e9 | DOUBLE_00618d11
    FLD float ptr [ESP + 0x8c]          ; 004400ef
    FCHS                                ; 004400f6
    FSTP float ptr [ESP + 0x90]         ; 004400f8
    FST float ptr [EBX + 0xbe50]        ; 004400ff
    FCOMP float ptr [ESP + 0x90]        ; 00440105
    FNSTSW AX                           ; 0044010c
    SAHF                                ; 0044010e
    JNC 0x0044011e                      ; 0044010f
        ;   XREF to: 0044011e (CONDITIONAL_JUMP)  ; LAB_0044011e
    MOV EAX,dword ptr [ESP + 0x90]      ; 00440111
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00440118
    FLD float ptr [EBX + 0xbe50]        ; 0044011e
        ;   Label: LAB_0044011e
    FCOMP float ptr [ESP + 0x8c]        ; 00440124
    FNSTSW AX                           ; 0044012b
    SAHF                                ; 0044012d
    JBE 0x0044013d                      ; 0044012e
        ;   XREF to: 0044013d (CONDITIONAL_JUMP)  ; LAB_0044013d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00440130
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00440137
    FLD float ptr [EBX + 0xbe50]        ; 0044013d
        ;   Label: LAB_0044013d
    FST double ptr [ESP + 0x10]         ; 00440143
    FCOMP double ptr [0x00618d21]       ; 00440147 | DOUBLE_00618d21
    FNSTSW AX                           ; 0044014d
    SAHF                                ; 0044014f
    JBE 0x00440174                      ; 00440150
        ;   XREF to: 00440174 (CONDITIONAL_JUMP)  ; LAB_00440174
    FLD double ptr [ESP + 0x10]         ; 00440152
    FCOMP double ptr [0x00618d29]       ; 00440156 | DOUBLE_00618d29
    FNSTSW AX                           ; 0044015c
    SAHF                                ; 0044015e
    JNC 0x00440174                      ; 0044015f
        ;   XREF to: 00440174 (CONDITIONAL_JUMP)  ; LAB_00440174
    CMP dword ptr [EBX + 0xbe38],0x0    ; 00440161
    JZ 0x00440174                       ; 00440168
        ;   XREF to: 00440174 (CONDITIONAL_JUMP)  ; LAB_00440174
    MOV dword ptr [EBX + 0xbe50],0x0    ; 0044016a
    LEA EAX,[EBX + 0x20]                ; 00440174
        ;   Label: LAB_00440174
    FLD float ptr [EDI + 0x20]          ; 00440177
    FSUB float ptr [EAX]                ; 0044017a
    FSTP float ptr [ESP + 0x30]         ; 0044017c
    FLD float ptr [EDI + 0x24]          ; 00440180
    FSUB float ptr [EAX + 0x4]          ; 00440183
    LEA EDX,[ESP + 0x54]                ; 00440186
    FSTP float ptr [ESP + 0x34]         ; 0044018a
    FLD float ptr [EDI + 0x28]          ; 0044018e
    FSUB float ptr [EAX + 0x8]          ; 00440191
    LEA EAX,[ESP + 0x30]                ; 00440194
    FSTP float ptr [ESP + 0x38]         ; 00440198
    CMP EDX,EAX                         ; 0044019c
    JZ 0x004401b8                       ; 0044019e
        ;   XREF to: 004401b8 (CONDITIONAL_JUMP)  ; LAB_004401b8
    MOV EAX,dword ptr [ESP + 0x30]      ; 004401a0
    MOV dword ptr [ESP + 0x54],EAX      ; 004401a4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004401a8
    MOV dword ptr [ESP + 0x58],EAX      ; 004401ac
    MOV EAX,dword ptr [ESP + 0x38]      ; 004401b0
    MOV dword ptr [ESP + 0x5c],EAX      ; 004401b4
    LEA EAX,[ESP + 0x54]                ; 004401b8
        ;   Label: LAB_004401b8
    PUSH EAX                            ; 004401bc
    LEA EAX,[ESP + 0x40]                ; 004401bd
    PUSH EAX                            ; 004401c1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004401c2
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004401c7
    LEA EAX,[ESP + 0x5c]                ; 004401c9
    ADD ESP,0x8                         ; 004401cd
    CMP EAX,EDX                         ; 004401d0
    JZ 0x004401e8                       ; 004401d2
        ;   XREF to: 004401e8 (CONDITIONAL_JUMP)  ; LAB_004401e8
    MOV EAX,dword ptr [EDX]             ; 004401d4
    MOV dword ptr [ESP + 0x54],EAX      ; 004401d6
    MOV EAX,dword ptr [EDX + 0x4]       ; 004401da
    MOV dword ptr [ESP + 0x58],EAX      ; 004401dd
    MOV EAX,dword ptr [EDX + 0x8]       ; 004401e1
    MOV dword ptr [ESP + 0x5c],EAX      ; 004401e4
    FLD float ptr [ESP + 0x58]          ; 004401e8
        ;   Label: LAB_004401e8
    FSUB float ptr [EBX + 0x34]         ; 004401ec
    SUB ESP,0x4                         ; 004401ef
    FSTP float ptr [ESP]                ; 004401f2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004401f5
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 004401fa
    FLD float ptr [ESP + 0x98]          ; 00440201
    ADD ESP,0x4                         ; 00440208
    FST float ptr [ESP + 0x64]          ; 0044020b
    FCOMP float ptr [ESP + 0x88]        ; 0044020f
    FNSTSW AX                           ; 00440216
    SAHF                                ; 00440218
    JBE 0x00440226                      ; 00440219
        ;   XREF to: 00440226 (CONDITIONAL_JUMP)  ; LAB_00440226
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044021b
    MOV dword ptr [ESP + 0x64],EAX      ; 00440222
    FLD float ptr [ESP + 0x64]          ; 00440226
        ;   Label: LAB_00440226
    FLD float ptr [ESP + 0x88]          ; 0044022a
    FCHS                                ; 00440231
    FSTP float ptr [ESP + 0x84]         ; 00440233
    FCOMP float ptr [ESP + 0x84]        ; 0044023a
    FNSTSW AX                           ; 00440241
    SAHF                                ; 00440243
    JNC 0x00440251                      ; 00440244
        ;   XREF to: 00440251 (CONDITIONAL_JUMP)  ; LAB_00440251
    MOV EAX,dword ptr [ESP + 0x84]      ; 00440246
    MOV dword ptr [ESP + 0x64],EAX      ; 0044024d
    FLD float ptr [ESP + 0x64]          ; 00440251
        ;   Label: LAB_00440251
    FLD float ptr [EBP + 0x18]          ; 00440255
    FXCH                                ; 00440258
    FSUB float ptr [EBX + 0x1fbe0]      ; 0044025a
    FXCH                                ; 00440260
    FMUL double ptr [0x00618d31]        ; 00440262 | DOUBLE_00618d31
    FXCH                                ; 00440268
    FST float ptr [ESP + 0x1c]          ; 0044026a
    FXCH                                ; 0044026e
    FSTP double ptr [ESP]               ; 00440270
    FCOMP double ptr [ESP]              ; 00440273
    FNSTSW AX                           ; 00440276
    SAHF                                ; 00440278
    JBE 0x00440282                      ; 00440279
        ;   XREF to: 00440282 (CONDITIONAL_JUMP)  ; LAB_00440282
    FLD double ptr [ESP]                ; 0044027b
    FSTP float ptr [ESP + 0x1c]         ; 0044027e
    FLD float ptr [EBP + 0x18]          ; 00440282
        ;   Label: LAB_00440282
    FMUL double ptr [0x00618d39]        ; 00440285 | DOUBLE_00618d39
    FLD float ptr [ESP + 0x1c]          ; 0044028b
    FXCH                                ; 0044028f
    FSTP double ptr [ESP + 0x8]         ; 00440291
    FCOMP double ptr [ESP + 0x8]        ; 00440295
    FNSTSW AX                           ; 00440299
    SAHF                                ; 0044029b
    JNC 0x004402a6                      ; 0044029c
        ;   XREF to: 004402a6 (CONDITIONAL_JUMP)  ; LAB_004402a6
    FLD double ptr [ESP + 0x8]          ; 0044029e
    FSTP float ptr [ESP + 0x1c]         ; 004402a2
    FLD float ptr [EBX + 0x1fbe0]       ; 004402a6
        ;   Label: LAB_004402a6
    FADD float ptr [ESP + 0x1c]         ; 004402ac
    FSTP float ptr [EBX + 0x1fbe0]      ; 004402b0
    MOV ESP,EBP                         ; 004402b6
        ;   Label: LAB_004402b6
    POP EBP                             ; 004402b8
    POP EDI                             ; 004402b9
    POP ESI                             ; 004402ba
    POP EBX                             ; 004402bb
    RET                                 ; 004402bc
    FLD float ptr [ESP + 0x7c]          ; 004402bd
        ;   Label: LAB_004402bd
    FCOMP float ptr [0x00618cf1]        ; 004402c1 | FLOAT_00618cf1
    FNSTSW AX                           ; 004402c7
    SAHF                                ; 004402c9
    JC 0x0043ffce                       ; 004402ca
        ;   XREF to: 0043ffce (CONDITIONAL_JUMP)  ; LAB_0043ffce
    JMP 0x00440007                      ; 004402d0
        ;   XREF to: 00440007 (UNCONDITIONAL_JUMP)  ; LAB_00440007
    CMP ECX,0x3                         ; 004402d5
        ;   Label: LAB_004402d5
    JZ 0x0043ffdd                       ; 004402d8
        ;   XREF to: 0043ffdd (CONDITIONAL_JUMP)  ; LAB_0043ffdd
    JMP 0x00440007                      ; 004402de
        ;   XREF to: 00440007 (UNCONDITIONAL_JUMP)  ; LAB_00440007
    PUSH EAX                            ; 004402e3
        ;   Label: LAB_004402e3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004402e4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004402e9
    ADD ESP,0x4                         ; 004402ec
    CMP EAX,0x2                         ; 004402ef
    JZ 0x004400a6                       ; 004402f2
        ;   XREF to: 004400a6 (CONDITIONAL_JUMP)  ; LAB_004400a6
    CMP EAX,ESI                         ; 004402f8
    JZ 0x004400a6                       ; 004402fa
        ;   XREF to: 004400a6 (CONDITIONAL_JUMP)  ; LAB_004400a6
    MOV dword ptr [EBX + 0xbe38],ESI    ; 00440300
    JMP 0x004400a6                      ; 00440306
        ;   XREF to: 004400a6 (UNCONDITIONAL_JUMP)  ; LAB_004400a6
    PUSH EAX                            ; 0044030b
        ;   Label: LAB_0044030b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0044030c
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00440311
    JMP 0x004400a6                      ; 00440314
        ;   XREF to: 004400a6 (UNCONDITIONAL_JUMP)  ; LAB_004400a6
    XOR EAX,EAX                         ; 00440319
        ;   Label: LAB_00440319
    TEST ESI,ESI                        ; 0044031b
    JNZ 0x0044033b                      ; 0044031d
        ;   XREF to: 0044033b (CONDITIONAL_JUMP)  ; LAB_0044033b
    MOV EAX,[0x02db87d0]                ; 0044031f | g_LocalHeroIndex
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00440324 | g_HeroActors
    PUSH EAX                            ; 0044032b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0044032c
    CALL dword ptr [EDX + 0xbc]         ; 00440332
    ADD ESP,0x4                         ; 00440338
    TEST EAX,EAX                        ; 0044033b
        ;   Label: LAB_0044033b
    JNZ 0x0044034b                      ; 0044033d
        ;   XREF to: 0044034b (CONDITIONAL_JUMP)  ; LAB_0044034b
    LEA EAX,[EDI + 0x20]                ; 0044033f
    PUSH EAX                            ; 00440342
    CALL core_path.cpp_getPathMap_FUN_00548500 ; 00440343
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 00440348
    MOV EDX,dword ptr [EBX + 0x6c]      ; 0044034b
        ;   Label: LAB_0044034b
    PUSH EDX                            ; 0044034e
    LEA EDX,[ESP + 0x28]                ; 0044034f
    PUSH EDX                            ; 00440353
    LEA EDX,[EBX + 0x20]                ; 00440354
    PUSH EDX                            ; 00440357
    PUSH EAX                            ; 00440358
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 00440359
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0044035e
    TEST EAX,EAX                        ; 00440361
    JZ 0x00440174                       ; 00440363
        ;   XREF to: 00440174 (CONDITIONAL_JUMP)  ; LAB_00440174
    FLD float ptr [ESP + 0x28]          ; 00440369
    FSUB float ptr [EBX + 0x34]         ; 0044036d
    SUB ESP,0x4                         ; 00440370
    FSTP float ptr [ESP]                ; 00440373
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00440376
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x98],EAX      ; 0044037b
    FLD float ptr [ESP + 0x98]          ; 00440382
    FMUL double ptr [0x00618d09]        ; 00440389 | DOUBLE_00618d09
    ADD ESP,0x4                         ; 0044038f
    FMUL double ptr [0x00618d11]        ; 00440392 | DOUBLE_00618d11
    FLD float ptr [ESP + 0x8c]          ; 00440398
    FCHS                                ; 0044039f
    FSTP float ptr [ESP + 0x80]         ; 004403a1
    FST float ptr [EBX + 0xbe50]        ; 004403a8
    FCOMP float ptr [ESP + 0x80]        ; 004403ae
    FNSTSW AX                           ; 004403b5
    SAHF                                ; 004403b7
    JC 0x004403fc                       ; 004403b8
        ;   XREF to: 004403fc (CONDITIONAL_JUMP)  ; LAB_004403fc
    FLD float ptr [EBX + 0xbe50]        ; 004403ba
        ;   Label: LAB_004403ba
    FCOMP float ptr [ESP + 0x8c]        ; 004403c0
    FNSTSW AX                           ; 004403c7
    SAHF                                ; 004403c9
    JBE 0x004403d9                      ; 004403ca
        ;   XREF to: 004403d9 (CONDITIONAL_JUMP)  ; LAB_004403d9
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004403cc
    MOV dword ptr [EBX + 0xbe50],EAX    ; 004403d3
    FLD float ptr [ESP + 0x18]          ; 004403d9
        ;   Label: LAB_004403d9
    FCOMP double ptr [0x00618d19]       ; 004403dd | DOUBLE_00618d19
    FNSTSW AX                           ; 004403e3
    SAHF                                ; 004403e5
    JNC 0x0044040b                      ; 004403e6
        ;   XREF to: 0044040b (CONDITIONAL_JUMP)  ; LAB_0044040b
    CMP ESI,0x1                         ; 004403e8
    JZ 0x0044040b                       ; 004403eb
        ;   XREF to: 0044040b (CONDITIONAL_JUMP)  ; LAB_0044040b
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 004403ed
    JMP 0x00440174                      ; 004403f7
        ;   XREF to: 00440174 (UNCONDITIONAL_JUMP)  ; LAB_00440174
    MOV EAX,dword ptr [ESP + 0x80]      ; 004403fc
        ;   Label: LAB_004403fc
    MOV dword ptr [EBX + 0xbe50],EAX    ; 00440403
    JMP 0x004403ba                      ; 00440409
        ;   XREF to: 004403ba (UNCONDITIONAL_JUMP)  ; LAB_004403ba
    MOV dword ptr [EBX + 0xbe34],0x1    ; 0044040b
        ;   Label: LAB_0044040b
    MOV dword ptr [EBX + 0xbe2c],0x1    ; 00440415
    JMP 0x00440174                      ; 0044041f
        ;   XREF to: 00440174 (UNCONDITIONAL_JUMP)  ; LAB_00440174

