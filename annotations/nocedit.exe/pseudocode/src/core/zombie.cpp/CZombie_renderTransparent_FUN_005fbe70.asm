; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_renderTransparent_FUN_005fbe70(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
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
; undefined1       Stack[-0x10]:1  local_10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0
;   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbe70
        ;   Label: core_zombie.cpp_CZombie_renderTransparent_FUN_005fbe70
    PUSH ESI                            ; 005fbe71
    PUSH EDI                            ; 005fbe72
    PUSH EBP                            ; 005fbe73
    MOV EBP,ESP                         ; 005fbe74
    SUB ESP,0xe4                        ; 005fbe76
    SUB EBP,0x7e                        ; 005fbe7c
    MOV EBX,dword ptr [EBP + 0x92]      ; 005fbe7f
    CMP dword ptr [EBX + 0x2620],0x0    ; 005fbe85
    JZ 0x005fbfa1                       ; 005fbe8c
        ;   XREF to: 005fbfa1 (CONDITIONAL_JUMP)  ; LAB_005fbfa1
    CMP dword ptr [EBX + 0xbf40],0x0    ; 005fbe92
    JZ 0x005fbfa1                       ; 005fbe99
        ;   XREF to: 005fbfa1 (CONDITIONAL_JUMP)  ; LAB_005fbfa1
    MOV ESI,dword ptr [EBX + 0xbf4c]    ; 005fbe9f
    PUSH ESI                            ; 005fbea5
    LEA EAX,[EBX + 0x158]               ; 005fbea6
    PUSH EAX                            ; 005fbeac
    LEA ESI,[EBP + -0x36]               ; 005fbead
    LEA EDI,[EBP + -0x66]               ; 005fbeb0
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 ; 005fbeb3
        ;   XREF to: 0059f820 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820(CDeformableModelInstance * this_ptr, int bone_index, CMatrix3x4f * out_matrix)
    ADD ESP,0x8                         ; 005fbeb8
    LEA EAX,[EBP + -0x66]               ; 005fbebb
    MOV ECX,0xc                         ; 005fbebe
    PUSH EAX                            ; 005fbec3
    MOV EAX,0x3f000000                  ; 005fbec4
    LEA ESI,[EBP + -0x36]               ; 005fbec9
    MOV dword ptr [EBP + 0x22],EAX      ; 005fbecc
    MOV dword ptr [EBP + 0x26],EAX      ; 005fbecf
    LEA EAX,[EBP + 0x1e]                ; 005fbed2
    MOVSD.REP ES:EDI,ESI                ; 005fbed5
    PUSH EAX                            ; 005fbed7
    LEA EAX,[EBP + -0x6]                ; 005fbed8
    XOR EDI,EDI                         ; 005fbedb
    PUSH EAX                            ; 005fbedd
    MOV dword ptr [EBP + 0x1e],EDI      ; 005fbede
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005fbee1
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005fbee6
    PUSH EAX                            ; 005fbee9
    LEA EAX,[EBP + 0x6]                 ; 005fbeea
    PUSH EAX                            ; 005fbeed
    PUSH EBX                            ; 005fbeee
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005fbeef
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005fbef4
    LEA EAX,[EBP + -0x66]               ; 005fbef7
    PUSH EAX                            ; 005fbefa
    LEA EAX,[EBP + 0x36]                ; 005fbefb
    PUSH EAX                            ; 005fbefe
    LEA EAX,[EBP + 0x4e]                ; 005fbeff
    MOV dword ptr [EBP + 0x36],EDI      ; 005fbf02
    PUSH EAX                            ; 005fbf05
    MOV dword ptr [EBP + 0x3a],EDI      ; 005fbf06
    MOV dword ptr [EBP + 0x3e],EDI      ; 005fbf09
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005fbf0c
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005fbf11
    PUSH EAX                            ; 005fbf14
    LEA EAX,[EBP + 0x5a]                ; 005fbf15
    PUSH EAX                            ; 005fbf18
    PUSH EBX                            ; 005fbf19
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005fbf1a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 005fbf1f
    LEA EAX,[EBP + -0x66]               ; 005fbf22
    PUSH EAX                            ; 005fbf25
    LEA EAX,[EBP + 0x66]                ; 005fbf26
    MOV ECX,0x3f800000                  ; 005fbf29
    PUSH EAX                            ; 005fbf2e
    LEA EAX,[EBP + 0x42]                ; 005fbf2f
    MOV dword ptr [EBP + 0x66],EDI      ; 005fbf32
    PUSH EAX                            ; 005fbf35
    MOV dword ptr [EBP + 0x6a],EDI      ; 005fbf36
    MOV dword ptr [EBP + 0x6e],ECX      ; 005fbf39
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005fbf3c
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005fbf41
    PUSH EAX                            ; 005fbf44
    LEA EAX,[EBP + 0x72]                ; 005fbf45
    PUSH EAX                            ; 005fbf48
    PUSH EBX                            ; 005fbf49
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005fbf4a
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EBP + 0x72]          ; 005fbf4f
    FLD float ptr [EBP + 0x76]          ; 005fbf52
    FLD float ptr [EBP + 0x7a]          ; 005fbf55
    LEA EAX,[EBP + 0x2a]                ; 005fbf58
    ADD ESP,0xc                         ; 005fbf5b
    FXCH ST2                            ; 005fbf5e
    FSUB float ptr [EBP + 0x5a]         ; 005fbf60
    FXCH                                ; 005fbf63
    FSUB float ptr [EBP + 0x5e]         ; 005fbf65
    FXCH ST2                            ; 005fbf68
    FSUB float ptr [EBP + 0x62]         ; 005fbf6a
    PUSH EAX                            ; 005fbf6d
    FXCH                                ; 005fbf6e
    FSTP float ptr [EBP + 0x2a]         ; 005fbf70
    LEA EAX,[EBP + 0x12]                ; 005fbf73
    FXCH                                ; 005fbf76
    FSTP float ptr [EBP + 0x2e]         ; 005fbf78
    PUSH EAX                            ; 005fbf7b
    FSTP float ptr [EBP + 0x32]         ; 005fbf7c
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005fbf7f
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005fbf84
    PUSH 0x40c00000                     ; 005fbf87
    LEA EAX,[EBP + 0x12]                ; 005fbf8c
    PUSH 0x42600000                     ; 005fbf8f
    PUSH EAX                            ; 005fbf94
    LEA EAX,[EBP + 0x6]                 ; 005fbf95
    PUSH EAX                            ; 005fbf98
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 ; 005fbf99
        ;   XREF to: 004760d0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 005fbf9e
    CMP dword ptr [EBX + 0x2620],0x0    ; 005fbfa1
        ;   Label: LAB_005fbfa1
    JNZ 0x005fbfb8                      ; 005fbfa8
        ;   XREF to: 005fbfb8 (CONDITIONAL_JUMP)  ; LAB_005fbfb8
    MOV EAX,dword ptr [EBX + 0x2620]    ; 005fbfaa
    LEA ESP,[EBP + 0x7e]                ; 005fbfb0
    POP EBP                             ; 005fbfb3
    POP EDI                             ; 005fbfb4
    POP ESI                             ; 005fbfb5
    POP EBX                             ; 005fbfb6
    RET                                 ; 005fbfb7
    PUSH EBX                            ; 005fbfb8
        ;   Label: LAB_005fbfb8
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0 ; 005fbfb9
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_0042b0e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005fbfbe
    MOV EAX,dword ptr [EBX + 0x2620]    ; 005fbfc1
    LEA ESP,[EBP + 0x7e]                ; 005fbfc7
    POP EBP                             ; 005fbfca
    POP EDI                             ; 005fbfcb
    POP ESI                             ; 005fbfcc
    POP EBX                             ; 005fbfcd
    RET                                 ; 005fbfce

