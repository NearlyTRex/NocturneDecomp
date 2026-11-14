; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00562b00(CSimBox *this_ptr,uint flags)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSimBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562b00
        ;   Label: core_simbox.cpp_CSimBox_dtor_FUN_00562b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562b01
    TEST byte ptr [ESP + 0xc],0x4       ; 00562b05
    JNZ 0x00562b3d                      ; 00562b0a
        ;   XREF to: 00562b3d (CONDITIONAL_JUMP)  ; LAB_00562b3d
    PUSH 0x0                            ; 00562b0c
    ADD EBX,0x358                       ; 00562b0e
    PUSH EBX                            ; 00562b14
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 00562b15
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00562b1a
    PUSH 0x1                            ; 00562b1d
    LEA EBX,[EAX + 0xfffffca8]          ; 00562b1f
    PUSH EBX                            ; 00562b25
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00562b26
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00562b2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00562b2e
    MOV EBX,EAX                         ; 00562b32
    TEST DL,0x2                         ; 00562b34
    JNZ 0x00562b58                      ; 00562b37
        ;   XREF to: 00562b58 (CONDITIONAL_JUMP)  ; LAB_00562b58
    MOV EAX,EBX                         ; 00562b39
    POP EBX                             ; 00562b3b
    RET                                 ; 00562b3c
    PUSH 0x605840                       ; 00562b3d | g_CSimBoxTypeInfo
        ;   Label: LAB_00562b3d
    PUSH EBX                            ; 00562b42
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00562b43
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00562b48
    PUSH EAX                            ; 00562b4b
    CALL crt_unknown.c_FUN_005c0336     ; 00562b4c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00562b51
    MOV EAX,EBX                         ; 00562b54
    POP EBX                             ; 00562b56
    RET                                 ; 00562b57
    PUSH EAX                            ; 00562b58
        ;   Label: LAB_00562b58
    CALL crt_unknown.c_FUN_005c0344     ; 00562b59
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00562b5e
    MOV EAX,EBX                         ; 00562b61
    POP EBX                             ; 00562b63
    RET                                 ; 00562b64

