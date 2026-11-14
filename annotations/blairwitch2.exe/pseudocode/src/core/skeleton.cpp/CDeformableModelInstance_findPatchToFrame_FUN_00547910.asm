; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_00547910(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_motion_index
; float            Stack[0xc]:4   source_frame
; int              Stack[0x10]:4   target_motion_index
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00503860
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_00547b80
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547910
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_00547910
    PUSH ESI                            ; 00547911
    PUSH EDI                            ; 00547912
    PUSH EBP                            ; 00547913
    SUB ESP,0x35a0                      ; 00547914
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 0054791a
    PUSH EDX                            ; 00547921
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00503860 ; 00547922
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00503860(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00547927
    MOV EDX,dword ptr [ESP + 0x35c0]    ; 0054792a
    MOV ECX,EAX                         ; 00547931
    LEA EAX,[EDX*0x8 + 0x0]             ; 00547933
    ADD EAX,EDX                         ; 0054793a
    SHL EAX,0x2                         ; 0054793c
    SUB EAX,EDX                         ; 0054793f
    MOV EAX,dword ptr [ECX + EAX*0x8 + 0x1c8c] ; 00547941
    MOV ECX,dword ptr [ESP + 0x35b4]    ; 00547948
    PUSH ECX                            ; 0054794f
    MOV dword ptr [ESP + 0x3588],EAX    ; 00547950
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00547957
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054795c
    MOV EBX,dword ptr [EAX + 0x1d1f8]   ; 0054795f
    LEA EAX,[ESP + 0x1a9c]              ; 00547965
    PUSH EAX                            ; 0054796c
    MOV ESI,dword ptr [ESP + 0x35bc]    ; 0054796d
    PUSH dword ptr [ESP + 0x35c0]       ; 00547974
    PUSH ESI                            ; 0054797b
    MOV EDI,dword ptr [ESP + 0x35c0]    ; 0054797c
    PUSH EDI                            ; 00547983
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_00547b80 ; 00547984
        ;   XREF to: 00547b80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_00547b80(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 00547989
    PUSH EDI                            ; 0054798c
    LEA EAX,[ESP + 0x1aa0]              ; 0054798d
    MOV EBP,EDI                         ; 00547994
    PUSH EAX                            ; 00547996
    XOR EBP,EDI                         ; 00547997
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90 ; 00547999
        ;   XREF to: 00548a90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    MOV EAX,0xffffffff                  ; 0054799e
    ADD ESP,0x8                         ; 005479a3
    MOV EDX,0x7149f2ca                  ; 005479a6
    MOV ECX,dword ptr [ESP + 0x3584]    ; 005479ab
    MOV dword ptr [ESP + 0x3588],EAX    ; 005479b2
    MOV dword ptr [ESP + 0x358c],EDX    ; 005479b9
    TEST ECX,ECX                        ; 005479c0
    JLE 0x00547b55                      ; 005479c2
        ;   XREF to: 00547b55 (CONDITIONAL_JUMP)  ; LAB_00547b55
    MOV EAX,ESP                         ; 005479c8
        ;   Label: LAB_005479c8
    MOV dword ptr [ESP + 0x359c],EBP    ; 005479ca
    PUSH EAX                            ; 005479d1
    FILD dword ptr [ESP + 0x35a0]       ; 005479d2
    SUB ESP,0x4                         ; 005479d9
    MOV EDI,dword ptr [ESP + 0x35c8]    ; 005479dc
    FSTP float ptr [ESP]                ; 005479e3
    PUSH EDI                            ; 005479e6
    MOV EAX,dword ptr [ESP + 0x35c0]    ; 005479e7
    PUSH EAX                            ; 005479ee
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_00547b80 ; 005479ef
        ;   XREF to: 00547b80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_00547b80(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 005479f4
    MOV EDX,dword ptr [ESP + 0x35b4]    ; 005479f7
    PUSH EDX                            ; 005479fe
    LEA EAX,[ESP + 0x4]                 ; 005479ff
    PUSH EAX                            ; 00547a03
    CALL core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90 ; 00547a04
        ;   XREF to: 00548a90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 00547a09
    XOR ECX,ECX                         ; 00547a0c
    MOV dword ptr [ESP + 0x3590],ECX    ; 00547a0e
    TEST EBX,EBX                        ; 00547a15
    JLE 0x00547b32                      ; 00547a17
        ;   XREF to: 00547b32 (CONDITIONAL_JUMP)  ; LAB_00547b32
    FLD float ptr [ESP + 0x3590]        ; 00547a1d
    LEA EDX,[ESP + 0x7dc]               ; 00547a24
    LEA EAX,[ESP + 0x2278]              ; 00547a2b
    MOV ESI,dword ptr [EDX + 0xc]       ; 00547a32
        ;   Label: LAB_00547a32
    MOV dword ptr [ESP + 0x3568],ESI    ; 00547a35
    MOV ESI,dword ptr [EDX + 0x1c]      ; 00547a3c
    MOV dword ptr [ESP + 0x3594],ESI    ; 00547a3f
    MOV ESI,dword ptr [EDX + 0x2c]      ; 00547a46
    MOV dword ptr [ESP + 0x356c],ESI    ; 00547a49
    MOV ESI,dword ptr [ESP + 0x3568]    ; 00547a50
    MOV dword ptr [ESP + 0x355c],ESI    ; 00547a57
    MOV ESI,dword ptr [ESP + 0x3594]    ; 00547a5e
    MOV dword ptr [ESP + 0x3560],ESI    ; 00547a65
    MOV ESI,dword ptr [ESP + 0x356c]    ; 00547a6c
    LEA EDI,[ESP + 0x3544]              ; 00547a73
    MOV dword ptr [ESP + 0x3564],ESI    ; 00547a7a
    LEA ESI,[ESP + 0x355c]              ; 00547a81
    MOVSD ES:EDI,ESI                    ; 00547a88
    MOVSD ES:EDI,ESI                    ; 00547a89
    MOVSD ES:EDI,ESI                    ; 00547a8a
    MOV ESI,dword ptr [EAX + 0xc]       ; 00547a8b
    MOV dword ptr [ESP + 0x3570],ESI    ; 00547a8e
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00547a95
    MOV dword ptr [ESP + 0x3574],ESI    ; 00547a98
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00547a9f
    MOV dword ptr [ESP + 0x3578],ESI    ; 00547aa2
    MOV ESI,dword ptr [ESP + 0x3570]    ; 00547aa9
    MOV dword ptr [ESP + 0x3538],ESI    ; 00547ab0
    MOV ESI,dword ptr [ESP + 0x3574]    ; 00547ab7
    MOV dword ptr [ESP + 0x353c],ESI    ; 00547abe
    MOV ESI,dword ptr [ESP + 0x3578]    ; 00547ac5
    LEA EDI,[ESP + 0x3550]              ; 00547acc
    MOV dword ptr [ESP + 0x3540],ESI    ; 00547ad3
    LEA ESI,[ESP + 0x3538]              ; 00547ada
    MOVSD ES:EDI,ESI                    ; 00547ae1
    MOVSD ES:EDI,ESI                    ; 00547ae2
    MOVSD ES:EDI,ESI                    ; 00547ae3
    FLD float ptr [ESP + 0x3550]        ; 00547ae4
    FSUB float ptr [ESP + 0x3544]       ; 00547aeb
    FMUL ST0                            ; 00547af2
    FLD float ptr [ESP + 0x3554]        ; 00547af4
    FSUB float ptr [ESP + 0x3548]       ; 00547afb
    FMUL ST0                            ; 00547b02
    FLD float ptr [ESP + 0x3558]        ; 00547b04
    FXCH                                ; 00547b0b
    FADDP ST2,ST0                       ; 00547b0d
    FSUB float ptr [ESP + 0x354c]       ; 00547b0f
    FMUL ST0                            ; 00547b16
    ADD EAX,0x30                        ; 00547b18
    ADD EDX,0x30                        ; 00547b1b
    FADDP                               ; 00547b1e
    INC ECX                             ; 00547b20
    FADDP                               ; 00547b21
    CMP ECX,EBX                         ; 00547b23
    JL 0x00547a32                       ; 00547b25
        ;   XREF to: 00547a32 (CONDITIONAL_JUMP)  ; LAB_00547a32
    FSTP float ptr [ESP + 0x3590]       ; 00547b2b
    FLD float ptr [ESP + 0x3590]        ; 00547b32
        ;   Label: LAB_00547b32
    FCOMP float ptr [ESP + 0x358c]      ; 00547b39
    FNSTSW AX                           ; 00547b40
    SAHF                                ; 00547b42
    JC 0x00547b67                       ; 00547b43
        ;   XREF to: 00547b67 (CONDITIONAL_JUMP)  ; LAB_00547b67
    MOV ESI,dword ptr [ESP + 0x3584]    ; 00547b45
        ;   Label: LAB_00547b45
    INC EBP                             ; 00547b4c
    CMP EBP,ESI                         ; 00547b4d
    JL 0x005479c8                       ; 00547b4f
        ;   XREF to: 005479c8 (CONDITIONAL_JUMP)  ; LAB_005479c8
    MOV EAX,dword ptr [ESP + 0x3588]    ; 00547b55
        ;   Label: LAB_00547b55
    ADD ESP,0x35a0                      ; 00547b5c
    POP EBP                             ; 00547b62
    POP EDI                             ; 00547b63
    POP ESI                             ; 00547b64
    POP EBX                             ; 00547b65
    RET                                 ; 00547b66
    MOV EAX,dword ptr [ESP + 0x3590]    ; 00547b67
        ;   Label: LAB_00547b67
    MOV dword ptr [ESP + 0x3588],EBP    ; 00547b6e
    MOV dword ptr [ESP + 0x358c],EAX    ; 00547b75
    JMP 0x00547b45                      ; 00547b7c
        ;   XREF to: 00547b45 (UNCONDITIONAL_JUMP)  ; LAB_00547b45

