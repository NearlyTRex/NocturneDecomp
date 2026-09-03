; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet *this_ptr,CVector3f *ray_origin,CVector3f *ray_target)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_target
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[17]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b81f
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043d1c0 at 0043d35f
;   core_elephant.cpp_CElephantGun_fire_FUN_00477890 at 00477ad4
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0048b6f0 at 0048b7d3
;   core_gabriela.cpp_CGabriella_processAI_FUN_00496d10 at 004971d1
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_00498de0 at 00499044
;   core_gun.cpp_CGun_fire_FUN_004b27c0 at 004b298a
;   core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0 at 004c7137
;   core_lightgun.cpp_CLightGun_fire_FUN_004c71a0 at 004c73a0
;   core_scat.cpp_CScat_scoreAimTarget_FUN_004fda20 at 004fdc84
;   ... and 7 more
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fb00
        ;   Label: core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
    PUSH ESI                            ; 0050fb01
    PUSH EDI                            ; 0050fb02
    PUSH EBP                            ; 0050fb03
    SUB ESP,0x28                        ; 0050fb04
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0050fb07
    MOV ESI,dword ptr [ESP + 0x40]      ; 0050fb0b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0050fb0f
    LEA EAX,[EBX + 0x14cd28]            ; 0050fb13
    CMP EAX,ESI                         ; 0050fb19
    JNZ 0x0050fc59                      ; 0050fb1b
        ;   XREF to: 0050fc59 (CONDITIONAL_JUMP)  ; LAB_0050fc59
    LEA EAX,[EBX + 0x14cd34]            ; 0050fb21
        ;   Label: LAB_0050fb21
    CMP EAX,EDI                         ; 0050fb27
    JZ 0x0050fb3b                       ; 0050fb29
        ;   XREF to: 0050fb3b (CONDITIONAL_JUMP)  ; LAB_0050fb3b
    MOV EDX,dword ptr [EDI]             ; 0050fb2b
    MOV dword ptr [EAX],EDX             ; 0050fb2d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0050fb2f
    MOV dword ptr [EAX + 0x4],EDX       ; 0050fb32
    MOV EDX,dword ptr [EDI + 0x8]       ; 0050fb35
    MOV dword ptr [EAX + 0x8],EDX       ; 0050fb38
    LEA EAX,[EBX + 0x15f2f0]            ; 0050fb3b
        ;   Label: LAB_0050fb3b
    PUSH EAX                            ; 0050fb41
    LEA EBP,[EBX + 0x15f2e4]            ; 0050fb42
    PUSH EBP                            ; 0050fb48
    PUSH EDI                            ; 0050fb49
    PUSH ESI                            ; 0050fb4a
    PUSH 0x1fba938                      ; 0050fb4b | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00 ; 0050fb50
        ;   XREF to: 00467a00 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00(CDemonRaytrace * this_ptr, CVector3f * ray_start, CVector3f * ray_end, CVector3f * out_intersection_point, ...)
    MOV dword ptr [ESP + 0x38],EAX      ; 0050fb55
    FLD float ptr [ESP + 0x38]          ; 0050fb59
    LEA EAX,[EBX + 0x14cd40]            ; 0050fb5d
    FSTP float ptr [EBX + 0x15f2e0]     ; 0050fb63
    ADD ESP,0x14                        ; 0050fb69
    CMP EAX,EBP                         ; 0050fb6c
    JZ 0x0050fb81                       ; 0050fb6e
        ;   XREF to: 0050fb81 (CONDITIONAL_JUMP)  ; LAB_0050fb81
    MOV EDX,dword ptr [EBP]             ; 0050fb70
    MOV dword ptr [EAX],EDX             ; 0050fb73
    MOV EDX,dword ptr [EBP + 0x4]       ; 0050fb75
    MOV dword ptr [EAX + 0x4],EDX       ; 0050fb78
    MOV EDX,dword ptr [EBP + 0x8]       ; 0050fb7b
    MOV dword ptr [EAX + 0x8],EDX       ; 0050fb7e
    FLD float ptr [EBX + 0x15f2e0]      ; 0050fb81
        ;   Label: LAB_0050fb81
    MOV EAX,dword ptr [EBX + 0x15f2f0]  ; 0050fb87
    FLDZ                                ; 0050fb8d
    MOV dword ptr [EBX + 0x14cd4c],EAX  ; 0050fb8f
    FCOMPP                              ; 0050fb95
    FNSTSW AX                           ; 0050fb97
    SAHF                                ; 0050fb99
    JBE 0x0050fba6                      ; 0050fb9a
        ;   XREF to: 0050fba6 (CONDITIONAL_JUMP)  ; LAB_0050fba6
    MOV dword ptr [EBX + 0x15f2e0],0x3f8147ae ; 0050fb9c
    PUSH dword ptr [EBX + 0x15f2e0]     ; 0050fba6
        ;   Label: LAB_0050fba6
    PUSH EDI                            ; 0050fbac
    PUSH ESI                            ; 0050fbad
    PUSH 0xbf800000                     ; 0050fbae
    PUSH EBX                            ; 0050fbb3
    CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0 ; 0050fbb4
        ;   XREF to: 0050ffe0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(CDemonSet * this_ptr, float min_t, CVector3f * ray_origin, CVector3f * ray_target, ...)
    MOV dword ptr [ESP + 0x38],EAX      ; 0050fbb9
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050fbbd
    MOV dword ptr [EBX + 0x15f2dc],EAX  ; 0050fbc1
    ADD ESP,0x14                        ; 0050fbc7
    FLD float ptr [EBX + 0x15f2dc]      ; 0050fbca
    FLD1                                ; 0050fbd0
    FCOMPP                              ; 0050fbd2
    FNSTSW AX                           ; 0050fbd4
    SAHF                                ; 0050fbd6
    JC 0x0050fc4b                       ; 0050fbd7
        ;   XREF to: 0050fc4b (CONDITIONAL_JUMP)  ; LAB_0050fc4b
    FLD float ptr [EDI]                 ; 0050fbd9
    FSUB float ptr [ESI]                ; 0050fbdb
    FSTP float ptr [ESP + 0xc]          ; 0050fbdd
    FLD float ptr [EDI + 0x4]           ; 0050fbe1
    FSUB float ptr [ESI + 0x4]          ; 0050fbe4
    LEA EAX,[EBX + 0x15f2dc]            ; 0050fbe7
    FSTP float ptr [ESP + 0x10]         ; 0050fbed
    FLD float ptr [EDI + 0x8]           ; 0050fbf1
    FSUB float ptr [ESI + 0x8]          ; 0050fbf4
    FLD float ptr [ESP + 0xc]           ; 0050fbf7
    FXCH                                ; 0050fbfb
    FSTP float ptr [ESP + 0x14]         ; 0050fbfd
    FMUL float ptr [EAX]                ; 0050fc01
    FLD float ptr [ESP + 0x10]          ; 0050fc03
    FXCH                                ; 0050fc07
    FSTP float ptr [ESP]                ; 0050fc09
    FMUL float ptr [EAX]                ; 0050fc0c
    FLD float ptr [ESP + 0x14]          ; 0050fc0e
    FXCH                                ; 0050fc12
    FSTP float ptr [ESP + 0x4]          ; 0050fc14
    FMUL float ptr [EAX]                ; 0050fc18
    FSTP float ptr [ESP + 0x8]          ; 0050fc1a
    FLD float ptr [ESI]                 ; 0050fc1e
    FADD float ptr [ESP]                ; 0050fc20
    FSTP float ptr [ESP + 0x18]         ; 0050fc23
    FLD float ptr [ESI + 0x4]           ; 0050fc27
    FADD float ptr [ESP + 0x4]          ; 0050fc2a
    LEA EAX,[ESP + 0x18]                ; 0050fc2e
    FSTP float ptr [ESP + 0x1c]         ; 0050fc32
    FLD float ptr [ESI + 0x8]           ; 0050fc36
    FADD float ptr [ESP + 0x8]          ; 0050fc39
    LEA ESI,[EBX + 0x14cd50]            ; 0050fc3d
    FSTP float ptr [ESP + 0x20]         ; 0050fc43
    CMP ESI,EAX                         ; 0050fc47
    JNZ 0x0050fc6e                      ; 0050fc49
        ;   XREF to: 0050fc6e (CONDITIONAL_JUMP)  ; LAB_0050fc6e
    MOV EAX,dword ptr [EBX + 0x15f2dc]  ; 0050fc4b
        ;   Label: LAB_0050fc4b
    ADD ESP,0x28                        ; 0050fc51
    POP EBP                             ; 0050fc54
    POP EDI                             ; 0050fc55
    POP ESI                             ; 0050fc56
    POP EBX                             ; 0050fc57
    RET                                 ; 0050fc58
    MOV EDX,dword ptr [ESI]             ; 0050fc59
        ;   Label: LAB_0050fc59
    MOV dword ptr [EAX],EDX             ; 0050fc5b
    MOV EDX,dword ptr [ESI + 0x4]       ; 0050fc5d
    MOV dword ptr [EAX + 0x4],EDX       ; 0050fc60
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050fc63
    MOV dword ptr [EAX + 0x8],EDX       ; 0050fc66
    JMP 0x0050fb21                      ; 0050fc69
        ;   XREF to: 0050fb21 (UNCONDITIONAL_JUMP)  ; LAB_0050fb21
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050fc6e
        ;   Label: LAB_0050fc6e
    MOV dword ptr [ESI],EAX             ; 0050fc72
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050fc74
    MOV dword ptr [ESI + 0x4],EAX       ; 0050fc78
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050fc7b
    MOV dword ptr [ESI + 0x8],EAX       ; 0050fc7f
    MOV EAX,dword ptr [EBX + 0x15f2dc]  ; 0050fc82
    ADD ESP,0x28                        ; 0050fc88
    POP EBP                             ; 0050fc8b
    POP EDI                             ; 0050fc8c
    POP ESI                             ; 0050fc8d
    POP EBX                             ; 0050fc8e
    RET                                 ; 0050fc8f

