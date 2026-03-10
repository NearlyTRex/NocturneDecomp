; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined1       Stack[-0xac]:1  local_ac
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[9]:
;   core_armour.cpp_CArmour_processDamage_FUN_00412400 at 0041240f
;   core_armour.cpp_CArmour_process_FUN_00412260 at 00412390
;   core_batman.cpp_CBatman_FUN_00417660 at 00417988
;   core_charactr.cpp_CCharacter_explode_FUN_0042b930 at 0042b9cb
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 at 0042c513
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042ab97
;   core_gargoyle.cpp_CGargoyle_processDamage_FUN_004e57d0 at 004e58b4
;   core_hpriest.cpp_CHighPriestOfGardath_process_FUN_004f7c00 at 004f7c38
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e66f7
;
; Referenced Globals:
;   float FLOAT_0061715a = 0.5
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b9e0
        ;   Label: core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
    PUSH ESI                            ; 0042b9e1
    PUSH EDI                            ; 0042b9e2
    PUSH EBP                            ; 0042b9e3
    MOV EBP,ESP                         ; 0042b9e4
    SUB ESP,0x9c                        ; 0042b9e6
    AND ESP,0xfffffff8                  ; 0042b9ec
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042b9ef
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042b9f2
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042b9f5
    MOV dword ptr [ESP],EAX             ; 0042b9f8
    MOV EDX,dword ptr [EDI + 0xb7d4]    ; 0042b9fb
    PUSH EDX                            ; 0042ba01
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0042ba02
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    LEA EAX,[EDI + 0x158]               ; 0042ba07
    LEA ESI,[EDI + 0x23b8]              ; 0042ba0d
    MOV DL,byte ptr [ESI]               ; 0042ba13
    ADD ESP,0x4                         ; 0042ba15
    TEST DL,DL                          ; 0042ba18
    JZ 0x0042ba7a                       ; 0042ba1a
        ;   XREF to: 0042ba7a (CONDITIONAL_JUMP)  ; LAB_0042ba7a
    PUSH EAX                            ; 0042ba1c
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0042ba1d
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042ba22
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0042ba25
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042ba2b
    CMP EAX,0x1                         ; 0042ba32
    JLE 0x0042ba7a                      ; 0042ba35
        ;   XREF to: 0042ba7a (CONDITIONAL_JUMP)  ; LAB_0042ba7a
    FLD float ptr [ESP]                 ; 0042ba37
    FLDZ                                ; 0042ba3a
    FCOMPP                              ; 0042ba3c
    FNSTSW AX                           ; 0042ba3e
    SAHF                                ; 0042ba40
    JBE 0x0042ba4a                      ; 0042ba41
        ;   XREF to: 0042ba4a (CONDITIONAL_JUMP)  ; LAB_0042ba4a
    MOV dword ptr [ESP],0x41a00000      ; 0042ba43
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0042ba4a
        ;   Label: LAB_0042ba4a
    XOR ESI,ESI                         ; 0042ba51
    TEST EAX,EAX                        ; 0042ba53
    JLE 0x0042ba7a                      ; 0042ba55
        ;   XREF to: 0042ba7a (CONDITIONAL_JUMP)  ; LAB_0042ba7a
    TEST EBX,EBX                        ; 0042ba57
        ;   Label: LAB_0042ba57
    JNZ 0x0042bb0f                      ; 0042ba59
        ;   XREF to: 0042bb0f (CONDITIONAL_JUMP)  ; LAB_0042bb0f
    MOV ECX,dword ptr [EBP + 0x20]      ; 0042ba5f
        ;   Label: LAB_0042ba5f
    PUSH ECX                            ; 0042ba62
    PUSH EBX                            ; 0042ba63
    PUSH ESI                            ; 0042ba64
        ;   Label: LAB_0042ba64
    PUSH EDI                            ; 0042ba65
    CALL core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0 ; 0042ba66
        ;   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_detachBodyPart_FUN_0042bcc0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0042ba6b
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0042ba6e
    INC ESI                             ; 0042ba75
    CMP ESI,EDX                         ; 0042ba76
    JL 0x0042ba57                       ; 0042ba78
        ;   XREF to: 0042ba57 (CONDITIONAL_JUMP)  ; LAB_0042ba57
    LEA ESI,[ESP + 0x2c]                ; 0042ba7a
        ;   Label: LAB_0042ba7a
    PUSH ESI                            ; 0042ba7e
    MOV EAX,dword ptr [EDI + 0x154]     ; 0042ba7f
    PUSH EDI                            ; 0042ba85
    CALL dword ptr [EAX + 0x14]         ; 0042ba86
    LEA ESI,[EAX + 0xc]                 ; 0042ba89
    FLD float ptr [EAX]                 ; 0042ba8c
    FADD float ptr [ESI]                ; 0042ba8e
    ADD ESP,0x8                         ; 0042ba90
    FST float ptr [ESP + 0x80]          ; 0042ba93
    FLD float ptr [EAX + 0x4]           ; 0042ba9a
    FADD float ptr [ESI + 0x4]          ; 0042ba9d
    FXCH                                ; 0042baa0
    FLD float ptr [0x0061715a]          ; 0042baa2 | FLOAT_0061715a
    FXCH                                ; 0042baa8
    FMUL ST1                            ; 0042baaa
    FXCH ST2                            ; 0042baac
    FST float ptr [ESP + 0x84]          ; 0042baae
    FMUL ST1                            ; 0042bab5
    FLD float ptr [EAX + 0x8]           ; 0042bab7
    FADD float ptr [ESI + 0x8]          ; 0042baba
    LEA EAX,[ESP + 0x5c]                ; 0042babd
    FST float ptr [ESP + 0x88]          ; 0042bac1
    FMULP ST2                           ; 0042bac8
    PUSH EAX                            ; 0042baca
    LEA EAX,[ESP + 0x54]                ; 0042bacb
    FXCH ST2                            ; 0042bacf
    FSTP float ptr [ESP + 0x60]         ; 0042bad1
    PUSH EAX                            ; 0042bad5
    FXCH                                ; 0042bad6
    FSTP float ptr [ESP + 0x68]         ; 0042bad8
    PUSH EDI                            ; 0042badc
    FSTP float ptr [ESP + 0x70]         ; 0042badd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042bae1
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    MOV ESI,dword ptr [EDI + 0xb7d8]    ; 0042bae6
    ADD ESP,0xc                         ; 0042baec
    TEST ESI,ESI                        ; 0042baef
    JZ 0x0042bbf4                       ; 0042baf1
        ;   XREF to: 0042bbf4 (CONDITIONAL_JUMP)  ; LAB_0042bbf4
    MOV dword ptr [EDI + 0x2f10],0x0    ; 0042baf7
    MOV dword ptr [EDI + 0x70],0x2      ; 0042bb01
    MOV ESP,EBP                         ; 0042bb08
    POP EBP                             ; 0042bb0a
    POP EDI                             ; 0042bb0b
    POP ESI                             ; 0042bb0c
    POP EBX                             ; 0042bb0d
    RET                                 ; 0042bb0e
    FLD float ptr [ESP]                 ; 0042bb0f
        ;   Label: LAB_0042bb0f
    FLDZ                                ; 0042bb12
    FCOMPP                              ; 0042bb14
    FNSTSW AX                           ; 0042bb16
    SAHF                                ; 0042bb18
    JNC 0x0042ba5f                      ; 0042bb19
        ;   XREF to: 0042ba5f (CONDITIONAL_JUMP)  ; LAB_0042ba5f
    PUSH EBX                            ; 0042bb1f
    LEA EAX,[ESP + 0x78]                ; 0042bb20
    PUSH EAX                            ; 0042bb24
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042bb25
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042bb2a
    PUSH dword ptr [ESP]                ; 0042bb2d
    FLD float ptr [ESP + 0x4]           ; 0042bb30
    FCHS                                ; 0042bb34
    FSTP float ptr [ESP + 0x94]         ; 0042bb36
    PUSH dword ptr [ESP + 0x94]         ; 0042bb3d
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0042bb44
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EDI + 0x2610]    ; 0042bbf4
        ;   Label: LAB_0042bbf4
    PUSH EAX                            ; 0042bbfa
    PUSH 0x64                           ; 0042bbfb
    PUSH EBX                            ; 0042bbfd
    LEA EAX,[ESP + 0x5c]                ; 0042bbfe
    PUSH EAX                            ; 0042bc02
    MOV EDX,dword ptr [0x0067b9a0]      ; 0042bc03 | g_CGorePtr | g_CGoreInstance
    PUSH EDX                            ; 0042bc09 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 0042bc0a
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0042bc0f
    MOV dword ptr [EDI + 0x70],0x2      ; 0042bc12
    MOV ESP,EBP                         ; 0042bc19
    POP EBP                             ; 0042bc1b
    POP EDI                             ; 0042bc1c
    POP ESI                             ; 0042bc1d
    POP EBX                             ; 0042bc1e
    RET                                 ; 0042bc1f

