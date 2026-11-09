; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_FUN_004e7e80(CMarquee *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_course.cpp_CCourse_load_FUN_00438af0
;   core_marquee.cpp_FUN_004e7d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7e80
        ;   Label: core_marquee.cpp_FUN_004e7e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7e81
    PUSH EBX                            ; 004e7e85
    CALL core_actor.cpp_FUN_00408a80    ; 004e7e86
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e7e8b
    LEA EAX,[EBX + 0x2b4]               ; 004e7e8e
    PUSH EAX                            ; 004e7e94
    LEA EAX,[EBX + 0x300]               ; 004e7e95
    PUSH EAX                            ; 004e7e9b
    CALL core_course.cpp_CCourse_load_FUN_00438af0 ; 004e7e9c
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00438af0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004e7ea1
    PUSH EBX                            ; 004e7ea4
    CALL core_marquee.cpp_FUN_004e7d50  ; 004e7ea5
        ;   XREF to: 004e7d50 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_FUN_004e7d50(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 004e7eaa
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e7ead
    POP EBX                             ; 004e7eb7
    RET                                 ; 004e7eb8

