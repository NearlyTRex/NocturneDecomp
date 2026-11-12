; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMineCar * __cdecl core_minecar_cpp_CMineCar_dtor_FUN_004f2120(CMineCar *this_ptr,uint flags)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CMineCarTypeInfo
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

    PUSH EBX                            ; 004f2120
        ;   Label: core_minecar.cpp_CMineCar_dtor_FUN_004f2120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2121
    TEST byte ptr [ESP + 0xc],0x4       ; 004f2125
    JNZ 0x004f215d                      ; 004f212a
        ;   XREF to: 004f215d (CONDITIONAL_JUMP)  ; LAB_004f215d
    PUSH 0x0                            ; 004f212c
    ADD EBX,0x46c                       ; 004f212e
    PUSH EBX                            ; 004f2134
    CALL core_course.cpp_CCourse_dtor_FUN_00438a70 ; 004f2135
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; CCourse * core_course.cpp_CCourse_dtor_FUN_00438a70(CCourse * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f213a
    PUSH 0x1                            ; 004f213d
    LEA EBX,[EAX + 0xfffffb94]          ; 004f213f
    PUSH EBX                            ; 004f2145
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004f2146
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f214b
    MOV DL,byte ptr [ESP + 0xc]         ; 004f214e
    MOV EBX,EAX                         ; 004f2152
    TEST DL,0x2                         ; 004f2154
    JNZ 0x004f2178                      ; 004f2157
        ;   XREF to: 004f2178 (CONDITIONAL_JUMP)  ; LAB_004f2178
    MOV EAX,EBX                         ; 004f2159
    POP EBX                             ; 004f215b
    RET                                 ; 004f215c
    PUSH 0x5fa120                       ; 004f215d | g_CMineCarTypeInfo
        ;   Label: LAB_004f215d
    PUSH EBX                            ; 004f2162
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004f2163
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f2168
    PUSH EAX                            ; 004f216b
    CALL crt_unknown.c_FUN_005b7fce     ; 004f216c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004f2171
    MOV EAX,EBX                         ; 004f2174
    POP EBX                             ; 004f2176
    RET                                 ; 004f2177
    PUSH EAX                            ; 004f2178
        ;   Label: LAB_004f2178
    CALL crt_unknown.c_FUN_005b7fdc     ; 004f2179
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004f217e
    MOV EAX,EBX                         ; 004f2181
    POP EBX                             ; 004f2183
    RET                                 ; 004f2184

