; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * __cdecl engine_pod_cpp_CPod_dtor_FUN_00514350(CPod *this_ptr,uint flags)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_dtor_FUN_00515490 at 0051549f
;
; Referenced Globals:
;   undefined1* PTR_engine_pod.cpp_CPod_dtor_FUN_00514350_005e3424 = 00514350
;   WatcomTypeInfo g_CPodTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   engine_pod.cpp_CPod_cleanup_FUN_00514650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514350
        ;   Label: engine_pod.cpp_CPod_dtor_FUN_00514350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514351
    TEST byte ptr [ESP + 0xc],0x4       ; 00514355
    JNZ 0x00514381                      ; 0051435a
        ;   XREF to: 00514381 (CONDITIONAL_JUMP)  ; LAB_00514381
    PUSH EBX                            ; 0051435c
    MOV dword ptr [EBX + 0x194],0x5e3424 ; 0051435d | PTR_engine_pod.cpp_CPod_dtor_FUN_00514350_005e3424
    CALL engine_pod.cpp_CPod_cleanup_FUN_00514650 ; 00514367
        ;   XREF to: 00514650 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00514650(CPod * this_ptr)
    ADD ESP,0x4                         ; 0051436c
    TEST byte ptr [ESP + 0xc],0x2       ; 0051436f
    JNZ 0x0051439c                      ; 00514374
        ;   XREF to: 0051439c (CONDITIONAL_JUMP)  ; LAB_0051439c
    MOV EAX,EBX                         ; 00514376
    POP EBX                             ; 00514378
    LEA EAX,[EAX]                       ; 00514379
    NOP                                 ; 0051437f
    RET                                 ; 00514380
        ;   Label: LAB_00514380
    PUSH 0x5e3440                       ; 00514381 | g_CPodTypeInfo
        ;   Label: LAB_00514381
    PUSH EBX                            ; 00514386
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00514387
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0051438c
    PUSH EAX                            ; 0051438f
    CALL crt_unknown.c_FUN_005a30b6     ; 00514390
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00514395
    MOV EAX,EBX                         ; 00514398
    POP EBX                             ; 0051439a
    RET                                 ; 0051439b
    PUSH EBX                            ; 0051439c
        ;   Label: LAB_0051439c
    CALL crt_unknown.c_FUN_005a30c4     ; 0051439d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005143a2
    MOV EAX,EBX                         ; 005143a5
    POP EBX                             ; 005143a7
    RET                                 ; 005143a8

