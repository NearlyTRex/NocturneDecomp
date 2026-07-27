; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_boxactor_cpp_FUN_0041fa10(int param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightActorTypeInfo_0059acb0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   core_dlight.cpp_FUN_0044e1c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fa10
        ;   Label: core_boxactor.cpp_FUN_0041fa10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041fa11
    TEST byte ptr [ESP + 0xc],0x4       ; 0041fa15
    JNZ 0x0041fa5d                      ; 0041fa1a
        ;   XREF to: 0041fa5d (CONDITIONAL_JUMP)  ; LAB_0041fa5d
    PUSH 0x0                            ; 0041fa1c
    ADD EBX,0x668                       ; 0041fa1e
    PUSH EBX                            ; 0041fa24
    CALL core_dlight.cpp_FUN_0044e1c0   ; 0041fa25
        ;   XREF to: 0044e1c0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_FUN_0044e1c0()
    ADD ESP,0x8                         ; 0041fa2a
    PUSH 0x0                            ; 0041fa2d
    SUB EAX,0x2dc                       ; 0041fa2f
    PUSH EAX                            ; 0041fa34
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 0041fa35
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_dtor_FUN_0041a6c0()
    ADD ESP,0x8                         ; 0041fa3a
    PUSH 0x1                            ; 0041fa3d
    LEA EBX,[EAX + 0xfffffc74]          ; 0041fa3f
    PUSH EBX                            ; 0041fa45
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0041fa46
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0041fa4b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041fa4e
    MOV EBX,EAX                         ; 0041fa52
    TEST DL,0x2                         ; 0041fa54
    JNZ 0x0041fa78                      ; 0041fa57
        ;   XREF to: 0041fa78 (CONDITIONAL_JUMP)  ; LAB_0041fa78
    MOV EAX,EBX                         ; 0041fa59
    POP EBX                             ; 0041fa5b
    RET                                 ; 0041fa5c
    PUSH 0x59acb0                       ; 0041fa5d | g_CLightActorTypeInfo_0059acb0
        ;   Label: LAB_0041fa5d
    PUSH EBX                            ; 0041fa62
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0041fa63
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0041fa68
    PUSH EAX                            ; 0041fa6b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0041fa6c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0041fa71
    MOV EAX,EBX                         ; 0041fa74
    POP EBX                             ; 0041fa76
    RET                                 ; 0041fa77
    PUSH EAX                            ; 0041fa78
        ;   Label: LAB_0041fa78
    CALL crt_unknown.c_FUN_00564494     ; 0041fa79
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0041fa7e
    MOV EAX,EBX                         ; 0041fa81
    POP EBX                             ; 0041fa83
    RET                                 ; 0041fa84

