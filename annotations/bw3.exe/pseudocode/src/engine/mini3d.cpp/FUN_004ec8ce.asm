; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ec8ce(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2974
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d7a6b4
;
; Called Functions:
;   engine_special.cpp_presentToExternalRenderer_FUN_00566260
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
;   wincore_winrun.cpp_FUN_00580f70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004ec8ce
        ;   Label: engine_mini3d.cpp_FUN_004ec8ce
    CMP dword ptr [0x01c6cee8],0x0      ; 004ec8d0 | DAT_01c6cee8
    JZ 0x004ec8f3                       ; 004ec8d7
        ;   XREF to: 004ec8f3 (CONDITIONAL_JUMP)  ; LAB_004ec8f3
    PUSH 0x1                            ; 004ec8d9
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00566260 ; 004ec8db
        ;   XREF to: 00566260 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)
    ADD ESP,0x4                         ; 004ec8e0
    CALL wincore_winrun.cpp_FUN_00580f70 ; 004ec8e3
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
    MOV EAX,[0x005e2974]                ; 004ec8e8 | DAT_005e2974
    MOV [0x01d7a6b4],EAX                ; 004ec8ed | DAT_01d7a6b4
    RET                                 ; 004ec8f2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 ; 004ec8f3
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0()
        ;   Label: LAB_004ec8f3
    MOV EAX,[0x005e2974]                ; 004ec8f8 | DAT_005e2974
    MOV [0x01d7a6b4],EAX                ; 004ec8fd | DAT_01d7a6b4
    RET                                 ; 004ec902

