; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 at 0042ac3a
;   core_fire.cpp_FUN_004a4340 at 004a4361
;   core_flashlit.cpp_CFlashlight_getMuzzlePoint_FUN_004a7600 at 004a760d
;   core_rifle.cpp_CRifle_getMuzzlePoint_FUN_00527ca0 at 00527cb4
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0 at 0054a40e
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054b62b
;   engine_special.cpp_CSpawner_ctor_FUN_005638a0 at 005638b3
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   void* g_CDeformableModelInstanceVTable = 0054bf80
;
; Called Functions:
;   core_motion.cpp_CMotionController_ctor_FUN_004fbad0
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bf00
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00
    PUSH EAX                            ; 0054bf04
    CALL core_motion.cpp_CMotionController_ctor_FUN_004fbad0 ; 0054bf05
        ;   XREF to: 004fbad0 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_ctor_FUN_004fbad0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0054bf0a
    PUSH 0x5db0f0                       ; 0054bf0d | g_CVectorTypeInfo
    PUSH 0x64                           ; 0054bf12
    ADD EAX,0x58                        ; 0054bf14
    PUSH EAX                            ; 0054bf17
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0054bf18
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    SUB EAX,0x58                        ; 0054bf1d
    MOV dword ptr [EAX + 0x50],0x5e4784 ; 0054bf20 | g_CDeformableModelInstanceVTable
    MOV byte ptr [EAX + 0x2350],0x0     ; 0054bf27
    MOV dword ptr [EAX + 0x23a0],0x0    ; 0054bf2e
    MOV dword ptr [EAX + 0x2324],0x0    ; 0054bf38
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 0054bf42
    LEA EDX,[EAX + 0x2344]              ; 0054bf4c
    MOV dword ptr [EAX + 0x2340],0x0    ; 0054bf52
    MOV dword ptr [EDX + 0x8],0x0       ; 0054bf5c
    ADD ESP,0xc                         ; 0054bf63
    MOV ECX,dword ptr [EDX + 0x8]       ; 0054bf66
    MOV dword ptr [EDX + 0x4],ECX       ; 0054bf69
    MOV ECX,dword ptr [EDX + 0x4]       ; 0054bf6c
    MOV dword ptr [EDX],ECX             ; 0054bf6f
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 0054bf71
    RET                                 ; 0054bf78

