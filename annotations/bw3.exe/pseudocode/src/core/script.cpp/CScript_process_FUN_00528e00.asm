; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_process_FUN_00528e00(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf5a2
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005cdda3
;   TerminatedCString s_WARNING_Infinite_loop_de_005cdde0
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field184_0xe8
;   undefined4 DAT_01ed6808
;   undefined4 DAT_01ed6810
;   undefined4 DAT_01ed7014
;   undefined4 DAT_01ed7018
;
; Called Functions:
;   core_charactr.cpp_FUN_00434b00
;   core_game.cpp_FUN_004ba490
;   core_script.cpp_CScript_step_FUN_00529a70
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528e00
        ;   Label: core_script.cpp_CScript_process_FUN_00528e00
    PUSH ESI                            ; 00528e01
    PUSH EDI                            ; 00528e02
    PUSH EBP                            ; 00528e03
    MOV EBP,ESP                         ; 00528e04
    SUB ESP,0x8                         ; 00528e06
    AND ESP,0xfffffff8                  ; 00528e09
    MOV EBX,dword ptr [EBP + 0x14]      ; 00528e0c
    XOR EDX,EDX                         ; 00528e0f
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00528e11
    MOV dword ptr [0x01ed6808],EDX      ; 00528e14 | DAT_01ed6808
    CMP ECX,0x1                         ; 00528e1a
    JL 0x00528e9e                       ; 00528e1d
        ;   XREF to: 00528e9e (CONDITIONAL_JUMP)  ; LAB_00528e9e
    CMP dword ptr [EBX + 0x30],0x0      ; 00528e23
    JZ 0x00528e9e                       ; 00528e27
        ;   XREF to: 00528e9e (CONDITIONAL_JUMP)  ; LAB_00528e9e
    MOV EAX,[0x005fe9dc]                ; 00528e2d | g_CGamePtr
    CMP dword ptr [EAX + 0xe8],0x0      ; 00528e32 | g_CGameInstance.field184_0xe8
    JZ 0x00528e3e                       ; 00528e39
        ;   XREF to: 00528e3e (CONDITIONAL_JUMP)  ; LAB_00528e3e
    MOV dword ptr [EBX + 0x1c],EDX      ; 00528e3b
    MOV EAX,[0x005fe9dc]                ; 00528e3e | g_CGamePtr
        ;   Label: LAB_00528e3e
    PUSH EAX                            ; 00528e43
    XOR ESI,ESI                         ; 00528e44
    CALL core_charactr.cpp_FUN_00434b00 ; 00528e46
        ;   XREF to: 00434b00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434b00()
    MOV dword ptr [ESP + 0x8],EAX       ; 00528e4b
    XOR EDX,EDX                         ; 00528e4f
    FLD float ptr [ESP + 0x8]           ; 00528e51
    ADD ESP,0x4                         ; 00528e55
    MOV dword ptr [0x01ed7014],EDX      ; 00528e58 | DAT_01ed7014
    FSTP float ptr [ESP]                ; 00528e5e
    FLD float ptr [ESP]                 ; 00528e61
        ;   Label: LAB_00528e61
    FLDZ                                ; 00528e64
    FCOMPP                              ; 00528e66
    FNSTSW AX                           ; 00528e68
    SAHF                                ; 00528e6a
    JNC 0x00528e73                      ; 00528e6b
        ;   XREF to: 00528e73 (CONDITIONAL_JUMP)  ; LAB_00528e73
    CMP dword ptr [EBX + 0x1c],0x2      ; 00528e6d
    JNZ 0x00528ea5                      ; 00528e71
        ;   XREF to: 00528ea5 (CONDITIONAL_JUMP)  ; LAB_00528ea5
    CMP dword ptr [0x01ed7014],0x0      ; 00528e73 | DAT_01ed7014
        ;   Label: LAB_00528e73
    JZ 0x00528e93                       ; 00528e7a
        ;   XREF to: 00528e93 (CONDITIONAL_JUMP)  ; LAB_00528e93
    MOV EDX,dword ptr [0x005fe9dc]      ; 00528e7c | g_CGamePtr
    PUSH EDX                            ; 00528e82
    CALL core_game.cpp_FUN_004ba490     ; 00528e83
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004ba490()
    XOR ECX,ECX                         ; 00528e88
    ADD ESP,0x4                         ; 00528e8a
    MOV dword ptr [0x01ed7014],ECX      ; 00528e8d | DAT_01ed7014
    MOV ESI,dword ptr [EBX + 0x4]       ; 00528e93
        ;   Label: LAB_00528e93
    TEST ESI,ESI                        ; 00528e96
    JNZ 0x00528f2f                      ; 00528e98
        ;   XREF to: 00528f2f (CONDITIONAL_JUMP)  ; LAB_00528f2f
    MOV ESP,EBP                         ; 00528e9e
        ;   Label: LAB_00528e9e
    POP EBP                             ; 00528ea0
    POP EDI                             ; 00528ea1
    POP ESI                             ; 00528ea2
    POP EBX                             ; 00528ea3
    RET                                 ; 00528ea4
    CMP dword ptr [EBX],0x0             ; 00528ea5
        ;   Label: LAB_00528ea5
    JNZ 0x00528e73                      ; 00528ea8
        ;   XREF to: 00528e73 (CONDITIONAL_JUMP)  ; LAB_00528e73
    MOV EAX,ESP                         ; 00528eaa
    PUSH EAX                            ; 00528eac
    PUSH EBX                            ; 00528ead
    MOV EDI,dword ptr [EBX + 0x44]      ; 00528eae
    CALL core_script.cpp_CScript_step_FUN_00529a70 ; 00528eb1
        ;   XREF to: 00529a70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00529a70(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00528eb6
    TEST EAX,EAX                        ; 00528eb9
    JZ 0x00528e73                       ; 00528ebb
        ;   XREF to: 00528e73 (CONDITIONAL_JUMP)  ; LAB_00528e73
    JL 0x00528f09                       ; 00528ebd
        ;   XREF to: 00528f09 (CONDITIONAL_JUMP)  ; LAB_00528f09
    CMP dword ptr [EBX + 0x1c],0x1      ; 00528ebf
    JNZ 0x00528ecc                      ; 00528ec3
        ;   XREF to: 00528ecc (CONDITIONAL_JUMP)  ; LAB_00528ecc
    MOV dword ptr [EBX + 0x1c],0x2      ; 00528ec5
        ;   Label: LAB_00528ec5
    INC ESI                             ; 00528ecc
        ;   Label: LAB_00528ecc
    CMP ESI,0x60e                       ; 00528ecd
    JLE 0x00528e61                      ; 00528ed3
        ;   XREF to: 00528e61 (CONDITIONAL_JUMP)  ; LAB_00528e61
    CMP dword ptr [0x01ed7018],0x0      ; 00528ed5 | DAT_01ed7018
    JNZ 0x00528e73                      ; 00528edc
        ;   XREF to: 00528e73 (CONDITIONAL_JUMP)  ; LAB_00528e73
    MOV EAX,dword ptr [EBX + 0x30]      ; 00528ede
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00528ee1
    PUSH ECX                            ; 00528ee4
    PUSH 0x5cdde0                       ; 00528ee5 | = "!WARNING!  Infinite loop detected in ..."
    MOV ESI,dword ptr [0x005fb140]      ; 00528eea | g_CEditorToolsPtr
    PUSH ESI                            ; 00528ef0
    MOV EDI,0x1                         ; 00528ef1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00528ef6
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00528efb
    MOV dword ptr [0x01ed7018],EDI      ; 00528efe | DAT_01ed7018
    JMP 0x00528e73                      ; 00528f04
        ;   XREF to: 00528e73 (UNCONDITIONAL_JUMP)  ; LAB_00528e73
    MOV EAX,dword ptr [EBX + 0x30]      ; 00528f09
        ;   Label: LAB_00528f09
    PUSH 0x1ed6810                      ; 00528f0c | DAT_01ed6810
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00528f11
    PUSH EDX                            ; 00528f15
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00528f16
    PUSH ECX                            ; 00528f19
    PUSH 0x5cdda3                       ; 00528f1a | = "Error processing script.\nLine: %d\nT..."
    MOV EAX,[0x005fb140]                ; 00528f1f | g_CEditorToolsPtr
    PUSH EAX                            ; 00528f24
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 00528f25
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00528f2a
    JMP 0x00528ec5                      ; 00528f2d
        ;   XREF to: 00528ec5 (UNCONDITIONAL_JUMP)  ; LAB_00528ec5
    PUSH ESI                            ; 00528f2f
        ;   Label: LAB_00528f2f
    MOV EDX,dword ptr [ESI + 0x154]     ; 00528f30
    CALL dword ptr [EDX + 0x10c]        ; 00528f36
    ADD ESP,0x4                         ; 00528f3c
    TEST EAX,EAX                        ; 00528f3f
    JLE 0x00528e9e                      ; 00528f41
        ;   XREF to: 00528e9e (CONDITIONAL_JUMP)  ; LAB_00528e9e
    MOV EDI,dword ptr [EBX + 0x28]      ; 00528f47
    PUSH EDI                            ; 00528f4a
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00528f4b
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00528f50
    MOV ESP,EBP                         ; 00528f53
    POP EBP                             ; 00528f55
    POP EDI                             ; 00528f56
    POP ESI                             ; 00528f57
    POP EBX                             ; 00528f58
    RET                                 ; 00528f59

