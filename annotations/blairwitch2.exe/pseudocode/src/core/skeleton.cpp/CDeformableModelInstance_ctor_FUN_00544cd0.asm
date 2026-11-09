; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 00422360
;   core_flashlit.cpp_FUN_004a1110 at 004a111d
;   core_lantern.cpp_FUN_0059d0d0 at 0059d0dd
;   core_moloch.cpp_CMoloch_ctor_FUN_00501340 at 00501356
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0 at 005431fe
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 005443fb
;   core_succubus.cpp_CSuccubus_ctor_FUN_0056f2c0 at 0056f2d6
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530 at 00581544
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;   void* g_CDeformableModelInstanceVTable = 00544d50
;
; Called Functions:
;   core_motion.cpp_CMotionController_ctor_FUN_00503020
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544cd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_00544cd0
    PUSH EAX                            ; 00544cd4
    CALL core_motion.cpp_CMotionController_ctor_FUN_00503020 ; 00544cd5
        ;   XREF to: 00503020 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_ctor_FUN_00503020(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00544cda
    PUSH 0x5f22b0                       ; 00544cdd | g_CVectorTypeInfo
    PUSH 0x64                           ; 00544ce2
    ADD EAX,0x58                        ; 00544ce4
    PUSH EAX                            ; 00544ce7
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00544ce8
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    SUB EAX,0x58                        ; 00544ced
    MOV dword ptr [EAX + 0x50],0x5fb9c4 ; 00544cf0 | g_CDeformableModelInstanceVTable
    MOV byte ptr [EAX + 0x2260],0x0     ; 00544cf7
    MOV dword ptr [EAX + 0x22b0],0x0    ; 00544cfe
    MOV dword ptr [EAX + 0x2234],0x0    ; 00544d08
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 00544d12
    LEA EDX,[EAX + 0x2254]              ; 00544d1c
    MOV dword ptr [EAX + 0x2250],0x0    ; 00544d22
    MOV dword ptr [EDX + 0x8],0x0       ; 00544d2c
    ADD ESP,0xc                         ; 00544d33
    MOV ECX,dword ptr [EDX + 0x8]       ; 00544d36
    MOV dword ptr [EDX + 0x4],ECX       ; 00544d39
    MOV ECX,dword ptr [EDX + 0x4]       ; 00544d3c
    MOV dword ptr [EDX],ECX             ; 00544d3f
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 00544d41
    RET                                 ; 00544d48

