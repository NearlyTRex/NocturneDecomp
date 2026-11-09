; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0(CMansionPuzzleCircle *this_ptr,uint flags)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7ac0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004e7ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e7ac1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e7ac5
    JNZ 0x004e7ae6                      ; 004e7aca
        ;   XREF to: 004e7ae6 (CONDITIONAL_JUMP)  ; LAB_004e7ae6
    PUSH 0x1                            ; 004e7acc
    PUSH EBX                            ; 004e7ace
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004e7acf
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e7ad4
    MOV DL,byte ptr [ESP + 0xc]         ; 004e7ad7
    MOV EBX,EAX                         ; 004e7adb
    TEST DL,0x2                         ; 004e7add
    JNZ 0x004e7b01                      ; 004e7ae0
        ;   XREF to: 004e7b01 (CONDITIONAL_JUMP)  ; LAB_004e7b01
    MOV EAX,EBX                         ; 004e7ae2
    POP EBX                             ; 004e7ae4
    RET                                 ; 004e7ae5
    PUSH 0x5f9b30                       ; 004e7ae6 | g_CMansionPuzzleCircleTypeInfo
        ;   Label: LAB_004e7ae6
    PUSH EBX                            ; 004e7aeb
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e7aec
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e7af1
    PUSH EAX                            ; 004e7af4
    CALL crt_unknown.c_FUN_005b7fce     ; 004e7af5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e7afa
    MOV EAX,EBX                         ; 004e7afd
    POP EBX                             ; 004e7aff
    RET                                 ; 004e7b00
    PUSH EAX                            ; 004e7b01
        ;   Label: LAB_004e7b01
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e7b02
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e7b07
    MOV EAX,EBX                         ; 004e7b0a
    POP EBX                             ; 004e7b0c
    RET                                 ; 004e7b0d

