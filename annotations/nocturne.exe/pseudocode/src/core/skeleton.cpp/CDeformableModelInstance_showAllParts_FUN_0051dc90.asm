; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(int param_1)
;
;
; XREF[3]:
;   FUN_00418a00 at 00418cc6
;   core_actor.cpp_archivePartStatus_FUN_0040cbf0 at 0040cc42
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 at 0051e0f6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051dc90
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90
    MOV EAX,EDX                         ; 0051dc94
    ADD EDX,0x78                        ; 0051dc96
    ADD EAX,0x4                         ; 0051dc99
        ;   Label: LAB_0051dc99
    MOV dword ptr [EAX + 0x213c],0x1    ; 0051dc9c
    CMP EAX,EDX                         ; 0051dca6
    JNZ 0x0051dc99                      ; 0051dca8
        ;   XREF to: 0051dc99 (CONDITIONAL_JUMP)  ; LAB_0051dc99
    RET                                 ; 0051dcaa

