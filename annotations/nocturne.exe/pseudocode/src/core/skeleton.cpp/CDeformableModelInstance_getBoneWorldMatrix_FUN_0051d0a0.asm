; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   FUN_00420eb0 at 00420ed3
;   FUN_00499b00 at 00499beb
;   FUN_004ab110 at 004ab133
;   FUN_004d4f30 at 004d51d4
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 at 0051d346
;   core_zombie.cpp_FUN_00561940 at 00561983
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
;   core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80
;   core_xform.cpp_transformVector3x4_FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d0a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
    PUSH EDI                            ; 0051d0a1
    PUSH EBP                            ; 0051d0a2
    SUB ESP,0xa0                        ; 0051d0a3
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0051d0a9
    MOV EBP,ESI                         ; 0051d0b0
    CMP dword ptr [ESP + 0xb4],0x0      ; 0051d0b2
    JL 0x0051d1ae                       ; 0051d0ba
        ;   XREF to: 0051d1ae (CONDITIONAL_JUMP)  ; LAB_0051d1ae
    PUSH EBX                            ; 0051d0c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051d0c1
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 0051d0c6
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0051d0c9
    MOV ESI,EAX                         ; 0051d0d0
    LEA EAX,[EDX*0x8 + 0x0]             ; 0051d0d2
    ADD EAX,EDX                         ; 0051d0d9
    MOV ESI,dword ptr [ESI + EAX*0x4 + 0x2857c] ; 0051d0db
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d0e2
    SUB EAX,EDX                         ; 0051d0e9
    SHL EAX,0x2                         ; 0051d0eb
    MOV dword ptr [ESP + 0x9c],EAX      ; 0051d0ee
    TEST ESI,ESI                        ; 0051d0f5
    JL 0x0051d1db                       ; 0051d0f7
        ;   XREF to: 0051d1db (CONDITIONAL_JUMP)  ; LAB_0051d1db
    PUSH ESI                            ; 0051d0fd
    PUSH EBX                            ; 0051d0fe
    LEA ESI,[ESP + 0x8]                 ; 0051d0ff
    LEA EDI,[ESP + 0x68]                ; 0051d103
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 ; 0051d107
        ;   XREF to: 0051d0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0()
    MOV ECX,0xc                         ; 0051d10c
    LEA ESI,[ESP + 0x8]                 ; 0051d111
    ADD ESP,0x8                         ; 0051d115
    LEA EAX,[ESP + 0x60]                ; 0051d118
    MOVSD.REP ES:EDI,ESI                ; 0051d11c
    PUSH EAX                            ; 0051d11e
    MOV ECX,dword ptr [ESP + 0xa0]      ; 0051d11f
    LEA EAX,[EBX + 0x58]                ; 0051d126
    ADD EAX,ECX                         ; 0051d129
    PUSH EAX                            ; 0051d12b
    LEA EAX,[ESP + 0x98]                ; 0051d12c
    PUSH EAX                            ; 0051d133
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0051d134
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 0051d139
    MOV EAX,dword ptr [ESP + 0x90]      ; 0051d13c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051d143
    MOV EAX,dword ptr [ESP + 0x94]      ; 0051d147
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051d14e
    MOV EAX,dword ptr [ESP + 0x98]      ; 0051d152
    MOV dword ptr [ESP + 0x5c],EAX      ; 0051d159
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051d15d
        ;   Label: LAB_0051d15d
    LEA EDX,[EBX + 0x6b0]               ; 0051d164
    SHL EAX,0x4                         ; 0051d16a
    ADD EAX,EDX                         ; 0051d16d
    PUSH EAX                            ; 0051d16f
    LEA EAX,[ESP + 0x34]                ; 0051d170
    PUSH EAX                            ; 0051d174
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70 ; 0051d175
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70()
    ADD ESP,0x8                         ; 0051d17a
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051d17d
    SHL EAX,0x2                         ; 0051d184
    ADD EBX,EAX                         ; 0051d187
    CMP dword ptr [EBX + 0xcf0],0x3f800000 ; 0051d189
    JNZ 0x0051d20a                      ; 0051d193
        ;   XREF to: 0051d20a (CONDITIONAL_JUMP)  ; LAB_0051d20a
    MOV ECX,0xc                         ; 0051d195
        ;   Label: LAB_0051d195
    LEA ESI,[ESP + 0x30]                ; 0051d19a
    MOV EDI,EBP                         ; 0051d19e
    MOVSD.REP ES:EDI,ESI                ; 0051d1a0
    MOV EAX,EBP                         ; 0051d1a2
    ADD ESP,0xa0                        ; 0051d1a4
    POP EBP                             ; 0051d1aa
    POP EDI                             ; 0051d1ab
    POP EBX                             ; 0051d1ac
    RET                                 ; 0051d1ad
    LEA EAX,[ESP + 0x30]                ; 0051d1ae
        ;   Label: LAB_0051d1ae
    PUSH EAX                            ; 0051d1b2
    CALL core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80 ; 0051d1b3
        ;   XREF to: 0055ac80 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setRotationScaleIdentity_FUN_0055ac80()
    ADD ESP,0x4                         ; 0051d1b8
    MOV EAX,dword ptr [EBX + 0x6a4]     ; 0051d1bb
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051d1c1
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0051d1c5
    MOV dword ptr [ESP + 0x4c],EAX      ; 0051d1cb
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0051d1cf
    MOV dword ptr [ESP + 0x5c],EAX      ; 0051d1d5
    JMP 0x0051d195                      ; 0051d1d9
        ;   XREF to: 0051d195 (UNCONDITIONAL_JUMP)  ; LAB_0051d195
    FLD float ptr [EBX + 0x6a4]         ; 0051d1db
        ;   Label: LAB_0051d1db
    FADD float ptr [EBX + EAX*0x1 + 0x58] ; 0051d1e1
    FSTP float ptr [ESP + 0x3c]         ; 0051d1e5
    FLD float ptr [EBX + 0x6a8]         ; 0051d1e9
    FADD float ptr [EBX + EAX*0x1 + 0x5c] ; 0051d1ef
    FSTP float ptr [ESP + 0x4c]         ; 0051d1f3
    FLD float ptr [EBX + 0x6ac]         ; 0051d1f7
    FADD float ptr [EBX + EAX*0x1 + 0x60] ; 0051d1fd
    FSTP float ptr [ESP + 0x5c]         ; 0051d201
    JMP 0x0051d15d                      ; 0051d205
        ;   XREF to: 0051d15d (UNCONDITIONAL_JUMP)  ; LAB_0051d15d
    FLD float ptr [ESP + 0x30]          ; 0051d20a
        ;   Label: LAB_0051d20a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d20e
    FLD float ptr [ESP + 0x34]          ; 0051d214
    FXCH                                ; 0051d218
    FSTP float ptr [ESP + 0x30]         ; 0051d21a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d21e
    FLD float ptr [ESP + 0x38]          ; 0051d224
    FXCH                                ; 0051d228
    FSTP float ptr [ESP + 0x34]         ; 0051d22a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d22e
    FLD float ptr [ESP + 0x40]          ; 0051d234
    FXCH                                ; 0051d238
    FSTP float ptr [ESP + 0x38]         ; 0051d23a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d23e
    FLD float ptr [ESP + 0x44]          ; 0051d244
    FXCH                                ; 0051d248
    FSTP float ptr [ESP + 0x40]         ; 0051d24a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d24e
    FLD float ptr [ESP + 0x48]          ; 0051d254
    FXCH                                ; 0051d258
    FSTP float ptr [ESP + 0x44]         ; 0051d25a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d25e
    FLD float ptr [ESP + 0x50]          ; 0051d264
    FXCH                                ; 0051d268
    FSTP float ptr [ESP + 0x48]         ; 0051d26a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d26e
    FLD float ptr [ESP + 0x54]          ; 0051d274
    FXCH                                ; 0051d278
    FSTP float ptr [ESP + 0x50]         ; 0051d27a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d27e
    FLD float ptr [ESP + 0x58]          ; 0051d284
    FXCH                                ; 0051d288
    FSTP float ptr [ESP + 0x54]         ; 0051d28a
    FMUL float ptr [EBX + 0xcf0]        ; 0051d28e
    FSTP float ptr [ESP + 0x58]         ; 0051d294
    JMP 0x0051d195                      ; 0051d298
        ;   XREF to: 0051d195 (UNCONDITIONAL_JUMP)  ; LAB_0051d195

