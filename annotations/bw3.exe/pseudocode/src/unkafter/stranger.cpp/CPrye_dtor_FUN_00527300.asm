; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPrye * unkafter_stranger_cpp_CPrye_dtor_FUN_00527300(CPrye *this_ptr,uint flags)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CPryeTypeInfo
;
; Called Functions:
;   core_hero.cpp_FUN_004d2620
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527300
        ;   Label: unkafter_stranger.cpp_CPrye_dtor_FUN_00527300
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527301
    TEST byte ptr [ESP + 0xc],0x4       ; 00527305
    JNZ 0x00527326                      ; 0052730a
        ;   XREF to: 00527326 (CONDITIONAL_JUMP)  ; LAB_00527326
    PUSH 0x1                            ; 0052730c
    PUSH EBX                            ; 0052730e
    CALL core_hero.cpp_FUN_004d2620     ; 0052730f
        ;   XREF to: 004d2620 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d2620()
    ADD ESP,0x8                         ; 00527314
    MOV DL,byte ptr [ESP + 0xc]         ; 00527317
    MOV EBX,EAX                         ; 0052731b
    TEST DL,0x2                         ; 0052731d
    JNZ 0x00527341                      ; 00527320
        ;   XREF to: 00527341 (CONDITIONAL_JUMP)  ; LAB_00527341
    MOV EAX,EBX                         ; 00527322
    POP EBX                             ; 00527324
    RET                                 ; 00527325
    PUSH 0x5e36a0                       ; 00527326 | g_CPryeTypeInfo
        ;   Label: LAB_00527326
    PUSH EBX                            ; 0052732b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0052732c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00527331
    PUSH EAX                            ; 00527334
    CALL crt_unknown.c_FUN_005a30b6     ; 00527335
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0052733a
    MOV EAX,EBX                         ; 0052733d
    POP EBX                             ; 0052733f
    RET                                 ; 00527340
    PUSH EAX                            ; 00527341
        ;   Label: LAB_00527341
    CALL crt_unknown.c_FUN_005a30c4     ; 00527342
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00527347
    MOV EAX,EBX                         ; 0052734a
    POP EBX                             ; 0052734c
    RET                                 ; 0052734d

