; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055b620(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Get_position_of_secondar_005d46aa
;   undefined4 DAT_02cf49cc
;   undefined4 DAT_02cf49e8
;   undefined4 DAT_02cf49ec
;   undefined4 DAT_02cf49f0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_fillStreamBuffer_FUN_0055a820
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_005586d0
;   sound_sndmain.cpp_FUN_0055a560
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b620
        ;   Label: sound_snddx.cpp_FUN_0055b620
    SUB ESP,0x198                       ; 0055b621
    CALL sound_sndmain.cpp_FUN_005586d0 ; 0055b627
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
    CMP EAX,0x1                         ; 0055b62c
    JGE 0x0055b645                      ; 0055b62f
        ;   XREF to: 0055b645 (CONDITIONAL_JUMP)  ; LAB_0055b645
    MOV EDX,dword ptr [0x02cf49cc]      ; 0055b631 | DAT_02cf49cc
    TEST EDX,EDX                        ; 0055b637
    JNZ 0x0055b651                      ; 0055b639
        ;   XREF to: 0055b651 (CONDITIONAL_JUMP)  ; LAB_0055b651
    XOR EAX,EAX                         ; 0055b63b
    ADD ESP,0x198                       ; 0055b63d
        ;   Label: LAB_0055b63d
    POP EBX                             ; 0055b643
    RET                                 ; 0055b644
    CALL sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0 ; 0055b645
        ;   XREF to: 0055a0b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0()
        ;   Label: LAB_0055b645
    MOV EAX,0x1                         ; 0055b64a
    JMP 0x0055b63d                      ; 0055b64f
        ;   XREF to: 0055b63d (UNCONDITIONAL_JUMP)  ; LAB_0055b63d
    LEA EBX,[ESP + 0x190]               ; 0055b651
        ;   Label: LAB_0055b651
    PUSH EBX                            ; 0055b658
    LEA EBX,[ESP + 0x198]               ; 0055b659
    PUSH EBX                            ; 0055b660
    MOV EAX,EDX                         ; 0055b661
    MOV EDX,dword ptr [EDX]             ; 0055b663
    PUSH EAX                            ; 0055b665
    CALL dword ptr [EDX + 0x10]         ; 0055b666
    TEST EAX,EAX                        ; 0055b669
    JNZ 0x0055b6a8                      ; 0055b66b
        ;   XREF to: 0055b6a8 (CONDITIONAL_JUMP)  ; LAB_0055b6a8
    PUSH ESI                            ; 0055b66d
    MOV EAX,dword ptr [ESP + 0x198]     ; 0055b66e
    MOV ECX,dword ptr [0x02cf49e8]      ; 0055b675 | DAT_02cf49e8
    XOR EDX,EDX                         ; 0055b67b
    DIV ECX                             ; 0055b67d
    MOV ESI,dword ptr [0x02cf49ec]      ; 0055b67f | DAT_02cf49ec
    MOV EBX,EAX                         ; 0055b685
    CMP EAX,ESI                         ; 0055b687
    JL 0x0055b68e                       ; 0055b689
        ;   XREF to: 0055b68e (CONDITIONAL_JUMP)  ; LAB_0055b68e
    LEA EBX,[ESI + -0x1]                ; 0055b68b
    TEST EBX,EBX                        ; 0055b68e
        ;   Label: LAB_0055b68e
    JL 0x0055b6de                       ; 0055b690
        ;   XREF to: 0055b6de (CONDITIONAL_JUMP)  ; LAB_0055b6de
    POP ESI                             ; 0055b692
        ;   Label: LAB_0055b692
    CMP EBX,dword ptr [0x02cf49f0]      ; 0055b693 | DAT_02cf49f0
        ;   Label: LAB_0055b693
    JNZ 0x0055b6e2                      ; 0055b699
        ;   XREF to: 0055b6e2 (CONDITIONAL_JUMP)  ; LAB_0055b6e2
    MOV EAX,0x1                         ; 0055b69b
    ADD ESP,0x198                       ; 0055b6a0
    POP EBX                             ; 0055b6a6
    RET                                 ; 0055b6a7
    PUSH EAX                            ; 0055b6a8
        ;   Label: LAB_0055b6a8
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055b6a9
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055b6ae
    PUSH EAX                            ; 0055b6b1
    PUSH 0x5d46aa                       ; 0055b6b2 | = "Get position of secondary buffer"
    PUSH 0x5d452f                       ; 0055b6b7 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055b6bc
    PUSH EAX                            ; 0055b6c0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055b6c1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055b6c6
    MOV EAX,ESP                         ; 0055b6c9
    PUSH EAX                            ; 0055b6cb
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055b6cc
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055b6d1
    XOR EAX,EAX                         ; 0055b6d4
    ADD ESP,0x198                       ; 0055b6d6
    POP EBX                             ; 0055b6dc
    RET                                 ; 0055b6dd
    XOR EBX,EBX                         ; 0055b6de
        ;   Label: LAB_0055b6de
    JMP 0x0055b692                      ; 0055b6e0
        ;   XREF to: 0055b692 (UNCONDITIONAL_JUMP)  ; LAB_0055b692
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_0055a820 ; 0055b6e2
        ;   XREF to: 0055a820 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_0055a820()
        ;   Label: LAB_0055b6e2
    TEST EAX,EAX                        ; 0055b6e7
    JNZ 0x0055b693                      ; 0055b6e9
        ;   XREF to: 0055b693 (CONDITIONAL_JUMP)  ; LAB_0055b693
    ADD ESP,0x198                       ; 0055b6eb
    POP EBX                             ; 0055b6f1
    RET                                 ; 0055b6f2

