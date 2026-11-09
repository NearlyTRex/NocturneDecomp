; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00418f60(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e220
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005f2afc]      ; 00418f60 | DAT_005f2afc
        ;   Label: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00418f60
    PUSH EDX                            ; 00418f66 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00418f67
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00418f6c
    TEST EAX,EAX                        ; 00418f6f
    JNZ 0x00418f74                      ; 00418f71
        ;   XREF to: 00418f74 (CONDITIONAL_JUMP)  ; LAB_00418f74
    RET                                 ; 00418f73
    MOV ECX,dword ptr [ESP + 0x4]       ; 00418f74
        ;   Label: LAB_00418f74
    PUSH ECX                            ; 00418f78
    CALL core_charactr.cpp_FUN_0042e220 ; 00418f79
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00418f7e
    RET                                 ; 00418f81

