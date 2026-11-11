; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moon_cpp_CMoon_init_FUN_00521c50(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_menu.cpp_FUN_0050c990 at 0050cb86
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cd40
;
; Referenced Globals:
;   TerminatedCString s_taylor_head_kfm_005ea40b
;   TerminatedCString s_titletwana_kfm_005ea41b
;   TerminatedCString s_titletwanb_kfm_005ea42a
;   TerminatedCString s_titletwanc_kfm_005ea439
;   TerminatedCString s_menucld2_005ea448
;   TerminatedCString s_titlescreen_bw_005ea473
;   TerminatedCString s_blair_00000_005ea482
;   TerminatedCString s_blair_00001_005ea48e
;   CGame* g_CGamePtr = 01ccf390
;   void* PTR_s_titlescreen_bw_0061f830 = 005ea473
;   void* PTR_s_blair_00000_0061f834 = 005ea482
;   undefined1* PTR_s_blair_00001_0061f838 = 005ea48e
;   undefined4 g_CGameInstance.head_of_horror_cheat
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00521c50
        ;   Label: core_moon.cpp_CMoon_init_FUN_00521c50
    PUSH EBP                            ; 00521c51
    MOV EDI,dword ptr [ESP + 0xc]       ; 00521c52
    CMP dword ptr [EDI],0x0             ; 00521c56
    JNZ 0x00521d20                      ; 00521c59
        ;   XREF to: 00521d20 (CONDITIONAL_JUMP)  ; LAB_00521d20
    PUSH ESI                            ; 00521c5f
    PUSH EBX                            ; 00521c60
    MOV EBX,dword ptr [0x0061d95c]      ; 00521c61 | g_CGamePtr
    MOV ECX,dword ptr [EBX + 0x230]     ; 00521c67 | g_CGameInstance.head_of_horror_cheat
    LEA EAX,[EDI + 0x8]                 ; 00521c6d
    CMP ECX,0x29a                       ; 00521c70
    JZ 0x00521d23                       ; 00521c76
        ;   XREF to: 00521d23 (CONDITIONAL_JUMP)  ; LAB_00521d23
    PUSH 0x5ea41b                       ; 00521c7c | = "titletwana.kfm"
    PUSH EAX                            ; 00521c81
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 00521c82
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00521c87
    PUSH 0x5ea42a                       ; 00521c8a | = "titletwanb.kfm"
    LEA EAX,[EDI + 0x3a0]               ; 00521c8f
    PUSH EAX                            ; 00521c95
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 00521c96
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00521c9b
    PUSH 0x5ea439                       ; 00521c9e | = "titletwanc.kfm"
    LEA EAX,[EDI + 0x738]               ; 00521ca3
    PUSH EAX                            ; 00521ca9
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 00521caa
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00521caf
    PUSH 0x100                          ; 00521cb2
        ;   Label: LAB_00521cb2
    PUSH 0x100                          ; 00521cb7
    PUSH 0x5ea448                       ; 00521cbc | = "menucld2"
    PUSH 0x1d33ce4                      ; 00521cc1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00521cc6
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00521ccb
    PUSH 0x1e0                          ; 00521cce
    PUSH 0x280                          ; 00521cd3
    MOV EBX,dword ptr [0x0061f830]      ; 00521cd8 | PTR_s_titlescreen_bw_0061f830
    PUSH EBX                            ; 00521cde | = "titlescreen_bw"
    PUSH 0x1d33f50                      ; 00521cdf
    MOV ESI,0x1d33cf8                   ; 00521ce4
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00521ce9
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    XOR EBX,EBX                         ; 00521cee
    ADD ESP,0x10                        ; 00521cf0
    PUSH 0xa5                           ; 00521cf3
        ;   Label: LAB_00521cf3
    PUSH 0x280                          ; 00521cf8
    MOV EBP,dword ptr [EBX + 0x61f834]  ; 00521cfd | PTR_s_blair_00000_0061f834 | PTR_s_blair_00001_0061f838
    PUSH EBP                            ; 00521d03 | = "blair_00000" | s_blair_00001_005ea48e
    PUSH ESI                            ; 00521d04
    ADD EBX,0x4                         ; 00521d05
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 00521d08
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00521d0d
    ADD ESI,0x14                        ; 00521d10
    CMP EBX,0x78                        ; 00521d13
    JNZ 0x00521cf3                      ; 00521d16
        ;   XREF to: 00521cf3 (CONDITIONAL_JUMP)  ; LAB_00521cf3
    MOV dword ptr [EDI],0x1             ; 00521d18
    POP EBX                             ; 00521d1e
    POP ESI                             ; 00521d1f
    POP EBP                             ; 00521d20
        ;   Label: LAB_00521d20
    POP EDI                             ; 00521d21
    RET                                 ; 00521d22
    PUSH 0x5ea40b                       ; 00521d23 | = "taylor_head.kfm"
        ;   Label: LAB_00521d23
    PUSH EAX                            ; 00521d28
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 ; 00521d29
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0(CKeyFramedModel * this_ptr, char * filename)
    MOV EAX,[0x0061d95c]                ; 00521d2e | g_CGamePtr
    ADD ESP,0x8                         ; 00521d33
    MOV dword ptr [EAX + 0x230],0x0     ; 00521d36 | g_CGameInstance.head_of_horror_cheat
    JMP 0x00521cb2                      ; 00521d40
        ;   XREF to: 00521cb2 (UNCONDITIONAL_JUMP)  ; LAB_00521cb2

