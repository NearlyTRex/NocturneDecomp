; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422f90(CLightActor *this_ptr,float delta_time)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422f90
        ;   Label: core_boxactor.cpp_CLightActor_process_FUN_00422f90
    PUSH EBP                            ; 00422f91
    SUB ESP,0xf4                        ; 00422f92
    MOV EBX,dword ptr [ESP + 0x100]     ; 00422f98
    PUSH dword ptr [ESP + 0x104]        ; 00422f9f
    PUSH EBX                            ; 00422fa6
    CALL core_boxactor.cpp_CBoxActor_process_FUN_00422000 ; 00422fa7
        ;   XREF to: 00422000 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_00422000(CBoxActor * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x678]     ; 00422fac
    ADD ESP,0x8                         ; 00422fb2
    CMP EDX,0x2                         ; 00422fb5
    JZ 0x00422fdd                       ; 00422fb8
        ;   XREF to: 00422fdd (CONDITIONAL_JUMP)  ; LAB_00422fdd
    CMP dword ptr [EBX + 0x678],0x3     ; 00422fba
        ;   Label: LAB_00422fba
    JZ 0x00423057                       ; 00422fc1
        ;   XREF to: 00423057 (CONDITIONAL_JUMP)  ; LAB_00423057
    CMP dword ptr [EBX + 0x2330],0x0    ; 00422fc7
    JNZ 0x004230c5                      ; 00422fce
        ;   XREF to: 004230c5 (CONDITIONAL_JUMP)  ; LAB_004230c5
    ADD ESP,0xf4                        ; 00422fd4
    POP EBP                             ; 00422fda
    POP EBX                             ; 00422fdb
    RET                                 ; 00422fdc
    FLD float ptr [EBX + 0x3640]        ; 00422fdd
        ;   Label: LAB_00422fdd
    FSUB float ptr [ESP + 0x104]        ; 00422fe3
    FST float ptr [EBX + 0x3640]        ; 00422fea
    FLDZ                                ; 00422ff0
    FCOMPP                              ; 00422ff2
    FNSTSW AX                           ; 00422ff4
    SAHF                                ; 00422ff6
    JC 0x00422fba                       ; 00422ff7
        ;   XREF to: 00422fba (CONDITIONAL_JUMP)  ; LAB_00422fba
    PUSH 0x0                            ; 00422ff9
    PUSH 0x0                            ; 00422ffb
    PUSH 0x0                            ; 00422ffd
    PUSH 0x7                            ; 00422fff
    PUSH 0x0                            ; 00423001
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00423003
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV EDX,EAX                         ; 00423008
    SHL EAX,0x2                         ; 0042300a
    ADD EAX,EDX                         ; 0042300d
    SHL EAX,0x2                         ; 0042300f
    SUB EAX,EDX                         ; 00423012
    SHL EAX,0x2                         ; 00423014
    ADD ESP,0x8                         ; 00423017
    ADD EAX,0x7c5098                    ; 0042301a
    PUSH EAX                            ; 0042301f
    LEA EAX,[EBX + 0x67c]               ; 00423020
    PUSH EAX                            ; 00423026
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 00423027
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0042302c
    PUSH 0x3e19999a                     ; 0042302f
    PUSH 0x0                            ; 00423034
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00423036
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042303b
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00423042
    MOV dword ptr [EBX + 0x3640],EAX    ; 00423049
    ADD ESP,0x8                         ; 0042304f
    JMP 0x00422fba                      ; 00423052
        ;   XREF to: 00422fba (UNCONDITIONAL_JUMP)  ; LAB_00422fba
    LEA EAX,[EBX + 0x20]                ; 00423057
        ;   Label: LAB_00423057
    PUSH EAX                            ; 0042305a
    ADD EBX,0x3644                      ; 0042305b
    PUSH EBX                            ; 00423061
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 00423062
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 00423067
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0042306a
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0042306f
    AND EDX,0x7fff                      ; 00423071
    MOV EAX,EDX                         ; 00423077
    MOV dword ptr [EBX + 0x3c],EDX      ; 00423079
    SAR EDX,0x1f                        ; 0042307c
    SHL EDX,0x8                         ; 0042307f
    SBB EAX,EDX                         ; 00423082
    SAR EAX,0x8                         ; 00423084
    MOV EDX,EAX                         ; 00423087
    SAR EDX,0x1f                        ; 00423089
    SHL EDX,0x2                         ; 0042308c
    SBB EAX,EDX                         ; 0042308f
    SAR EAX,0x2                         ; 00423091
    PUSH 0x40000000                     ; 00423094
    PUSH EBX                            ; 00423099
    MOV byte ptr [EBX + 0x1c],AL        ; 0042309a
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 0042309d
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004230a2
    PUSH EBX                            ; 004230a5
    MOV EBP,dword ptr [0x00622c18]      ; 004230a6 | g_CDemonSetPtr
    PUSH EBP                            ; 004230ac
    MOV dword ptr [EBX + 0x20],0x0      ; 004230ad
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 004230b4
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004230b9
    ADD ESP,0xf4                        ; 004230bc
    POP EBP                             ; 004230c2
    POP EBX                             ; 004230c3
    RET                                 ; 004230c4
    PUSH EDI                            ; 004230c5
        ;   Label: LAB_004230c5
    PUSH ESI                            ; 004230c6
    LEA EAX,[EBX + 0x3628]              ; 004230c7
    PUSH EAX                            ; 004230cd
    PUSH EBX                            ; 004230ce
    LEA ESI,[ESP + 0xf4]                ; 004230cf
    LEA EDI,[ESP + 0xe8]                ; 004230d6
    CALL core_actor.cpp_FUN_00408b40    ; 004230dd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xf4]                ; 004230e2
    LEA EAX,[ESP + 0xe8]                ; 004230e9
    ADD ESP,0x8                         ; 004230f0
    LEA EDX,[EBX + 0x680]               ; 004230f3
    MOVSD ES:EDI,ESI                    ; 004230f9
    MOVSD ES:EDI,ESI                    ; 004230fa
    MOVSD ES:EDI,ESI                    ; 004230fb
    CMP EDX,EAX                         ; 004230fc
    JZ 0x0042311d                       ; 004230fe
        ;   XREF to: 0042311d (CONDITIONAL_JUMP)  ; LAB_0042311d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00423100
    MOV dword ptr [EDX],EAX             ; 00423107
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00423109
    MOV dword ptr [EDX + 0x4],EAX       ; 00423110
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00423113
    MOV dword ptr [EDX + 0x8],EAX       ; 0042311a
    LEA EAX,[EBX + 0x3634]              ; 0042311d
        ;   Label: LAB_0042311d
    PUSH EAX                            ; 00423123
    PUSH 0x2c8af28                      ; 00423124
    LEA EAX,[ESP + 0x70]                ; 00423129
    PUSH EAX                            ; 0042312d
    CALL core_xform.cpp_FUN_005b5760    ; 0042312e
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00423133
    LEA EAX,[EBX + 0x30]                ; 00423136
    PUSH EAX                            ; 00423139
    PUSH 0x2c8af28                      ; 0042313a
    LEA EAX,[ESP + 0xa0]                ; 0042313f
    PUSH EAX                            ; 00423146
    CALL core_xform.cpp_FUN_005b5760    ; 00423147
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0042314c
    LEA EAX,[ESP + 0x98]                ; 0042314f
    PUSH EAX                            ; 00423156
    LEA EAX,[ESP + 0x6c]                ; 00423157
    PUSH EAX                            ; 0042315b
    LEA ESI,[ESP + 0x10]                ; 0042315c
    LEA EDI,[ESP + 0x40]                ; 00423160
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 00423164
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00423169
    LEA ESI,[ESP + 0x10]                ; 0042316e
    ADD ESP,0x8                         ; 00423172
    LEA EAX,[ESP + 0x38]                ; 00423175
    MOVSD.REP ES:EDI,ESI                ; 00423179
    PUSH EAX                            ; 0042317b
    LEA ESI,[ESP + 0xcc]                ; 0042317c
    LEA EDI,[ESP + 0xd8]                ; 00423183
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 0042318a
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0xcc]                ; 0042318f
    ADD ESP,0x4                         ; 00423196
    MOVSD ES:EDI,ESI                    ; 00423199
    MOVSD ES:EDI,ESI                    ; 0042319a
    MOVSD ES:EDI,ESI                    ; 0042319b
    LEA EAX,[ESP + 0xd4]                ; 0042319c
    LEA ESI,[EBX + 0x67c]               ; 004231a3
    PUSH EAX                            ; 004231a9
    ADD EBX,0x68c                       ; 004231aa
    PUSH EBX                            ; 004231b0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004231b1
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004231b6
    PUSH ESI                            ; 004231b9
    MOV EDI,dword ptr [0x00622c18]      ; 004231ba | g_CDemonSetPtr
    PUSH EDI                            ; 004231c0
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0 ; 004231c1
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 004231c6
    POP ESI                             ; 004231c9
    POP EDI                             ; 004231ca
    ADD ESP,0xf4                        ; 004231cb
    POP EBP                             ; 004231d1
    POP EBX                             ; 004231d2
    RET                                 ; 004231d3

