; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_turret_cpp_CTurret_startInteraction_FUN_0054a870(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a870
        ;   Label: core_turret.cpp_CTurret_startInteraction_FUN_0054a870
    CMP dword ptr [EAX + 0x854],0x0     ; 0054a874
    JZ 0x0054a880                       ; 0054a87b
        ;   XREF to: 0054a880 (CONDITIONAL_JUMP)  ; LAB_0054a880
    XOR EAX,EAX                         ; 0054a87d
    RET                                 ; 0054a87f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054a880
        ;   Label: LAB_0054a880
    MOV dword ptr [EAX + 0x854],EDX     ; 0054a884
    MOV EAX,0x1                         ; 0054a88a
    RET                                 ; 0054a88f

