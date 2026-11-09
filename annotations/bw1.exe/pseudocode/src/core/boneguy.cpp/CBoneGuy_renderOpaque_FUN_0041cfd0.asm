; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_renderOpaque_FUN_0041cfd0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00612560]      ; 0041cfd0 | DAT_00612560
        ;   Label: core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041cfd0
    PUSH EDX                            ; 0041cfd6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0041cfd7
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041cfdc
    TEST EAX,EAX                        ; 0041cfdf
    JNZ 0x0041cfe4                      ; 0041cfe1
        ;   XREF to: 0041cfe4 (CONDITIONAL_JUMP)  ; LAB_0041cfe4
    RET                                 ; 0041cfe3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041cfe4
        ;   Label: LAB_0041cfe4
    PUSH ECX                            ; 0041cfe8
    CALL core_charactr.cpp_FUN_0042f240 ; 0041cfe9
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041cfee
    RET                                 ; 0041cff1

