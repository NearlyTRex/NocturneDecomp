; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005170d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a1e50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005170d0
        ;   Label: FUN_005170d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005170d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005170d5
    JNZ 0x0051710d                      ; 005170da
        ;   XREF to: 0051710d (CONDITIONAL_JUMP)  ; LAB_0051710d
    PUSH 0x0                            ; 005170dc
    ADD EBX,0x350                       ; 005170de
    PUSH EBX                            ; 005170e4
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 005170e5
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_dtor_FUN_0041a6c0()
    ADD ESP,0x8                         ; 005170ea
    PUSH 0x1                            ; 005170ed
    LEA EBX,[EAX + 0xfffffcb0]          ; 005170ef
    PUSH EBX                            ; 005170f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 005170f6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 005170fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005170fe
    MOV EBX,EAX                         ; 00517102
    TEST DL,0x2                         ; 00517104
    JNZ 0x00517128                      ; 00517107
        ;   XREF to: 00517128 (CONDITIONAL_JUMP)  ; LAB_00517128
    MOV EAX,EBX                         ; 00517109
    POP EBX                             ; 0051710b
    RET                                 ; 0051710c
    PUSH 0x5a1e50                       ; 0051710d | DAT_005a1e50
        ;   Label: LAB_0051710d
    PUSH EBX                            ; 00517112
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00517113
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 00517118
    PUSH EAX                            ; 0051711b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0051711c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 00517121
    MOV EAX,EBX                         ; 00517124
    POP EBX                             ; 00517126
    RET                                 ; 00517127
    PUSH EAX                            ; 00517128
        ;   Label: LAB_00517128
    CALL FUN_00564494                   ; 00517129
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0051712e
    MOV EAX,EBX                         ; 00517131
    POP EBX                             ; 00517133
    RET                                 ; 00517134

