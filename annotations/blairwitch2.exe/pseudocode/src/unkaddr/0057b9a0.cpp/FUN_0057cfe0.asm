; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_0057b9a0_cpp_FUN_0057cfe0(int param_1,undefined4 *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c5a2
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c850
;   engine_2d.c_FUN_00401590 at 004015c8
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 004010ed
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a9f
;   engine_font.cpp_FUN_004a7fe2 at 004a816e
;   engine_texture.cpp_CTextureCache_loadTexture_FUN_00573b80 at 00573e8f
;   engine_texture.cpp_FUN_0057514e at 00575274
;   sound_sndmain.cpp_FUN_0054c1c0 at 0054c517
;   sound_sndmain.cpp_FUN_0054ddf0 at 0054e324
;
; Called Functions:
;   support_trstream.cpp_FUN_0057d280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057cfe0
        ;   Label: unkaddr_0057b9a0.cpp_FUN_0057cfe0
    PUSH ESI                            ; 0057cfe1
    PUSH EDI                            ; 0057cfe2
    PUSH EBP                            ; 0057cfe3
    SUB ESP,0x8                         ; 0057cfe4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0057cfe7
    MOV EBP,dword ptr [ESP + 0x24]      ; 0057cfeb
    CMP dword ptr [EBX + 0x4],0x0       ; 0057cfef
    JZ 0x0057d0a5                       ; 0057cff3
        ;   XREF to: 0057d0a5 (CONDITIONAL_JUMP)  ; LAB_0057d0a5
    MOV ECX,dword ptr [EBX + 0x8]       ; 0057cff9
    CMP ECX,dword ptr [EBX + 0x10]      ; 0057cffc
    JLE 0x0057d0b2                      ; 0057cfff
        ;   XREF to: 0057d0b2 (CONDITIONAL_JUMP)  ; LAB_0057d0b2
    MOV EAX,ECX                         ; 0057d005
    SUB EAX,dword ptr [EBX + 0x10]      ; 0057d007
    CMP EBP,EAX                         ; 0057d00a
    JLE 0x0057d010                      ; 0057d00c
        ;   XREF to: 0057d010 (CONDITIONAL_JUMP)  ; LAB_0057d010
    MOV EBP,EAX                         ; 0057d00e
    XOR EDI,EDI                         ; 0057d010
        ;   Label: LAB_0057d010
    MOV EAX,dword ptr [ESP + 0x20]      ; 0057d012
    MOV dword ptr [ESP],EDI             ; 0057d016
    MOV dword ptr [ESP + 0x4],EAX       ; 0057d019
    TEST EBP,EBP                        ; 0057d01d
    JLE 0x0057d09a                      ; 0057d01f
        ;   XREF to: 0057d09a (CONDITIONAL_JUMP)  ; LAB_0057d09a
    MOV ESI,dword ptr [EBX + 0x10]      ; 0057d025
        ;   Label: LAB_0057d025
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0057d028
    CMP EAX,ESI                         ; 0057d02b
    JG 0x0057d039                       ; 0057d02d
        ;   XREF to: 0057d039 (CONDITIONAL_JUMP)  ; LAB_0057d039
    MOV EDI,dword ptr [EBX + 0x24]      ; 0057d02f
    LEA EDX,[EAX + EDI*0x1]             ; 0057d032
    CMP EDX,ESI                         ; 0057d035
    JG 0x0057d046                       ; 0057d037
        ;   XREF to: 0057d046 (CONDITIONAL_JUMP)  ; LAB_0057d046
    PUSH EBX                            ; 0057d039
        ;   Label: LAB_0057d039
    CALL support_trstream.cpp_FUN_0057d280 ; 0057d03a
        ;   XREF to: 0057d280 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d280()
    ADD ESP,0x4                         ; 0057d03f
    TEST EAX,EAX                        ; 0057d042
    JZ 0x0057d0a5                       ; 0057d044
        ;   XREF to: 0057d0a5 (CONDITIONAL_JUMP)  ; LAB_0057d0a5
    MOV ECX,dword ptr [EBX + 0x24]      ; 0057d046
        ;   Label: LAB_0057d046
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0057d049
    MOV ESI,dword ptr [EBX + 0x10]      ; 0057d04c
    ADD EDX,ECX                         ; 0057d04f
    SUB EDX,ESI                         ; 0057d051
    CMP EDX,EBP                         ; 0057d053
    JLE 0x0057d059                      ; 0057d055
        ;   XREF to: 0057d059 (CONDITIONAL_JUMP)  ; LAB_0057d059
    MOV EDX,EBP                         ; 0057d057
    MOV EAX,dword ptr [EBX + 0x18]      ; 0057d059
        ;   Label: LAB_0057d059
    MOV ECX,dword ptr [EBX + 0x10]      ; 0057d05c
    MOV ESI,dword ptr [EBX + 0x1c]      ; 0057d05f
    ADD EAX,ECX                         ; 0057d062
    MOV EDI,dword ptr [ESP + 0x4]       ; 0057d064
    SUB EAX,ESI                         ; 0057d068
    MOV ECX,EDX                         ; 0057d06a
    MOV ESI,EAX                         ; 0057d06c
    SUB EBP,EDX                         ; 0057d06e
    PUSH EDI                            ; 0057d070
    MOV EAX,ECX                         ; 0057d071
    SHR ECX,0x2                         ; 0057d073
    MOVSD.REP ES:EDI,ESI                ; 0057d076
    MOV CL,AL                           ; 0057d078
    AND CL,0x3                          ; 0057d07a
    MOVSB.REP ES:EDI,ESI                ; 0057d07d
    POP EDI                             ; 0057d07f
    MOV ECX,dword ptr [ESP]             ; 0057d080
    ADD EDI,EDX                         ; 0057d083
    MOV EAX,dword ptr [EBX + 0x10]      ; 0057d085
    MOV dword ptr [ESP + 0x4],EDI       ; 0057d088
    ADD ECX,EDX                         ; 0057d08c
    ADD EAX,EDX                         ; 0057d08e
    MOV dword ptr [ESP],ECX             ; 0057d090
    MOV dword ptr [EBX + 0x10],EAX      ; 0057d093
    TEST EBP,EBP                        ; 0057d096
    JG 0x0057d025                       ; 0057d098
        ;   XREF to: 0057d025 (CONDITIONAL_JUMP)  ; LAB_0057d025
    MOV EAX,dword ptr [ESP]             ; 0057d09a
        ;   Label: LAB_0057d09a
    ADD ESP,0x8                         ; 0057d09d
    POP EBP                             ; 0057d0a0
    POP EDI                             ; 0057d0a1
    POP ESI                             ; 0057d0a2
    POP EBX                             ; 0057d0a3
    RET                                 ; 0057d0a4
    MOV EAX,0xfffffffe                  ; 0057d0a5
        ;   Label: LAB_0057d0a5
    ADD ESP,0x8                         ; 0057d0aa
    POP EBP                             ; 0057d0ad
    POP EDI                             ; 0057d0ae
    POP ESI                             ; 0057d0af
    POP EBX                             ; 0057d0b0
    RET                                 ; 0057d0b1
    MOV EAX,0xffffffff                  ; 0057d0b2
        ;   Label: LAB_0057d0b2
    ADD ESP,0x8                         ; 0057d0b7
    POP EBP                             ; 0057d0ba
    POP EDI                             ; 0057d0bb
    POP ESI                             ; 0057d0bc
    POP EBX                             ; 0057d0bd
    RET                                 ; 0057d0be

