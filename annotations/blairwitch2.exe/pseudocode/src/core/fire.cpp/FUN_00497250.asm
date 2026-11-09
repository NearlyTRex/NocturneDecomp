; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00497250(int param_1)
;
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a370
;   undefined4 g_CGameInstance.field644_0x284
;
; Called Functions:
;   core_particle.cpp_FUN_00510ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497250
        ;   Label: core_fire.cpp_FUN_00497250
    SUB ESP,0x4                         ; 00497251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00497254
    MOV EAX,[0x00616494]                ; 00497258 | g_CGamePtr
    FLD float ptr [EBX + 0x5c]          ; 0049725d
    MOV EAX,dword ptr [EAX + 0x284]     ; 00497260 | g_CGameInstance.field644_0x284
    FLD float ptr [EBX + 0x60]          ; 00497266
    MOV dword ptr [ESP],EAX             ; 00497269
    PUSH EBX                            ; 0049726c
    FXCH                                ; 0049726d
    FADD float ptr [ESP + 0x4]          ; 0049726f
    FXCH                                ; 00497273
    FADD float ptr [ESP + 0x4]          ; 00497275
    FXCH                                ; 00497279
    FSTP float ptr [EBX + 0x5c]         ; 0049727b
    FSTP float ptr [EBX + 0x60]         ; 0049727e
    CALL core_particle.cpp_FUN_00510ef0 ; 00497281
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00510ef0()
    MOV EAX,[0x01c2a370]                ; 00497286 | DAT_01c2a370
    MOV EDX,EAX                         ; 0049728b
    MOV ECX,0x6                         ; 0049728d
    SAR EDX,0x1f                        ; 00497292
    IDIV ECX                            ; 00497295
    MOV EDX,dword ptr [EBX + 0x40]      ; 00497297
    SUB EDX,EAX                         ; 0049729a
    ADD ESP,0x4                         ; 0049729c
    MOV dword ptr [EBX + 0x40],EDX      ; 0049729f
    TEST EDX,EDX                        ; 004972a2
    JL 0x004972ab                       ; 004972a4
        ;   XREF to: 004972ab (CONDITIONAL_JUMP)  ; LAB_004972ab
    ADD ESP,0x4                         ; 004972a6
    POP EBX                             ; 004972a9
    RET                                 ; 004972aa
    MOV dword ptr [EBX + 0x40],0x0      ; 004972ab
        ;   Label: LAB_004972ab
    MOV dword ptr [EBX + 0x24],0x0      ; 004972b2
    ADD ESP,0x4                         ; 004972b9
    POP EBX                             ; 004972bc
    RET                                 ; 004972bd

