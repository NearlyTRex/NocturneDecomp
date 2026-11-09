; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005badc7(void)
;
;
; XREF[2]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_005407e0 at 005407e5
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00540840 at 00540845
;
; Called Functions:
;   crt_unknown.c_FUN_005badd7
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005badc7
        ;   Label: crt_unknown.c_FUN_005badc7
    CALL crt_unknown.c_FUN_005badd7     ; 005badcb
        ;   XREF to: 005badd7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005badd7()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005badd0
    RET 0x4                             ; 005badd4

