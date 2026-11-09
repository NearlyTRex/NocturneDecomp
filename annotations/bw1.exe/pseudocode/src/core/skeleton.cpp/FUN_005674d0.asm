; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_005674d0(int param_1)
;
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00567450 at 00567457
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 at 00567404
;
; Called Functions:
;   crt_unknown.c_FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005674d0
        ;   Label: core_skeleton.cpp_FUN_005674d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005674d1
    MOV EDX,dword ptr [EBX + 0x2324]    ; 005674d5
    TEST EDX,EDX                        ; 005674db
    JNZ 0x005674e1                      ; 005674dd
        ;   XREF to: 005674e1 (CONDITIONAL_JUMP)  ; LAB_005674e1
    POP EBX                             ; 005674df
    RET                                 ; 005674e0
    PUSH EDX                            ; 005674e1
        ;   Label: LAB_005674e1
    CALL crt_unknown.c_FUN_005c0336     ; 005674e2
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005674e7
    MOV dword ptr [EBX + 0x2324],0x0    ; 005674ea
    POP EBX                             ; 005674f4
    RET                                 ; 005674f5

