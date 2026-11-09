; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00411140(CBat *this_ptr,uint flags)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatTypeInfo
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

    PUSH EBX                            ; 00411140
        ;   Label: core_bat.cpp_CBat_dtor_FUN_00411140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411141
    TEST byte ptr [ESP + 0xc],0x4       ; 00411145
    JNZ 0x0041117d                      ; 0041114a
        ;   XREF to: 0041117d (CONDITIONAL_JUMP)  ; LAB_0041117d
    PUSH 0x0                            ; 0041114c
    ADD EBX,0x178                       ; 0041114e
    PUSH EBX                            ; 00411154
    CALL core_course.cpp_CCourse_dtor_FUN_00447d30 ; 00411155
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00447d30(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041115a
    PUSH 0x1                            ; 0041115d
    LEA EBX,[EAX + 0xfffffe88]          ; 0041115f
    PUSH EBX                            ; 00411165
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00411166
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041116b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041116e
    MOV EBX,EAX                         ; 00411172
    TEST DL,0x2                         ; 00411174
    JNZ 0x00411198                      ; 00411177
        ;   XREF to: 00411198 (CONDITIONAL_JUMP)  ; LAB_00411198
    MOV EAX,EBX                         ; 00411179
    POP EBX                             ; 0041117b
    RET                                 ; 0041117c
    PUSH 0x5fbf90                       ; 0041117d | g_CBatTypeInfo
        ;   Label: LAB_0041117d
    PUSH EBX                            ; 00411182
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00411183
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00411188
    PUSH EAX                            ; 0041118b
    CALL crt_unknown.c_FUN_005c0336     ; 0041118c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00411191
    MOV EAX,EBX                         ; 00411194
    POP EBX                             ; 00411196
    RET                                 ; 00411197
    PUSH EAX                            ; 00411198
        ;   Label: LAB_00411198
    CALL crt_unknown.c_FUN_005c0344     ; 00411199
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0041119e
    MOV EAX,EBX                         ; 004111a1
    POP EBX                             ; 004111a3
    RET                                 ; 004111a4

