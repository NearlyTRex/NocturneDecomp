; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_skeleton_cpp_FUN_0054eb40(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,undefined4 param_6,undefined4 param_7,int param_8,float param_9)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0
;   core_skeleton.cpp_FUN_0054edb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054eb40
        ;   Label: core_skeleton.cpp_FUN_0054eb40
    PUSH ESI                            ; 0054eb41
    PUSH EDI                            ; 0054eb42
    PUSH EBP                            ; 0054eb43
    SUB ESP,0x35a0                      ; 0054eb44
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 0054eb4a
    PUSH EDX                            ; 0054eb51
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0054eb52
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0054eb57
    MOV EDX,dword ptr [ESP + 0x35c0]    ; 0054eb5a
    MOV ECX,EAX                         ; 0054eb61
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054eb63
    ADD EAX,EDX                         ; 0054eb6a
    SHL EAX,0x5                         ; 0054eb6c
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x1c8c] ; 0054eb6f
    MOV ECX,dword ptr [ESP + 0x35b4]    ; 0054eb76
    PUSH ECX                            ; 0054eb7d
    MOV dword ptr [ESP + 0x3588],EAX    ; 0054eb7e
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054eb85
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054eb8a
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 0054eb8d
    LEA EAX,[ESP + 0x1a9c]              ; 0054eb93
    PUSH EAX                            ; 0054eb9a
    MOV ESI,dword ptr [ESP + 0x35bc]    ; 0054eb9b
    PUSH dword ptr [ESP + 0x35c0]       ; 0054eba2
    PUSH ESI                            ; 0054eba9
    MOV EDI,dword ptr [ESP + 0x35c0]    ; 0054ebaa
    PUSH EDI                            ; 0054ebb1
    CALL core_skeleton.cpp_FUN_0054edb0 ; 0054ebb2
        ;   XREF to: 0054edb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054edb0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 0054ebb7
    PUSH EDI                            ; 0054ebba
    LEA EAX,[ESP + 0x1aa0]              ; 0054ebbb
    MOV EBP,EDI                         ; 0054ebc2
    PUSH EAX                            ; 0054ebc4
    XOR EBP,EDI                         ; 0054ebc5
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0 ; 0054ebc7
        ;   XREF to: 0054fcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0()
    MOV EAX,0xffffffff                  ; 0054ebcc
    ADD ESP,0x8                         ; 0054ebd1
    MOV EDX,0x7149f2ca                  ; 0054ebd4
    MOV ECX,dword ptr [ESP + 0x3584]    ; 0054ebd9
    MOV dword ptr [ESP + 0x3588],EAX    ; 0054ebe0
    MOV dword ptr [ESP + 0x358c],EDX    ; 0054ebe7
    TEST ECX,ECX                        ; 0054ebee
    JLE 0x0054ed83                      ; 0054ebf0
        ;   XREF to: 0054ed83 (CONDITIONAL_JUMP)  ; LAB_0054ed83
    MOV EAX,ESP                         ; 0054ebf6
        ;   Label: LAB_0054ebf6
    MOV dword ptr [ESP + 0x359c],EBP    ; 0054ebf8
    PUSH EAX                            ; 0054ebff
    FILD dword ptr [ESP + 0x35a0]       ; 0054ec00
    SUB ESP,0x4                         ; 0054ec07
    MOV EDI,dword ptr [ESP + 0x35c8]    ; 0054ec0a
    FSTP float ptr [ESP]                ; 0054ec11
    PUSH EDI                            ; 0054ec14
    MOV EAX,dword ptr [ESP + 0x35c0]    ; 0054ec15
    PUSH EAX                            ; 0054ec1c
    CALL core_skeleton.cpp_FUN_0054edb0 ; 0054ec1d
        ;   XREF to: 0054edb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054edb0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 0054ec22
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 0054ec25
    PUSH EDX                            ; 0054ec2c
    LEA EAX,[ESP + 0x4]                 ; 0054ec2d
    PUSH EAX                            ; 0054ec31
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0 ; 0054ec32
        ;   XREF to: 0054fcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneModelMatrices_FUN_0054fcc0()
    ADD ESP,0x8                         ; 0054ec37
    XOR ECX,ECX                         ; 0054ec3a
    MOV dword ptr [ESP + 0x3590],ECX    ; 0054ec3c
    TEST EBX,EBX                        ; 0054ec43
    JLE 0x0054ed60                      ; 0054ec45
        ;   XREF to: 0054ed60 (CONDITIONAL_JUMP)  ; LAB_0054ed60
    FLD float ptr [ESP + 0x3590]        ; 0054ec4b
    LEA EDX,[ESP + 0x7dc]               ; 0054ec52
    LEA EAX,[ESP + 0x2278]              ; 0054ec59
    MOV ESI,dword ptr [EDX + 0xc]       ; 0054ec60
        ;   Label: LAB_0054ec60
    MOV dword ptr [ESP + 0x3568],ESI    ; 0054ec63
    MOV ESI,dword ptr [EDX + 0x1c]      ; 0054ec6a
    MOV dword ptr [ESP + 0x3594],ESI    ; 0054ec6d
    MOV ESI,dword ptr [EDX + 0x2c]      ; 0054ec74
    MOV dword ptr [ESP + 0x356c],ESI    ; 0054ec77
    MOV ESI,dword ptr [ESP + 0x3568]    ; 0054ec7e
    MOV dword ptr [ESP + 0x355c],ESI    ; 0054ec85
    MOV ESI,dword ptr [ESP + 0x3594]    ; 0054ec8c
    MOV dword ptr [ESP + 0x3560],ESI    ; 0054ec93
    MOV ESI,dword ptr [ESP + 0x356c]    ; 0054ec9a
    LEA EDI,[ESP + 0x3544]              ; 0054eca1
    MOV dword ptr [ESP + 0x3564],ESI    ; 0054eca8
    LEA ESI,[ESP + 0x355c]              ; 0054ecaf
    MOVSD ES:EDI,ESI                    ; 0054ecb6
    MOVSD ES:EDI,ESI                    ; 0054ecb7
    MOVSD ES:EDI,ESI                    ; 0054ecb8
    MOV ESI,dword ptr [EAX + 0xc]       ; 0054ecb9
    MOV dword ptr [ESP + 0x3570],ESI    ; 0054ecbc
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0054ecc3
    MOV dword ptr [ESP + 0x3574],ESI    ; 0054ecc6
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0054eccd
    MOV dword ptr [ESP + 0x3578],ESI    ; 0054ecd0
    MOV ESI,dword ptr [ESP + 0x3570]    ; 0054ecd7
    MOV dword ptr [ESP + 0x3538],ESI    ; 0054ecde
    MOV ESI,dword ptr [ESP + 0x3574]    ; 0054ece5
    MOV dword ptr [ESP + 0x353c],ESI    ; 0054ecec
    MOV ESI,dword ptr [ESP + 0x3578]    ; 0054ecf3
    LEA EDI,[ESP + 0x3550]              ; 0054ecfa
    MOV dword ptr [ESP + 0x3540],ESI    ; 0054ed01
    LEA ESI,[ESP + 0x3538]              ; 0054ed08
    MOVSD ES:EDI,ESI                    ; 0054ed0f
    MOVSD ES:EDI,ESI                    ; 0054ed10
    MOVSD ES:EDI,ESI                    ; 0054ed11
    FLD float ptr [ESP + 0x3550]        ; 0054ed12
    FSUB float ptr [ESP + 0x3544]       ; 0054ed19
    FMUL ST0                            ; 0054ed20
    FLD float ptr [ESP + 0x3554]        ; 0054ed22
    FSUB float ptr [ESP + 0x3548]       ; 0054ed29
    FMUL ST0                            ; 0054ed30
    FLD float ptr [ESP + 0x3558]        ; 0054ed32
    FXCH                                ; 0054ed39
    FADDP ST2,ST0                       ; 0054ed3b
    FSUB float ptr [ESP + 0x354c]       ; 0054ed3d
    FMUL ST0                            ; 0054ed44
    ADD EAX,0x30                        ; 0054ed46
    ADD EDX,0x30                        ; 0054ed49
    FADDP                               ; 0054ed4c
    INC ECX                             ; 0054ed4e
    FADDP                               ; 0054ed4f
    CMP ECX,EBX                         ; 0054ed51
    JL 0x0054ec60                       ; 0054ed53
        ;   XREF to: 0054ec60 (CONDITIONAL_JUMP)  ; LAB_0054ec60
    FSTP float ptr [ESP + 0x3590]       ; 0054ed59
    FLD float ptr [ESP + 0x3590]        ; 0054ed60
        ;   Label: LAB_0054ed60
    FCOMP float ptr [ESP + 0x358c]      ; 0054ed67
    FNSTSW AX                           ; 0054ed6e
    SAHF                                ; 0054ed70
    JC 0x0054ed95                       ; 0054ed71
        ;   XREF to: 0054ed95 (CONDITIONAL_JUMP)  ; LAB_0054ed95
    MOV ESI,dword ptr [ESP + 0x3584]    ; 0054ed73
        ;   Label: LAB_0054ed73
    INC EBP                             ; 0054ed7a
    CMP EBP,ESI                         ; 0054ed7b
    JL 0x0054ebf6                       ; 0054ed7d
        ;   XREF to: 0054ebf6 (CONDITIONAL_JUMP)  ; LAB_0054ebf6
    MOV EAX,dword ptr [ESP + 0x3588]    ; 0054ed83
        ;   Label: LAB_0054ed83
    ADD ESP,0x35a0                      ; 0054ed8a
    POP EBP                             ; 0054ed90
    POP EDI                             ; 0054ed91
    POP ESI                             ; 0054ed92
    POP EBX                             ; 0054ed93
    RET                                 ; 0054ed94
    MOV EAX,dword ptr [ESP + 0x3590]    ; 0054ed95
        ;   Label: LAB_0054ed95
    MOV dword ptr [ESP + 0x3588],EBP    ; 0054ed9c
    MOV dword ptr [ESP + 0x358c],EAX    ; 0054eda3
    JMP 0x0054ed73                      ; 0054edaa
        ;   XREF to: 0054ed73 (UNCONDITIONAL_JUMP)  ; LAB_0054ed73

