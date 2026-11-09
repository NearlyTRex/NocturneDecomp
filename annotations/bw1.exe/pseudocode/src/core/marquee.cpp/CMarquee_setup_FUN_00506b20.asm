; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_setup_FUN_00506b20(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_course.cpp_CCourse_load_FUN_00447db0
;   core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506b20
        ;   Label: core_marquee.cpp_CMarquee_setup_FUN_00506b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506b21
    PUSH EBX                            ; 00506b25
    CALL core_actor.cpp_FUN_00408850    ; 00506b26
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00506b2b
    LEA EAX,[EBX + 0x158]               ; 00506b2e
    PUSH EAX                            ; 00506b34
    LEA EAX,[EBX + 0x1a4]               ; 00506b35
    PUSH EAX                            ; 00506b3b
    CALL core_course.cpp_CCourse_load_FUN_00447db0 ; 00506b3c
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_load_FUN_00447db0(CCourse * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00506b41
    PUSH EBX                            ; 00506b44
    CALL core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0 ; 00506b45
        ;   XREF to: 005069f0 (UNCONDITIONAL_CALL)  ; void core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0(CMarquee * this_ptr)
    ADD ESP,0x4                         ; 00506b4a
    MOV dword ptr [EBX + 0x17c],0x0     ; 00506b4d
    POP EBX                             ; 00506b57
    RET                                 ; 00506b58

