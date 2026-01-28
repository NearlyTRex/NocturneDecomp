; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b2c8
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 at 00427e36
;   core_cloth.cpp_staticInit_FUN_00438b80 at 00438b85
;   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 at 00528b46
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e6e5
;   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 at 0058e5ed
;   core_skeledit.cpp_FUN_00598f10 at 00598fa2
;   core_skeledit.cpp_viewModel_FUN_00598fc0 at 005991dd
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 at 0059c345
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 at 0059d4e6
;   ... and 2 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   CMotionController_vtable g_CDeformableModelInstanceVTable
;
; Called Functions:
;   core_motion.cpp_CMotionController_ctor_FUN_0052d570
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ddc0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
    PUSH EAX                            ; 0059ddc4
    CALL core_motion.cpp_CMotionController_ctor_FUN_0052d570 ; 0059ddc5
        ;   XREF to: 0052d570 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_ctor_FUN_0052d570(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059ddca
    PUSH 0x6598c0                       ; 0059ddcd | g_CVectorTypeInfo
    PUSH 0x64                           ; 0059ddd2
    ADD EAX,0x58                        ; 0059ddd4
    PUSH EAX                            ; 0059ddd7
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0059ddd8
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    SUB EAX,0x58                        ; 0059dddd
    MOV dword ptr [EAX + 0x50],0x662ec4 ; 0059dde0 | g_CDeformableModelInstanceVTable
    MOV byte ptr [EAX + 0x2260],0x0     ; 0059dde7
    MOV dword ptr [EAX + 0x22b0],0x0    ; 0059ddee
    MOV dword ptr [EAX + 0x2234],0x0    ; 0059ddf8
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 0059de02
    LEA EDX,[EAX + 0x2254]              ; 0059de0c
    MOV dword ptr [EAX + 0x2250],0x0    ; 0059de12
    MOV dword ptr [EDX + 0x8],0x0       ; 0059de1c
    ADD ESP,0xc                         ; 0059de23
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059de26
    MOV dword ptr [EDX + 0x4],ECX       ; 0059de29
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059de2c
    MOV dword ptr [EDX],ECX             ; 0059de2f
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 0059de31
    RET                                 ; 0059de38

