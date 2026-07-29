; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_stairs_cpp_FUN_005347b0(CDemonActor *param_1)
;
;
; XREF[1]:
;   core_stairs.cpp_FUN_00534780 at 00534793
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;   CDemonActor_vtable g_CStairsVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005347b0
        ;   Label: core_stairs.cpp_FUN_005347b0
    PUSH EAX                            ; 005347b4
    CALL core_actor.cpp_FUN_00409d30    ; 005347b5
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005347ba
    PUSH 0x59c080                       ; 005347bd | g_CDemonTriangleTypeInfo_0059c080
    PUSH 0x28                           ; 005347c2
    ADD EAX,0x168                       ; 005347c4
    PUSH EAX                            ; 005347c9
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 005347ca
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + -0x1c],0x5a24b4 ; 005347cf | g_CStairsVTable
    MOV dword ptr [EAX + -0x18],0x3f800000 ; 005347d6
    MOV dword ptr [EAX + -0x14],0x3f800000 ; 005347dd
    MOV dword ptr [EAX + -0x10],0x40400000 ; 005347e4
    MOV dword ptr [EAX + -0x4],0x5      ; 005347eb
    MOV dword ptr [EAX + -0xc],0x3f000000 ; 005347f2
    MOV dword ptr [EAX + -0x8],0x3e99999a ; 005347f9
    ADD ESP,0xc                         ; 00534800
    MOV dword ptr [EAX + 0x8c0],0x0     ; 00534803
    SUB EAX,0x168                       ; 0053480d
    RET                                 ; 00534812

