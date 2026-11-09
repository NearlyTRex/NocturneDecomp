; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMarquee * core_marquee_cpp_CMarquee_dtor_FUN_004e85b0(CMarquee *this_ptr,uint flags)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMarqueeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_course.cpp_CCourse_dtor_FUN_00438a70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e85b0
        ;   Label: core_marquee.cpp_CMarquee_dtor_FUN_004e85b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e85b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e85b5
    JNZ 0x004e85ed                      ; 004e85ba
        ;   XREF to: 004e85ed (CONDITIONAL_JUMP)  ; LAB_004e85ed
    PUSH 0x0                            ; 004e85bc
    ADD EBX,0x300                       ; 004e85be
    PUSH EBX                            ; 004e85c4
    CALL core_course.cpp_CCourse_dtor_FUN_00438a70 ; 004e85c5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00438a70(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e85ca
    PUSH 0x1                            ; 004e85cd
    LEA EBX,[EAX + 0xfffffd00]          ; 004e85cf
    PUSH EBX                            ; 004e85d5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004e85d6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e85db
    MOV DL,byte ptr [ESP + 0xc]         ; 004e85de
    MOV EBX,EAX                         ; 004e85e2
    TEST DL,0x2                         ; 004e85e4
    JNZ 0x004e8608                      ; 004e85e7
        ;   XREF to: 004e8608 (CONDITIONAL_JUMP)  ; LAB_004e8608
    MOV EAX,EBX                         ; 004e85e9
    POP EBX                             ; 004e85eb
    RET                                 ; 004e85ec
    PUSH 0x5f9c60                       ; 004e85ed | g_CMarqueeTypeInfo
        ;   Label: LAB_004e85ed
    PUSH EBX                            ; 004e85f2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e85f3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e85f8
    PUSH EAX                            ; 004e85fb
    CALL crt_unknown.c_FUN_005b7fce     ; 004e85fc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e8601
    MOV EAX,EBX                         ; 004e8604
    POP EBX                             ; 004e8606
    RET                                 ; 004e8607
    PUSH EAX                            ; 004e8608
        ;   Label: LAB_004e8608
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e8609
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e860e
    MOV EAX,EBX                         ; 004e8611
    POP EBX                             ; 004e8613
    RET                                 ; 004e8614

