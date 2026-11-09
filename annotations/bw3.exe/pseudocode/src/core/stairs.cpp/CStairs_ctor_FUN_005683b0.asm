; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005683b0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stairs.cpp_factoryFuncStairs_FUN_00568380 at 00568393
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005683b0
        ;   Label: core_stairs.cpp_CStairs_ctor_FUN_005683b0
    PUSH EAX                            ; 005683b4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 005683b5
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005683ba
    PUSH 0x5dee90                       ; 005683bd
    PUSH 0x28                           ; 005683c2
    ADD EAX,0x170                       ; 005683c4
    PUSH EAX                            ; 005683c9
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 005683ca
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    MOV dword ptr [EAX + -0x1c],0x5e4dd4 ; 005683cf
    MOV dword ptr [EAX + -0x18],0x3f800000 ; 005683d6
    MOV dword ptr [EAX + -0x14],0x3f800000 ; 005683dd
    MOV dword ptr [EAX + -0x10],0x40400000 ; 005683e4
    MOV dword ptr [EAX + -0x4],0x5      ; 005683eb
    MOV dword ptr [EAX + -0xc],0x3f000000 ; 005683f2
    MOV dword ptr [EAX + -0x8],0x3e99999a ; 005683f9
    ADD ESP,0xc                         ; 00568400
    MOV dword ptr [EAX + 0x8c0],0x0     ; 00568403
    SUB EAX,0x170                       ; 0056840d
    RET                                 ; 00568412

