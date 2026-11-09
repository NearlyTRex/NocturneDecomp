; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hiram_cpp_FUN_004ed290(int param_1)
;
;
; Called Functions:
;   core_npc.cpp_FUN_00531720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ed290
        ;   Label: core_hiram.cpp_FUN_004ed290
    PUSH EDX                            ; 004ed294
    CALL core_npc.cpp_FUN_00531720      ; 004ed295
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; undefined core_npc.cpp_FUN_00531720()
    ADD ESP,0x4                         ; 004ed29a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ed29d
    MOV dword ptr [EAX + 0x2750],0x0    ; 004ed2a1
    RET                                 ; 004ed2ab

