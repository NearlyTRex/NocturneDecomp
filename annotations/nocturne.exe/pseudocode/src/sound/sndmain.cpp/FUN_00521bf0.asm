; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00521bf0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005922b0
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005922c5
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dbd3e4
;   undefined4 DAT_02dbd504
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00521bf0
        ;   Label: sound_sndmain.cpp_FUN_00521bf0
    CMP dword ptr [0x02dc84bc],0x0      ; 00521bf1 | DAT_02dc84bc
    JLE 0x00521c22                      ; 00521bf8
        ;   XREF to: 00521c22 (CONDITIONAL_JUMP)  ; LAB_00521c22
    MOV ESI,dword ptr [0x02dbd3e4]      ; 00521bfa | DAT_02dbd3e4
        ;   Label: LAB_00521bfa
    XOR EAX,EAX                         ; 00521c00
    XOR EDX,EDX                         ; 00521c02
    TEST ESI,ESI                        ; 00521c04
    JZ 0x00521c1e                       ; 00521c06
        ;   XREF to: 00521c1e (CONDITIONAL_JUMP)  ; LAB_00521c1e
    ADD EAX,0x120                       ; 00521c08
        ;   Label: LAB_00521c08
    INC EDX                             ; 00521c0d
    CMP EAX,0x4800                      ; 00521c0e
    JGE 0x00521c49                      ; 00521c13
        ;   XREF to: 00521c49 (CONDITIONAL_JUMP)  ; LAB_00521c49
    CMP dword ptr [EAX + 0x2dbd3e4],0x0 ; 00521c15 | DAT_02dbd504
    JNZ 0x00521c08                      ; 00521c1c
        ;   XREF to: 00521c08 (CONDITIONAL_JUMP)  ; LAB_00521c08
    MOV EAX,EDX                         ; 00521c1e
        ;   Label: LAB_00521c1e
    POP ESI                             ; 00521c20
    RET                                 ; 00521c21
    PUSH EBX                            ; 00521c22
        ;   Label: LAB_00521c22
    MOV ECX,0x5922b0                    ; 00521c23 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x1f6                       ; 00521c28
    PUSH 0x5922c5                       ; 00521c2d | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 00521c32 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00521c38 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00521c3e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00521c43
    POP EBX                             ; 00521c46
    JMP 0x00521bfa                      ; 00521c47
        ;   XREF to: 00521bfa (UNCONDITIONAL_JUMP)  ; LAB_00521bfa
    MOV EAX,0xffffffff                  ; 00521c49
        ;   Label: LAB_00521c49
    POP ESI                             ; 00521c4e
    RET                                 ; 00521c4f

