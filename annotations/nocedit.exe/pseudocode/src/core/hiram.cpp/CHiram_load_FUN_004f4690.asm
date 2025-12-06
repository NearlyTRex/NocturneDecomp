; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hiram.cpp_CHiram_load_FUN_004f4690()
;
;
; Called Functions:
;   core_npc.cpp_CNPC_serialize_FUN_00544ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f4690
        ;   Label: core_hiram.cpp_CHiram_load_FUN_004f4690
    PUSH EDX                            ; 004f4694
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 004f4695 | void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f469a
    RET                                 ; 004f469d

