; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408dd9
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 at 004c8745
;   core_lightgun.cpp_CLightGun_canSeeTarget_FUN_00505b70 at 00505b86
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 00505f85
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_006462fe
;   TerminatedCString s_CDemonSet_pushRaytraceSt_00646313
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_RaytraceStateStackDepth
;   SRaytraceState[5] g_RaytraceStateStack
;   undefined4 g_RaytraceStateStack[0].laser_type
;   undefined4 g_RaytraceStateStack[0].laser_color.r
;   undefined4 g_RaytraceStateStack[0].laser_color.g
;   undefined4 g_RaytraceStateStack[0].laser_color.b
;   undefined4 g_RaytraceStateStack[0].ignore_list_count
;   undefined4 g_RaytraceStateStack[0].collision_flag
;   undefined4 g_RaytraceStateStack[0].ignore_list[0]
;   undefined4 g_RaytraceStateStack[0].ignore_list[1]
;   undefined4 g_RaytraceStateStack[0].saved_ray_origin.x
;   ... and 22 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573e10
        ;   Label: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10
    PUSH ESI                            ; 00573e11
    PUSH EDI                            ; 00573e12
    PUSH EBP                            ; 00573e13
    MOV EBX,dword ptr [ESP + 0x14]      ; 00573e14
    CMP dword ptr [0x033469ec],0x5      ; 00573e18 | g_RaytraceStateStackDepth
    JG 0x00573f86                       ; 00573e1f
        ;   XREF to: 00573f86 (CONDITIONAL_JUMP)  ; LAB_00573f86
    MOV EDX,dword ptr [0x033469ec]      ; 00573e25 | g_RaytraceStateStackDepth
        ;   Label: LAB_00573e25
    LEA EAX,[EDX*0x4 + 0x0]             ; 00573e2b
    ADD EAX,EDX                         ; 00573e32
    MOV EDI,0x33469f0                   ; 00573e34 | g_RaytraceStateStack
    SHL EAX,0x5                         ; 00573e39
    ADD EDI,EAX                         ; 00573e3c
    MOV EAX,dword ptr [EBX + 0x15f680]  ; 00573e3e
    MOV dword ptr [EDI],EAX             ; 00573e44 | g_RaytraceStateStack
    MOV EAX,dword ptr [EBX + 0x15f684]  ; 00573e46
    MOV dword ptr [EDI + 0x4],EAX       ; 00573e4c | g_RaytraceStateStack[0].laser_type
    MOV EAX,dword ptr [EBX + 0x15f688]  ; 00573e4f
    MOV dword ptr [EDI + 0x8],EAX       ; 00573e55 | g_RaytraceStateStack[0].laser_color.r
    MOV EAX,dword ptr [EBX + 0x15f68c]  ; 00573e58
    MOV dword ptr [EDI + 0xc],EAX       ; 00573e5e | g_RaytraceStateStack[0].laser_color.g
    MOV EAX,dword ptr [EBX + 0x15f690]  ; 00573e61
    XOR ECX,ECX                         ; 00573e67
    MOV dword ptr [EDI + 0x10],EAX      ; 00573e69 | g_RaytraceStateStack[0].laser_color.b
    LEA EBP,[EDX + 0x1]                 ; 00573e6c
    MOV EAX,dword ptr [EBX + 0x15f694]  ; 00573e6f
    MOV dword ptr [0x033469ec],EBP      ; 00573e75 | g_RaytraceStateStackDepth
    MOV dword ptr [EDI + 0x14],EAX      ; 00573e7b | g_RaytraceStateStack[0].ignore_list_count
    TEST EAX,EAX                        ; 00573e7e
    JLE 0x00573ea0                      ; 00573e80
        ;   XREF to: 00573ea0 (CONDITIONAL_JUMP)  ; LAB_00573ea0
    MOV EAX,EBX                         ; 00573e82
    MOV EDX,EDI                         ; 00573e84
    ADD EDX,0x4                         ; 00573e86
        ;   Label: LAB_00573e86
    MOV ESI,dword ptr [EAX + 0x15f69c]  ; 00573e89
    MOV dword ptr [EDX + 0x18],ESI      ; 00573e8f | g_RaytraceStateStack[0].ignore_list[0] | g_RaytraceStateStack[0].ignore_list[1]
    INC ECX                             ; 00573e92
    MOV ESI,dword ptr [EBX + 0x15f694]  ; 00573e93
    ADD EAX,0x4                         ; 00573e99
    CMP ECX,ESI                         ; 00573e9c
    JL 0x00573e86                       ; 00573e9e
        ;   XREF to: 00573e86 (CONDITIONAL_JUMP)  ; LAB_00573e86
    MOV EAX,dword ptr [EBX + 0x15f698]  ; 00573ea0
        ;   Label: LAB_00573ea0
    LEA EDX,[EBX + 0x14d110]            ; 00573ea6
    MOV dword ptr [EDI + 0x18],EAX      ; 00573eac | g_RaytraceStateStack[0].collision_flag
    LEA EAX,[EDI + 0x44]                ; 00573eaf
    CMP EAX,EDX                         ; 00573eb2
    JZ 0x00573ec6                       ; 00573eb4
        ;   XREF to: 00573ec6 (CONDITIONAL_JUMP)  ; LAB_00573ec6
    MOV ECX,dword ptr [EDX]             ; 00573eb6
    MOV dword ptr [EAX],ECX             ; 00573eb8 | g_RaytraceStateStack[0].saved_ray_origin.x
    MOV ECX,dword ptr [EDX + 0x4]       ; 00573eba
    MOV dword ptr [EAX + 0x4],ECX       ; 00573ebd | g_RaytraceStateStack[0].saved_ray_origin.y
    MOV ECX,dword ptr [EDX + 0x8]       ; 00573ec0
    MOV dword ptr [EAX + 0x8],ECX       ; 00573ec3 | g_RaytraceStateStack[0].saved_ray_origin.z
    LEA EDX,[EBX + 0x14d11c]            ; 00573ec6
        ;   Label: LAB_00573ec6
    LEA EAX,[EDI + 0x50]                ; 00573ecc
    CMP EAX,EDX                         ; 00573ecf
    JZ 0x00573ee3                       ; 00573ed1
        ;   XREF to: 00573ee3 (CONDITIONAL_JUMP)  ; LAB_00573ee3
    MOV ECX,dword ptr [EDX]             ; 00573ed3
    MOV dword ptr [EAX],ECX             ; 00573ed5 | g_RaytraceStateStack[0].saved_ray_target.x
    MOV ECX,dword ptr [EDX + 0x4]       ; 00573ed7
    MOV dword ptr [EAX + 0x4],ECX       ; 00573eda | g_RaytraceStateStack[0].saved_ray_target.y
    MOV ECX,dword ptr [EDX + 0x8]       ; 00573edd
    MOV dword ptr [EAX + 0x8],ECX       ; 00573ee0 | g_RaytraceStateStack[0].saved_ray_target.z
    FLD float ptr [EBX + 0x15f6c4]      ; 00573ee3
        ;   Label: LAB_00573ee3
    LEA EAX,[EDI + 0x64]                ; 00573ee9
    LEA EDX,[EBX + 0x15f6cc]            ; 00573eec
    FSTP float ptr [EDI + 0x5c]         ; 00573ef2 | g_RaytraceStateStack[0].raycast_distance
    MOV ECX,dword ptr [EBX + 0x15f6c8]  ; 00573ef5
    MOV dword ptr [EDI + 0x60],ECX      ; 00573efb | g_RaytraceStateStack[0].voxel_distance
    CMP EAX,EDX                         ; 00573efe
    JZ 0x00573f12                       ; 00573f00
        ;   XREF to: 00573f12 (CONDITIONAL_JUMP)  ; LAB_00573f12
    MOV ECX,dword ptr [EDX]             ; 00573f02
    MOV dword ptr [EAX],ECX             ; 00573f04 | g_RaytraceStateStack[0].voxel_hit_point.x
    MOV ECX,dword ptr [EDX + 0x4]       ; 00573f06
    MOV dword ptr [EAX + 0x4],ECX       ; 00573f09 | g_RaytraceStateStack[0].voxel_hit_point.y
    MOV ECX,dword ptr [EDX + 0x8]       ; 00573f0c
    MOV dword ptr [EAX + 0x8],ECX       ; 00573f0f | g_RaytraceStateStack[0].voxel_hit_point.z
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 00573f12
        ;   Label: LAB_00573f12
    LEA EDX,[EBX + 0x14d128]            ; 00573f18
    MOV dword ptr [EDI + 0x70],EAX      ; 00573f1e | g_RaytraceStateStack[0].voxel_surface_type
    LEA EAX,[EDI + 0x78]                ; 00573f21
    CMP EAX,EDX                         ; 00573f24
    JZ 0x00573f38                       ; 00573f26
        ;   XREF to: 00573f38 (CONDITIONAL_JUMP)  ; LAB_00573f38
    MOV ECX,dword ptr [EDX]             ; 00573f28
    MOV dword ptr [EAX],ECX             ; 00573f2a | g_RaytraceStateStack[0].saved_collision_normal.x
    MOV ECX,dword ptr [EDX + 0x4]       ; 00573f2c
    MOV dword ptr [EAX + 0x4],ECX       ; 00573f2f | g_RaytraceStateStack[0].saved_collision_normal.y
    MOV ECX,dword ptr [EDX + 0x8]       ; 00573f32
    MOV dword ptr [EAX + 0x8],ECX       ; 00573f35 | g_RaytraceStateStack[0].saved_collision_normal.z
    MOV EAX,dword ptr [EBX + 0x14d134]  ; 00573f38
        ;   Label: LAB_00573f38
    LEA EDX,[EDI + 0x88]                ; 00573f3e
    MOV dword ptr [EDI + 0x84],EAX      ; 00573f44 | g_RaytraceStateStack[0].saved_ground_type
    LEA EAX,[EBX + 0x14d138]            ; 00573f4a
    CMP EDX,EAX                         ; 00573f50
    JNZ 0x00573fae                      ; 00573f52
        ;   XREF to: 00573fae (CONDITIONAL_JUMP)  ; LAB_00573fae
    MOV EAX,dword ptr [EBX + 0x14d144]  ; 00573f54
        ;   Label: LAB_00573f54
    MOV dword ptr [EDI + 0x94],EAX      ; 00573f5a | g_RaytraceStateStack[0].saved_collision_actor
    MOV EAX,dword ptr [EBX + 0x14d148]  ; 00573f60
    MOV dword ptr [EDI + 0x98],EAX      ; 00573f66 | g_RaytraceStateStack[0].saved_collision_part_index
    MOV EAX,dword ptr [EBX + 0x14d14c]  ; 00573f6c
    MOV dword ptr [EDI + 0x9c],EAX      ; 00573f72 | g_RaytraceStateStack[0].saved_collision_triangle_index
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 00573f78
    MOV dword ptr [EDI + 0x74],EAX      ; 00573f7e | g_RaytraceStateStack[0].saved_skip_exact_collision
    POP EBP                             ; 00573f81
    POP EDI                             ; 00573f82
    POP ESI                             ; 00573f83
    POP EBX                             ; 00573f84
    RET                                 ; 00573f85
    MOV ECX,0x6462fe                    ; 00573f86 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00573f86
    MOV ESI,0x406                       ; 00573f8b
    PUSH 0x646313                       ; 00573f90 | = "CDemonSet::pushRaytraceState - stack ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00573f95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00573f9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00573fa1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00573fa6
    JMP 0x00573e25                      ; 00573fa9
        ;   XREF to: 00573e25 (UNCONDITIONAL_JUMP)  ; LAB_00573e25
    MOV ECX,dword ptr [EAX]             ; 00573fae
        ;   Label: LAB_00573fae
    MOV dword ptr [EDX],ECX             ; 00573fb0 | g_RaytraceStateStack[0].saved_collision_point.x
    MOV ECX,dword ptr [EAX + 0x4]       ; 00573fb2
    MOV dword ptr [EDX + 0x4],ECX       ; 00573fb5 | g_RaytraceStateStack[0].saved_collision_point.y
    MOV ECX,dword ptr [EAX + 0x8]       ; 00573fb8
    MOV dword ptr [EDX + 0x8],ECX       ; 00573fbb | g_RaytraceStateStack[0].saved_collision_point.z
    JMP 0x00573f54                      ; 00573fbe
        ;   XREF to: 00573f54 (UNCONDITIONAL_JUMP)  ; LAB_00573f54

