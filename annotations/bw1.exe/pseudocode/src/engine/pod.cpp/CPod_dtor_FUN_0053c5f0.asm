; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_0053c5f0(CPod *this_ptr,uint flags)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_0053d730 at 0053d73f
;
; Referenced Globals:
;   undefined1* PTR_engine_pod.cpp_CPod_dtor_FUN_0053c5f0_00604a34 = 0053c5f0
;   WatcomTypeInfo g_CPodTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   engine_pod.cpp_CPod_cleanup_FUN_0053c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c5f0
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_0053c5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053c5f1
    TEST byte ptr [ESP + 0xc],0x4       ; 0053c5f5
    JNZ 0x0053c621                      ; 0053c5fa
        ;   XREF to: 0053c621 (CONDITIONAL_JUMP)  ; LAB_0053c621
    PUSH EBX                            ; 0053c5fc
    MOV dword ptr [EBX + 0x194],0x604a34 ; 0053c5fd | PTR_engine_pod.cpp_CPod_dtor_FUN_0053c5f0_00604a34
    CALL engine_pod.cpp_CPod_cleanup_FUN_0053c8f0 ; 0053c607
        ;   XREF to: 0053c8f0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_0053c8f0(CPod * this_ptr)
    ADD ESP,0x4                         ; 0053c60c
    TEST byte ptr [ESP + 0xc],0x2       ; 0053c60f
    JNZ 0x0053c63c                      ; 0053c614
        ;   XREF to: 0053c63c (CONDITIONAL_JUMP)  ; LAB_0053c63c
    MOV EAX,EBX                         ; 0053c616
    POP EBX                             ; 0053c618
    LEA EAX,[EAX]                       ; 0053c619
    NOP                                 ; 0053c61f
    RET                                 ; 0053c620
        ;   Label: LAB_0053c620
    PUSH 0x604a50                       ; 0053c621 | g_CPodTypeInfo
        ;   Label: LAB_0053c621
    PUSH EBX                            ; 0053c626
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0053c627
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0053c62c
    PUSH EAX                            ; 0053c62f
    CALL crt_unknown.c_FUN_005c0336     ; 0053c630
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0053c635
    MOV EAX,EBX                         ; 0053c638
    POP EBX                             ; 0053c63a
    RET                                 ; 0053c63b
    PUSH EBX                            ; 0053c63c
        ;   Label: LAB_0053c63c
    CALL crt_unknown.c_FUN_005c0344     ; 0053c63d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0053c642
    MOV EAX,EBX                         ; 0053c645
    POP EBX                             ; 0053c647
    RET                                 ; 0053c648

