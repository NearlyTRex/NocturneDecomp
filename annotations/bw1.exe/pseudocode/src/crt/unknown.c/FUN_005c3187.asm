; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c3187(void)
;
;
; XREF[2]:
;   core_skeleton.cpp_CSkeleton_ctor_FUN_00562dd0 at 00562dd5
;   core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30 at 00562e35
;
; Called Functions:
;   crt_unknown.c_FUN_005c3197
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005c3187
        ;   Label: crt_unknown.c_FUN_005c3187
    CALL crt_unknown.c_FUN_005c3197     ; 005c318b
        ;   XREF to: 005c3197 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3197()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c3190
    RET 0x4                             ; 005c3194

