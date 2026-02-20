; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_allocMemory_FUN_00442500(CCourse *this_ptr,int count)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   count
;
; XREF[2]:
;   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 at 00442eb1
;   core_course.cpp_CCourse_load_FUN_00442580 at 0044260b
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_00618edb
;   TerminatedCString s_core_course_cpp_00618eee
;   TerminatedCString s_CCourse_allocMemory_out__00618f01
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_004426c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442500
        ;   Label: core_course.cpp_CCourse_allocMemory_FUN_00442500
    PUSH ESI                            ; 00442501
    MOV EBX,dword ptr [ESP + 0xc]       ; 00442502
    PUSH EBX                            ; 00442506
    CALL core_course.cpp_CCourse_free_FUN_004426c0 ; 00442507
        ;   XREF to: 004426c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0044250c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044250f
    MOV ESI,EAX                         ; 00442513
    MOV dword ptr [EBX],EAX             ; 00442515
    SHL EAX,0x2                         ; 00442517
    MOV EDX,EAX                         ; 0044251a
    SHL EAX,0x3                         ; 0044251c
    PUSH 0x6d                           ; 0044251f
    SUB EAX,EDX                         ; 00442521
    PUSH 0x618edb                       ; 00442523 | = "..\\core\\course.cpp"
    ADD EAX,0x4                         ; 00442528
    PUSH EAX                            ; 0044252b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 0044252c
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00442531
    TEST EAX,EAX                        ; 00442534
    JNZ 0x00442542                      ; 00442536
        ;   XREF to: 00442542 (CONDITIONAL_JUMP)  ; LAB_00442542
    MOV dword ptr [EBX + 0x4],EAX       ; 00442538
    TEST EAX,EAX                        ; 0044253b
    JZ 0x00442552                       ; 0044253d
        ;   XREF to: 00442552 (CONDITIONAL_JUMP)  ; LAB_00442552
    POP ESI                             ; 0044253f
    POP EBX                             ; 00442540
    RET                                 ; 00442541
    ADD EAX,0x4                         ; 00442542
        ;   Label: LAB_00442542
    MOV dword ptr [EAX + -0x4],ESI      ; 00442545
    MOV dword ptr [EBX + 0x4],EAX       ; 00442548
    TEST EAX,EAX                        ; 0044254b
    JZ 0x00442552                       ; 0044254d
        ;   XREF to: 00442552 (CONDITIONAL_JUMP)  ; LAB_00442552
    POP ESI                             ; 0044254f
    POP EBX                             ; 00442550
    RET                                 ; 00442551
    MOV ECX,0x618eee                    ; 00442552 | = "..\\core\\course.cpp"
        ;   Label: LAB_00442552
    MOV EBX,0x6e                        ; 00442557
    PUSH 0x618f01                       ; 0044255c | = "CCourse::allocMemory - out of hunk!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00442561 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00442567 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0044256d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00442572
    POP ESI                             ; 00442575
    POP EBX                             ; 00442576
    RET                                 ; 00442577

