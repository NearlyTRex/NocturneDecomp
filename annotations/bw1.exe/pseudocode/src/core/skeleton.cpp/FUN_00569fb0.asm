; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_skeleton_cpp_FUN_00569fb0(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4,CDeformableModelInstance *param_5,undefined4 param_6,undefined4 param_7,int param_8,float param_9)
;
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130
;   core_skeleton.cpp_FUN_0056a220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569fb0
        ;   Label: core_skeleton.cpp_FUN_00569fb0
    PUSH ESI                            ; 00569fb1
    PUSH EDI                            ; 00569fb2
    PUSH EBP                            ; 00569fb3
    SUB ESP,0x35a0                      ; 00569fb4
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 00569fba
    PUSH EDX                            ; 00569fc1
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00569fc2
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00569fc7
    MOV EDX,dword ptr [ESP + 0x35c0]    ; 00569fca
    MOV ECX,EAX                         ; 00569fd1
    LEA EAX,[EDX*0x8 + 0x0]             ; 00569fd3
    ADD EAX,EDX                         ; 00569fda
    SHL EAX,0x5                         ; 00569fdc
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x1c8c] ; 00569fdf
    MOV ECX,dword ptr [ESP + 0x35b4]    ; 00569fe6
    PUSH ECX                            ; 00569fed
    MOV dword ptr [ESP + 0x3588],EAX    ; 00569fee
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00569ff5
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569ffa
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 00569ffd
    LEA EAX,[ESP + 0x1a9c]              ; 0056a003
    PUSH EAX                            ; 0056a00a
    MOV ESI,dword ptr [ESP + 0x35bc]    ; 0056a00b
    PUSH dword ptr [ESP + 0x35c0]       ; 0056a012
    PUSH ESI                            ; 0056a019
    MOV EDI,dword ptr [ESP + 0x35c0]    ; 0056a01a
    PUSH EDI                            ; 0056a021
    CALL core_skeleton.cpp_FUN_0056a220 ; 0056a022
        ;   XREF to: 0056a220 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056a220(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 0056a027
    PUSH EDI                            ; 0056a02a
    LEA EAX,[ESP + 0x1aa0]              ; 0056a02b
    MOV EBP,EDI                         ; 0056a032
    PUSH EAX                            ; 0056a034
    XOR EBP,EDI                         ; 0056a035
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130 ; 0056a037
        ;   XREF to: 0056b130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130()
    MOV EAX,0xffffffff                  ; 0056a03c
    ADD ESP,0x8                         ; 0056a041
    MOV EDX,0x7149f2ca                  ; 0056a044
    MOV ECX,dword ptr [ESP + 0x3584]    ; 0056a049
    MOV dword ptr [ESP + 0x3588],EAX    ; 0056a050
    MOV dword ptr [ESP + 0x358c],EDX    ; 0056a057
    TEST ECX,ECX                        ; 0056a05e
    JLE 0x0056a1f3                      ; 0056a060
        ;   XREF to: 0056a1f3 (CONDITIONAL_JUMP)  ; LAB_0056a1f3
    MOV EAX,ESP                         ; 0056a066
        ;   Label: LAB_0056a066
    MOV dword ptr [ESP + 0x359c],EBP    ; 0056a068
    PUSH EAX                            ; 0056a06f
    FILD dword ptr [ESP + 0x35a0]       ; 0056a070
    SUB ESP,0x4                         ; 0056a077
    MOV EDI,dword ptr [ESP + 0x35c8]    ; 0056a07a
    FSTP float ptr [ESP]                ; 0056a081
    PUSH EDI                            ; 0056a084
    MOV EAX,dword ptr [ESP + 0x35c0]    ; 0056a085
    PUSH EAX                            ; 0056a08c
    CALL core_skeleton.cpp_FUN_0056a220 ; 0056a08d
        ;   XREF to: 0056a220 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056a220(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 0056a092
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 0056a095
    PUSH EDX                            ; 0056a09c
    LEA EAX,[ESP + 0x4]                 ; 0056a09d
    PUSH EAX                            ; 0056a0a1
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130 ; 0056a0a2
        ;   XREF to: 0056b130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_computeBoneModelMatrices_FUN_0056b130()
    ADD ESP,0x8                         ; 0056a0a7
    XOR ECX,ECX                         ; 0056a0aa
    MOV dword ptr [ESP + 0x3590],ECX    ; 0056a0ac
    TEST EBX,EBX                        ; 0056a0b3
    JLE 0x0056a1d0                      ; 0056a0b5
        ;   XREF to: 0056a1d0 (CONDITIONAL_JUMP)  ; LAB_0056a1d0
    FLD float ptr [ESP + 0x3590]        ; 0056a0bb
    LEA EDX,[ESP + 0x7dc]               ; 0056a0c2
    LEA EAX,[ESP + 0x2278]              ; 0056a0c9
    MOV ESI,dword ptr [EDX + 0xc]       ; 0056a0d0
        ;   Label: LAB_0056a0d0
    MOV dword ptr [ESP + 0x3568],ESI    ; 0056a0d3
    MOV ESI,dword ptr [EDX + 0x1c]      ; 0056a0da
    MOV dword ptr [ESP + 0x3594],ESI    ; 0056a0dd
    MOV ESI,dword ptr [EDX + 0x2c]      ; 0056a0e4
    MOV dword ptr [ESP + 0x356c],ESI    ; 0056a0e7
    MOV ESI,dword ptr [ESP + 0x3568]    ; 0056a0ee
    MOV dword ptr [ESP + 0x355c],ESI    ; 0056a0f5
    MOV ESI,dword ptr [ESP + 0x3594]    ; 0056a0fc
    MOV dword ptr [ESP + 0x3560],ESI    ; 0056a103
    MOV ESI,dword ptr [ESP + 0x356c]    ; 0056a10a
    LEA EDI,[ESP + 0x3544]              ; 0056a111
    MOV dword ptr [ESP + 0x3564],ESI    ; 0056a118
    LEA ESI,[ESP + 0x355c]              ; 0056a11f
    MOVSD ES:EDI,ESI                    ; 0056a126
    MOVSD ES:EDI,ESI                    ; 0056a127
    MOVSD ES:EDI,ESI                    ; 0056a128
    MOV ESI,dword ptr [EAX + 0xc]       ; 0056a129
    MOV dword ptr [ESP + 0x3570],ESI    ; 0056a12c
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0056a133
    MOV dword ptr [ESP + 0x3574],ESI    ; 0056a136
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0056a13d
    MOV dword ptr [ESP + 0x3578],ESI    ; 0056a140
    MOV ESI,dword ptr [ESP + 0x3570]    ; 0056a147
    MOV dword ptr [ESP + 0x3538],ESI    ; 0056a14e
    MOV ESI,dword ptr [ESP + 0x3574]    ; 0056a155
    MOV dword ptr [ESP + 0x353c],ESI    ; 0056a15c
    MOV ESI,dword ptr [ESP + 0x3578]    ; 0056a163
    LEA EDI,[ESP + 0x3550]              ; 0056a16a
    MOV dword ptr [ESP + 0x3540],ESI    ; 0056a171
    LEA ESI,[ESP + 0x3538]              ; 0056a178
    MOVSD ES:EDI,ESI                    ; 0056a17f
    MOVSD ES:EDI,ESI                    ; 0056a180
    MOVSD ES:EDI,ESI                    ; 0056a181
    FLD float ptr [ESP + 0x3550]        ; 0056a182
    FSUB float ptr [ESP + 0x3544]       ; 0056a189
    FMUL ST0                            ; 0056a190
    FLD float ptr [ESP + 0x3554]        ; 0056a192
    FSUB float ptr [ESP + 0x3548]       ; 0056a199
    FMUL ST0                            ; 0056a1a0
    FLD float ptr [ESP + 0x3558]        ; 0056a1a2
    FXCH                                ; 0056a1a9
    FADDP ST2,ST0                       ; 0056a1ab
    FSUB float ptr [ESP + 0x354c]       ; 0056a1ad
    FMUL ST0                            ; 0056a1b4
    ADD EAX,0x30                        ; 0056a1b6
    ADD EDX,0x30                        ; 0056a1b9
    FADDP                               ; 0056a1bc
    INC ECX                             ; 0056a1be
    FADDP                               ; 0056a1bf
    CMP ECX,EBX                         ; 0056a1c1
    JL 0x0056a0d0                       ; 0056a1c3
        ;   XREF to: 0056a0d0 (CONDITIONAL_JUMP)  ; LAB_0056a0d0
    FSTP float ptr [ESP + 0x3590]       ; 0056a1c9
    FLD float ptr [ESP + 0x3590]        ; 0056a1d0
        ;   Label: LAB_0056a1d0
    FCOMP float ptr [ESP + 0x358c]      ; 0056a1d7
    FNSTSW AX                           ; 0056a1de
    SAHF                                ; 0056a1e0
    JC 0x0056a205                       ; 0056a1e1
        ;   XREF to: 0056a205 (CONDITIONAL_JUMP)  ; LAB_0056a205
    MOV ESI,dword ptr [ESP + 0x3584]    ; 0056a1e3
        ;   Label: LAB_0056a1e3
    INC EBP                             ; 0056a1ea
    CMP EBP,ESI                         ; 0056a1eb
    JL 0x0056a066                       ; 0056a1ed
        ;   XREF to: 0056a066 (CONDITIONAL_JUMP)  ; LAB_0056a066
    MOV EAX,dword ptr [ESP + 0x3588]    ; 0056a1f3
        ;   Label: LAB_0056a1f3
    ADD ESP,0x35a0                      ; 0056a1fa
    POP EBP                             ; 0056a200
    POP EDI                             ; 0056a201
    POP ESI                             ; 0056a202
    POP EBX                             ; 0056a203
    RET                                 ; 0056a204
    MOV EAX,dword ptr [ESP + 0x3590]    ; 0056a205
        ;   Label: LAB_0056a205
    MOV dword ptr [ESP + 0x3588],EBP    ; 0056a20c
    MOV dword ptr [ESP + 0x358c],EAX    ; 0056a213
    JMP 0x0056a1e3                      ; 0056a21a
        ;   XREF to: 0056a1e3 (UNCONDITIONAL_JUMP)  ; LAB_0056a1e3

