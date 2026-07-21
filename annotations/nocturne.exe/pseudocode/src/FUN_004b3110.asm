; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3110(int param_1)
;
;
; Referenced Globals:
;   string s_Bip01_head_0058545c
;   string s_Bip01_L_Clavicle_00585467
;   string s_Bip01_R_Clavicle_00585478
;   string s_Bip01_L_UpperArm_00585489
;   string s_Bip01_R_UpperArm_0058549a
;   string s_Bip01_L_ForeArm_005854ab
;   string s_Bip01_R_ForeArm_005854bb
;   string s_Bip01_L_Foot_005854cb
;   string s_Bip01_R_Foot_005854d8
;   string s_Bip01_L_Thigh_005854e5
;   string s_Bip01_R_Thigh_005854f3
;   string s_Bip01_L_Calf_00585501
;   string s_Bip01_R_Calf_0058550e
;   string s_Bip01_L_Hand_0058551b
;   string s_Bip01_R_Hand_00585528
;   ... and 19 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
;   FUN_004b48d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3110
        ;   Label: FUN_004b3110
    PUSH ESI                            ; 004b3111
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b3112
    PUSH ESI                            ; 004b3116
    CALL FUN_004b48d0                   ; 004b3117
        ;   XREF to: 004b48d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b48d0()
    ADD ESP,0x4                         ; 004b311c
    LEA EAX,[ESI + 0x150]               ; 004b311f
    PUSH EAX                            ; 004b3125
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004b3126
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    ADD ESP,0x4                         ; 004b312b
    PUSH 0x1                            ; 004b312e
    PUSH 0x58545c                       ; 004b3130 | = "Bip01 head"
    PUSH EAX                            ; 004b3135
    MOV EBX,EAX                         ; 004b3136
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3138
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b313d
    PUSH 0x1                            ; 004b3140
    PUSH 0x585467                       ; 004b3142 | = "Bip01 L Clavicle"
    PUSH EBX                            ; 004b3147
    MOV [0x01cae018],EAX                ; 004b3148 | DAT_01cae018
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b314d
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3152
    PUSH 0x1                            ; 004b3155
    PUSH 0x585478                       ; 004b3157 | = "Bip01 R Clavicle"
    PUSH EBX                            ; 004b315c
    MOV [0x01cae01c],EAX                ; 004b315d | DAT_01cae01c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3162
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3167
    PUSH 0x1                            ; 004b316a
    PUSH 0x585489                       ; 004b316c | = "Bip01 L UpperArm"
    PUSH EBX                            ; 004b3171
    MOV [0x01cae020],EAX                ; 004b3172 | DAT_01cae020
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3177
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b317c
    PUSH 0x1                            ; 004b317f
    PUSH 0x58549a                       ; 004b3181 | = "Bip01 R UpperArm"
    PUSH EBX                            ; 004b3186
    MOV [0x01cae024],EAX                ; 004b3187 | DAT_01cae024
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b318c
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3191
    PUSH 0x1                            ; 004b3194
    PUSH 0x5854ab                       ; 004b3196 | = "Bip01 L ForeArm"
    PUSH EBX                            ; 004b319b
    MOV [0x01cae028],EAX                ; 004b319c | DAT_01cae028
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b31a1
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b31a6
    PUSH 0x1                            ; 004b31a9
    PUSH 0x5854bb                       ; 004b31ab | = "Bip01 R ForeArm"
    PUSH EBX                            ; 004b31b0
    MOV [0x01cae02c],EAX                ; 004b31b1 | DAT_01cae02c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b31b6
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b31bb
    PUSH 0x1                            ; 004b31be
    PUSH 0x5854cb                       ; 004b31c0 | = "Bip01 L Foot"
    PUSH EBX                            ; 004b31c5
    MOV [0x01cae030],EAX                ; 004b31c6 | DAT_01cae030
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b31cb
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b31d0
    PUSH 0x1                            ; 004b31d3
    PUSH 0x5854d8                       ; 004b31d5 | = "Bip01 R Foot"
    PUSH EBX                            ; 004b31da
    MOV [0x01cae034],EAX                ; 004b31db | DAT_01cae034
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b31e0
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b31e5
    MOV [0x01cae038],EAX                ; 004b31e8 | DAT_01cae038
    PUSH 0x1                            ; 004b31ed
    PUSH 0x5854e5                       ; 004b31ef | = "Bip01 L Thigh"
    PUSH EBX                            ; 004b31f4
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b31f5
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b31fa
    PUSH 0x1                            ; 004b31fd
    PUSH 0x5854f3                       ; 004b31ff | = "Bip01 R Thigh"
    PUSH EBX                            ; 004b3204
    MOV [0x01cae03c],EAX                ; 004b3205 | DAT_01cae03c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b320a
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b320f
    PUSH 0x1                            ; 004b3212
    PUSH 0x585501                       ; 004b3214 | = "Bip01 L Calf"
    PUSH EBX                            ; 004b3219
    MOV [0x01cae040],EAX                ; 004b321a | DAT_01cae040
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b321f
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3224
    PUSH 0x1                            ; 004b3227
    PUSH 0x58550e                       ; 004b3229 | = "Bip01 R Calf"
    PUSH EBX                            ; 004b322e
    MOV [0x01cae044],EAX                ; 004b322f | DAT_01cae044
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3234
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3239
    PUSH 0x1                            ; 004b323c
    PUSH 0x58551b                       ; 004b323e | = "Bip01 L Hand"
    PUSH EBX                            ; 004b3243
    MOV [0x01cae048],EAX                ; 004b3244 | DAT_01cae048
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3249
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b324e
    PUSH 0x1                            ; 004b3251
    PUSH 0x585528                       ; 004b3253 | = "Bip01 R Hand"
    PUSH EBX                            ; 004b3258
    MOV [0x01cae04c],EAX                ; 004b3259 | DAT_01cae04c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b325e
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3263
    PUSH 0x1                            ; 004b3266
    PUSH 0x585535                       ; 004b3268 | = "Bip01 Spine2"
    PUSH EBX                            ; 004b326d
    MOV [0x01cae050],EAX                ; 004b326e | DAT_01cae050
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3273
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b3278
    PUSH 0x1                            ; 004b327b
    PUSH 0x585542                       ; 004b327d | = "Bip01 Spine"
    PUSH EBX                            ; 004b3282
    MOV [0x01cae054],EAX                ; 004b3283 | DAT_01cae054
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0 ; 004b3288
        ;   XREF to: 005179d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0()
    ADD ESP,0xc                         ; 004b328d
    MOV [0x01cae058],EAX                ; 004b3290 | DAT_01cae058
    MOV dword ptr [ESI + 0x1fa3c],0x0   ; 004b3295
    POP ESI                             ; 004b329f
    POP EBX                             ; 004b32a0
    RET                                 ; 004b32a1

