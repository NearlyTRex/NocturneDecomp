; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spireagl_cpp_CSpiritEagle_renderBackground_FUN_00599a40(CSpiritEagle *this_ptr,int layer_flag)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599a40
        ;   Label: core_spireagl.cpp_CSpiritEagle_renderBackground_FUN_00599a40
    MOV EDX,dword ptr [ESP + 0x8]       ; 00599a44
    CMP dword ptr [EAX + 0x20868],0x0   ; 00599a48
    JZ 0x00599a69                       ; 00599a4f
        ;   XREF to: 00599a69 (CONDITIONAL_JUMP)  ; LAB_00599a69
    TEST EDX,EDX                        ; 00599a51
    JZ 0x00599a5f                       ; 00599a53
        ;   XREF to: 00599a5f (CONDITIONAL_JUMP)  ; LAB_00599a5f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00599a55
    PUSH EDX                            ; 00599a5f
        ;   Label: LAB_00599a5f
    PUSH EAX                            ; 00599a60
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300 ; 00599a61
        ;   XREF to: 0042e300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00599a66
    RET                                 ; 00599a69
        ;   Label: LAB_00599a69

