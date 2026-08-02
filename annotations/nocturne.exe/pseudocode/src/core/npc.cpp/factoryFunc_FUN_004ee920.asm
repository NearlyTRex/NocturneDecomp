; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * __cdecl core_npc_cpp_factoryFunc_FUN_004ee920(void)
;
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_004ee950
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f570                        ; 004ee920
        ;   Label: core_npc.cpp_factoryFunc_FUN_004ee920
    CALL crt_unknown.c_FUN_0056497c     ; 004ee925
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004ee92a
    TEST EAX,EAX                        ; 004ee92d
    JNZ 0x004ee932                      ; 004ee92f
        ;   XREF to: 004ee932 (CONDITIONAL_JUMP)  ; LAB_004ee932
    RET                                 ; 004ee931
    PUSH EAX                            ; 004ee932
        ;   Label: LAB_004ee932
    CALL core_npc.cpp_CNPC_ctor_FUN_004ee950 ; 004ee933
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_004ee950(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004ee938
    RET                                 ; 004ee93b

