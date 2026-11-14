; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_dtor_FUN_004c6000(CFrankenstienMachine *this_ptr,uint flags)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFrankenstienMachineTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_course.cpp_CCourse_dtor_FUN_00447d30
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6000
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004c6000
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6001
    TEST byte ptr [ESP + 0xc],0x4       ; 004c6005
    JNZ 0x004c603d                      ; 004c600a
        ;   XREF to: 004c603d (CONDITIONAL_JUMP)  ; LAB_004c603d
    PUSH 0x0                            ; 004c600c
    ADD EBX,0x300                       ; 004c600e
    PUSH EBX                            ; 004c6014
    CALL core_course.cpp_CCourse_dtor_FUN_00447d30 ; 004c6015
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00447d30(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c601a
    PUSH 0x1                            ; 004c601d
    LEA EBX,[EAX + 0xfffffd00]          ; 004c601f
    PUSH EBX                            ; 004c6025
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004c6026
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c602b
    MOV DL,byte ptr [ESP + 0xc]         ; 004c602e
    MOV EBX,EAX                         ; 004c6032
    TEST DL,0x2                         ; 004c6034
    JNZ 0x004c6058                      ; 004c6037
        ;   XREF to: 004c6058 (CONDITIONAL_JUMP)  ; LAB_004c6058
    MOV EAX,EBX                         ; 004c6039
    POP EBX                             ; 004c603b
    RET                                 ; 004c603c
    PUSH 0x600d10                       ; 004c603d | g_CFrankenstienMachineTypeInfo
        ;   Label: LAB_004c603d
    PUSH EBX                            ; 004c6042
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004c6043
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004c6048
    PUSH EAX                            ; 004c604b
    CALL crt_unknown.c_FUN_005c0336     ; 004c604c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004c6051
    MOV EAX,EBX                         ; 004c6054
    POP EBX                             ; 004c6056
    RET                                 ; 004c6057
    PUSH EAX                            ; 004c6058
        ;   Label: LAB_004c6058
    CALL crt_unknown.c_FUN_005c0344     ; 004c6059
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004c605e
    MOV EAX,EBX                         ; 004c6061
    POP EBX                             ; 004c6063
    RET                                 ; 004c6064

