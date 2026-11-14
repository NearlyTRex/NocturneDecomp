; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * __cdecl core_icepick_cpp_CIcePick_dtor_FUN_004f2740(CIcePick *this_ptr,uint flags)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CIcePickTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2740
        ;   Label: core_icepick.cpp_CIcePick_dtor_FUN_004f2740
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2741
    TEST byte ptr [ESP + 0xc],0x4       ; 004f2745
    JNZ 0x004f2766                      ; 004f274a
        ;   XREF to: 004f2766 (CONDITIONAL_JUMP)  ; LAB_004f2766
    PUSH 0x1                            ; 004f274c
    PUSH EBX                            ; 004f274e
    CALL core_hero.cpp_FUN_004ea980     ; 004f274f
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 004f2754
    MOV DL,byte ptr [ESP + 0xc]         ; 004f2757
    MOV EBX,EAX                         ; 004f275b
    TEST DL,0x2                         ; 004f275d
    JNZ 0x004f2781                      ; 004f2760
        ;   XREF to: 004f2781 (CONDITIONAL_JUMP)  ; LAB_004f2781
    MOV EAX,EBX                         ; 004f2762
    POP EBX                             ; 004f2764
    RET                                 ; 004f2765
    PUSH 0x6027a0                       ; 004f2766 | g_CIcePickTypeInfo
        ;   Label: LAB_004f2766
    PUSH EBX                            ; 004f276b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004f276c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f2771
    PUSH EAX                            ; 004f2774
    CALL crt_unknown.c_FUN_005c0336     ; 004f2775
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004f277a
    MOV EAX,EBX                         ; 004f277d
    POP EBX                             ; 004f277f
    RET                                 ; 004f2780
    PUSH EAX                            ; 004f2781
        ;   Label: LAB_004f2781
    CALL crt_unknown.c_FUN_005c0344     ; 004f2782
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004f2787
    MOV EAX,EBX                         ; 004f278a
    POP EBX                             ; 004f278c
    RET                                 ; 004f278d

