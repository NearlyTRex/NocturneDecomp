; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00427b60(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
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
; XREF[9]:
;   core_armour.cpp_CArmour_processDamage_FUN_0040fbc0 at 0040fbcf
;   core_armour.cpp_CArmour_process_FUN_0040fa20 at 0040fb50
;   core_batman.cpp_CBatman_processDismemberment_FUN_004145f0 at 00414918
;   core_charactr.cpp_CCharacter_explode_FUN_00427ab0 at 00427b4b
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 00428663
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426d17
;   core_gargoyle.cpp_CGargoyle_processDamage_FUN_004a85d0 at 004a86b4
;   core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004b9b80 at 004b9bb8
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d417
;
; Referenced Globals:
;   double DOUBLE_0057a02a = 5.22209901682860E-315
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427b60
        ;   Label: core_charactr.cpp_CCharacter_dismember_FUN_00427b60
    PUSH ESI                            ; 00427b61
    PUSH EDI                            ; 00427b62
    PUSH EBP                            ; 00427b63
    MOV EBP,ESP                         ; 00427b64
    SUB ESP,0x9c                        ; 00427b66
    AND ESP,0xfffffff8                  ; 00427b6c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00427b6f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00427b72
    MOV EBX,dword ptr [EBP + 0x18]      ; 00427b75
    MOV dword ptr [ESP],EAX             ; 00427b78
    MOV EDX,dword ptr [EDI + 0xb63c]    ; 00427b7b
    PUSH EDX                            ; 00427b81
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00427b82
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    LEA EAX,[EDI + 0x150]               ; 00427b87
    LEA ESI,[EDI + 0x23b0]              ; 00427b8d
    MOV DL,byte ptr [ESI]               ; 00427b93
    ADD ESP,0x4                         ; 00427b95
    TEST DL,DL                          ; 00427b98
    JZ 0x00427bfa                       ; 00427b9a
        ;   XREF to: 00427bfa (CONDITIONAL_JUMP)  ; LAB_00427bfa
    PUSH EAX                            ; 00427b9c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 00427b9d
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00427ba2
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00427ba5
    MOV dword ptr [ESP + 0x8c],EAX      ; 00427bab
    CMP EAX,0x1                         ; 00427bb2
    JLE 0x00427bfa                      ; 00427bb5
        ;   XREF to: 00427bfa (CONDITIONAL_JUMP)  ; LAB_00427bfa
    FLD float ptr [ESP]                 ; 00427bb7
    FLDZ                                ; 00427bba
    FCOMPP                              ; 00427bbc
    FNSTSW AX                           ; 00427bbe
    SAHF                                ; 00427bc0
    JBE 0x00427bca                      ; 00427bc1
        ;   XREF to: 00427bca (CONDITIONAL_JUMP)  ; LAB_00427bca
    MOV dword ptr [ESP],0x41a00000      ; 00427bc3
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00427bca
        ;   Label: LAB_00427bca
    XOR ESI,ESI                         ; 00427bd1
    TEST EAX,EAX                        ; 00427bd3
    JLE 0x00427bfa                      ; 00427bd5
        ;   XREF to: 00427bfa (CONDITIONAL_JUMP)  ; LAB_00427bfa
    TEST EBX,EBX                        ; 00427bd7
        ;   Label: LAB_00427bd7
    JNZ 0x00427c8f                      ; 00427bd9
        ;   XREF to: 00427c8f (CONDITIONAL_JUMP)  ; LAB_00427c8f
    MOV ECX,dword ptr [EBP + 0x20]      ; 00427bdf
        ;   Label: LAB_00427bdf
    PUSH ECX                            ; 00427be2
    PUSH EBX                            ; 00427be3
    PUSH ESI                            ; 00427be4
        ;   Label: LAB_00427be4
    PUSH EDI                            ; 00427be5
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40 ; 00427be6
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_00427e40(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 00427beb
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00427bee
    INC ESI                             ; 00427bf5
    CMP ESI,EDX                         ; 00427bf6
    JL 0x00427bd7                       ; 00427bf8
        ;   XREF to: 00427bd7 (CONDITIONAL_JUMP)  ; LAB_00427bd7
    LEA ESI,[ESP + 0x2c]                ; 00427bfa
        ;   Label: LAB_00427bfa
    PUSH ESI                            ; 00427bfe
    MOV EAX,dword ptr [EDI + 0x14c]     ; 00427bff
    PUSH EDI                            ; 00427c05
    CALL dword ptr [EAX + 0x14]         ; 00427c06
    LEA ESI,[EAX + 0xc]                 ; 00427c09
    FLD float ptr [EAX]                 ; 00427c0c
    FADD float ptr [ESI]                ; 00427c0e
    ADD ESP,0x8                         ; 00427c10
    FST float ptr [ESP + 0x80]          ; 00427c13
    FLD float ptr [EAX + 0x4]           ; 00427c1a
    FADD float ptr [ESI + 0x4]          ; 00427c1d
    FXCH                                ; 00427c20
    FLD float ptr [0x0057a02a]          ; 00427c22 | DOUBLE_0057a02a
    FXCH                                ; 00427c28
    FMUL ST1                            ; 00427c2a
    FXCH ST2                            ; 00427c2c
    FST float ptr [ESP + 0x84]          ; 00427c2e
    FMUL ST1                            ; 00427c35
    FLD float ptr [EAX + 0x8]           ; 00427c37
    FADD float ptr [ESI + 0x8]          ; 00427c3a
    LEA EAX,[ESP + 0x5c]                ; 00427c3d
    FST float ptr [ESP + 0x88]          ; 00427c41
    FMULP ST2                           ; 00427c48
    PUSH EAX                            ; 00427c4a
    LEA EAX,[ESP + 0x54]                ; 00427c4b
    FXCH ST2                            ; 00427c4f
    FSTP float ptr [ESP + 0x60]         ; 00427c51
    PUSH EAX                            ; 00427c55
    FXCH                                ; 00427c56
    FSTP float ptr [ESP + 0x68]         ; 00427c58
    PUSH EDI                            ; 00427c5c
    FSTP float ptr [ESP + 0x70]         ; 00427c5d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00427c61
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV ESI,dword ptr [EDI + 0xb640]    ; 00427c66
    ADD ESP,0xc                         ; 00427c6c
    TEST ESI,ESI                        ; 00427c6f
    JZ 0x00427d74                       ; 00427c71
        ;   XREF to: 00427d74 (CONDITIONAL_JUMP)  ; LAB_00427d74
    MOV dword ptr [EDI + 0x2f08],0x0    ; 00427c77
    MOV dword ptr [EDI + 0x70],0x2      ; 00427c81
    MOV ESP,EBP                         ; 00427c88
    POP EBP                             ; 00427c8a
    POP EDI                             ; 00427c8b
    POP ESI                             ; 00427c8c
    POP EBX                             ; 00427c8d
    RET                                 ; 00427c8e
    FLD float ptr [ESP]                 ; 00427c8f
        ;   Label: LAB_00427c8f
    FLDZ                                ; 00427c92
    FCOMPP                              ; 00427c94
    FNSTSW AX                           ; 00427c96
    SAHF                                ; 00427c98
    JNC 0x00427bdf                      ; 00427c99
        ;   XREF to: 00427bdf (CONDITIONAL_JUMP)  ; LAB_00427bdf
    PUSH EBX                            ; 00427c9f
    LEA EAX,[ESP + 0x78]                ; 00427ca0
    PUSH EAX                            ; 00427ca4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00427ca5
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00427caa
    PUSH dword ptr [ESP]                ; 00427cad
    FLD float ptr [ESP + 0x4]           ; 00427cb0
    FCHS                                ; 00427cb4
    FSTP float ptr [ESP + 0x94]         ; 00427cb6
    PUSH dword ptr [ESP + 0x94]         ; 00427cbd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00427cc4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa0],EAX      ; 00427cc9
    FLD float ptr [ESP + 0xa0]          ; 00427cd0
    ADD ESP,0x8                         ; 00427cd7
    PUSH dword ptr [ESP]                ; 00427cda
    FADD float ptr [ESP + 0x7c]         ; 00427cdd
    PUSH dword ptr [ESP + 0x94]         ; 00427ce1
    FSTP float ptr [ESP + 0x80]         ; 00427ce8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00427cef
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xa0],EAX      ; 00427cf4
    FLD float ptr [ESP + 0xa0]          ; 00427cfb
    ADD ESP,0x8                         ; 00427d02
    LEA EAX,[ESP + 0x74]                ; 00427d05
    PUSH EAX                            ; 00427d09
    LEA EAX,[ESP + 0x8]                 ; 00427d0a
    FADD float ptr [ESP + 0x78]         ; 00427d0e
    PUSH EAX                            ; 00427d12
    FSTP float ptr [ESP + 0x7c]         ; 00427d13
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00427d17
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 00427d1c
    FMUL ST0                            ; 00427d1f
    FLD float ptr [EBX]                 ; 00427d21
    FMUL ST0                            ; 00427d23
    FADDP                               ; 00427d25
    FLD float ptr [EBX + 0x8]           ; 00427d27
    FMUL ST0                            ; 00427d2a
    FADDP                               ; 00427d2c
    FSQRT                               ; 00427d2e
    ADD ESP,0x8                         ; 00427d30
    FSTP float ptr [ESP + 0x94]         ; 00427d33
    MOV EAX,dword ptr [ESP + 0x94]      ; 00427d3a
    MOV dword ptr [ESP + 0x4c],EAX      ; 00427d41
    LEA EAX,[ESP + 0x44]                ; 00427d45
    PUSH EAX                            ; 00427d49
    LEA EAX,[ESP + 0x6c]                ; 00427d4a
    PUSH EAX                            ; 00427d4e
    LEA EAX,[ESP + 0xc]                 ; 00427d4f
    XOR ECX,ECX                         ; 00427d53
    PUSH EAX                            ; 00427d55
    MOV dword ptr [ESP + 0x50],ECX      ; 00427d56
    MOV dword ptr [ESP + 0x54],ECX      ; 00427d5a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00427d5e
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00427d63
    MOV EDX,dword ptr [EBP + 0x20]      ; 00427d66
    PUSH EDX                            ; 00427d69
    LEA EAX,[ESP + 0x6c]                ; 00427d6a
    PUSH EAX                            ; 00427d6e
    JMP 0x00427be4                      ; 00427d6f
        ;   XREF to: 00427be4 (UNCONDITIONAL_JUMP)  ; LAB_00427be4
    MOV EAX,dword ptr [EDI + 0x2608]    ; 00427d74
        ;   Label: LAB_00427d74
    PUSH EAX                            ; 00427d7a
    PUSH 0x64                           ; 00427d7b
    PUSH EBX                            ; 00427d7d
    LEA EAX,[ESP + 0x5c]                ; 00427d7e
    PUSH EAX                            ; 00427d82
    MOV EDX,dword ptr [0x005b96c4]      ; 00427d83 | g_CGore_PTR_005b96c4
    PUSH EDX                            ; 00427d89
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00427d8a
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00427d8f
    MOV dword ptr [EDI + 0x70],0x2      ; 00427d92
    MOV ESP,EBP                         ; 00427d99
    POP EBP                             ; 00427d9b
    POP EDI                             ; 00427d9c
    POP ESI                             ; 00427d9d
    POP EBX                             ; 00427d9e
    RET                                 ; 00427d9f

