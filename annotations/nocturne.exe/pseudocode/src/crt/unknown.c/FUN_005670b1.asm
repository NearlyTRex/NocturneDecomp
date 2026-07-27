; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005670b1(void)
;
;
; XREF[2]:
;   core_skeleton.cpp_CLodMeshPrecomputeEntry_ctor_FUN_005173a0 at 005173a5
;   core_skeleton.cpp_FUN_00517350 at 00517355
;
; Called Functions:
;   crt_unknown.c_FUN_005670c1
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005670b1
        ;   Label: crt_unknown.c_FUN_005670b1
    CALL crt_unknown.c_FUN_005670c1     ; 005670b5
        ;   XREF to: 005670c1 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005670c1()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005670ba
    RET 0x4                             ; 005670be

