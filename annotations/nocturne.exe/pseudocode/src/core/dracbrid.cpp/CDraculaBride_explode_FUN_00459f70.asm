; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; float            Stack[0xc]:4   spread_angle
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00458bf5
;
; Referenced Globals:
;   double DOUBLE_0057d74e = 5.22209901682860E-315
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459f70
        ;   Label: core_dracbrid.cpp_CDraculaBride_explode_FUN_00459f70
    PUSH ESI                            ; 00459f71
    PUSH EDI                            ; 00459f72
    PUSH EBP                            ; 00459f73
    MOV EBP,ESP                         ; 00459f74
    SUB ESP,0x9c                        ; 00459f76
    AND ESP,0xfffffff8                  ; 00459f7c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00459f7f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00459f82
    MOV EBX,dword ptr [EBP + 0x18]      ; 00459f85
    MOV dword ptr [ESP],EAX             ; 00459f88
    LEA EAX,[EDI + 0x150]               ; 00459f8b
    LEA ESI,[EDI + 0x23b0]              ; 00459f91
    CMP byte ptr [ESI],0x0              ; 00459f97
    JZ 0x00459ffa                       ; 00459f9a
        ;   XREF to: 00459ffa (CONDITIONAL_JUMP)  ; LAB_00459ffa
    PUSH EAX                            ; 00459f9c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00459f9d
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00459fa2
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00459fa5
    MOV dword ptr [ESP + 0x8c],EAX      ; 00459fab
    CMP EAX,0x1                         ; 00459fb2
    JLE 0x00459ffa                      ; 00459fb5
        ;   XREF to: 00459ffa (CONDITIONAL_JUMP)  ; LAB_00459ffa
    FLD float ptr [ESP]                 ; 00459fb7
    FLDZ                                ; 00459fba
    FCOMPP                              ; 00459fbc
    FNSTSW AX                           ; 00459fbe
    SAHF                                ; 00459fc0
    JBE 0x00459fca                      ; 00459fc1
        ;   XREF to: 00459fca (CONDITIONAL_JUMP)  ; LAB_00459fca
    MOV dword ptr [ESP],0x41a00000      ; 00459fc3
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00459fca
        ;   Label: LAB_00459fca
    XOR ESI,ESI                         ; 00459fd1
    TEST ECX,ECX                        ; 00459fd3
    JLE 0x00459ffa                      ; 00459fd5
        ;   XREF to: 00459ffa (CONDITIONAL_JUMP)  ; LAB_00459ffa
    TEST EBX,EBX                        ; 00459fd7
        ;   Label: LAB_00459fd7
    JNZ 0x0045a088                      ; 00459fd9
        ;   XREF to: 0045a088 (CONDITIONAL_JUMP)  ; LAB_0045a088
    MOV EDX,dword ptr [EBP + 0x20]      ; 00459fdf
        ;   Label: LAB_00459fdf
    PUSH EDX                            ; 00459fe2
    PUSH EBX                            ; 00459fe3
    PUSH ESI                            ; 00459fe4
        ;   Label: LAB_00459fe4
    PUSH EDI                            ; 00459fe5
    CALL core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0 ; 00459fe6
        ;   XREF to: 0045a1a0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0045a1a0(CDraculaBride * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00459feb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00459fee
    INC ESI                             ; 00459ff5
    CMP ESI,EAX                         ; 00459ff6
    JL 0x00459fd7                       ; 00459ff8
        ;   XREF to: 00459fd7 (CONDITIONAL_JUMP)  ; LAB_00459fd7
    LEA ESI,[ESP + 0x2c]                ; 00459ffa
        ;   Label: LAB_00459ffa
    PUSH ESI                            ; 00459ffe
    MOV EAX,dword ptr [EDI + 0x14c]     ; 00459fff
    PUSH EDI                            ; 0045a005
    CALL dword ptr [EAX + 0x14]         ; 0045a006
    LEA ESI,[EAX + 0xc]                 ; 0045a009
    FLD float ptr [EAX]                 ; 0045a00c
    FADD float ptr [ESI]                ; 0045a00e
    ADD ESP,0x8                         ; 0045a010
    FST float ptr [ESP + 0x80]          ; 0045a013
    FLD float ptr [EAX + 0x4]           ; 0045a01a
    FADD float ptr [ESI + 0x4]          ; 0045a01d
    FXCH                                ; 0045a020
    FLD float ptr [0x0057d74e]          ; 0045a022 | DOUBLE_0057d74e
    FXCH                                ; 0045a028
    FMUL ST1                            ; 0045a02a
    FXCH ST2                            ; 0045a02c
    FST float ptr [ESP + 0x84]          ; 0045a02e
    FMUL ST1                            ; 0045a035
    FLD float ptr [EAX + 0x8]           ; 0045a037
    FADD float ptr [ESI + 0x8]          ; 0045a03a
    LEA EAX,[ESP + 0x5c]                ; 0045a03d
    FST float ptr [ESP + 0x88]          ; 0045a041
    FMULP ST2                           ; 0045a048
    PUSH EAX                            ; 0045a04a
    LEA EAX,[ESP + 0x54]                ; 0045a04b
    FXCH ST2                            ; 0045a04f
    FSTP float ptr [ESP + 0x60]         ; 0045a051
    PUSH EAX                            ; 0045a055
    FXCH                                ; 0045a056
    FSTP float ptr [ESP + 0x68]         ; 0045a058
    PUSH EDI                            ; 0045a05c
    FSTP float ptr [ESP + 0x70]         ; 0045a05d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0045a061
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV ECX,dword ptr [EDI + 0xb640]    ; 0045a066
    ADD ESP,0xc                         ; 0045a06c
    TEST ECX,ECX                        ; 0045a06f
    JZ 0x0045a16d                       ; 0045a071
        ;   XREF to: 0045a16d (CONDITIONAL_JUMP)  ; LAB_0045a16d
    MOV dword ptr [EDI + 0x2f08],0x0    ; 0045a077
    MOV ESP,EBP                         ; 0045a081
    POP EBP                             ; 0045a083
    POP EDI                             ; 0045a084
    POP ESI                             ; 0045a085
    POP EBX                             ; 0045a086
    RET                                 ; 0045a087
    FLD float ptr [ESP]                 ; 0045a088
        ;   Label: LAB_0045a088
    FLDZ                                ; 0045a08b
    FCOMPP                              ; 0045a08d
    FNSTSW AX                           ; 0045a08f
    SAHF                                ; 0045a091
    JNC 0x00459fdf                      ; 0045a092
        ;   XREF to: 00459fdf (CONDITIONAL_JUMP)  ; LAB_00459fdf
    PUSH EBX                            ; 0045a098
    LEA EAX,[ESP + 0x78]                ; 0045a099
    PUSH EAX                            ; 0045a09d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0045a09e
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0045a0a3
    PUSH dword ptr [ESP]                ; 0045a0a6
    FLD float ptr [ESP + 0x4]           ; 0045a0a9
    FCHS                                ; 0045a0ad
    FSTP float ptr [ESP + 0x94]         ; 0045a0af
    PUSH dword ptr [ESP + 0x94]         ; 0045a0b6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045a0bd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 0045a0c2
    FLD float ptr [ESP + 0xa0]          ; 0045a0c9
    ADD ESP,0x8                         ; 0045a0d0
    PUSH dword ptr [ESP]                ; 0045a0d3
    FADD float ptr [ESP + 0x7c]         ; 0045a0d6
    PUSH dword ptr [ESP + 0x94]         ; 0045a0da
    FSTP float ptr [ESP + 0x80]         ; 0045a0e1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0045a0e8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 0045a0ed
    FLD float ptr [ESP + 0xa0]          ; 0045a0f4
    ADD ESP,0x8                         ; 0045a0fb
    LEA EAX,[ESP + 0x74]                ; 0045a0fe
    PUSH EAX                            ; 0045a102
    LEA EAX,[ESP + 0x8]                 ; 0045a103
    FADD float ptr [ESP + 0x78]         ; 0045a107
    PUSH EAX                            ; 0045a10b
    FSTP float ptr [ESP + 0x7c]         ; 0045a10c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0045a110
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 0045a115
    FMUL ST0                            ; 0045a118
    FLD float ptr [EBX]                 ; 0045a11a
    FMUL ST0                            ; 0045a11c
    FADDP                               ; 0045a11e
    FLD float ptr [EBX + 0x8]           ; 0045a120
    FMUL ST0                            ; 0045a123
    FADDP                               ; 0045a125
    FSQRT                               ; 0045a127
    ADD ESP,0x8                         ; 0045a129
    FSTP float ptr [ESP + 0x94]         ; 0045a12c
    MOV EAX,dword ptr [ESP + 0x94]      ; 0045a133
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045a13a
    LEA EAX,[ESP + 0x44]                ; 0045a13e
    PUSH EAX                            ; 0045a142
    LEA EAX,[ESP + 0x6c]                ; 0045a143
    PUSH EAX                            ; 0045a147
    LEA EAX,[ESP + 0xc]                 ; 0045a148
    XOR EDX,EDX                         ; 0045a14c
    PUSH EAX                            ; 0045a14e
    MOV dword ptr [ESP + 0x50],EDX      ; 0045a14f
    MOV dword ptr [ESP + 0x54],EDX      ; 0045a153
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0045a157
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0045a15c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045a15f
    PUSH EAX                            ; 0045a162
    LEA EAX,[ESP + 0x6c]                ; 0045a163
    PUSH EAX                            ; 0045a167
    JMP 0x00459fe4                      ; 0045a168
        ;   XREF to: 00459fe4 (UNCONDITIONAL_JUMP)  ; LAB_00459fe4
    MOV ESI,dword ptr [EDI + 0x2608]    ; 0045a16d
        ;   Label: LAB_0045a16d
    PUSH ESI                            ; 0045a173
    PUSH 0x64                           ; 0045a174
    PUSH EBX                            ; 0045a176
    LEA EAX,[ESP + 0x5c]                ; 0045a177
    PUSH EAX                            ; 0045a17b
    MOV EDI,dword ptr [0x005b96c4]      ; 0045a17c | INT_005b96c4
    PUSH EDI                            ; 0045a182
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 0045a183
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0045a188
    MOV ESP,EBP                         ; 0045a18b
    POP EBP                             ; 0045a18d
    POP EDI                             ; 0045a18e
    POP ESI                             ; 0045a18f
    POP EBX                             ; 0045a190
    RET                                 ; 0045a191

