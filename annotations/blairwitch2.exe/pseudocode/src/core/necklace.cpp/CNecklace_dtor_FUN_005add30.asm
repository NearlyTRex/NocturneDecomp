; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNecklace * core_necklace_cpp_CNecklace_dtor_FUN_005add30(CNecklace *this_ptr,uint flags)
;
; Parameters:
; CNecklace *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CNecklaceTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_box.cpp_CBox_dtor_FUN_005b1c70
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005add30
        ;   Label: core_necklace.cpp_CNecklace_dtor_FUN_005add30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005add31
    TEST byte ptr [ESP + 0xc],0x4       ; 005add35
    JNZ 0x005add6d                      ; 005add3a
        ;   XREF to: 005add6d (CONDITIONAL_JUMP)  ; LAB_005add6d
    PUSH 0x0                            ; 005add3c
    ADD EBX,0x4f0                       ; 005add3e
    PUSH EBX                            ; 005add44
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 005add45
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005add4a
    PUSH 0x1                            ; 005add4d
    LEA EBX,[EAX + 0xfffffb10]          ; 005add4f
    PUSH EBX                            ; 005add55
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005add56
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005add5b
    MOV DL,byte ptr [ESP + 0xc]         ; 005add5e
    MOV EBX,EAX                         ; 005add62
    TEST DL,0x2                         ; 005add64
    JNZ 0x005add88                      ; 005add67
        ;   XREF to: 005add88 (CONDITIONAL_JUMP)  ; LAB_005add88
    MOV EAX,EBX                         ; 005add69
    POP EBX                             ; 005add6b
    RET                                 ; 005add6c
    PUSH 0x601180                       ; 005add6d | g_CNecklaceTypeInfo
        ;   Label: LAB_005add6d
    PUSH EBX                            ; 005add72
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005add73
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 005add78
    PUSH EAX                            ; 005add7b
    CALL crt_unknown.c_FUN_005b7fce     ; 005add7c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005add81
    MOV EAX,EBX                         ; 005add84
    POP EBX                             ; 005add86
    RET                                 ; 005add87
    PUSH EAX                            ; 005add88
        ;   Label: LAB_005add88
    CALL crt_unknown.c_FUN_005b7fdc     ; 005add89
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005add8e
    MOV EAX,EBX                         ; 005add91
    POP EBX                             ; 005add93
    RET                                 ; 005add94

