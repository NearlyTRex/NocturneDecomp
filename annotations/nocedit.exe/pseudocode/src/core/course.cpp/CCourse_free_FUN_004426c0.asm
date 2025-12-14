; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_course.cpp_CCourse_allocMemory_FUN_00442500 at 00442507
;   core_course.cpp_CCourse_dtor_FUN_004424e0 at 004424e6
;   core_course.cpp_CCourse_load_FUN_00442580 at 00442590
;   core_moon.cpp_CMoon_free_FUN_00529ce0 at 00529cf5
;   core_platfrm.cpp_FUN_0054e530 at 0054e61f
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_00618f98
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004426c0
        ;   Label: core_course.cpp_CCourse_free_FUN_004426c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004426c1
    MOV ECX,0xa8                        ; 004426c5
    MOV EDX,0x618f98                    ; 004426ca | = "..\\core\\course.cpp"
    MOV EAX,dword ptr [EBX + 0x4]       ; 004426cf
    MOV dword ptr [0x02f0d944],ECX      ; 004426d2 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 004426d8 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 004426de
    JNZ 0x004426f1                      ; 004426e0
        ;   XREF to: 004426f1 (CONDITIONAL_JUMP)  ; LAB_004426f1
    MOV dword ptr [EBX],0x0             ; 004426e2
    MOV dword ptr [EBX + 0x4],0x0       ; 004426e8
    POP EBX                             ; 004426ef
    RET                                 ; 004426f0
    SUB EAX,0x4                         ; 004426f1
        ;   Label: LAB_004426f1
    PUSH EAX                            ; 004426f4
    CALL crt_memory.c_free_FUN_005fe659 ; 004426f5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004426fa
    MOV dword ptr [EBX],0x0             ; 004426fd
    MOV dword ptr [EBX + 0x4],0x0       ; 00442703
    POP EBX                             ; 0044270a
    RET                                 ; 0044270b

