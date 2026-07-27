; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(undefined4 *param_1)
;
;
; XREF[4]:
;   core_course.cpp_CCourse_allocMemory_FUN_0043b610 at 0043b617
;   core_course.cpp_CCourse_load_FUN_0043b690 at 0043b6a0
;   core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0 at 0043b5f6
;   core_moon.cpp_CMoon_free_FUN_004dea60 at 004dea75
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b7c0
        ;   Label: core_course.cpp_CCourse_free_FUN_0043b7c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b7c1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043b7c5
    TEST EAX,EAX                        ; 0043b7c8
    JNZ 0x0043b7db                      ; 0043b7ca
        ;   XREF to: 0043b7db (CONDITIONAL_JUMP)  ; LAB_0043b7db
    MOV dword ptr [EBX],0x0             ; 0043b7cc
    MOV dword ptr [EBX + 0x4],0x0       ; 0043b7d2
    POP EBX                             ; 0043b7d9
    RET                                 ; 0043b7da
    SUB EAX,0x4                         ; 0043b7db
        ;   Label: LAB_0043b7db
    PUSH EAX                            ; 0043b7de
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043b7df
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0043b7e4
    MOV dword ptr [EBX],0x0             ; 0043b7e7
    MOV dword ptr [EBX + 0x4],0x0       ; 0043b7ed
    POP EBX                             ; 0043b7f4
    RET                                 ; 0043b7f5

