; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_00462530(CDemonLight *this_ptr,uint flags)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_dtor_FUN_00423720 at 00423735
;
; Referenced Globals:
;   undefined1* PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00462530_005febf4 = 00462530
;   WatcomTypeInfo g_CDemonLightTypeInfo
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00
;   core_dlight.cpp_FUN_00462670
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462530
        ;   Label: core_dlight.cpp_CDemonLight_dtor_FUN_00462530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00462531
    TEST byte ptr [ESP + 0xc],0x4       ; 00462535
    JNZ 0x00462566                      ; 0046253a
        ;   XREF to: 00462566 (CONDITIONAL_JUMP)  ; LAB_00462566
    PUSH EBX                            ; 0046253c
    MOV dword ptr [EBX + 0x3c],0x5febf4 ; 0046253d | PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00462530_005febf4
    CALL core_dlight.cpp_FUN_00462670   ; 00462544
        ;   XREF to: 00462670 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_00462670()
    ADD ESP,0x4                         ; 00462549
    PUSH 0x1                            ; 0046254c
    PUSH EBX                            ; 0046254e
    CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00 ; 0046254f
        ;   XREF to: 0044cb00 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00462554
    MOV DL,byte ptr [ESP + 0xc]         ; 00462557
    MOV EBX,EAX                         ; 0046255b
    TEST DL,0x2                         ; 0046255d
    JNZ 0x00462581                      ; 00462560
        ;   XREF to: 00462581 (CONDITIONAL_JUMP)  ; LAB_00462581
    MOV EAX,EBX                         ; 00462562
    POP EBX                             ; 00462564
    RET                                 ; 00462565
    PUSH 0x5fec10                       ; 00462566 | g_CDemonLightTypeInfo
        ;   Label: LAB_00462566
    PUSH EBX                            ; 0046256b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0046256c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00462571
    PUSH EAX                            ; 00462574
    CALL crt_unknown.c_FUN_005c0336     ; 00462575
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0046257a
    MOV EAX,EBX                         ; 0046257d
    POP EBX                             ; 0046257f
    RET                                 ; 00462580
    PUSH EAX                            ; 00462581
        ;   Label: LAB_00462581
    CALL crt_unknown.c_FUN_005c0344     ; 00462582
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00462587
    MOV EAX,EBX                         ; 0046258a
    POP EBX                             ; 0046258c
    RET                                 ; 0046258d

