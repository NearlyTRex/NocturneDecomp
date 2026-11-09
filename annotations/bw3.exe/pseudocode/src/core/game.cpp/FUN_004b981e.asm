; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b981e(int param_1,uint *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004b981e
        ;   Label: core_game.cpp_FUN_004b981e
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b9820
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b9824
    MOV AL,byte ptr [EDX + 0x1d21fa0]   ; 004b9828
    CMP AL,byte ptr [EDX + 0x1c6cef0]   ; 004b982e
    JZ 0x004b9841                       ; 004b9834
        ;   XREF to: 004b9841 (CONDITIONAL_JUMP)  ; LAB_004b9841
    XOR EAX,EAX                         ; 004b9836
    MOV AL,byte ptr [EDX + 0x1c6cef0]   ; 004b9838
    MOV dword ptr [ECX],EAX             ; 004b983e
    RET                                 ; 004b9840
    MOV dword ptr [ECX],0x0             ; 004b9841
        ;   Label: LAB_004b9841
    RET                                 ; 004b9847

