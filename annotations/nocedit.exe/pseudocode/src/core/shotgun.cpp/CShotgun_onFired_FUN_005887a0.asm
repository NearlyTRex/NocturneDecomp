; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_CShotgun_onFired_FUN_005887a0(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x3f      Stack[-0x64]:36  local_64
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; CVector3f        Stack[-0x24]:12  local_24
; CVector3f        Stack[-0x18]:12  local_18
; float            Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_00649b4f
;   TerminatedCString s_shotgun_cock_wav_00649b59
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dmodel.cpp_loadModel_FUN_00478c00
;   core_fire.cpp_CFireEffect_createShell_FUN_004c91e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005887a0
        ;   Label: core_shotgun.cpp_CShotgun_onFired_FUN_005887a0
    PUSH EBP                            ; 005887a1
    SUB ESP,0x5c                        ; 005887a2
    MOV EBX,dword ptr [ESP + 0x68]      ; 005887a5
    CMP dword ptr [EBX + 0x568],0x0     ; 005887a9
    JG 0x005887b8                       ; 005887b0
        ;   XREF to: 005887b8 (CONDITIONAL_JUMP)  ; LAB_005887b8
    ADD ESP,0x5c                        ; 005887b2
    POP EBP                             ; 005887b5
    POP EBX                             ; 005887b6
    RET                                 ; 005887b7
    PUSH EDI                            ; 005887b8
        ;   Label: LAB_005887b8
    PUSH ESI                            ; 005887b9
    PUSH 0x3ec90fdb                     ; 005887ba
    MOV ECX,0x40a00000                  ; 005887bf
    MOV ESI,0x40c00000                  ; 005887c4
    MOV EDI,0xc0c00000                  ; 005887c9
    PUSH 0xbec90fdb                     ; 005887ce
    MOV dword ptr [ESP + 0x44],ECX      ; 005887d3
    MOV dword ptr [ESP + 0x48],ESI      ; 005887d7
    MOV dword ptr [ESP + 0x4c],EDI      ; 005887db
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005887df
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 005887e4
    FLD float ptr [ESP + 0x68]          ; 005887e8
    ADD ESP,0x8                         ; 005887ec
    PUSH 0x3ec90fdb                     ; 005887ef
    PUSH 0xbec90fdb                     ; 005887f4
    FSTP float ptr [ESP + 0x50]         ; 005887f9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005887fd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 00588802
    FLD float ptr [ESP + 0x68]          ; 00588806
    ADD ESP,0x8                         ; 0058880a
    LEA EAX,[ESP + 0x48]                ; 0058880d
    PUSH EAX                            ; 00588811
    LEA EAX,[ESP + 0xc]                 ; 00588812
    XOR EBP,EBP                         ; 00588816
    PUSH EAX                            ; 00588818
    FSTP float ptr [ESP + 0x54]         ; 00588819
    MOV dword ptr [ESP + 0x58],EBP      ; 0058881d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00588821
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00588826
    LEA EAX,[ESP + 0x3c]                ; 00588829
    PUSH EAX                            ; 0058882d
    LEA EAX,[ESP + 0x58]                ; 0058882e
    PUSH EAX                            ; 00588832
    LEA EAX,[ESP + 0x10]                ; 00588833
    PUSH EAX                            ; 00588837
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00588838
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0058883d
    PUSH EAX                            ; 00588840
    LEA EAX,[ESP + 0x34]                ; 00588841
    PUSH EAX                            ; 00588845
    PUSH EBX                            ; 00588846
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00588847
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 0058884c
    LEA EAX,[ESP + 0x48]                ; 0058884e
    ADD ESP,0xc                         ; 00588852
    CMP EAX,EDX                         ; 00588855
    JZ 0x0058886d                       ; 00588857
        ;   XREF to: 0058886d (CONDITIONAL_JUMP)  ; LAB_0058886d
    MOV EAX,dword ptr [EDX]             ; 00588859
    MOV dword ptr [ESP + 0x3c],EAX      ; 0058885b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0058885f
    MOV dword ptr [ESP + 0x40],EAX      ; 00588862
    MOV EAX,dword ptr [EDX + 0x8]       ; 00588866
    MOV dword ptr [ESP + 0x44],EAX      ; 00588869
    PUSH 0x649b4f                       ; 0058886d | = "shell.kfm"
        ;   Label: LAB_0058886d
    CALL core_dmodel.cpp_loadModel_FUN_00478c00 ; 00588872
        ;   XREF to: 00478c00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
    ADD ESP,0x4                         ; 00588877
    PUSH EAX                            ; 0058887a
    LEA EAX,[ESP + 0x40]                ; 0058887b
    PUSH EAX                            ; 0058887f
    LEA EAX,[EBX + 0x30]                ; 00588880
    PUSH EAX                            ; 00588883
    LEA EAX,[EBX + 0x20]                ; 00588884
    PUSH EAX                            ; 00588887
    MOV EAX,[0x0067a3d0]                ; 00588888 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 0058888d | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004c91e0 ; 0058888e
        ;   XREF to: 004c91e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004c91e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 00588893
    PUSH 0x649b59                       ; 00588896 | = "shotgun-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058889b
    PUSH EBX                            ; 005888a1
    CALL dword ptr [EAX + 0x24]         ; 005888a2
    ADD ESP,0x8                         ; 005888a5
    POP ESI                             ; 005888a8
    POP EDI                             ; 005888a9
    ADD ESP,0x5c                        ; 005888aa
    POP EBP                             ; 005888ad
    POP EBX                             ; 005888ae
    RET                                 ; 005888af

