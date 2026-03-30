; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_004858f0(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   direction
; float            Stack[0xc]:4   spread_angle
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; float            Stack[-0xb0]:4  local_b0
; CMatrix3x3f      Stack[-0xac]:36  local_ac
; CBoundingBox3D   Stack[-0x84]:24  local_84
; CVector3f        Stack[-0x6c]:12  local_6c
; CVector3f        Stack[-0x60]:12  CStack_60
; CVector3f        Stack[-0x54]:12  CStack_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  fStack_28
; int              Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484575
;
; Referenced Globals:
;   float FLOAT_00621b0e = 0.5
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00485b20
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004858f0
        ;   Label: core_dracbrid.cpp_CDraculaBride_explode_FUN_004858f0
    PUSH ESI                            ; 004858f1
    PUSH EDI                            ; 004858f2
    PUSH EBP                            ; 004858f3
    MOV EBP,ESP                         ; 004858f4
    SUB ESP,0x9c                        ; 004858f6
    AND ESP,0xfffffff8                  ; 004858fc
    MOV EDI,dword ptr [EBP + 0x14]      ; 004858ff
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00485902
    MOV EBX,dword ptr [EBP + 0x18]      ; 00485905
    MOV dword ptr [ESP],EAX             ; 00485908
    LEA EAX,[EDI + 0x158]               ; 0048590b
    LEA ESI,[EDI + 0x23b8]              ; 00485911
    CMP byte ptr [ESI],0x0              ; 00485917
    JZ 0x0048597a                       ; 0048591a
        ;   XREF to: 0048597a (CONDITIONAL_JUMP)  ; LAB_0048597a
    PUSH EAX                            ; 0048591c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0048591d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00485922
    MOV EAX,dword ptr [EAX + 0x7140]    ; 00485925
    MOV dword ptr [ESP + 0x8c],EAX      ; 0048592b
    CMP EAX,0x1                         ; 00485932
    JLE 0x0048597a                      ; 00485935
        ;   XREF to: 0048597a (CONDITIONAL_JUMP)  ; LAB_0048597a
    FLD float ptr [ESP]                 ; 00485937
    FLDZ                                ; 0048593a
    FCOMPP                              ; 0048593c
    FNSTSW AX                           ; 0048593e
    SAHF                                ; 00485940
    JBE 0x0048594a                      ; 00485941
        ;   XREF to: 0048594a (CONDITIONAL_JUMP)  ; LAB_0048594a
    MOV dword ptr [ESP],0x41a00000      ; 00485943
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0048594a
        ;   Label: LAB_0048594a
    XOR ESI,ESI                         ; 00485951
    TEST ECX,ECX                        ; 00485953
    JLE 0x0048597a                      ; 00485955
        ;   XREF to: 0048597a (CONDITIONAL_JUMP)  ; LAB_0048597a
    TEST EBX,EBX                        ; 00485957
        ;   Label: LAB_00485957
    JNZ 0x00485a08                      ; 00485959
        ;   XREF to: 00485a08 (CONDITIONAL_JUMP)  ; LAB_00485a08
    MOV EDX,dword ptr [EBP + 0x20]      ; 0048595f
        ;   Label: LAB_0048595f
    PUSH EDX                            ; 00485962
    PUSH EBX                            ; 00485963
    PUSH ESI                            ; 00485964
        ;   Label: LAB_00485964
    PUSH EDI                            ; 00485965
    CALL core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00485b20 ; 00485966
        ;   XREF to: 00485b20 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_00485b20(CDraculaBride * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0048596b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0048596e
    INC ESI                             ; 00485975
    CMP ESI,EAX                         ; 00485976
    JL 0x00485957                       ; 00485978
        ;   XREF to: 00485957 (CONDITIONAL_JUMP)  ; LAB_00485957
    LEA ESI,[ESP + 0x2c]                ; 0048597a
        ;   Label: LAB_0048597a
    PUSH ESI                            ; 0048597e
    MOV EAX,dword ptr [EDI + 0x154]     ; 0048597f
    PUSH EDI                            ; 00485985
    CALL dword ptr [EAX + 0x14]         ; 00485986
    LEA ESI,[EAX + 0xc]                 ; 00485989
    FLD float ptr [EAX]                 ; 0048598c
    FADD float ptr [ESI]                ; 0048598e
    ADD ESP,0x8                         ; 00485990
    FST float ptr [ESP + 0x80]          ; 00485993
    FLD float ptr [EAX + 0x4]           ; 0048599a
    FADD float ptr [ESI + 0x4]          ; 0048599d
    FXCH                                ; 004859a0
    FLD float ptr [0x00621b0e]          ; 004859a2 | FLOAT_00621b0e
    FXCH                                ; 004859a8
    FMUL ST1                            ; 004859aa
    FXCH ST2                            ; 004859ac
    FST float ptr [ESP + 0x84]          ; 004859ae
    FMUL ST1                            ; 004859b5
    FLD float ptr [EAX + 0x8]           ; 004859b7
    FADD float ptr [ESI + 0x8]          ; 004859ba
    LEA EAX,[ESP + 0x5c]                ; 004859bd
    FST float ptr [ESP + 0x88]          ; 004859c1
    FMULP ST2                           ; 004859c8
    PUSH EAX                            ; 004859ca
    LEA EAX,[ESP + 0x54]                ; 004859cb
    FXCH ST2                            ; 004859cf
    FSTP float ptr [ESP + 0x60]         ; 004859d1
    PUSH EAX                            ; 004859d5
    FXCH                                ; 004859d6
    FSTP float ptr [ESP + 0x68]         ; 004859d8
    PUSH EDI                            ; 004859dc
    FSTP float ptr [ESP + 0x70]         ; 004859dd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004859e1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV ECX,dword ptr [EDI + 0xb7d8]    ; 004859e6
    ADD ESP,0xc                         ; 004859ec
    TEST ECX,ECX                        ; 004859ef
    JZ 0x00485aed                       ; 004859f1
        ;   XREF to: 00485aed (CONDITIONAL_JUMP)  ; LAB_00485aed
    MOV dword ptr [EDI + 0x2f10],0x0    ; 004859f7
    MOV ESP,EBP                         ; 00485a01
    POP EBP                             ; 00485a03
    POP EDI                             ; 00485a04
    POP ESI                             ; 00485a05
    POP EBX                             ; 00485a06
    RET                                 ; 00485a07
    FLD float ptr [ESP]                 ; 00485a08
        ;   Label: LAB_00485a08
    FLDZ                                ; 00485a0b
    FCOMPP                              ; 00485a0d
    FNSTSW AX                           ; 00485a0f
    SAHF                                ; 00485a11
    JNC 0x0048595f                      ; 00485a12
        ;   XREF to: 0048595f (CONDITIONAL_JUMP)  ; LAB_0048595f
    PUSH EBX                            ; 00485a18
    LEA EAX,[ESP + 0x78]                ; 00485a19
    PUSH EAX                            ; 00485a1d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00485a1e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00485a23
    PUSH dword ptr [ESP]                ; 00485a26
    FLD float ptr [ESP + 0x4]           ; 00485a29
    FCHS                                ; 00485a2d
    FSTP float ptr [ESP + 0x94]         ; 00485a2f
    PUSH dword ptr [ESP + 0x94]         ; 00485a36
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00485a3d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [EDI + 0x2610]    ; 00485aed
        ;   Label: LAB_00485aed
    PUSH ESI                            ; 00485af3
    PUSH 0x64                           ; 00485af4
    PUSH EBX                            ; 00485af6
    LEA EAX,[ESP + 0x5c]                ; 00485af7
    PUSH EAX                            ; 00485afb
    MOV EDI,dword ptr [0x0067b9a0]      ; 00485afc | g_CGorePtr
    PUSH EDI                            ; 00485b02 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 00485b03
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00485b08
    MOV ESP,EBP                         ; 00485b0b
    POP EBP                             ; 00485b0d
    POP EDI                             ; 00485b0e
    POP ESI                             ; 00485b0f
    POP EBX                             ; 00485b10
    RET                                 ; 00485b11

