; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_wateract_cpp_CWaterActor_getSurfaceProperties_FUN_005eb910 (CWaterActor *this_ptr,SSurfaceInfo *surface_info)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; SSurfaceInfo *   Stack[0x8]:4   surface_info
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb910
        ;   Label: core_wateract.cpp_CWaterActor_getSurfaceProperties_FUN_005eb910
    MOV EBX,dword ptr [ESP + 0xc]       ; 005eb911
    PUSH EBX                            ; 005eb915
    MOV EDX,dword ptr [ESP + 0xc]       ; 005eb916
    PUSH EDX                            ; 005eb91a
    CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840 ; 005eb91b
        ;   XREF to: 00409840 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor * this_ptr, SSurfaceInfo * surface_info)
    MOV dword ptr [EBX + 0x50],0x3e99999a ; 005eb920
    ADD ESP,0x8                         ; 005eb927
    MOV dword ptr [EBX + 0x48],0x3f4ccccd ; 005eb92a
    POP EBX                             ; 005eb931
    RET                                 ; 005eb932

