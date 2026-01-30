; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_zombie_cpp_CZombie_FUN_005fc120(void)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_006589b5 = 0.5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fc120
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc120
    PUSH ESI                            ; 005fc121
    PUSH EDI                            ; 005fc122
    SUB ESP,0x40                        ; 005fc123
    MOV ESI,dword ptr [ESP + 0x50]      ; 005fc126
    MOV EDI,dword ptr [ESP + 0x54]      ; 005fc12a
    PUSH 0x3                            ; 005fc12e
    LEA EBX,[ESI + 0x158]               ; 005fc130
    PUSH EBX                            ; 005fc136
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005fc137
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x44],EAX      ; 005fc13c
    FLD float ptr [ESP + 0x44]          ; 005fc140
    FLDZ                                ; 005fc144
    ADD ESP,0x8                         ; 005fc146
    FCOMPP                              ; 005fc149
    FNSTSW AX                           ; 005fc14b
    SAHF                                ; 005fc14d
    JC 0x005fc159                       ; 005fc14e
        ;   XREF to: 005fc159 (CONDITIONAL_JUMP)  ; LAB_005fc159
    XOR EAX,EAX                         ; 005fc150
    ADD ESP,0x40                        ; 005fc152
    POP EDI                             ; 005fc155
    POP ESI                             ; 005fc156
    POP EBX                             ; 005fc157
    RET                                 ; 005fc158
    MOV EDX,dword ptr [ESI + 0xbf50]    ; 005fc159
        ;   Label: LAB_005fc159
    PUSH EDX                            ; 005fc15f
    LEA EAX,[ESP + 0x1c]                ; 005fc160
    PUSH EAX                            ; 005fc164
    PUSH EBX                            ; 005fc165
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc166
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005fc16b
    MOV ECX,dword ptr [ESI + 0xbf54]    ; 005fc16e
    PUSH ECX                            ; 005fc174
    LEA EAX,[ESP + 0x4]                 ; 005fc175
    PUSH EAX                            ; 005fc179
    PUSH EBX                            ; 005fc17a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005fc17b
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005fc180
    FLD float ptr [ESP + 0x1c]          ; 005fc183
    FLD float ptr [ESP + 0x18]          ; 005fc187
    FADD float ptr [ESP]                ; 005fc18b
    FXCH                                ; 005fc18e
    FADD float ptr [ESP + 0x4]          ; 005fc190
    FXCH                                ; 005fc194
    FST float ptr [ESP + 0x30]          ; 005fc196
    FLD float ptr [0x006589b5]          ; 005fc19a | FLOAT_006589b5
    FXCH                                ; 005fc1a0
    FMUL ST1                            ; 005fc1a2
    FXCH ST2                            ; 005fc1a4
    FST float ptr [ESP + 0x34]          ; 005fc1a6
    FMUL ST1                            ; 005fc1aa
    LEA EAX,[ESP + 0x24]                ; 005fc1ac
    FLD float ptr [ESP + 0x20]          ; 005fc1b0
    PUSH EAX                            ; 005fc1b4
    FADD float ptr [ESP + 0xc]          ; 005fc1b5
    LEA EAX,[ESP + 0x10]                ; 005fc1b9
    FST float ptr [ESP + 0x3c]          ; 005fc1bd
    PUSH EAX                            ; 005fc1c1
    FMULP ST2                           ; 005fc1c2
    PUSH ESI                            ; 005fc1c4
    FXCH ST2                            ; 005fc1c5
    FSTP float ptr [ESP + 0x30]         ; 005fc1c7
    FXCH                                ; 005fc1cb
    FSTP float ptr [ESP + 0x34]         ; 005fc1cd
    FSTP float ptr [ESP + 0x38]         ; 005fc1d1
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fc1d5
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005fc1da
    CMP EDI,EAX                         ; 005fc1dd
    JZ 0x005fc1f1                       ; 005fc1df
        ;   XREF to: 005fc1f1 (CONDITIONAL_JUMP)  ; LAB_005fc1f1
    MOV EDX,dword ptr [EAX]             ; 005fc1e1
    MOV dword ptr [EDI],EDX             ; 005fc1e3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005fc1e5
    MOV dword ptr [EDI + 0x4],EDX       ; 005fc1e8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005fc1eb
    MOV dword ptr [EDI + 0x8],EDX       ; 005fc1ee
    MOV EAX,0x1                         ; 005fc1f1
        ;   Label: LAB_005fc1f1
    ADD ESP,0x40                        ; 005fc1f6
    POP EDI                             ; 005fc1f9
    POP ESI                             ; 005fc1fa
    POP EBX                             ; 005fc1fb
    RET                                 ; 005fc1fc

