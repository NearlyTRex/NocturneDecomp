; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051b7d0(int param_1)
;
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750 at 0051b757
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 at 0051b6f4
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b7d0
        ;   Label: core_skeleton.cpp_FUN_0051b7d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b7d1
    MOV EDX,dword ptr [EBX + 0x2234]    ; 0051b7d5
    TEST EDX,EDX                        ; 0051b7db
    JNZ 0x0051b7e1                      ; 0051b7dd
        ;   XREF to: 0051b7e1 (CONDITIONAL_JUMP)  ; LAB_0051b7e1
    POP EBX                             ; 0051b7df
    RET                                 ; 0051b7e0
    PUSH EDX                            ; 0051b7e1
        ;   Label: LAB_0051b7e1
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0051b7e2
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0051b7e7
    MOV dword ptr [EBX + 0x2234],0x0    ; 0051b7ea
    POP EBX                             ; 0051b7f4
    RET                                 ; 0051b7f5

