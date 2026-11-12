; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSvetlana * __cdecl core_svetlana_cpp_CSvetlana_dtor_FUN_00594680(CSvetlana *this_ptr,uint flags)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSvetlanaTypeInfo
;
; Called Functions:
;   core_cloth.cpp_FUN_0043e620
;   core_hero.cpp_FUN_004ea980
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594680
        ;   Label: core_svetlana.cpp_CSvetlana_dtor_FUN_00594680
    MOV EBX,dword ptr [ESP + 0x8]       ; 00594681
    TEST byte ptr [ESP + 0xc],0x4       ; 00594685
    JNZ 0x005946cd                      ; 0059468a
        ;   XREF to: 005946cd (CONDITIONAL_JUMP)  ; LAB_005946cd
    PUSH 0x0                            ; 0059468c
    ADD EBX,0x5aae4                     ; 0059468e
    PUSH EBX                            ; 00594694
    CALL core_cloth.cpp_FUN_0043e620    ; 00594695
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 0059469a
    PUSH 0x0                            ; 0059469d
    SUB EAX,0x3ab30                     ; 0059469f
    PUSH EAX                            ; 005946a4
    CALL core_cloth.cpp_FUN_0043e620    ; 005946a5
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 005946aa
    PUSH 0x1                            ; 005946ad
    LEA EBX,[EAX + 0xfffe004c]          ; 005946af
    PUSH EBX                            ; 005946b5
    CALL core_hero.cpp_FUN_004ea980     ; 005946b6
        ;   XREF to: 004ea980 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea980()
    ADD ESP,0x8                         ; 005946bb
    MOV DL,byte ptr [ESP + 0xc]         ; 005946be
    MOV EBX,EAX                         ; 005946c2
    TEST DL,0x2                         ; 005946c4
    JNZ 0x005946e8                      ; 005946c7
        ;   XREF to: 005946e8 (CONDITIONAL_JUMP)  ; LAB_005946e8
    MOV EAX,EBX                         ; 005946c9
    POP EBX                             ; 005946cb
    RET                                 ; 005946cc
    PUSH 0x606580                       ; 005946cd | g_CSvetlanaTypeInfo
        ;   Label: LAB_005946cd
    PUSH EBX                            ; 005946d2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005946d3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005946d8
    PUSH EAX                            ; 005946db
    CALL crt_unknown.c_FUN_005c0336     ; 005946dc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005946e1
    MOV EAX,EBX                         ; 005946e4
    POP EBX                             ; 005946e6
    RET                                 ; 005946e7
    PUSH EAX                            ; 005946e8
        ;   Label: LAB_005946e8
    CALL crt_unknown.c_FUN_005c0344     ; 005946e9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005946ee
    MOV EAX,EBX                         ; 005946f1
    POP EBX                             ; 005946f3
    RET                                 ; 005946f4

