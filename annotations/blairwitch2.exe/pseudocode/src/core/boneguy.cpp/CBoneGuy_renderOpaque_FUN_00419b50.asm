; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_00419b50(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_charactr.cpp_FUN_004254b0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 00419b50 | DAT_0060b280
        ;   Label: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00419b50
    PUSH EDX                            ; 00419b56 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00419b57
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00419b5c
    TEST EAX,EAX                        ; 00419b5f
    JNZ 0x00419b64                      ; 00419b61
        ;   XREF to: 00419b64 (CONDITIONAL_JUMP)  ; LAB_00419b64
    RET                                 ; 00419b63
    MOV ECX,dword ptr [ESP + 0x4]       ; 00419b64
        ;   Label: LAB_00419b64
    PUSH ECX                            ; 00419b68
    CALL core_charactr.cpp_FUN_004254b0 ; 00419b69
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004254b0()
    ADD ESP,0x4                         ; 00419b6e
    RET                                 ; 00419b71

