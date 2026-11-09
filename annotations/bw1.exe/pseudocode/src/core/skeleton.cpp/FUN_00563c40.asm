; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_FUN_00563c40(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_cloth.cpp_FUN_0043eea0 at 0043f1d2
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 at 00569f3e
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566a74
;   core_skeleton.cpp_FUN_00564b1c at 00564b2c
;   core_skeleton.cpp_FUN_00564d3e at 00564d4c
;   core_skeleton.cpp_FUN_00566fd0 at 00566fdc
;   core_skeleton.cpp_FUN_00567180 at 00567190
;   core_skeleton.cpp_FUN_0056ae70 at 0056ae8a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f1faa
;   TerminatedCString s_Tried_to_do_something_wi_005f1fbf
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00563c40
        ;   Label: core_skeleton.cpp_FUN_00563c40
    CMP dword ptr [EAX + 0x35ac],0x0    ; 00563c44
    JZ 0x00563c58                       ; 00563c4b
        ;   XREF to: 00563c58 (CONDITIONAL_JUMP)  ; LAB_00563c58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00563c4d
    MOV EAX,dword ptr [EAX + 0x35ac]    ; 00563c51
    RET                                 ; 00563c57
    PUSH EBX                            ; 00563c58
        ;   Label: LAB_00563c58
    MOV ECX,0x5f1faa                    ; 00563c59 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2ff                       ; 00563c5e
    PUSH 0x5f1fbf                       ; 00563c63 | = "Tried to do something with the skelet..."
    MOV dword ptr [0x01d1d400],ECX      ; 00563c68 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00563c6e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00563c74
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00563c79
    POP EBX                             ; 00563c7c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00563c7d
    MOV EAX,dword ptr [EAX + 0x35ac]    ; 00563c81
    RET                                 ; 00563c87

