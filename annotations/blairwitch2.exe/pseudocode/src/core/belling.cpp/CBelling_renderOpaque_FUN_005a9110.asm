; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_belling_cpp_CBelling_renderOpaque_FUN_005a9110(CBelling *this_ptr)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9110
        ;   Label: core_belling.cpp_CBelling_renderOpaque_FUN_005a9110
    PUSH EDX                            ; 005a9114
    CALL core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920 ; 005a9115
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; int core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a911a
    RET                                 ; 005a911d

