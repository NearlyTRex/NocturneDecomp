; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0052dcc0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02dc9d58
;   undefined4 DAT_02dc9d5c
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dcc0
        ;   Label: core_sound.cpp_FUN_0052dcc0
    XOR EBX,EBX                         ; 0052dcc1
    MOV EDX,dword ptr [EBX + 0x2dc9cb0] ; 0052dcc3
        ;   Label: LAB_0052dcc3
    PUSH EDX                            ; 0052dcc9
    ADD EBX,0x10                        ; 0052dcca
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dccd
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0052dcd2
    CMP EBX,0xa0                        ; 0052dcd5
    JNZ 0x0052dcc3                      ; 0052dcdb
        ;   XREF to: 0052dcc3 (CONDITIONAL_JUMP)  ; LAB_0052dcc3
    MOV ECX,dword ptr [0x02dc9d58]      ; 0052dcdd | DAT_02dc9d58
    PUSH ECX                            ; 0052dce3
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dce4
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0052dce9
    MOV EBX,dword ptr [0x02dc9d5c]      ; 0052dcec | DAT_02dc9d5c
    PUSH EBX                            ; 0052dcf2
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052dcf3
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0052dcf8
    POP EBX                             ; 0052dcfb
    RET                                 ; 0052dcfc

