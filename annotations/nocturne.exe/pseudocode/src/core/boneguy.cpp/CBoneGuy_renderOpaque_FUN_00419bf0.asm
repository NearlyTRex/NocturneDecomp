; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419bf0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x005ae704]      ; 00419bf0 | DAT_005ae704
        ;   Label: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419bf0
    PUSH EDX                            ; 00419bf6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00419bf7
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00419bfc
    TEST EAX,EAX                        ; 00419bff
    JNZ 0x00419c04                      ; 00419c01
        ;   XREF to: 00419c04 (CONDITIONAL_JUMP)  ; LAB_00419c04
    RET                                 ; 00419c03
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419c04
        ;   Label: LAB_00419c04
    PUSH ECX                            ; 00419c08
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 00419c09
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00419c0e
    RET                                 ; 00419c11

