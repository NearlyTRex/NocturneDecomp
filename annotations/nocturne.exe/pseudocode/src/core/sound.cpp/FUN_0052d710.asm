; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0052d710(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01fb1afc
;   undefined4 DAT_01fb1b00
;   undefined4 DAT_01fb1b04
;   undefined4 DAT_02dc9d44
;   undefined4 DAT_02dc9d48
;   undefined4 DAT_02dc9d4c
;   undefined4 DAT_02dc9d54
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0052d710
        ;   Label: core_sound.cpp_FUN_0052d710
    MOV EAX,[0x005be368]                ; 0052d713 | DAT_005be368
    FLD float ptr [EAX + 0x15a878]      ; 0052d718 | DAT_01fb1afc
    FCHS                                ; 0052d71e
    FSTP float ptr [ESP]                ; 0052d720
    FLD float ptr [EAX + 0x15a87c]      ; 0052d723 | DAT_01fb1b00
    FCHS                                ; 0052d729
    FSTP float ptr [ESP + 0x4]          ; 0052d72b
    FLD float ptr [EAX + 0x15a880]      ; 0052d72f | DAT_01fb1b04
    FCHS                                ; 0052d735
    MOV EAX,ESP                         ; 0052d737
    FSTP float ptr [ESP + 0x8]          ; 0052d739
    CMP EAX,0x2dc9d44                   ; 0052d73d
    JNZ 0x0052d752                      ; 0052d742
        ;   XREF to: 0052d752 (CONDITIONAL_JUMP)  ; LAB_0052d752
    MOV dword ptr [0x02dc9d54],0xffffffff ; 0052d744 | DAT_02dc9d54
    ADD ESP,0xc                         ; 0052d74e
    RET                                 ; 0052d751
    MOV EAX,dword ptr [ESP]             ; 0052d752
        ;   Label: LAB_0052d752
    MOV [0x02dc9d44],EAX                ; 0052d755 | DAT_02dc9d44
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052d75a
    MOV [0x02dc9d48],EAX                ; 0052d75e | DAT_02dc9d48
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052d763
    MOV [0x02dc9d4c],EAX                ; 0052d767 | DAT_02dc9d4c
    MOV dword ptr [0x02dc9d54],0xffffffff ; 0052d76c | DAT_02dc9d54
    ADD ESP,0xc                         ; 0052d776
    RET                                 ; 0052d779

