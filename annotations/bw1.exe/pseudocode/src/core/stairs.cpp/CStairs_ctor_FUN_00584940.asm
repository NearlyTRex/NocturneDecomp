; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_00584940(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_factoryFuncStairs_FUN_00584910 at 00584923
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00584940
        ;   Label: core_stairs.cpp_CStairs_ctor_FUN_00584940
    PUSH EAX                            ; 00584944
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00584945
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058494a
    PUSH 0x5ff680                       ; 0058494d
    PUSH 0x28                           ; 00584952
    ADD EAX,0x170                       ; 00584954
    PUSH EAX                            ; 00584959
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0058495a
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    MOV dword ptr [EAX + -0x1c],0x605e34 ; 0058495f
    MOV dword ptr [EAX + -0x18],0x3f800000 ; 00584966
    MOV dword ptr [EAX + -0x14],0x3f800000 ; 0058496d
    MOV dword ptr [EAX + -0x10],0x40400000 ; 00584974
    MOV dword ptr [EAX + -0x4],0x5      ; 0058497b
    MOV dword ptr [EAX + -0xc],0x3f000000 ; 00584982
    MOV dword ptr [EAX + -0x8],0x3e99999a ; 00584989
    ADD ESP,0xc                         ; 00584990
    MOV dword ptr [EAX + 0x8c0],0x0     ; 00584993
    SUB EAX,0x170                       ; 0058499d
    RET                                 ; 005849a2

