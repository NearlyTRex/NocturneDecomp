; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00(CDrummer *this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_FUN_005949d0 at 005949e3
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594a00
        ;   Label: core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00594a01
    PUSH EDX                            ; 00594a05
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 00594a06
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00594a0b
    PUSH 0x5f7680                       ; 00594a0e
    MOV EBX,EAX                         ; 00594a13
    ADD EAX,0x158                       ; 00594a15
    PUSH EAX                            ; 00594a1a
    MOV dword ptr [EAX + -0x4],0x606714 ; 00594a1b
    CALL core_skeleton.cpp_FUN_00569f50 ; 00594a22
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 00594a27
    MOV EAX,EBX                         ; 00594a2a
    POP EBX                             ; 00594a2c
    RET                                 ; 00594a2d

