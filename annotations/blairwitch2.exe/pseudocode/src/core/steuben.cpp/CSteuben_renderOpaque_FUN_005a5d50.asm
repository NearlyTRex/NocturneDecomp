; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_steuben_cpp_CSteuben_renderOpaque_FUN_005a5d50(CSteuben *this_ptr)
;
; Parameters:
; CSteuben *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5d50
        ;   Label: core_steuben.cpp_CSteuben_renderOpaque_FUN_005a5d50
    PUSH EDX                            ; 005a5d54
    CALL core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920 ; 005a5d55
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; int core_basicnpc.cpp_CBasicNPC_renderOpaque_FUN_005a4920(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a5d5a
    RET                                 ; 005a5d5d

