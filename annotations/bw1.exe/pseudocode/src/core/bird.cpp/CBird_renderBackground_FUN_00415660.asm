; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_renderBackground_FUN_00415660(CBird *this_ptr,int layer_flag)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042f320
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415660
        ;   Label: core_bird.cpp_CBird_renderBackground_FUN_00415660
    MOV EDX,dword ptr [ESP + 0x8]       ; 00415664
    CMP dword ptr [EAX + 0x1fab0],0x0   ; 00415668
    JZ 0x00415689                       ; 0041566f
        ;   XREF to: 00415689 (CONDITIONAL_JUMP)  ; LAB_00415689
    TEST EDX,EDX                        ; 00415671
    JZ 0x0041567f                       ; 00415673
        ;   XREF to: 0041567f (CONDITIONAL_JUMP)  ; LAB_0041567f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 00415675
    PUSH EDX                            ; 0041567f
        ;   Label: LAB_0041567f
    PUSH EAX                            ; 00415680
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_0042f320 ; 00415681
        ;   XREF to: 0042f320 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_0042f320(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00415686
    RET                                 ; 00415689
        ;   Label: LAB_00415689

