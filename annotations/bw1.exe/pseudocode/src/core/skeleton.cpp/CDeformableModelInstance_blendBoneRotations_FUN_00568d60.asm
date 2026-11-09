; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60(CDeformableModelInstance *this_ptr,CQuaternion4f *source_quaternions,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CQuaternion4f *  Stack[0x8]:4   source_quaternions
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[11]:
;   core_baron.cpp_FUN_0040f4d0 at 0040f6b8
;   core_doc.cpp_FUN_0046caa0 at 0046d457
;   core_gabriela.cpp_FUN_004c89c0 at 004c8ad7
;   core_haystack.cpp_FUN_004e9250 at 004e9551
;   core_icepick.cpp_FUN_004f0e50 at 004f11c6
;   core_scat.cpp_FUN_00540df0 at 0054123b
;   core_scat.cpp_FUN_00542270 at 005424da
;   core_skeleton.cpp_FUN_00569440 at 005695bf
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058ad8d
;   core_stranger.cpp_FUN_00588ad0 at 00588e0f
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005f2521
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00563630
;   core_xform.cpp_FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568d60
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
    PUSH ESI                            ; 00568d61
    PUSH EDI                            ; 00568d62
    PUSH EBP                            ; 00568d63
    SUB ESP,0x1c                        ; 00568d64
    FLD float ptr [ESP + 0x38]          ; 00568d67
    FCOMP double ptr [0x005f2521]       ; 00568d6b | DAT_005f2521
    FNSTSW AX                           ; 00568d71
    SAHF                                ; 00568d73
    JA 0x00568d7e                       ; 00568d74
        ;   XREF to: 00568d7e (CONDITIONAL_JUMP)  ; LAB_00568d7e
    ADD ESP,0x1c                        ; 00568d76
        ;   Label: LAB_00568d76
    POP EBP                             ; 00568d79
    POP EDI                             ; 00568d7a
    POP ESI                             ; 00568d7b
    POP EBX                             ; 00568d7c
    RET                                 ; 00568d7d
    MOV EDX,dword ptr [ESP + 0x30]      ; 00568d7e
        ;   Label: LAB_00568d7e
    PUSH EDX                            ; 00568d82
    XOR EBX,EBX                         ; 00568d83
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00568d85
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00568d8a
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00568d8d
    MOV dword ptr [ESP + 0x10],EAX      ; 00568d93
    TEST ECX,ECX                        ; 00568d97
    JLE 0x00568d76                      ; 00568d99
        ;   XREF to: 00568d76 (CONDITIONAL_JUMP)  ; LAB_00568d76
    MOV EAX,dword ptr [ESP + 0x30]      ; 00568d9b
    MOV EBP,dword ptr [ESP + 0x30]      ; 00568d9f
    MOV dword ptr [ESP + 0x14],EAX      ; 00568da3
    ADD EBP,0x6b0                       ; 00568da7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00568dad
        ;   Label: LAB_00568dad
    PUSH EAX                            ; 00568db1
    PUSH EBX                            ; 00568db2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00568db3
    PUSH EDX                            ; 00568db7
    CALL core_skeleton.cpp_FUN_00563630 ; 00568db8
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 00568dbd
    TEST EAX,EAX                        ; 00568dc0
    JGE 0x00568de3                      ; 00568dc2
        ;   XREF to: 00568de3 (CONDITIONAL_JUMP)  ; LAB_00568de3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00568dc4
        ;   Label: LAB_00568dc4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00568dc8
    ADD EBP,0x10                        ; 00568dcc
    INC EBX                             ; 00568dcf
    ADD ESI,0x10                        ; 00568dd0
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 00568dd3
    MOV dword ptr [ESP + 0x14],ESI      ; 00568dd9
    CMP EBX,EDI                         ; 00568ddd
    JGE 0x00568d76                      ; 00568ddf
        ;   XREF to: 00568d76 (CONDITIONAL_JUMP)  ; LAB_00568d76
    JMP 0x00568dad                      ; 00568de1
        ;   XREF to: 00568dad (UNCONDITIONAL_JUMP)  ; LAB_00568dad
    MOV ECX,dword ptr [ESP + 0x30]      ; 00568de3
        ;   Label: LAB_00568de3
    PUSH ECX                            ; 00568de7
    PUSH EAX                            ; 00568de8
    MOV ESI,dword ptr [ESP + 0x44]      ; 00568de9
    PUSH dword ptr [ESP + 0x40]         ; 00568ded
    PUSH ESI                            ; 00568df1
    PUSH EBX                            ; 00568df2
    CALL dword ptr [ESP + 0x54]         ; 00568df3
    MOV dword ptr [ESP + 0x2c],EAX      ; 00568df7
    FLD float ptr [ESP + 0x2c]          ; 00568dfb
    ADD ESP,0x14                        ; 00568dff
    SUB ESP,0x4                         ; 00568e02
    MOV EDI,dword ptr [ESP + 0x38]      ; 00568e05
    FSTP float ptr [ESP]                ; 00568e09
    PUSH EDI                            ; 00568e0c
    PUSH EBP                            ; 00568e0d
    LEA ESI,[ESP + 0xc]                 ; 00568e0e
    CALL core_xform.cpp_FUN_005b7940    ; 00568e12
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    ADD ESP,0xc                         ; 00568e17
    MOV EDI,dword ptr [ESP + 0x14]      ; 00568e1a
    MOV ESI,ESP                         ; 00568e1e
    LEA EDI,[EDI + 0x6b0]               ; 00568e20
    MOVSD ES:EDI,ESI                    ; 00568e26
    MOVSD ES:EDI,ESI                    ; 00568e27
    MOVSD ES:EDI,ESI                    ; 00568e28
    MOVSD ES:EDI,ESI                    ; 00568e29
    JMP 0x00568dc4                      ; 00568e2a
        ;   XREF to: 00568dc4 (UNCONDITIONAL_JUMP)  ; LAB_00568dc4

