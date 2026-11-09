; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_course_cpp_FUN_00438c20(undefined4 *param_1)
;
;
; XREF[3]:
;   core_course.cpp_CCourse_dtor_FUN_00438a70 at 00438a76
;   core_course.cpp_CCourse_load_FUN_00438af0 at 00438b00
;   core_course.cpp_FUN_00438a90 at 00438a96
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438c20
        ;   Label: core_course.cpp_FUN_00438c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438c21
    MOV EDX,dword ptr [EBX + 0x4]       ; 00438c25
    PUSH EDX                            ; 00438c28
    CALL crt_unknown.c_FUN_005b7fce     ; 00438c29
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    MOV dword ptr [EBX + 0x4],0x0       ; 00438c2e
    ADD ESP,0x4                         ; 00438c35
    MOV dword ptr [EBX],0x0             ; 00438c38
    POP EBX                             ; 00438c3e
    RET                                 ; 00438c3f

