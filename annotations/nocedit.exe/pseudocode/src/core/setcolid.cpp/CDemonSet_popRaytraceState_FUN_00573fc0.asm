; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408e6c
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 at 004c8856
;   core_lightgun.cpp_CLightGun_canSeeTarget_FUN_00505b70 at 00505c56
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 005061ca
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_0064633d
;   TerminatedCString s_CDemonSet_popRaytraceSta_00646352
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

    PUSH EBX                            ; 00573fc0
        ;   Label: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0
    PUSH ESI                            ; 00573fc1
    PUSH EDI                            ; 00573fc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00573fc3
    CMP dword ptr [0x033469ec],0x1      ; 00573fc7 | g_RaytraceStateStackDepth
    JL 0x00574135                       ; 00573fce
        ;   XREF to: 00574135 (CONDITIONAL_JUMP)  ; LAB_00574135
    MOV EDI,dword ptr [0x033469ec]      ; 00573fd4 | g_RaytraceStateStackDepth
        ;   Label: LAB_00573fd4
    DEC EDI                             ; 00573fda
    MOV dword ptr [0x033469ec],EDI      ; 00573fdb | g_RaytraceStateStackDepth
    LEA EAX,[EDI*0x4 + 0x0]             ; 00573fe1
    ADD EAX,EDI                         ; 00573fe8
    MOV EDI,0x33469f0                   ; 00573fea | g_RaytraceStateStack
    SHL EAX,0x5                         ; 00573fef
    ADD EDI,EAX                         ; 00573ff2
    MOV EAX,dword ptr [EDI]             ; 00573ff4 | g_RaytraceStateStack
    MOV dword ptr [EBX + 0x15f680],EAX  ; 00573ff6
    MOV EAX,dword ptr [EDI + 0x4]       ; 00573ffc | g_RaytraceStateStack[0].laser_type
    MOV dword ptr [EBX + 0x15f684],EAX  ; 00573fff
    MOV EAX,dword ptr [EDI + 0x8]       ; 00574005 | g_RaytraceStateStack[0].laser_color.r
    MOV dword ptr [EBX + 0x15f688],EAX  ; 00574008
    MOV EAX,dword ptr [EDI + 0xc]       ; 0057400e | g_RaytraceStateStack[0].laser_color.g
    MOV dword ptr [EBX + 0x15f68c],EAX  ; 00574011
    MOV EAX,dword ptr [EDI + 0x10]      ; 00574017 | g_RaytraceStateStack[0].laser_color.b
    MOV dword ptr [EBX + 0x15f690],EAX  ; 0057401a
    MOV EAX,dword ptr [EDI + 0x14]      ; 00574020 | g_RaytraceStateStack[0].ignore_list_count
    XOR ECX,ECX                         ; 00574023
    MOV dword ptr [EBX + 0x15f694],EAX  ; 00574025
    TEST EAX,EAX                        ; 0057402b
    JLE 0x00574050                      ; 0057402d
        ;   XREF to: 00574050 (CONDITIONAL_JUMP)  ; LAB_00574050
    MOV EAX,EDI                         ; 0057402f
    MOV EDX,EBX                         ; 00574031
    ADD EDX,0x4                         ; 00574033
        ;   Label: LAB_00574033
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00574036 | g_RaytraceStateStack[0].ignore_list[0] | g_RaytraceStateStack[0].ignore_list[1]
    MOV dword ptr [EDX + 0x15f698],ESI  ; 00574039
    INC ECX                             ; 0057403f
    MOV ESI,dword ptr [EBX + 0x15f694]  ; 00574040
    ADD EAX,0x4                         ; 00574046
    CMP ECX,ESI                         ; 00574049
    JL 0x00574033                       ; 0057404b
        ;   XREF to: 00574033 (CONDITIONAL_JUMP)  ; LAB_00574033
    LEA EAX,[EAX]                       ; 0057404d
    MOV EAX,dword ptr [EDI + 0x18]      ; 00574050 | g_RaytraceStateStack[0].collision_flag
        ;   Label: LAB_00574050
    LEA EDX,[EDI + 0x44]                ; 00574053
    MOV dword ptr [EBX + 0x15f698],EAX  ; 00574056
    LEA EAX,[EBX + 0x14d110]            ; 0057405c
    CMP EAX,EDX                         ; 00574062
    JZ 0x00574076                       ; 00574064
        ;   XREF to: 00574076 (CONDITIONAL_JUMP)  ; LAB_00574076
    MOV ECX,dword ptr [EDX]             ; 00574066 | g_RaytraceStateStack[0].saved_ray_origin.x
    MOV dword ptr [EAX],ECX             ; 00574068
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057406a | g_RaytraceStateStack[0].saved_ray_origin.y
    MOV dword ptr [EAX + 0x4],ECX       ; 0057406d
    MOV ECX,dword ptr [EDX + 0x8]       ; 00574070 | g_RaytraceStateStack[0].saved_ray_origin.z
    MOV dword ptr [EAX + 0x8],ECX       ; 00574073
    LEA EDX,[EDI + 0x50]                ; 00574076
        ;   Label: LAB_00574076
    LEA EAX,[EBX + 0x14d11c]            ; 00574079
    CMP EAX,EDX                         ; 0057407f
    JZ 0x00574093                       ; 00574081
        ;   XREF to: 00574093 (CONDITIONAL_JUMP)  ; LAB_00574093
    MOV ECX,dword ptr [EDX]             ; 00574083 | g_RaytraceStateStack[0].saved_ray_target.x
    MOV dword ptr [EAX],ECX             ; 00574085
    MOV ECX,dword ptr [EDX + 0x4]       ; 00574087 | g_RaytraceStateStack[0].saved_ray_target.y
    MOV dword ptr [EAX + 0x4],ECX       ; 0057408a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057408d | g_RaytraceStateStack[0].saved_ray_target.z
    MOV dword ptr [EAX + 0x8],ECX       ; 00574090
    FLD float ptr [EDI + 0x5c]          ; 00574093 | g_RaytraceStateStack[0].raycast_distance
        ;   Label: LAB_00574093
    LEA EAX,[EBX + 0x15f6cc]            ; 00574096
    LEA EDX,[EDI + 0x64]                ; 0057409c
    FSTP float ptr [EBX + 0x15f6c4]     ; 0057409f
    MOV ECX,dword ptr [EDI + 0x60]      ; 005740a5 | g_RaytraceStateStack[0].voxel_distance
    MOV dword ptr [EBX + 0x15f6c8],ECX  ; 005740a8
    CMP EAX,EDX                         ; 005740ae
    JZ 0x005740c2                       ; 005740b0
        ;   XREF to: 005740c2 (CONDITIONAL_JUMP)  ; LAB_005740c2
    MOV ECX,dword ptr [EDX]             ; 005740b2 | g_RaytraceStateStack[0].voxel_hit_point.x
    MOV dword ptr [EAX],ECX             ; 005740b4
    MOV ECX,dword ptr [EDX + 0x4]       ; 005740b6 | g_RaytraceStateStack[0].voxel_hit_point.y
    MOV dword ptr [EAX + 0x4],ECX       ; 005740b9
    MOV ECX,dword ptr [EDX + 0x8]       ; 005740bc | g_RaytraceStateStack[0].voxel_hit_point.z
    MOV dword ptr [EAX + 0x8],ECX       ; 005740bf
    MOV EAX,dword ptr [EDI + 0x70]      ; 005740c2 | g_RaytraceStateStack[0].voxel_surface_type
        ;   Label: LAB_005740c2
    LEA EDX,[EDI + 0x78]                ; 005740c5
    MOV dword ptr [EBX + 0x15f6d8],EAX  ; 005740c8
    LEA EAX,[EBX + 0x14d128]            ; 005740ce
    CMP EAX,EDX                         ; 005740d4
    JZ 0x005740e8                       ; 005740d6
        ;   XREF to: 005740e8 (CONDITIONAL_JUMP)  ; LAB_005740e8
    MOV ECX,dword ptr [EDX]             ; 005740d8 | g_RaytraceStateStack[0].saved_collision_normal.x
    MOV dword ptr [EAX],ECX             ; 005740da
    MOV ECX,dword ptr [EDX + 0x4]       ; 005740dc | g_RaytraceStateStack[0].saved_collision_normal.y
    MOV dword ptr [EAX + 0x4],ECX       ; 005740df
    MOV ECX,dword ptr [EDX + 0x8]       ; 005740e2 | g_RaytraceStateStack[0].saved_collision_normal.z
    MOV dword ptr [EAX + 0x8],ECX       ; 005740e5
    MOV EAX,dword ptr [EDI + 0x84]      ; 005740e8 | g_RaytraceStateStack[0].saved_ground_type
        ;   Label: LAB_005740e8
    LEA EDX,[EBX + 0x14d138]            ; 005740ee
    MOV dword ptr [EBX + 0x14d134],EAX  ; 005740f4
    LEA EAX,[EDI + 0x88]                ; 005740fa
    CMP EDX,EAX                         ; 00574100
    JNZ 0x0057415d                      ; 00574102
        ;   XREF to: 0057415d (CONDITIONAL_JUMP)  ; LAB_0057415d
    MOV EAX,dword ptr [EDI + 0x94]      ; 00574104 | g_RaytraceStateStack[0].saved_collision_actor
        ;   Label: LAB_00574104
    MOV dword ptr [EBX + 0x14d144],EAX  ; 0057410a
    MOV EAX,dword ptr [EDI + 0x98]      ; 00574110 | g_RaytraceStateStack[0].saved_collision_part_index
    MOV dword ptr [EBX + 0x14d148],EAX  ; 00574116
    MOV EAX,dword ptr [EDI + 0x9c]      ; 0057411c | g_RaytraceStateStack[0].saved_collision_triangle_index
    MOV dword ptr [EBX + 0x14d14c],EAX  ; 00574122
    MOV EAX,dword ptr [EDI + 0x74]      ; 00574128 | g_RaytraceStateStack[0].saved_skip_exact_collision
    MOV dword ptr [EBX + 0x15f6dc],EAX  ; 0057412b
    POP EDI                             ; 00574131
    POP ESI                             ; 00574132
    POP EBX                             ; 00574133
    RET                                 ; 00574134
    MOV ECX,0x64633d                    ; 00574135 | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_00574135
    MOV ESI,0x42a                       ; 0057413a
    PUSH 0x646352                       ; 0057413f | = "CDemonSet::popRaytraceState - stack e..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00574144 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0057414a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00574150
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00574155
    JMP 0x00573fd4                      ; 00574158
        ;   XREF to: 00573fd4 (UNCONDITIONAL_JUMP)  ; LAB_00573fd4
    MOV ECX,dword ptr [EAX]             ; 0057415d | g_RaytraceStateStack[0].saved_collision_point.x
        ;   Label: LAB_0057415d
    MOV dword ptr [EDX],ECX             ; 0057415f
    MOV ECX,dword ptr [EAX + 0x4]       ; 00574161 | g_RaytraceStateStack[0].saved_collision_point.y
    MOV dword ptr [EDX + 0x4],ECX       ; 00574164
    MOV ECX,dword ptr [EAX + 0x8]       ; 00574167 | g_RaytraceStateStack[0].saved_collision_point.z
    MOV dword ptr [EDX + 0x8],ECX       ; 0057416a
    JMP 0x00574104                      ; 0057416d
        ;   XREF to: 00574104 (UNCONDITIONAL_JUMP)  ; LAB_00574104

