; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_hiram_cpp_CHiram_load_FUN_004f4690(void)
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
    CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0 ; 004f4695
        ;   XREF to: 00544ba0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_serialize_FUN_00544ba0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 004f469a
    RET                                 ; 004f469d

