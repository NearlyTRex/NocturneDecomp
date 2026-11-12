; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_flushParticleList_FUN_00565fee(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6038
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00565fee
        ;   Label: engine_special.cpp_flushParticleList_FUN_00565fee
    CMP dword ptr [0x01c6cee8],0x0      ; 00565ff0 | DAT_01c6cee8
    JNZ 0x00565ffc                      ; 00565ff7
        ;   XREF to: 00565ffc (CONDITIONAL_JUMP)  ; LAB_00565ffc
    XOR EAX,EAX                         ; 00565ff9
    RET                                 ; 00565ffb
    CALL dword ptr [0x02cf6038]         ; 00565ffc | DAT_02cf6038
        ;   Label: LAB_00565ffc
    RET                                 ; 00566002

