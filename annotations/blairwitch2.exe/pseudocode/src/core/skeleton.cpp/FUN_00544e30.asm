; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00544e30(int param_1)
;
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0 at 00544db7
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 at 00544d64
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544e30
        ;   Label: core_skeleton.cpp_FUN_00544e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544e31
    MOV EDX,dword ptr [EBX + 0x2234]    ; 00544e35
    TEST EDX,EDX                        ; 00544e3b
    JNZ 0x00544e41                      ; 00544e3d
        ;   XREF to: 00544e41 (CONDITIONAL_JUMP)  ; LAB_00544e41
    POP EBX                             ; 00544e3f
    RET                                 ; 00544e40
    PUSH EDX                            ; 00544e41
        ;   Label: LAB_00544e41
    CALL crt_unknown.c_FUN_005b7fce     ; 00544e42
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00544e47
    MOV dword ptr [EBX + 0x2234],0x0    ; 00544e4a
    POP EBX                             ; 00544e54
    RET                                 ; 00544e55

