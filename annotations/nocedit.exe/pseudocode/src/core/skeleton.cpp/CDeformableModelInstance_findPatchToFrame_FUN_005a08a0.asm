; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0(CDeformableModelInstance *this_ptr,int source_motion_index,float source_frame,int target_motion_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_motion_index
; float            Stack[0xc]:4   source_frame
; int              Stack[0x10]:4   target_motion_index
; Local Variables:
; SPose            Stack[-0x3598]:6812  local_3598
; SPose            Stack[-0x1afc]:6812  local_1afc
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a08a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0
    PUSH ESI                            ; 005a08a1
    PUSH EDI                            ; 005a08a2
    PUSH EBP                            ; 005a08a3
    SUB ESP,0x3588                      ; 005a08a4
    MOV EDI,dword ptr [ESP + 0x359c]    ; 005a08aa
    PUSH EDI                            ; 005a08b1
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005a08b2
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a08b7
    IMUL EDX,dword ptr [ESP + 0x35a8],0x54c ; 005a08ba
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x9cc] ; 005a08c5
    PUSH EDI                            ; 005a08cc
    MOV dword ptr [ESP + 0x357c],EAX    ; 005a08cd
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a08d4
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a08d9
    MOV EBX,dword ptr [EAX + 0x28558]   ; 005a08dc
    LEA EAX,[ESP + 0x1a9c]              ; 005a08e2
    PUSH EAX                            ; 005a08e9
    MOV ESI,dword ptr [ESP + 0x35a4]    ; 005a08ea
    PUSH dword ptr [ESP + 0x35a8]       ; 005a08f1
    PUSH ESI                            ; 005a08f8
    PUSH EDI                            ; 005a08f9
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0 ; 005a08fa
        ;   XREF to: 005a0ad0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 005a08ff
    PUSH EDI                            ; 005a0902
    LEA EAX,[ESP + 0x1aa0]              ; 005a0903
    PUSH EAX                            ; 005a090a
    MOV EBP,0xffffffff                  ; 005a090b
    XOR ESI,ESI                         ; 005a0910
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950 ; 005a0912
        ;   XREF to: 005a1950 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 005a0917
    MOV EAX,0x7149f2ca                  ; 005a091a
    MOV EDX,dword ptr [ESP + 0x3578]    ; 005a091f
    MOV dword ptr [ESP + 0x3574],EBP    ; 005a0926
    MOV dword ptr [ESP + 0x357c],EAX    ; 005a092d
    TEST EDX,EDX                        ; 005a0934
    JLE 0x005a0a9b                      ; 005a0936
        ;   XREF to: 005a0a9b (CONDITIONAL_JUMP)  ; LAB_005a0a9b
    MOV EAX,ESP                         ; 005a093c
        ;   Label: LAB_005a093c
    MOV dword ptr [ESP + 0x3584],ESI    ; 005a093e
    PUSH EAX                            ; 005a0945
    FILD dword ptr [ESP + 0x3588]       ; 005a0946
    SUB ESP,0x4                         ; 005a094d
    MOV EBP,dword ptr [ESP + 0x35b0]    ; 005a0950
    FSTP float ptr [ESP]                ; 005a0957
    PUSH EBP                            ; 005a095a
    PUSH EDI                            ; 005a095b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0 ; 005a095c
        ;   XREF to: 005a0ad0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_005a0ad0(CDeformableModelInstance * this_ptr, int motion_index, float animation_time, SPose * output_bone_data)
    ADD ESP,0x10                        ; 005a0961
    PUSH EDI                            ; 005a0964
    LEA EAX,[ESP + 0x4]                 ; 005a0965
    PUSH EAX                            ; 005a0969
    CALL core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950 ; 005a096a
        ;   XREF to: 005a1950 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950(SPose * bone_data, CDeformableModelInstance * instance_ptr)
    ADD ESP,0x8                         ; 005a096f
    XOR EAX,EAX                         ; 005a0972
    XOR ECX,ECX                         ; 005a0974
    MOV dword ptr [ESP + 0x3580],EAX    ; 005a0976
    TEST EBX,EBX                        ; 005a097d
    JLE 0x005a0a78                      ; 005a097f
        ;   XREF to: 005a0a78 (CONDITIONAL_JUMP)  ; LAB_005a0a78
    FLD float ptr [ESP + 0x3580]        ; 005a0985
    LEA EAX,[ESP + 0x7dc]               ; 005a098c
    LEA EDX,[ESP + 0x2278]              ; 005a0993
    MOV EBP,dword ptr [EAX + 0xc]       ; 005a099a
        ;   Label: LAB_005a099a
    MOV dword ptr [ESP + 0x3550],EBP    ; 005a099d
    MOV EBP,dword ptr [EAX + 0x1c]      ; 005a09a4
    MOV dword ptr [ESP + 0x3554],EBP    ; 005a09a7
    MOV EBP,dword ptr [EAX + 0x2c]      ; 005a09ae
    MOV dword ptr [ESP + 0x3558],EBP    ; 005a09b1
    MOV EBP,dword ptr [ESP + 0x3550]    ; 005a09b8
    MOV dword ptr [ESP + 0x3544],EBP    ; 005a09bf
    MOV EBP,dword ptr [ESP + 0x3554]    ; 005a09c6
    MOV dword ptr [ESP + 0x3548],EBP    ; 005a09cd
    MOV EBP,dword ptr [ESP + 0x3558]    ; 005a09d4
    MOV dword ptr [ESP + 0x354c],EBP    ; 005a09db
    MOV EBP,dword ptr [EDX + 0xc]       ; 005a09e2
    MOV dword ptr [ESP + 0x355c],EBP    ; 005a09e5
    FLD float ptr [ESP + 0x355c]        ; 005a09ec
    MOV EBP,dword ptr [EDX + 0x1c]      ; 005a09f3
    FSUB float ptr [ESP + 0x3550]       ; 005a09f6
    FMUL ST0                            ; 005a09fd
    MOV dword ptr [ESP + 0x3560],EBP    ; 005a09ff
    MOV EBP,dword ptr [EDX + 0x2c]      ; 005a0a06
    FLD float ptr [ESP + 0x3560]        ; 005a0a09
    MOV dword ptr [ESP + 0x3564],EBP    ; 005a0a10
    FSUB float ptr [ESP + 0x3554]       ; 005a0a17
    FMUL ST0                            ; 005a0a1e
    FLD float ptr [ESP + 0x3564]        ; 005a0a20
    FXCH                                ; 005a0a27
    FADDP ST2,ST0                       ; 005a0a29
    FSUB float ptr [ESP + 0x3558]       ; 005a0a2b
    FMUL ST0                            ; 005a0a32
    ADD EDX,0x30                        ; 005a0a34
    MOV EBP,dword ptr [ESP + 0x355c]    ; 005a0a37
    ADD EAX,0x30                        ; 005a0a3e
    MOV dword ptr [ESP + 0x3538],EBP    ; 005a0a41
    MOV EBP,dword ptr [ESP + 0x3560]    ; 005a0a48
    INC ECX                             ; 005a0a4f
    MOV dword ptr [ESP + 0x353c],EBP    ; 005a0a50
    MOV EBP,dword ptr [ESP + 0x3564]    ; 005a0a57
    FADDP                               ; 005a0a5e
    MOV dword ptr [ESP + 0x3540],EBP    ; 005a0a60
    FADDP                               ; 005a0a67
    CMP ECX,EBX                         ; 005a0a69
    JL 0x005a099a                       ; 005a0a6b
        ;   XREF to: 005a099a (CONDITIONAL_JUMP)  ; LAB_005a099a
    FSTP float ptr [ESP + 0x3580]       ; 005a0a71
    FLD float ptr [ESP + 0x3580]        ; 005a0a78
        ;   Label: LAB_005a0a78
    FCOMP float ptr [ESP + 0x357c]      ; 005a0a7f
    FNSTSW AX                           ; 005a0a86
    SAHF                                ; 005a0a88
    JC 0x005a0aad                       ; 005a0a89
        ;   XREF to: 005a0aad (CONDITIONAL_JUMP)  ; LAB_005a0aad
    MOV ECX,dword ptr [ESP + 0x3578]    ; 005a0a8b
        ;   Label: LAB_005a0a8b
    INC ESI                             ; 005a0a92
    CMP ESI,ECX                         ; 005a0a93
    JL 0x005a093c                       ; 005a0a95
        ;   XREF to: 005a093c (CONDITIONAL_JUMP)  ; LAB_005a093c
    MOV EAX,dword ptr [ESP + 0x3574]    ; 005a0a9b
        ;   Label: LAB_005a0a9b
    ADD ESP,0x3588                      ; 005a0aa2
    POP EBP                             ; 005a0aa8
    POP EDI                             ; 005a0aa9
    POP ESI                             ; 005a0aaa
    POP EBX                             ; 005a0aab
    RET                                 ; 005a0aac
    MOV EAX,dword ptr [ESP + 0x3580]    ; 005a0aad
        ;   Label: LAB_005a0aad
    MOV dword ptr [ESP + 0x3574],ESI    ; 005a0ab4
    MOV dword ptr [ESP + 0x357c],EAX    ; 005a0abb
    JMP 0x005a0a8b                      ; 005a0ac2
        ;   XREF to: 005a0a8b (UNCONDITIONAL_JUMP)  ; LAB_005a0a8b

