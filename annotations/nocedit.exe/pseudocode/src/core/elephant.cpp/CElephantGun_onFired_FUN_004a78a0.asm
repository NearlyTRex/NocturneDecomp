; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_onFired_FUN_004a78a0(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x3f      Stack[-0x6c]:36  local_6c
; CVector3f        Stack[-0x44]:12  local_44
; CVector3f        Stack[-0x38]:12  local_38
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_00624022
;   TerminatedCString s_sh_cock_wav_0062402c
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

    PUSH EBX                            ; 004a78a0
        ;   Label: core_elephant.cpp_CElephantGun_onFired_FUN_004a78a0
    PUSH ESI                            ; 004a78a1
    PUSH EDI                            ; 004a78a2
    PUSH EBP                            ; 004a78a3
    SUB ESP,0x5c                        ; 004a78a4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004a78a7
    PUSH 0x3ec90fdb                     ; 004a78ab
    MOV EDX,0x40a00000                  ; 004a78b0
    MOV ECX,0x40c00000                  ; 004a78b5
    MOV ESI,0xc0c00000                  ; 004a78ba
    PUSH 0xbec90fdb                     ; 004a78bf
    MOV dword ptr [ESP + 0x3c],EDX      ; 004a78c4
    MOV dword ptr [ESP + 0x40],ECX      ; 004a78c8
    MOV dword ptr [ESP + 0x44],ESI      ; 004a78cc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a78d0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 004a78d5
    FLD float ptr [ESP + 0x60]          ; 004a78d9
    ADD ESP,0x8                         ; 004a78dd
    PUSH 0x3ec90fdb                     ; 004a78e0
    PUSH 0xbec90fdb                     ; 004a78e5
    FSTP float ptr [ESP + 0x48]         ; 004a78ea
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a78ee
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x60],EAX      ; 004a78f3
    FLD float ptr [ESP + 0x60]          ; 004a78f7
    ADD ESP,0x8                         ; 004a78fb
    LEA EAX,[ESP + 0x40]                ; 004a78fe
    PUSH EAX                            ; 004a7902
    LEA EAX,[ESP + 0x4]                 ; 004a7903
    XOR EDI,EDI                         ; 004a7907
    PUSH EAX                            ; 004a7909
    FSTP float ptr [ESP + 0x4c]         ; 004a790a
    MOV dword ptr [ESP + 0x50],EDI      ; 004a790e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004a7912
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004a7917
    LEA EAX,[ESP + 0x34]                ; 004a791a
    PUSH EAX                            ; 004a791e
    LEA EAX,[ESP + 0x50]                ; 004a791f
    PUSH EAX                            ; 004a7923
    LEA EAX,[ESP + 0x8]                 ; 004a7924
    PUSH EAX                            ; 004a7928
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004a7929
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004a792e
    PUSH EAX                            ; 004a7931
    LEA EAX,[ESP + 0x2c]                ; 004a7932
    PUSH EAX                            ; 004a7936
    PUSH EBX                            ; 004a7937
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004a7938
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004a793d
    LEA EAX,[ESP + 0x40]                ; 004a793f
    ADD ESP,0xc                         ; 004a7943
    CMP EAX,EDX                         ; 004a7946
    JZ 0x004a795e                       ; 004a7948
        ;   XREF to: 004a795e (CONDITIONAL_JUMP)  ; LAB_004a795e
    MOV EAX,dword ptr [EDX]             ; 004a794a
    MOV dword ptr [ESP + 0x34],EAX      ; 004a794c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a7950
    MOV dword ptr [ESP + 0x38],EAX      ; 004a7953
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a7957
    MOV dword ptr [ESP + 0x3c],EAX      ; 004a795a
    PUSH 0x624022                       ; 004a795e | = "shell.kfm"
        ;   Label: LAB_004a795e
    CALL core_dmodel.cpp_loadModel_FUN_00478c00 ; 004a7963
        ;   XREF to: 00478c00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
    ADD ESP,0x4                         ; 004a7968
    PUSH EAX                            ; 004a796b
    LEA EAX,[ESP + 0x38]                ; 004a796c
    PUSH EAX                            ; 004a7970
    LEA EAX,[EBX + 0x30]                ; 004a7971
    PUSH EAX                            ; 004a7974
    LEA EAX,[EBX + 0x20]                ; 004a7975
    PUSH EAX                            ; 004a7978
    MOV EBP,dword ptr [0x0067a3d0]      ; 004a7979 | g_CFireEffectPtr
    PUSH EBP                            ; 004a797f | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004c91e0 ; 004a7980
        ;   XREF to: 004c91e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004c91e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 004a7985
    PUSH 0x62402c                       ; 004a7988 | = "sh-cock.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a798d
    PUSH EBX                            ; 004a7993
    CALL dword ptr [EAX + 0x24]         ; 004a7994
    ADD ESP,0x8                         ; 004a7997
    ADD ESP,0x5c                        ; 004a799a
    POP EBP                             ; 004a799d
    POP EDI                             ; 004a799e
    POP ESI                             ; 004a799f
    POP EBX                             ; 004a79a0
    RET                                 ; 004a79a1

