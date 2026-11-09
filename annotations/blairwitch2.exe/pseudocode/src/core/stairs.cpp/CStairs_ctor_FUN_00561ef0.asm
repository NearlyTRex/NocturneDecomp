; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_00561ef0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_factoryFuncStairs_FUN_00561ec0 at 00561ed3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00561ef0
        ;   Label: core_stairs.cpp_CStairs_ctor_FUN_00561ef0
    PUSH EAX                            ; 00561ef4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00561ef5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00561efa
    PUSH 0x5f5b70                       ; 00561efd
    PUSH 0x28                           ; 00561f02
    ADD EAX,0x2cc                       ; 00561f04
    PUSH EAX                            ; 00561f09
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00561f0a
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    MOV dword ptr [EAX + -0x1c],0x5fbf64 ; 00561f0f
    MOV dword ptr [EAX + -0x18],0x3f800000 ; 00561f16
    MOV dword ptr [EAX + -0x14],0x3f800000 ; 00561f1d
    MOV dword ptr [EAX + -0x10],0x40400000 ; 00561f24
    MOV dword ptr [EAX + -0x4],0x5      ; 00561f2b
    MOV dword ptr [EAX + -0xc],0x3f000000 ; 00561f32
    MOV dword ptr [EAX + -0x8],0x3e99999a ; 00561f39
    ADD ESP,0xc                         ; 00561f40
    MOV dword ptr [EAX + 0x8c0],0x0     ; 00561f43
    SUB EAX,0x2cc                       ; 00561f4d
    RET                                 ; 00561f52

