; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_updateAnimatedTexture_FUN_00406690(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined1       Stack[-0x1f]:1  local_1f
;
; Referenced Globals:
;   undefined4 DAT_01bd1d80
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406690
        ;   Label: engine_3d.c_updateAnimatedTexture_FUN_00406690
    PUSH ESI                            ; 00406691
    PUSH EDI                            ; 00406692
    PUSH EBP                            ; 00406693
    SUB ESP,0x18                        ; 00406694
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00406697
    MOV EAX,[0x01bd1d80]                ; 0040669b | DAT_01bd1d80
    MOV EDX,dword ptr [EBX + 0x14]      ; 004066a0
    ADD EDX,EAX                         ; 004066a3
    MOV ECX,dword ptr [EBX + 0x10]      ; 004066a5
    MOV EAX,EDX                         ; 004066a8
    MOV dword ptr [EBX + 0x14],EDX      ; 004066aa
    SAR EDX,0x1f                        ; 004066ad
    IDIV ECX                            ; 004066b0
    MOV EDX,EAX                         ; 004066b2
    MOV ESI,dword ptr [EBX + 0x8]       ; 004066b4
    SAR EDX,0x1f                        ; 004066b7
    IDIV ESI                            ; 004066ba
    CMP EDX,dword ptr [EBX + 0xc]       ; 004066bc
    JZ 0x004066cb                       ; 004066bf
        ;   XREF to: 004066cb (CONDITIONAL_JUMP)  ; LAB_004066cb
    MOV dword ptr [EBX + 0x18],0x1      ; 004066c1
    MOV dword ptr [EBX + 0xc],EDX       ; 004066c8
    XOR EBP,EBP                         ; 004066cb
        ;   Label: LAB_004066cb
    MOV dword ptr [ESP + 0x4],EBP       ; 004066cd
    MOV ESI,dword ptr [EBX + 0xc]       ; 004066d1
    LEA EAX,[EBX + 0x1c]                ; 004066d4
    SHL ESI,0x5                         ; 004066d7
    LEA EDI,[ESP + 0x8]                 ; 004066da
    ADD ESI,EAX                         ; 004066de
    PUSH EDI                            ; 004066e0
    MOV AL,byte ptr [ESI]               ; 004066e1
        ;   Label: LAB_004066e1
    MOV byte ptr [EDI],AL               ; 004066e3
    CMP AL,0x0                          ; 004066e5
    JZ 0x004066f9                       ; 004066e7
        ;   XREF to: 004066f9 (CONDITIONAL_JUMP)  ; LAB_004066f9
    MOV AL,byte ptr [ESI + 0x1]         ; 004066e9
    ADD ESI,0x2                         ; 004066ec
    MOV byte ptr [EDI + 0x1],AL         ; 004066ef
    ADD EDI,0x2                         ; 004066f2
    CMP AL,0x0                          ; 004066f5
    JNZ 0x004066e1                      ; 004066f7
        ;   XREF to: 004066e1 (CONDITIONAL_JUMP)  ; LAB_004066e1
    POP EDI                             ; 004066f9
        ;   Label: LAB_004066f9
    MOV EAX,ESP                         ; 004066fa
    PUSH EAX                            ; 004066fc
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 004066fd
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_ensureTextureLoaded_FUN_00545920()
    MOV EAX,dword ptr [EBX + 0x18]      ; 00406702
    ADD ESP,0x4                         ; 00406705
    TEST EAX,EAX                        ; 00406708
    JNZ 0x0040671f                      ; 0040670a
        ;   XREF to: 0040671f (CONDITIONAL_JUMP)  ; LAB_0040671f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040670c
    SHL EAX,0x5                         ; 0040670f
    ADD EAX,EBX                         ; 00406712
    ADD EAX,0x1c                        ; 00406714
    ADD ESP,0x18                        ; 00406717
    POP EBP                             ; 0040671a
    POP EDI                             ; 0040671b
    POP ESI                             ; 0040671c
    POP EBX                             ; 0040671d
    RET                                 ; 0040671e
    MOV dword ptr [EBX + 0x18],EBP      ; 0040671f
        ;   Label: LAB_0040671f
    MOV EAX,dword ptr [EBX + 0x8]       ; 00406722
    SHL EAX,0x5                         ; 00406725
    ADD EAX,EBX                         ; 00406728
    ADD EAX,0x1c                        ; 0040672a
    ADD ESP,0x18                        ; 0040672d
    POP EBP                             ; 00406730
    POP EDI                             ; 00406731
    POP ESI                             ; 00406732
    POP EBX                             ; 00406733
    RET                                 ; 00406734

