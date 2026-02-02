; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x2f0]:8  local_2f0
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_conveyor.cpp_FUN_004421c0 at 004422db
;
; Referenced Globals:
;   void* switchdataD_0054e9f0 = 0054eb61
;   double DOUBLE_0063fc6e = 4
;   double DOUBLE_0063fc76 = 0.25
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_platfrm.cpp_CPlatform_FUN_0054cab0
;   core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;   core_xform.cpp_matrixToQuaternion_FUN_005f7420
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ea00
        ;   Label: core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00
    PUSH ESI                            ; 0054ea01
    PUSH EDI                            ; 0054ea02
    PUSH EBP                            ; 0054ea03
    MOV EBP,ESP                         ; 0054ea04
    SUB ESP,0x2dc                       ; 0054ea06
    AND ESP,0xfffffff8                  ; 0054ea0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0054ea0f
    CMP dword ptr [EBX + 0x724],0x4     ; 0054ea12
    JZ 0x0054ebff                       ; 0054ea19
        ;   XREF to: 0054ebff (CONDITIONAL_JUMP)  ; LAB_0054ebff
    CMP byte ptr [EBX + 0x2f0],0x0      ; 0054ea1f
    JNZ 0x0054ec0f                      ; 0054ea26
        ;   XREF to: 0054ec0f (CONDITIONAL_JUMP)  ; LAB_0054ec0f
    LEA EAX,[EBX + 0x31c]               ; 0054ea2c
    LEA EDX,[EBX + 0x328]               ; 0054ea32
    FLD float ptr [EAX]                 ; 0054ea38
    FSUB float ptr [EDX]                ; 0054ea3a
    FSTP float ptr [ESP + 0x2a4]        ; 0054ea3c
    FLD float ptr [EAX + 0x4]           ; 0054ea43
    FSUB float ptr [EDX + 0x4]          ; 0054ea46
    FST float ptr [ESP + 0x2a8]         ; 0054ea49
    FMUL float ptr [ESP + 0x2a8]        ; 0054ea50
    FLD float ptr [ESP + 0x2a4]         ; 0054ea57
    FMUL ST0                            ; 0054ea5e
    FLD float ptr [EAX + 0x8]           ; 0054ea60
    FSUB float ptr [EDX + 0x8]          ; 0054ea63
    FXCH                                ; 0054ea66
    FADDP ST2,ST0                       ; 0054ea68
    FST float ptr [ESP + 0x2ac]         ; 0054ea6a
    FMUL float ptr [ESP + 0x2ac]        ; 0054ea71
    FADDP                               ; 0054ea78
    FSQRT                               ; 0054ea7a
    FLD1                                ; 0054ea7c
    FXCH                                ; 0054ea7e
    FSTP double ptr [ESP]               ; 0054ea80
    FCOMP double ptr [ESP]              ; 0054ea83
    FNSTSW AX                           ; 0054ea86
    SAHF                                ; 0054ea88
    JNC 0x0054ec32                      ; 0054ea89
        ;   XREF to: 0054ec32 (CONDITIONAL_JUMP)  ; LAB_0054ec32
    FLD1                                ; 0054ea8f
    FDIV double ptr [ESP]               ; 0054ea91
    FSTP float ptr [ESP + 0x8]          ; 0054ea94
    PUSH 0x1d                           ; 0054ea98
        ;   Label: LAB_0054ea98
    MOV EAX,[0x0067cf44]                ; 0054ea9a | g_CKeysPtr
    PUSH EAX                            ; 0054ea9f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054eaa0 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0054eaa2
    ADD ESP,0x8                         ; 0054eaa4
    TEST EAX,EAX                        ; 0054eaa7
    JZ 0x0054eb30                       ; 0054eaa9
        ;   XREF to: 0054eb30 (CONDITIONAL_JUMP)  ; LAB_0054eb30
    PUSH 0x47                           ; 0054eaaf
    MOV EAX,[0x0067cf44]                ; 0054eab1 | g_CKeysPtr
    PUSH EAX                            ; 0054eab6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054eab7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0054eab9
    ADD ESP,0x8                         ; 0054eabc
    TEST EAX,EAX                        ; 0054eabf
    JZ 0x0054eb30                       ; 0054eac1
        ;   XREF to: 0054eb30 (CONDITIONAL_JUMP)  ; LAB_0054eb30
    LEA EAX,[EBX + 0x328]               ; 0054eac3
    LEA EDX,[EBX + 0x20]                ; 0054eac9
    MOV ECX,EAX                         ; 0054eacc
    CMP EAX,EDX                         ; 0054eace
    JZ 0x0054eae2                       ; 0054ead0
        ;   XREF to: 0054eae2 (CONDITIONAL_JUMP)  ; LAB_0054eae2
    MOV ESI,dword ptr [EDX]             ; 0054ead2
    MOV dword ptr [EAX],ESI             ; 0054ead4
    MOV ESI,dword ptr [EDX + 0x4]       ; 0054ead6
    MOV dword ptr [EAX + 0x4],ESI       ; 0054ead9
    MOV ESI,dword ptr [EDX + 0x8]       ; 0054eadc
    MOV dword ptr [EAX + 0x8],ESI       ; 0054eadf
    LEA EAX,[EBX + 0x31c]               ; 0054eae2
        ;   Label: LAB_0054eae2
    CMP EAX,ECX                         ; 0054eae8
    JZ 0x0054eafc                       ; 0054eaea
        ;   XREF to: 0054eafc (CONDITIONAL_JUMP)  ; LAB_0054eafc
    MOV EDX,dword ptr [ECX]             ; 0054eaec
    MOV dword ptr [EAX],EDX             ; 0054eaee
    MOV EDX,dword ptr [ECX + 0x4]       ; 0054eaf0
    MOV dword ptr [EAX + 0x4],EDX       ; 0054eaf3
    MOV EDX,dword ptr [ECX + 0x8]       ; 0054eaf6
    MOV dword ptr [EAX + 0x8],EDX       ; 0054eaf9
    LEA EAX,[EBX + 0x30]                ; 0054eafc
        ;   Label: LAB_0054eafc
    PUSH EAX                            ; 0054eaff
    LEA ESI,[ESP + 0x258]               ; 0054eb00
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0054eb07
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x258]               ; 0054eb0c
    LEA EDI,[EBX + 0x344]               ; 0054eb13
    ADD ESP,0x4                         ; 0054eb19
    MOVSD ES:EDI,ESI                    ; 0054eb1c
    MOVSD ES:EDI,ESI                    ; 0054eb1d
    MOVSD ES:EDI,ESI                    ; 0054eb1e
    MOVSD ES:EDI,ESI                    ; 0054eb1f
    LEA EDI,[EBX + 0x334]               ; 0054eb20
    LEA ESI,[EBX + 0x344]               ; 0054eb26
    MOVSD ES:EDI,ESI                    ; 0054eb2c
    MOVSD ES:EDI,ESI                    ; 0054eb2d
    MOVSD ES:EDI,ESI                    ; 0054eb2e
    MOVSD ES:EDI,ESI                    ; 0054eb2f
    PUSH 0x15                           ; 0054eb30
        ;   Label: LAB_0054eb30
    MOV EAX,[0x0067cf44]                ; 0054eb32 | g_CKeysPtr
    PUSH EAX                            ; 0054eb37 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054eb38 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0054eb3a
    ADD ESP,0x8                         ; 0054eb3d
    TEST EAX,EAX                        ; 0054eb40
    JZ 0x0054eb4f                       ; 0054eb42
        ;   XREF to: 0054eb4f (CONDITIONAL_JUMP)  ; LAB_0054eb4f
    PUSH 0x0                            ; 0054eb44
    PUSH EBX                            ; 0054eb46
    CALL core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480 ; 0054eb47
        ;   XREF to: 0054e480 (UNCONDITIONAL_CALL)  ; int core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform * this_ptr)
    ADD ESP,0x8                         ; 0054eb4c
    MOV EAX,dword ptr [EBX + 0x724]     ; 0054eb4f
        ;   Label: LAB_0054eb4f
    CMP EAX,0x3                         ; 0054eb55
    JA 0x0054eb61                       ; 0054eb58
        ;   XREF to: 0054eb61 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EAX*0x4 + 0x54e9f0]  ; 0054eb5a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x2a                           ; 0054eb61
        ;   Label: caseD_0
    MOV EAX,[0x0067cf44]                ; 0054eb63 | g_CKeysPtr
    PUSH EAX                            ; 0054eb68 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054eb69 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0054eb6b
    ADD ESP,0x8                         ; 0054eb6d
    TEST EAX,EAX                        ; 0054eb70
    JZ 0x0054eb86                       ; 0054eb72
        ;   XREF to: 0054eb86 (CONDITIONAL_JUMP)  ; LAB_0054eb86
    FLD float ptr [ESP + 0x8]           ; 0054eb74
    FLD ST0                             ; 0054eb78
    FMUL double ptr [0x0063fc6e]        ; 0054eb7a | DOUBLE_0063fc6e
    FSTP ST1                            ; 0054eb80
    FSTP float ptr [ESP + 0x8]          ; 0054eb82
    PUSH 0x38                           ; 0054eb86
        ;   Label: LAB_0054eb86
    MOV EAX,[0x0067cf44]                ; 0054eb88 | g_CKeysPtr
    PUSH EAX                            ; 0054eb8d | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054eb8e | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0054eb90
    ADD ESP,0x8                         ; 0054eb92
    TEST EAX,EAX                        ; 0054eb95
    JZ 0x0054eba7                       ; 0054eb97
        ;   XREF to: 0054eba7 (CONDITIONAL_JUMP)  ; LAB_0054eba7
    FLD float ptr [ESP + 0x8]           ; 0054eb99
    FMUL double ptr [0x0063fc76]        ; 0054eb9d | DOUBLE_0063fc76
    FSTP float ptr [ESP + 0x8]          ; 0054eba3
    PUSH 0x34                           ; 0054eba7
        ;   Label: LAB_0054eba7
    MOV EAX,[0x0067cf44]                ; 0054eba9 | g_CKeysPtr
    PUSH EAX                            ; 0054ebae | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054ebaf | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0054ebb1
    ADD ESP,0x8                         ; 0054ebb4
    TEST EAX,EAX                        ; 0054ebb7
    JZ 0x0054ebcb                       ; 0054ebb9
        ;   XREF to: 0054ebcb (CONDITIONAL_JUMP)  ; LAB_0054ebcb
    FLD float ptr [EBX + 0x2dc]         ; 0054ebbb
    FADD float ptr [ESP + 0x8]          ; 0054ebc1
    FSTP float ptr [EBX + 0x2dc]        ; 0054ebc5
    PUSH 0x33                           ; 0054ebcb
        ;   Label: LAB_0054ebcb
    MOV EAX,[0x0067cf44]                ; 0054ebcd | g_CKeysPtr
    PUSH EAX                            ; 0054ebd2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0054ebd3 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0054ebd5
    ADD ESP,0x8                         ; 0054ebd8
    TEST EAX,EAX                        ; 0054ebdb
    JZ 0x0054ebef                       ; 0054ebdd
        ;   XREF to: 0054ebef (CONDITIONAL_JUMP)  ; LAB_0054ebef
    FLD float ptr [EBX + 0x2dc]         ; 0054ebdf
    FSUB float ptr [ESP + 0x8]          ; 0054ebe5
    FSTP float ptr [EBX + 0x2dc]        ; 0054ebe9
    PUSH EBX                            ; 0054ebef
        ;   Label: LAB_0054ebef
    CALL core_platfrm.cpp_CPlatform_FUN_0054cab0 ; 0054ebf0
        ;   XREF to: 0054cab0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_FUN_0054cab0(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 0054ebf5
    MOV ESP,EBP                         ; 0054ebf8
    POP EBP                             ; 0054ebfa
    POP EDI                             ; 0054ebfb
    POP ESI                             ; 0054ebfc
    POP EBX                             ; 0054ebfd
    RET                                 ; 0054ebfe
    PUSH EBX                            ; 0054ebff
        ;   Label: LAB_0054ebff
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0054ec00
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054ec05
    MOV ESP,EBP                         ; 0054ec08
    POP EBP                             ; 0054ec0a
    POP EDI                             ; 0054ec0b
    POP ESI                             ; 0054ec0c
    POP EBX                             ; 0054ec0d
    RET                                 ; 0054ec0e
    LEA EAX,[EBX + 0x310]               ; 0054ec0f
        ;   Label: LAB_0054ec0f
    MOV EAX,dword ptr [EAX]             ; 0054ec15
    MOV dword ptr [ESP + 0x2d8],EAX     ; 0054ec17
    FILD dword ptr [ESP + 0x2d8]        ; 0054ec1e
    FLD1                                ; 0054ec25
    FDIVRP                              ; 0054ec27
    FSTP float ptr [ESP + 0x8]          ; 0054ec29
    JMP 0x0054eb61                      ; 0054ec2d
        ;   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0054ec32
        ;   Label: LAB_0054ec32
    JMP 0x0054ea98                      ; 0054ec3a
        ;   XREF to: 0054ea98 (UNCONDITIONAL_JUMP)  ; LAB_0054ea98
    LEA EAX,[ESP + 0x1ec]               ; 0054ec3f
        ;   Label: caseD_1
    LEA EDX,[EBX + 0x31c]               ; 0054ec46
    CMP EAX,EDX                         ; 0054ec4c
    JZ 0x0054ec6d                       ; 0054ec4e
        ;   XREF to: 0054ec6d (CONDITIONAL_JUMP)  ; LAB_0054ec6d
    MOV EAX,dword ptr [EDX]             ; 0054ec50
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0054ec52
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054ec59
    MOV dword ptr [ESP + 0x1f0],EAX     ; 0054ec5c
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054ec63
    MOV dword ptr [ESP + 0x1f4],EAX     ; 0054ec66
    LEA EAX,[EBX + 0x334]               ; 0054ec6d
        ;   Label: LAB_0054ec6d
    PUSH EAX                            ; 0054ec73
    LEA EAX,[ESP + 0x2c0]               ; 0054ec74
    PUSH EAX                            ; 0054ec7b
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054ec7c
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    MOV EDX,EAX                         ; 0054ec81
    LEA EAX,[ESP + 0x200]               ; 0054ec83
    ADD ESP,0x8                         ; 0054ec8a
    CMP EAX,EDX                         ; 0054ec8d
    JZ 0x0054ecae                       ; 0054ec8f
        ;   XREF to: 0054ecae (CONDITIONAL_JUMP)  ; LAB_0054ecae
    MOV EAX,dword ptr [EDX]             ; 0054ec91
    MOV dword ptr [ESP + 0x1f8],EAX     ; 0054ec93
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054ec9a
    MOV dword ptr [ESP + 0x1fc],EAX     ; 0054ec9d
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054eca4
    MOV dword ptr [ESP + 0x200],EAX     ; 0054eca7
    LEA EAX,[ESP + 0x1ec]               ; 0054ecae
        ;   Label: LAB_0054ecae
    PUSH EAX                            ; 0054ecb5
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0054ecb6
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x1f0]               ; 0054ecbb
    LEA EDX,[EBX + 0x31c]               ; 0054ecc2
    ADD ESP,0x4                         ; 0054ecc8
    CMP EDX,EAX                         ; 0054eccb
    JZ 0x0054ecec                       ; 0054eccd
        ;   XREF to: 0054ecec (CONDITIONAL_JUMP)  ; LAB_0054ecec
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0054eccf
    MOV dword ptr [EDX],EAX             ; 0054ecd6
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0054ecd8
    MOV dword ptr [EDX + 0x4],EAX       ; 0054ecdf
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0054ece2
    MOV dword ptr [EDX + 0x8],EAX       ; 0054ece9
    LEA EAX,[ESP + 0x1f8]               ; 0054ecec
        ;   Label: LAB_0054ecec
    PUSH EAX                            ; 0054ecf3
    LEA ESI,[ESP + 0x238]               ; 0054ecf4
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0054ecfb
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x238]               ; 0054ed00
    LEA EDI,[EBX + 0x334]               ; 0054ed07
    ADD ESP,0x4                         ; 0054ed0d
    MOVSD ES:EDI,ESI                    ; 0054ed10
    MOVSD ES:EDI,ESI                    ; 0054ed11
    MOVSD ES:EDI,ESI                    ; 0054ed12
    MOVSD ES:EDI,ESI                    ; 0054ed13
    JMP 0x0054eb61                      ; 0054ed14
        ;   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)  ; caseD_0
    LEA EAX,[ESP + 0x208]               ; 0054ed19
        ;   Label: caseD_2
    LEA EDX,[EBX + 0x328]               ; 0054ed20
    CMP EAX,EDX                         ; 0054ed26
    JZ 0x0054ed47                       ; 0054ed28
        ;   XREF to: 0054ed47 (CONDITIONAL_JUMP)  ; LAB_0054ed47
    MOV EAX,dword ptr [EDX]             ; 0054ed2a
    MOV dword ptr [ESP + 0x208],EAX     ; 0054ed2c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054ed33
    MOV dword ptr [ESP + 0x20c],EAX     ; 0054ed36
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054ed3d
    MOV dword ptr [ESP + 0x210],EAX     ; 0054ed40
    LEA EAX,[EBX + 0x344]               ; 0054ed47
        ;   Label: LAB_0054ed47
    PUSH EAX                            ; 0054ed4d
    LEA EAX,[ESP + 0x278]               ; 0054ed4e
    PUSH EAX                            ; 0054ed55
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054ed56
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    MOV EDX,EAX                         ; 0054ed5b
    LEA EAX,[ESP + 0x21c]               ; 0054ed5d
    ADD ESP,0x8                         ; 0054ed64
    CMP EAX,EDX                         ; 0054ed67
    JZ 0x0054ed88                       ; 0054ed69
        ;   XREF to: 0054ed88 (CONDITIONAL_JUMP)  ; LAB_0054ed88
    MOV EAX,dword ptr [EDX]             ; 0054ed6b
    MOV dword ptr [ESP + 0x214],EAX     ; 0054ed6d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054ed74
    MOV dword ptr [ESP + 0x218],EAX     ; 0054ed77
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054ed7e
    MOV dword ptr [ESP + 0x21c],EAX     ; 0054ed81
    LEA EAX,[ESP + 0x208]               ; 0054ed88
        ;   Label: LAB_0054ed88
    PUSH EAX                            ; 0054ed8f
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0054ed90
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    LEA EAX,[ESP + 0x20c]               ; 0054ed95
    LEA EDX,[EBX + 0x328]               ; 0054ed9c
    ADD ESP,0x4                         ; 0054eda2
    CMP EDX,EAX                         ; 0054eda5
    JZ 0x0054edc6                       ; 0054eda7
        ;   XREF to: 0054edc6 (CONDITIONAL_JUMP)  ; LAB_0054edc6
    MOV EAX,dword ptr [ESP + 0x208]     ; 0054eda9
    MOV dword ptr [EDX],EAX             ; 0054edb0
    MOV EAX,dword ptr [ESP + 0x20c]     ; 0054edb2
    MOV dword ptr [EDX + 0x4],EAX       ; 0054edb9
    MOV EAX,dword ptr [ESP + 0x210]     ; 0054edbc
    MOV dword ptr [EDX + 0x8],EAX       ; 0054edc3
    LEA EAX,[ESP + 0x214]               ; 0054edc6
        ;   Label: LAB_0054edc6
    PUSH EAX                            ; 0054edcd
    LEA ESI,[ESP + 0x248]               ; 0054edce
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0054edd5
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x248]               ; 0054edda
    LEA EDI,[EBX + 0x344]               ; 0054ede1
    ADD ESP,0x4                         ; 0054ede7
    MOVSD ES:EDI,ESI                    ; 0054edea
    MOVSD ES:EDI,ESI                    ; 0054edeb
    MOVSD ES:EDI,ESI                    ; 0054edec
    MOVSD ES:EDI,ESI                    ; 0054eded
    JMP 0x0054eb61                      ; 0054edee
        ;   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)  ; caseD_0
    LEA EAX,[EBX + 0x30]                ; 0054edf3
        ;   Label: caseD_3
    PUSH EAX                            ; 0054edf6
    MOV dword ptr [ESP + 0x2d4],EAX     ; 0054edf7
    LEA EAX,[EBX + 0x20]                ; 0054edfe
    PUSH EAX                            ; 0054ee01
    MOV dword ptr [ESP + 0x2e0],EAX     ; 0054ee02
    LEA EAX,[ESP + 0x164]               ; 0054ee09
    PUSH EAX                            ; 0054ee10
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0054ee11
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054ee16
    LEA EAX,[EBX + 0x334]               ; 0054ee19
    PUSH EAX                            ; 0054ee1f
    LEA EAX,[ESP + 0x2b4]               ; 0054ee20
    PUSH EAX                            ; 0054ee27
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054ee28
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0054ee2d
    PUSH EAX                            ; 0054ee30
    LEA EAX,[EBX + 0x31c]               ; 0054ee31
    PUSH EAX                            ; 0054ee37
    MOV dword ptr [ESP + 0x2dc],EAX     ; 0054ee38
    LEA EAX,[ESP + 0x44]                ; 0054ee3f
    PUSH EAX                            ; 0054ee43
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054ee44
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054ee49
    LEA EAX,[ESP + 0x15c]               ; 0054ee4c
    PUSH EAX                            ; 0054ee53
    LEA EAX,[ESP + 0x40]                ; 0054ee54
    PUSH EAX                            ; 0054ee58
    LEA ESI,[ESP + 0x194]               ; 0054ee59
    LEA EDI,[ESP + 0xa4]                ; 0054ee60
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054ee67
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0054ee6c
    LEA EAX,[EBX + 0x344]               ; 0054ee6f
    MOV ECX,0xc                         ; 0054ee75
    PUSH EAX                            ; 0054ee7a
    LEA EAX,[ESP + 0x290]               ; 0054ee7b
    LEA ESI,[ESP + 0x190]               ; 0054ee82
    PUSH EAX                            ; 0054ee89
    MOVSD.REP ES:EDI,ESI                ; 0054ee8a
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 0054ee8c
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0054ee91
    PUSH EAX                            ; 0054ee94
    LEA EAX,[EBX + 0x328]               ; 0054ee95
    PUSH EAX                            ; 0054ee9b
    LEA EAX,[ESP + 0x104]               ; 0054ee9c
    PUSH EAX                            ; 0054eea3
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054eea4
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054eea9
    LEA EAX,[ESP + 0x15c]               ; 0054eeac
    PUSH EAX                            ; 0054eeb3
    LEA EAX,[ESP + 0x100]               ; 0054eeb4
    PUSH EAX                            ; 0054eebb
    LEA ESI,[ESP + 0x14]                ; 0054eebc
    LEA EDI,[ESP + 0x1c4]               ; 0054eec0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054eec7
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0054eecc
    MOV ECX,0xc                         ; 0054eecf
    LEA ESI,[ESP + 0xc]                 ; 0054eed4
    PUSH EBX                            ; 0054eed8
    MOVSD.REP ES:EDI,ESI                ; 0054eed9
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 0054eedb
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0054eee0
    MOV EDX,dword ptr [ESP + 0x2d0]     ; 0054eee3
    PUSH EDX                            ; 0054eeea
    MOV ECX,dword ptr [ESP + 0x2dc]     ; 0054eeeb
    PUSH ECX                            ; 0054eef2
    LEA EAX,[ESP + 0xd4]                ; 0054eef3
    PUSH EAX                            ; 0054eefa
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054eefb
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054ef00
    LEA EAX,[ESP + 0xcc]                ; 0054ef03
    PUSH EAX                            ; 0054ef0a
    LEA EAX,[ESP + 0xa0]                ; 0054ef0b
    PUSH EAX                            ; 0054ef12
    LEA ESI,[ESP + 0x74]                ; 0054ef13
    LEA EDI,[ESP + 0x44]                ; 0054ef17
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054ef1b
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054ef20
    LEA ESI,[ESP + 0x74]                ; 0054ef25
    ADD ESP,0x8                         ; 0054ef29
    MOVSD.REP ES:EDI,ESI                ; 0054ef2c
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054ef2e
    MOV dword ptr [ESP + 0x298],EAX     ; 0054ef32
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054ef39
    MOV dword ptr [ESP + 0x29c],EAX     ; 0054ef3d
    MOV EAX,dword ptr [ESP + 0x68]      ; 0054ef44
    MOV ESI,dword ptr [ESP + 0x2d4]     ; 0054ef48
    MOV dword ptr [ESP + 0x2a0],EAX     ; 0054ef4f
    LEA EAX,[ESP + 0x298]               ; 0054ef56
    CMP EAX,ESI                         ; 0054ef5d
    JZ 0x0054ef7b                       ; 0054ef5f
        ;   XREF to: 0054ef7b (CONDITIONAL_JUMP)  ; LAB_0054ef7b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054ef61
    MOV dword ptr [ESI],EAX             ; 0054ef65
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0054ef67
    MOV dword ptr [ESI + 0x4],EAX       ; 0054ef6e
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0054ef71
    MOV dword ptr [ESI + 0x8],EAX       ; 0054ef78
    LEA EAX,[ESP + 0x3c]                ; 0054ef7b
        ;   Label: LAB_0054ef7b
    PUSH EAX                            ; 0054ef7f
    LEA ESI,[ESP + 0x268]               ; 0054ef80
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 0054ef87
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x268]               ; 0054ef8c
    ADD ESP,0x4                         ; 0054ef93
    LEA EAX,[ESP + 0xcc]                ; 0054ef96
    LEA EDI,[EBX + 0x334]               ; 0054ef9d
    PUSH EAX                            ; 0054efa3
    LEA EAX,[ESP + 0x1c0]               ; 0054efa4
    MOVSD ES:EDI,ESI                    ; 0054efab
    MOVSD ES:EDI,ESI                    ; 0054efac
    MOVSD ES:EDI,ESI                    ; 0054efad
    MOVSD ES:EDI,ESI                    ; 0054efae
    PUSH EAX                            ; 0054efaf
    LEA ESI,[ESP + 0x134]               ; 0054efb0
    LEA EDI,[ESP + 0x104]               ; 0054efb7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054efbe
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054efc3
    LEA ESI,[ESP + 0x134]               ; 0054efc8
    ADD ESP,0x8                         ; 0054efcf
    MOVSD.REP ES:EDI,ESI                ; 0054efd2
    MOV EAX,dword ptr [ESP + 0x108]     ; 0054efd4
    MOV dword ptr [ESP + 0x280],EAX     ; 0054efdb
    MOV EAX,dword ptr [ESP + 0x118]     ; 0054efe2
    MOV dword ptr [ESP + 0x284],EAX     ; 0054efe9
    MOV EAX,dword ptr [ESP + 0x128]     ; 0054eff0
    LEA EDX,[EBX + 0x328]               ; 0054eff7
    MOV dword ptr [ESP + 0x288],EAX     ; 0054effd
    LEA EAX,[ESP + 0x280]               ; 0054f004
    CMP EDX,EAX                         ; 0054f00b
    JZ 0x0054f02c                       ; 0054f00d
        ;   XREF to: 0054f02c (CONDITIONAL_JUMP)  ; LAB_0054f02c
    MOV EAX,dword ptr [ESP + 0x108]     ; 0054f00f
    MOV dword ptr [EDX],EAX             ; 0054f016
    MOV EAX,dword ptr [ESP + 0x284]     ; 0054f018
    MOV dword ptr [EDX + 0x4],EAX       ; 0054f01f
    MOV EAX,dword ptr [ESP + 0x288]     ; 0054f022
    MOV dword ptr [EDX + 0x8],EAX       ; 0054f029
    LEA EAX,[ESP + 0xfc]                ; 0054f02c
        ;   Label: LAB_0054f02c
    PUSH EAX                            ; 0054f033
    LEA ESI,[ESP + 0x228]               ; 0054f034
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 0054f03b
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x228]               ; 0054f040
    LEA EDI,[EBX + 0x344]               ; 0054f047
    ADD ESP,0x4                         ; 0054f04d
    MOVSD ES:EDI,ESI                    ; 0054f050
    MOVSD ES:EDI,ESI                    ; 0054f051
    MOVSD ES:EDI,ESI                    ; 0054f052
    MOVSD ES:EDI,ESI                    ; 0054f053
    JMP 0x0054eb61                      ; 0054f054
        ;   XREF to: 0054eb61 (UNCONDITIONAL_JUMP)  ; caseD_0

