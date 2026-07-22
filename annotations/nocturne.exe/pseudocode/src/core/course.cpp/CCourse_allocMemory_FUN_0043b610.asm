; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(int *param_1,int param_2)
;
;
; XREF[1]:
;   core_course.cpp_CCourse_load_FUN_0043b690 at 0043b71b
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_0057b22a
;   string s_CCourse::allocMemory_-_out_of_hu_0057b23d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_0043b7c0
;   FUN_004c8440
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b610
        ;   Label: core_course.cpp_CCourse_allocMemory_FUN_0043b610
    PUSH ESI                            ; 0043b611
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043b612
    PUSH EBX                            ; 0043b616
    CALL core_course.cpp_CCourse_free_FUN_0043b7c0 ; 0043b617
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_free_FUN_0043b7c0()
    ADD ESP,0x4                         ; 0043b61c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043b61f
    MOV ESI,EAX                         ; 0043b623
    MOV dword ptr [EBX],EAX             ; 0043b625
    SHL EAX,0x2                         ; 0043b627
    MOV EDX,EAX                         ; 0043b62a
    SHL EAX,0x3                         ; 0043b62c
    SUB EAX,EDX                         ; 0043b62f
    ADD EAX,0x4                         ; 0043b631
    PUSH EAX                            ; 0043b634
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 0043b635
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 0043b63a
    TEST EAX,EAX                        ; 0043b63d
    JNZ 0x0043b64b                      ; 0043b63f
        ;   XREF to: 0043b64b (CONDITIONAL_JUMP)  ; LAB_0043b64b
    MOV dword ptr [EBX + 0x4],EAX       ; 0043b641
    TEST EAX,EAX                        ; 0043b644
    JZ 0x0043b65b                       ; 0043b646
        ;   XREF to: 0043b65b (CONDITIONAL_JUMP)  ; LAB_0043b65b
    POP ESI                             ; 0043b648
    POP EBX                             ; 0043b649
    RET                                 ; 0043b64a
    ADD EAX,0x4                         ; 0043b64b
        ;   Label: LAB_0043b64b
    MOV dword ptr [EAX + -0x4],ESI      ; 0043b64e
    MOV dword ptr [EBX + 0x4],EAX       ; 0043b651
    TEST EAX,EAX                        ; 0043b654
    JZ 0x0043b65b                       ; 0043b656
        ;   XREF to: 0043b65b (CONDITIONAL_JUMP)  ; LAB_0043b65b
    POP ESI                             ; 0043b658
    POP EBX                             ; 0043b659
    RET                                 ; 0043b65a
    MOV ECX,0x57b22a                    ; 0043b65b | = "..\\core\\course.cpp"
        ;   Label: LAB_0043b65b
    MOV EBX,0x6e                        ; 0043b660
    PUSH 0x57b23d                       ; 0043b665 | = "CCourse::allocMemory - out of hunk!"
    MOV dword ptr [0x01cc4800],ECX      ; 0043b66a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0043b670 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0043b676
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0043b67b
    POP ESI                             ; 0043b67e
    POP EBX                             ; 0043b67f
    RET                                 ; 0043b680

