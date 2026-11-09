; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * unkafter_bird_cpp_CBird_getActorType_FUN_004151e0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBirdClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c3910                    ; 004151e0 | g_CBirdClassInfo
        ;   Label: unkafter_bird.cpp_CBird_getActorType_FUN_004151e0
    RET                                 ; 004151e5

