; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_0052e9d0(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 0050353d
;   core_script.cpp_FUN_004feff0 at 004ff123
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dc9c68
;   undefined4 DAT_02dc9c69
;   undefined4 DAT_02dc9c6a
;   undefined4 DAT_02dc9c6b
;   undefined4 DAT_02dc9c90
;   undefined4 DAT_02dc9c94
;
; Called Functions:
;   core_sound.cpp_CSound_killSound_FUN_0052ebb0
;   core_sound.cpp_CSound_playSound_FUN_0052ea40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052e9d0
        ;   Label: core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0
    PUSH EDI                            ; 0052e9d1
    MOV EDX,dword ptr [0x02dc9c90]      ; 0052e9d2 | DAT_02dc9c90
    PUSH EDX                            ; 0052e9d8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0052e9d9
    PUSH ECX                            ; 0052e9dd
    CALL core_sound.cpp_CSound_killSound_FUN_0052ebb0 ; 0052e9de
        ;   XREF to: 0052ebb0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_killSound_FUN_0052ebb0()
    ADD ESP,0x8                         ; 0052e9e3
    MOV EDI,0x2dc9c68                   ; 0052e9e6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052e9eb
    PUSH EDI                            ; 0052e9ef
    MOV AL,byte ptr [ESI]               ; 0052e9f0
        ;   Label: LAB_0052e9f0
    MOV byte ptr [EDI],AL               ; 0052e9f2 | DAT_02dc9c68 | DAT_02dc9c6a
    CMP AL,0x0                          ; 0052e9f4
    JZ 0x0052ea08                       ; 0052e9f6
        ;   XREF to: 0052ea08 (CONDITIONAL_JUMP)  ; LAB_0052ea08
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e9f8
    ADD ESI,0x2                         ; 0052e9fb
    MOV byte ptr [EDI + 0x1],AL         ; 0052e9fe | DAT_02dc9c69 | DAT_02dc9c6b
    ADD EDI,0x2                         ; 0052ea01
    CMP AL,0x0                          ; 0052ea04
    JNZ 0x0052e9f0                      ; 0052ea06
        ;   XREF to: 0052e9f0 (CONDITIONAL_JUMP)  ; LAB_0052e9f0
    POP EDI                             ; 0052ea08
        ;   Label: LAB_0052ea08
    CMP dword ptr [0x02dc9c94],0x0      ; 0052ea09 | DAT_02dc9c94
    JNZ 0x0052ea15                      ; 0052ea10
        ;   XREF to: 0052ea15 (CONDITIONAL_JUMP)  ; LAB_0052ea15
    POP EDI                             ; 0052ea12
    POP ESI                             ; 0052ea13
    RET                                 ; 0052ea14
    PUSH EDI                            ; 0052ea15 | DAT_02dc9c68
        ;   Label: LAB_0052ea15
    MOV ESI,dword ptr [0x005be368]      ; 0052ea16 | DAT_005be368
    PUSH ESI                            ; 0052ea1c | DAT_01e57284
    MOV EDI,dword ptr [ESP + 0x14]      ; 0052ea1d
    PUSH EDI                            ; 0052ea21
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 0052ea22
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playSound_FUN_0052ea40()
    ADD ESP,0xc                         ; 0052ea27
    MOV [0x02dc9c90],EAX                ; 0052ea2a | DAT_02dc9c90
    POP EDI                             ; 0052ea2f
    POP ESI                             ; 0052ea30
    RET                                 ; 0052ea31

