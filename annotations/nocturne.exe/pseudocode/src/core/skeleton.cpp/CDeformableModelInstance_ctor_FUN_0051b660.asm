; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00423f40 at 00423f56
;   core_moloch.cpp_CMoloch_ctor_FUN_004dd930 at 004dd946
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0 at 00519c2b
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051ad9c
;   core_succubus.cpp_CSuccubus_ctor_FUN_00540b40 at 00540b56
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_0054c2b0 at 0054c2c4
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   CMotionController_vtable g_CDeformableModelInstanceVTable
;
; Called Functions:
;   core_motion.cpp_CMotionController_ctor_FUN_004e1120
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b660
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
    PUSH EAX                            ; 0051b664
    CALL core_motion.cpp_CMotionController_ctor_FUN_004e1120 ; 0051b665
        ;   XREF to: 004e1120 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_ctor_FUN_004e1120(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0051b66a
    PUSH 0x5993b0                       ; 0051b66d | g_CVectorTypeInfo_005993b0
    PUSH 0x64                           ; 0051b672
    ADD EAX,0x58                        ; 0051b674
    PUSH EAX                            ; 0051b677
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 0051b678
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    SUB EAX,0x58                        ; 0051b67d
    MOV dword ptr [EAX + 0x50],0x5a1ed4 ; 0051b680 | g_CDeformableModelInstanceVTable
    MOV byte ptr [EAX + 0x2260],0x0     ; 0051b687
    MOV dword ptr [EAX + 0x22b0],0x0    ; 0051b68e
    MOV dword ptr [EAX + 0x2234],0x0    ; 0051b698
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 0051b6a2
    LEA EDX,[EAX + 0x2254]              ; 0051b6ac
    MOV dword ptr [EAX + 0x2250],0x0    ; 0051b6b2
    MOV dword ptr [EDX + 0x8],0x0       ; 0051b6bc
    ADD ESP,0xc                         ; 0051b6c3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b6c6
    MOV dword ptr [EDX + 0x4],ECX       ; 0051b6c9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051b6cc
    MOV dword ptr [EDX],ECX             ; 0051b6cf
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 0051b6d1
    RET                                 ; 0051b6d8

