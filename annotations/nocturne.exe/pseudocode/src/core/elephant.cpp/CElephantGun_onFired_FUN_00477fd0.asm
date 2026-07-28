; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_elephant_cpp_CElephantGun_onFired_FUN_00477fd0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_0057f164
;   TerminatedCString s_sh_cock_wav_0057f16e
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_loadModel_FUN_004543b0
;   core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477fd0
        ;   Label: core_elephant.cpp_CElephantGun_onFired_FUN_00477fd0
    PUSH ESI                            ; 00477fd1
    PUSH EDI                            ; 00477fd2
    PUSH EBP                            ; 00477fd3
    SUB ESP,0x5c                        ; 00477fd4
    MOV EBX,dword ptr [ESP + 0x70]      ; 00477fd7
    PUSH 0x3ec90fdb                     ; 00477fdb
    MOV EDX,0x40a00000                  ; 00477fe0
    MOV ECX,0x40c00000                  ; 00477fe5
    MOV ESI,0xc0c00000                  ; 00477fea
    PUSH 0xbec90fdb                     ; 00477fef
    MOV dword ptr [ESP + 0x3c],EDX      ; 00477ff4
    MOV dword ptr [ESP + 0x40],ECX      ; 00477ff8
    MOV dword ptr [ESP + 0x44],ESI      ; 00477ffc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478000
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x60],EAX      ; 00478005
    FLD float ptr [ESP + 0x60]          ; 00478009
    ADD ESP,0x8                         ; 0047800d
    PUSH 0x3ec90fdb                     ; 00478010
    PUSH 0xbec90fdb                     ; 00478015
    FSTP float ptr [ESP + 0x48]         ; 0047801a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0047801e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x60],EAX      ; 00478023
    FLD float ptr [ESP + 0x60]          ; 00478027
    ADD ESP,0x8                         ; 0047802b
    LEA EAX,[ESP + 0x40]                ; 0047802e
    PUSH EAX                            ; 00478032
    LEA EAX,[ESP + 0x4]                 ; 00478033
    XOR EDI,EDI                         ; 00478037
    PUSH EAX                            ; 00478039
    FSTP float ptr [ESP + 0x4c]         ; 0047803a
    MOV dword ptr [ESP + 0x50],EDI      ; 0047803e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00478042
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00478047
    LEA EAX,[ESP + 0x34]                ; 0047804a
    PUSH EAX                            ; 0047804e
    LEA EAX,[ESP + 0x50]                ; 0047804f
    PUSH EAX                            ; 00478053
    LEA EAX,[ESP + 0x8]                 ; 00478054
    PUSH EAX                            ; 00478058
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00478059
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0047805e
    PUSH EAX                            ; 00478061
    LEA EAX,[ESP + 0x2c]                ; 00478062
    PUSH EAX                            ; 00478066
    PUSH EBX                            ; 00478067
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00478068
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 0047806d
    LEA EAX,[ESP + 0x40]                ; 0047806f
    ADD ESP,0xc                         ; 00478073
    CMP EAX,EDX                         ; 00478076
    JZ 0x0047808e                       ; 00478078
        ;   XREF to: 0047808e (CONDITIONAL_JUMP)  ; LAB_0047808e
    MOV EAX,dword ptr [EDX]             ; 0047807a
    MOV dword ptr [ESP + 0x34],EAX      ; 0047807c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00478080
    MOV dword ptr [ESP + 0x38],EAX      ; 00478083
    MOV EAX,dword ptr [EDX + 0x8]       ; 00478087
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047808a
    PUSH 0x57f164                       ; 0047808e | = "shell.kfm"
        ;   Label: LAB_0047808e
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 00478093
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_004543b0(char * filename)
    ADD ESP,0x4                         ; 00478098
    PUSH EAX                            ; 0047809b
    LEA EAX,[ESP + 0x38]                ; 0047809c
    PUSH EAX                            ; 004780a0
    LEA EAX,[EBX + 0x30]                ; 004780a1
    PUSH EAX                            ; 004780a4
    LEA EAX,[EBX + 0x20]                ; 004780a5
    PUSH EAX                            ; 004780a8
    MOV EBP,dword ptr [0x005b80f0]      ; 004780a9 | DAT_005b80f0
    PUSH EBP                            ; 004780af
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0 ; 004780b0
        ;   XREF to: 0048c6b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 004780b5
    PUSH 0x57f16e                       ; 004780b8 | = "sh-cock.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004780bd
    PUSH EBX                            ; 004780c3
    CALL dword ptr [EAX + 0x24]         ; 004780c4
    ADD ESP,0x8                         ; 004780c7
    ADD ESP,0x5c                        ; 004780ca
    POP EBP                             ; 004780cd
    POP EDI                             ; 004780ce
    POP ESI                             ; 004780cf
    POP EBX                             ; 004780d0
    RET                                 ; 004780d1

