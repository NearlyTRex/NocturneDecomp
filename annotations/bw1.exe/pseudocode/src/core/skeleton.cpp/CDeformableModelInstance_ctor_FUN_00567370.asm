; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_charactr.cpp_CCharacter_ctor_FUN_0042c080 at 0042c09a
;   core_flashlit.cpp_CFlashlight_getMuzzlePoint_FUN_004b99c0 at 004b99cd
;   core_moloch.cpp_CMoloch_ctor_FUN_005202f0 at 00520306
;   core_rifle.cpp_CRifle_getMuzzlePoint_FUN_0053ffb0 at 0053ffc4
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00565830 at 0056587e
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566a9b
;   core_succubus.cpp_CSuccubus_ctor_FUN_00591f10 at 00591f26
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170 at 005a5184
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   void* g_CDeformableModelInstanceVTable = 005673f0
;
; Called Functions:
;   core_motion.cpp_CMotionController_ctor_FUN_005241d0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00567370
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00567370
    PUSH EAX                            ; 00567374
    CALL core_motion.cpp_CMotionController_ctor_FUN_005241d0 ; 00567375
        ;   XREF to: 005241d0 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_ctor_FUN_005241d0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0056737a
    PUSH 0x5fb430                       ; 0056737d | g_CVectorTypeInfo
    PUSH 0x64                           ; 00567382
    ADD EAX,0x58                        ; 00567384
    PUSH EAX                            ; 00567387
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00567388
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    SUB EAX,0x58                        ; 0056738d
    MOV dword ptr [EAX + 0x50],0x6058b4 ; 00567390 | g_CDeformableModelInstanceVTable
    MOV byte ptr [EAX + 0x2350],0x0     ; 00567397
    MOV dword ptr [EAX + 0x23a0],0x0    ; 0056739e
    MOV dword ptr [EAX + 0x2324],0x0    ; 005673a8
    MOV dword ptr [EAX + 0x2320],0xffffffff ; 005673b2
    LEA EDX,[EAX + 0x2344]              ; 005673bc
    MOV dword ptr [EAX + 0x2340],0x0    ; 005673c2
    MOV dword ptr [EDX + 0x8],0x0       ; 005673cc
    ADD ESP,0xc                         ; 005673d3
    MOV ECX,dword ptr [EDX + 0x8]       ; 005673d6
    MOV dword ptr [EDX + 0x4],ECX       ; 005673d9
    MOV ECX,dword ptr [EDX + 0x4]       ; 005673dc
    MOV dword ptr [EDX],ECX             ; 005673df
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 005673e1
    RET                                 ; 005673e8

