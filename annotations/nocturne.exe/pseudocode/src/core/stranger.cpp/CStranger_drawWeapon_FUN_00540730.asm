; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_CStranger_drawWeapon_FUN_00540730(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_flashlit.wav_00595fce+1
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c77830
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00540730
        ;   Label: core_stranger.cpp_CStranger_drawWeapon_FUN_00540730
    MOV EAX,dword ptr [ESP + 0x8]       ; 00540734
    MOV dword ptr [EDX + 0x1fa3c],EAX   ; 00540738
    TEST EAX,EAX                        ; 0054073e
    JNZ 0x00540750                      ; 00540740
        ;   XREF to: 00540750 (CONDITIONAL_JUMP)  ; LAB_00540750
    MOV EAX,[0x005b9354]                ; 00540742 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0x244],0x0     ; 00540747 | DAT_01c77830
    JNZ 0x00540751                      ; 0054074e
        ;   XREF to: 00540751 (CONDITIONAL_JUMP)  ; LAB_00540751
    RET                                 ; 00540750
        ;   Label: LAB_00540750
    PUSH 0x595fcf                       ; 00540751 | s_flashlit.wav_00595fce+1
        ;   Label: LAB_00540751
    MOV dword ptr [EAX + 0x244],0x0     ; 00540756 | DAT_01c77830
    PUSH EDX                            ; 00540760
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00540761
    CALL dword ptr [EAX + 0x24]         ; 00540767
    ADD ESP,0x8                         ; 0054076a
    RET                                 ; 0054076d

