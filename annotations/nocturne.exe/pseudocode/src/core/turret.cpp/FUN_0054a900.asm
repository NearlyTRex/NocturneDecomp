; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_0054a900(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a900
        ;   Label: core_turret.cpp_FUN_0054a900
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054a904
    CMP EDX,dword ptr [EAX + 0x854]     ; 0054a908
    JZ 0x0054a911                       ; 0054a90e
        ;   XREF to: 0054a911 (CONDITIONAL_JUMP)  ; LAB_0054a911
    RET                                 ; 0054a910
    MOV dword ptr [EAX + 0x854],0x0     ; 0054a911
        ;   Label: LAB_0054a911
    RET                                 ; 0054a91b

