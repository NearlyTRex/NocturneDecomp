; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a5ff7(void)
;
;
; XREF[2]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_005479f0 at 005479f5
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00547a50 at 00547a55
;
; Called Functions:
;   crt_unknown.c_FUN_005a6007
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005a5ff7
        ;   Label: crt_unknown.c_FUN_005a5ff7
    CALL crt_unknown.c_FUN_005a6007     ; 005a5ffb
        ;   XREF to: 005a6007 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6007()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a6000
    RET 0x4                             ; 005a6004

