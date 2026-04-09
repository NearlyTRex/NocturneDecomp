; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_setup_FUN_0050bd60(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_course.cpp_CCourse_load_FUN_00442580
;   core_marquee.cpp_CMarquee_computeBoundingBox_FUN_0050bc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050bd60
        ;   Label: core_marquee.cpp_CMarquee_setup_FUN_0050bd60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050bd61
    PUSH EBX                            ; 0050bd65
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0050bd66
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050bd6b
    LEA EAX,[EBX + 0x158]               ; 0050bd6e
    PUSH EAX                            ; 0050bd74
    LEA EAX,[EBX + 0x1a4]               ; 0050bd75
    PUSH EAX                            ; 0050bd7b
    CALL core_course.cpp_CCourse_load_FUN_00442580 ; 0050bd7c
        ;   XREF to: 00442580 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00442580(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050bd81
    PUSH EBX                            ; 0050bd84
    CALL core_marquee.cpp_CMarquee_computeBoundingBox_FUN_0050bc30 ; 0050bd85
        ;   XREF to: 0050bc30 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_computeBoundingBox_FUN_0050bc30(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 0050bd8a
    MOV dword ptr [EBX + 0x17c],0x0     ; 0050bd8d
    POP EBX                             ; 0050bd97
    RET                                 ; 0050bd98

