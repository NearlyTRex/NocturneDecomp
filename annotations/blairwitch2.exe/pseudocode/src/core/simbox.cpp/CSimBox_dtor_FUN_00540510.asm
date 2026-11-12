; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00540510(CSimBox *this_ptr,uint flags)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSimBoxTypeInfo
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

    PUSH EBX                            ; 00540510
        ;   Label: core_simbox.cpp_CSimBox_dtor_FUN_00540510
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540511
    TEST byte ptr [ESP + 0xc],0x4       ; 00540515
    JNZ 0x0054054d                      ; 0054051a
        ;   XREF to: 0054054d (CONDITIONAL_JUMP)  ; LAB_0054054d
    PUSH 0x0                            ; 0054051c
    ADD EBX,0x4b4                       ; 0054051e
    PUSH EBX                            ; 00540524
    CALL core_box.cpp_CBox_dtor_FUN_005b1c70 ; 00540525
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_005b1c70(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054052a
    PUSH 0x1                            ; 0054052d
    LEA EBX,[EAX + 0xfffffb4c]          ; 0054052f
    PUSH EBX                            ; 00540535
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00540536
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054053b
    MOV DL,byte ptr [ESP + 0xc]         ; 0054053e
    MOV EBX,EAX                         ; 00540542
    TEST DL,0x2                         ; 00540544
    JNZ 0x00540568                      ; 00540547
        ;   XREF to: 00540568 (CONDITIONAL_JUMP)  ; LAB_00540568
    MOV EAX,EBX                         ; 00540549
    POP EBX                             ; 0054054b
    RET                                 ; 0054054c
    PUSH 0x5fb950                       ; 0054054d | g_CSimBoxTypeInfo
        ;   Label: LAB_0054054d
    PUSH EBX                            ; 00540552
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00540553
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00540558
    PUSH EAX                            ; 0054055b
    CALL crt_unknown.c_FUN_005b7fce     ; 0054055c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00540561
    MOV EAX,EBX                         ; 00540564
    POP EBX                             ; 00540566
    RET                                 ; 00540567
    PUSH EAX                            ; 00540568
        ;   Label: LAB_00540568
    CALL crt_unknown.c_FUN_005b7fdc     ; 00540569
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0054056e
    MOV EAX,EBX                         ; 00540571
    POP EBX                             ; 00540573
    RET                                 ; 00540574

