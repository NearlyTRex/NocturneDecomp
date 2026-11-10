; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_course_cpp_FUN_00444aa0(undefined4 *param_1)
;
;
; XREF[3]:
;   core_course.cpp_CCourse_dtor_FUN_004448f0 at 004448f6
;   core_course.cpp_FUN_00444910 at 00444916
;   core_course.cpp_FUN_00444970 at 00444980
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444aa0
        ;   Label: core_course.cpp_FUN_00444aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444aa1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00444aa5
    PUSH EDX                            ; 00444aa8
    CALL crt_unknown.c_FUN_005a30b6     ; 00444aa9
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    MOV dword ptr [EBX + 0x4],0x0       ; 00444aae
    ADD ESP,0x4                         ; 00444ab5
    MOV dword ptr [EBX],0x0             ; 00444ab8
    POP EBX                             ; 00444abe
    RET                                 ; 00444abf

