; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hpatrol_cpp_CPatrolPoint_renderOpaque_FUN_0059c980(CPatrolPoint *this_ptr)
;
; Parameters:
; CPatrolPoint *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 0059c980 | DAT_0060b280
        ;   Label: core_hpatrol.cpp_CPatrolPoint_renderOpaque_FUN_0059c980
    PUSH EDX                            ; 0059c986
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0059c987
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0059c98c
    TEST EAX,EAX                        ; 0059c98f
    JZ 0x0059c995                       ; 0059c991
        ;   XREF to: 0059c995 (CONDITIONAL_JUMP)  ; LAB_0059c995
    XOR EAX,EAX                         ; 0059c993
    RET                                 ; 0059c995
        ;   Label: LAB_0059c995

