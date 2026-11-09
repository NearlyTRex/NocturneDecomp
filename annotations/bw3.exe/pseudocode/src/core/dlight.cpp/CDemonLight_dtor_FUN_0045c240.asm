; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_dtor_FUN_0045c240(CDemonLight *this_ptr,uint flags)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_dtor_FUN_00420d30 at 00420d45
;
; Referenced Globals:
;   undefined1* PTR_core_dlight.cpp_CDemonLight_dtor_FUN_0045c240_005de514 = 0045c240
;   WatcomTypeInfo g_CDemonLightTypeInfo
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40
;   core_dlight.cpp_FUN_0045c380
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c240
        ;   Label: core_dlight.cpp_CDemonLight_dtor_FUN_0045c240
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045c241
    TEST byte ptr [ESP + 0xc],0x4       ; 0045c245
    JNZ 0x0045c276                      ; 0045c24a
        ;   XREF to: 0045c276 (CONDITIONAL_JUMP)  ; LAB_0045c276
    PUSH EBX                            ; 0045c24c
    MOV dword ptr [EBX + 0x3c],0x5de514 ; 0045c24d | PTR_core_dlight.cpp_CDemonLight_dtor_FUN_0045c240_005de514
    CALL core_dlight.cpp_FUN_0045c380   ; 0045c254
        ;   XREF to: 0045c380 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_0045c380()
    ADD ESP,0x4                         ; 0045c259
    PUSH 0x1                            ; 0045c25c
    PUSH EBX                            ; 0045c25e
    CALL core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40 ; 0045c25f
        ;   XREF to: 00448c40 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40(CDemonCamera * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045c264
    MOV DL,byte ptr [ESP + 0xc]         ; 0045c267
    MOV EBX,EAX                         ; 0045c26b
    TEST DL,0x2                         ; 0045c26d
    JNZ 0x0045c291                      ; 0045c270
        ;   XREF to: 0045c291 (CONDITIONAL_JUMP)  ; LAB_0045c291
    MOV EAX,EBX                         ; 0045c272
    POP EBX                             ; 0045c274
    RET                                 ; 0045c275
    PUSH 0x5de530                       ; 0045c276 | g_CDemonLightTypeInfo
        ;   Label: LAB_0045c276
    PUSH EBX                            ; 0045c27b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0045c27c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0045c281
    PUSH EAX                            ; 0045c284
    CALL crt_unknown.c_FUN_005a30b6     ; 0045c285
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0045c28a
    MOV EAX,EBX                         ; 0045c28d
    POP EBX                             ; 0045c28f
    RET                                 ; 0045c290
    PUSH EAX                            ; 0045c291
        ;   Label: LAB_0045c291
    CALL crt_unknown.c_FUN_005a30c4     ; 0045c292
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045c297
    MOV EAX,EBX                         ; 0045c29a
    POP EBX                             ; 0045c29c
    RET                                 ; 0045c29d

