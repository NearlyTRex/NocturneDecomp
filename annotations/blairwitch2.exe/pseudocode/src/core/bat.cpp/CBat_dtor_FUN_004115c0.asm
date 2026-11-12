; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_004115c0(CBat *this_ptr,uint flags)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatTypeInfo
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

    PUSH EBX                            ; 004115c0
        ;   Label: core_bat.cpp_CBat_dtor_FUN_004115c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004115c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004115c5
    JNZ 0x004115fd                      ; 004115ca
        ;   XREF to: 004115fd (CONDITIONAL_JUMP)  ; LAB_004115fd
    PUSH 0x0                            ; 004115cc
    ADD EBX,0x2d4                       ; 004115ce
    PUSH EBX                            ; 004115d4
    CALL core_course.cpp_CCourse_dtor_FUN_00438a70 ; 004115d5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00438a70(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004115da
    PUSH 0x1                            ; 004115dd
    LEA EBX,[EAX + 0xfffffd2c]          ; 004115df
    PUSH EBX                            ; 004115e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004115e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004115eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004115ee
    MOV EBX,EAX                         ; 004115f2
    TEST DL,0x2                         ; 004115f4
    JNZ 0x00411618                      ; 004115f7
        ;   XREF to: 00411618 (CONDITIONAL_JUMP)  ; LAB_00411618
    MOV EAX,EBX                         ; 004115f9
    POP EBX                             ; 004115fb
    RET                                 ; 004115fc
    PUSH 0x5f2ea0                       ; 004115fd | g_CBatTypeInfo
        ;   Label: LAB_004115fd
    PUSH EBX                            ; 00411602
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00411603
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00411608
    PUSH EAX                            ; 0041160b
    CALL crt_unknown.c_FUN_005b7fce     ; 0041160c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00411611
    MOV EAX,EBX                         ; 00411614
    POP EBX                             ; 00411616
    RET                                 ; 00411617
    PUSH EAX                            ; 00411618
        ;   Label: LAB_00411618
    CALL crt_unknown.c_FUN_005b7fdc     ; 00411619
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041161e
    MOV EAX,EBX                         ; 00411621
    POP EBX                             ; 00411623
    RET                                 ; 00411624

