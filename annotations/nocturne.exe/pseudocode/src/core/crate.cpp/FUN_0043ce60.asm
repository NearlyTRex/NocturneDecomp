; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crate_cpp_FUN_0043ce60(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrateTypeInfo_0059bb10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ce60
        ;   Label: core_crate.cpp_FUN_0043ce60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043ce61
    TEST byte ptr [ESP + 0xc],0x4       ; 0043ce65
    JNZ 0x0043ce86                      ; 0043ce6a
        ;   XREF to: 0043ce86 (CONDITIONAL_JUMP)  ; LAB_0043ce86
    PUSH 0x1                            ; 0043ce6c
    PUSH EBX                            ; 0043ce6e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0043ce6f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 0043ce74
    MOV DL,byte ptr [ESP + 0xc]         ; 0043ce77
    MOV EBX,EAX                         ; 0043ce7b
    TEST DL,0x2                         ; 0043ce7d
    JNZ 0x0043cea1                      ; 0043ce80
        ;   XREF to: 0043cea1 (CONDITIONAL_JUMP)  ; LAB_0043cea1
    MOV EAX,EBX                         ; 0043ce82
    POP EBX                             ; 0043ce84
    RET                                 ; 0043ce85
    PUSH 0x59bb10                       ; 0043ce86 | g_CCrateTypeInfo_0059bb10
        ;   Label: LAB_0043ce86
    PUSH EBX                            ; 0043ce8b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0043ce8c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 0043ce91
    PUSH EAX                            ; 0043ce94
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0043ce95
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0043ce9a
    MOV EAX,EBX                         ; 0043ce9d
    POP EBX                             ; 0043ce9f
    RET                                 ; 0043cea0
    PUSH EAX                            ; 0043cea1
        ;   Label: LAB_0043cea1
    CALL crt_unknown.c_FUN_00564494     ; 0043cea2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0043cea7
    MOV EAX,EBX                         ; 0043ceaa
    POP EBX                             ; 0043ceac
    RET                                 ; 0043cead

