; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[17]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0bbc
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 at 0043336e
;   core_charactr.cpp_FUN_0042f310 at 0042f414
;   core_cloth.cpp_FUN_0043cb00 at 0043cf48
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598944
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a64e
;   core_prye.cpp_FUN_00518cd0 at 00519c5d
;   core_pryemorp.cpp_CPryeMorph_setup_FUN_005275c0 at 005276e3
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 at 0054c122
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180 at 0054c19e
;   ... and 7 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dd10
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
    PUSH ESI                            ; 0054dd11
    PUSH EDI                            ; 0054dd12
    PUSH EBP                            ; 0054dd13
    SUB ESP,0x38                        ; 0054dd14
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0054dd17
    PUSH EDX                            ; 0054dd1b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054dd1c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054dd21
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 0054dd24
    XOR ECX,ECX                         ; 0054dd2a
    MOV dword ptr [ESP + 0x18],EAX      ; 0054dd2c
    MOV dword ptr [ESP + 0x28],ECX      ; 0054dd30
    TEST EBX,EBX                        ; 0054dd34
    JLE 0x0054de48                      ; 0054dd36
        ;   XREF to: 0054de48 (CONDITIONAL_JUMP)  ; LAB_0054de48
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054dd3c
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0054dd40
    MOV dword ptr [ESP + 0x2c],ECX      ; 0054dd44
    MOV dword ptr [ESP + 0x20],EAX      ; 0054dd48
    ADD EBX,0xe80                       ; 0054dd4c
    ADD ESI,0x6b0                       ; 0054dd52
    MOV dword ptr [ESP + 0x1c],EBX      ; 0054dd58
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054dd5c
    MOV dword ptr [ESP + 0x34],ESI      ; 0054dd60
    ADD EBX,0x58                        ; 0054dd64
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0054dd67
    MOV dword ptr [ESP + 0x30],EBX      ; 0054dd6b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0054dd6f
    MOV dword ptr [ESP + 0x24],EBP      ; 0054dd73
    MOV EBP,EBX                         ; 0054dd77
    IMUL ESI,dword ptr [ESP + 0x28],0x30 ; 0054dd79
        ;   Label: LAB_0054dd79
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054dd7e
    PUSH ECX                            ; 0054dd82
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054dd83
    PUSH EAX                            ; 0054dd87
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0 ; 0054dd88
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005855f0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0xcf0]     ; 0054dd8d
    ADD ESP,0x8                         ; 0054dd93
    CMP EDX,0x3f800000                  ; 0054dd96
    JNZ 0x0054de5e                      ; 0054dd9c
        ;   XREF to: 0054de5e (CONDITIONAL_JUMP)  ; LAB_0054de5e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054dda2
        ;   Label: LAB_0054dda2
    MOV EAX,dword ptr [EAX + 0x1de9c]   ; 0054dda6
    TEST EAX,EAX                        ; 0054ddac
    JL 0x0054df1b                       ; 0054ddae
        ;   XREF to: 0054df1b (CONDITIONAL_JUMP)  ; LAB_0054df1b
    IMUL EAX,EAX,0x30                   ; 0054ddb4
    ADD EAX,dword ptr [ESP + 0x1c]      ; 0054ddb7
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054ddbb
    PUSH EAX                            ; 0054ddbf
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054ddc0
    ADD EAX,EDI                         ; 0054ddc4
    PUSH EAX                            ; 0054ddc6
    LEA ESI,[ESP + 0x14]                ; 0054ddc7
    LEA EDI,[ESP + 0x8]                 ; 0054ddcb
    CALL core_xform.cpp_FUN_00583260    ; 0054ddcf
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x14]                ; 0054ddd4
    ADD ESP,0x8                         ; 0054ddd8
    MOVSD ES:EDI,ESI                    ; 0054dddb
    MOVSD ES:EDI,ESI                    ; 0054dddc
    MOVSD ES:EDI,ESI                    ; 0054dddd
    MOV EAX,dword ptr [ESP]             ; 0054ddde
    MOV dword ptr [EBP + 0xe8c],EAX     ; 0054dde1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054dde7
    MOV dword ptr [EBP + 0xe9c],EAX     ; 0054ddeb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054ddf1
    MOV dword ptr [EBP + 0xeac],EAX     ; 0054ddf5
    MOV ESI,dword ptr [ESP + 0x24]      ; 0054ddfb
        ;   Label: LAB_0054ddfb
    MOV EDI,dword ptr [ESP + 0x34]      ; 0054ddff
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0054de03
    MOV EDX,dword ptr [ESP + 0x20]      ; 0054de07
    MOV ECX,dword ptr [ESP + 0x28]      ; 0054de0b
    ADD EBX,0x4                         ; 0054de0f
    ADD EBP,0x30                        ; 0054de12
    ADD ESI,0x30                        ; 0054de15
    ADD EDI,0x10                        ; 0054de18
    ADD EAX,0xc                         ; 0054de1b
    ADD EDX,0x24                        ; 0054de1e
    INC ECX                             ; 0054de21
    MOV dword ptr [ESP + 0x24],ESI      ; 0054de22
    MOV dword ptr [ESP + 0x34],EDI      ; 0054de26
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054de2a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054de2e
    MOV dword ptr [ESP + 0x20],EDX      ; 0054de32
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0054de36
    MOV dword ptr [ESP + 0x28],ECX      ; 0054de3c
    CMP ECX,EDI                         ; 0054de40
    JL 0x0054dd79                       ; 0054de42
        ;   XREF to: 0054dd79 (CONDITIONAL_JUMP)  ; LAB_0054dd79
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054de48
        ;   Label: LAB_0054de48
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 0054de4c
    ADD ESP,0x38                        ; 0054de56
    POP EBP                             ; 0054de59
    POP EDI                             ; 0054de5a
    POP ESI                             ; 0054de5b
    POP EBX                             ; 0054de5c
    RET                                 ; 0054de5d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054de5e
        ;   Label: LAB_0054de5e
    FLD float ptr [EBX + 0xcf0]         ; 0054de62
    FMUL float ptr [ESI + EAX*0x1 + 0xe80] ; 0054de68
    FSTP float ptr [ESI + EAX*0x1 + 0xe80] ; 0054de6f
    FLD float ptr [EBX + 0xcf0]         ; 0054de76
    FMUL float ptr [ESI + EAX*0x1 + 0xe84] ; 0054de7c
    FSTP float ptr [ESI + EAX*0x1 + 0xe84] ; 0054de83
    FLD float ptr [EBX + 0xcf0]         ; 0054de8a
    FMUL float ptr [ESI + EAX*0x1 + 0xe88] ; 0054de90
    FSTP float ptr [ESI + EAX*0x1 + 0xe88] ; 0054de97
    FLD float ptr [EBX + 0xcf0]         ; 0054de9e
    FMUL float ptr [ESI + EAX*0x1 + 0xe90] ; 0054dea4
    FSTP float ptr [ESI + EAX*0x1 + 0xe90] ; 0054deab
    FLD float ptr [EBX + 0xcf0]         ; 0054deb2
    FMUL float ptr [ESI + EAX*0x1 + 0xe94] ; 0054deb8
    FSTP float ptr [ESI + EAX*0x1 + 0xe94] ; 0054debf
    FLD float ptr [EBX + 0xcf0]         ; 0054dec6
    FMUL float ptr [ESI + EAX*0x1 + 0xe98] ; 0054decc
    FSTP float ptr [ESI + EAX*0x1 + 0xe98] ; 0054ded3
    FLD float ptr [EBX + 0xcf0]         ; 0054deda
    FMUL float ptr [ESI + EAX*0x1 + 0xea0] ; 0054dee0
    FSTP float ptr [ESI + EAX*0x1 + 0xea0] ; 0054dee7
    FLD float ptr [EBX + 0xcf0]         ; 0054deee
    FMUL float ptr [ESI + EAX*0x1 + 0xea4] ; 0054def4
    FSTP float ptr [ESI + EAX*0x1 + 0xea4] ; 0054defb
    FLD float ptr [EBX + 0xcf0]         ; 0054df02
    FMUL float ptr [ESI + EAX*0x1 + 0xea8] ; 0054df08
    FSTP float ptr [ESI + EAX*0x1 + 0xea8] ; 0054df0f
    JMP 0x0054dda2                      ; 0054df16
        ;   XREF to: 0054dda2 (UNCONDITIONAL_JUMP)  ; LAB_0054dda2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0054df1b
        ;   Label: LAB_0054df1b
    ADD EAX,dword ptr [ESP + 0x2c]      ; 0054df1f
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0054df23
    FLD float ptr [EAX + 0x58]          ; 0054df27
    FADD float ptr [ESI + 0x6a4]        ; 0054df2a
    FSTP float ptr [EBP + 0xe8c]        ; 0054df30
    FLD float ptr [EAX + 0x5c]          ; 0054df36
    FADD float ptr [ESI + 0x6a8]        ; 0054df39
    FSTP float ptr [EBP + 0xe9c]        ; 0054df3f
    FLD float ptr [EAX + 0x60]          ; 0054df45
    FADD float ptr [ESI + 0x6ac]        ; 0054df48
    FSTP float ptr [EBP + 0xeac]        ; 0054df4e
    JMP 0x0054ddfb                      ; 0054df54
        ;   XREF to: 0054ddfb (UNCONDITIONAL_JUMP)  ; LAB_0054ddfb

