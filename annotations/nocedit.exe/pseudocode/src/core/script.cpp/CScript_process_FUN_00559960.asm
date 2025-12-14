; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_script.cpp_CScript_process_FUN_00559960(CScript * this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004e3190 at 004e3282
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script__00641720
;   TerminatedCString s_WARNING_Infinite_loop_de_0064175d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CEditorTools g_CEditorToolsPtr
;   CGame g_CGameInstance
;   undefined4 DAT_02d81b68
;   undefined4 DAT_0310ec9c
;   undefined1 DAT_0310eca0
;   undefined4 DAT_0310f4a4
;   undefined4 DAT_0310f4a8
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f9e0
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_script.cpp_CScript_step_FUN_0055a810
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559960
        ;   Label: core_script.cpp_CScript_process_FUN_00559960
    PUSH ESI                            ; 00559961
    PUSH EDI                            ; 00559962
    PUSH EBP                            ; 00559963
    MOV EBP,ESP                         ; 00559964
    SUB ESP,0x8                         ; 00559966
    AND ESP,0xfffffff8                  ; 00559969
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055996c
    XOR EDX,EDX                         ; 0055996f
    MOV ECX,dword ptr [EBX + 0x30]      ; 00559971
    MOV dword ptr [0x0310ec9c],EDX      ; 00559974 | DAT_0310ec9c
    CMP ECX,0x1                         ; 0055997a
    JL 0x005599fe                       ; 0055997d
        ;   XREF to: 005599fe (CONDITIONAL_JUMP)  ; LAB_005599fe
    CMP dword ptr [EBX + 0x34],0x0      ; 00559983
    JZ 0x005599fe                       ; 00559987
        ;   XREF to: 005599fe (CONDITIONAL_JUMP)  ; LAB_005599fe
    MOV EAX,[0x0067b654]                ; 0055998d | g_CGamePtr
    CMP dword ptr [EAX + 0xcc],0x0      ; 00559992 | DAT_02d81b68
    JZ 0x0055999e                       ; 00559999
        ;   XREF to: 0055999e (CONDITIONAL_JUMP)  ; LAB_0055999e
    MOV dword ptr [EBX + 0x18],EDX      ; 0055999b
    MOV EAX,[0x0067b654]                ; 0055999e | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_0055999e
    PUSH EAX                            ; 005599a3 | g_CGameInstance
    XOR ESI,ESI                         ; 005599a4
    CALL core_charactr.cpp_CCharacter_FUN_0042f9e0 ; 005599a6
        ;   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042f9e0(CCharacter * this_ptr)
    MOV dword ptr [ESP + 0x8],EAX       ; 005599ab
    XOR EDX,EDX                         ; 005599af
    FLD float ptr [ESP + 0x8]           ; 005599b1
    ADD ESP,0x4                         ; 005599b5
    MOV dword ptr [0x0310f4a4],EDX      ; 005599b8 | DAT_0310f4a4
    FSTP float ptr [ESP]                ; 005599be
    FLD float ptr [ESP]                 ; 005599c1
        ;   Label: LAB_005599c1
    FLDZ                                ; 005599c4
    FCOMPP                              ; 005599c6
    FNSTSW AX                           ; 005599c8
    SAHF                                ; 005599ca
    JNC 0x005599d3                      ; 005599cb
        ;   XREF to: 005599d3 (CONDITIONAL_JUMP)  ; LAB_005599d3
    CMP dword ptr [EBX + 0x18],0x2      ; 005599cd
    JNZ 0x00559a05                      ; 005599d1
        ;   XREF to: 00559a05 (CONDITIONAL_JUMP)  ; LAB_00559a05
    CMP dword ptr [0x0310f4a4],0x0      ; 005599d3 | DAT_0310f4a4
        ;   Label: LAB_005599d3
    JZ 0x005599f3                       ; 005599da
        ;   XREF to: 005599f3 (CONDITIONAL_JUMP)  ; LAB_005599f3
    MOV EDX,dword ptr [0x0067b654]      ; 005599dc | g_CGameInstance | g_CGamePtr
    PUSH EDX                            ; 005599e2 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 005599e3
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    XOR ECX,ECX                         ; 005599e8
    ADD ESP,0x4                         ; 005599ea
    MOV dword ptr [0x0310f4a4],ECX      ; 005599ed | DAT_0310f4a4
    MOV ESI,dword ptr [EBX + 0x4]       ; 005599f3
        ;   Label: LAB_005599f3
    TEST ESI,ESI                        ; 005599f6
    JNZ 0x00559a8f                      ; 005599f8
        ;   XREF to: 00559a8f (CONDITIONAL_JUMP)  ; LAB_00559a8f
    MOV ESP,EBP                         ; 005599fe
        ;   Label: LAB_005599fe
    POP EBP                             ; 00559a00
    POP EDI                             ; 00559a01
    POP ESI                             ; 00559a02
    POP EBX                             ; 00559a03
    RET                                 ; 00559a04
    CMP dword ptr [EBX],0x0             ; 00559a05
        ;   Label: LAB_00559a05
    JNZ 0x005599d3                      ; 00559a08
        ;   XREF to: 005599d3 (CONDITIONAL_JUMP)  ; LAB_005599d3
    MOV EAX,ESP                         ; 00559a0a
    PUSH EAX                            ; 00559a0c
    PUSH EBX                            ; 00559a0d
    MOV EDI,dword ptr [EBX + 0x48]      ; 00559a0e
    CALL core_script.cpp_CScript_step_FUN_0055a810 ; 00559a11
        ;   XREF to: 0055a810 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_step_FUN_0055a810()
    ADD ESP,0x8                         ; 00559a16
    TEST EAX,EAX                        ; 00559a19
    JZ 0x005599d3                       ; 00559a1b
        ;   XREF to: 005599d3 (CONDITIONAL_JUMP)  ; LAB_005599d3
    JL 0x00559a69                       ; 00559a1d
        ;   XREF to: 00559a69 (CONDITIONAL_JUMP)  ; LAB_00559a69
    CMP dword ptr [EBX + 0x18],0x1      ; 00559a1f
    JNZ 0x00559a2c                      ; 00559a23
        ;   XREF to: 00559a2c (CONDITIONAL_JUMP)  ; LAB_00559a2c
    MOV dword ptr [EBX + 0x18],0x2      ; 00559a25
        ;   Label: LAB_00559a25
    INC ESI                             ; 00559a2c
        ;   Label: LAB_00559a2c
    CMP ESI,0xc8                        ; 00559a2d
    JLE 0x005599c1                      ; 00559a33
        ;   XREF to: 005599c1 (CONDITIONAL_JUMP)  ; LAB_005599c1
    CMP dword ptr [0x0310f4a8],0x0      ; 00559a35 | DAT_0310f4a8
    JNZ 0x005599d3                      ; 00559a3c
        ;   XREF to: 005599d3 (CONDITIONAL_JUMP)  ; LAB_005599d3
    MOV EAX,dword ptr [EBX + 0x34]      ; 00559a3e
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00559a41
    PUSH ECX                            ; 00559a44
    PUSH 0x64175d                       ; 00559a45 | = "!WARNING!  Infinite loop detected in ..."
    MOV ESI,dword ptr [0x00678a60]      ; 00559a4a | g_CEditorToolsPtr
    PUSH ESI                            ; 00559a50 | g_CEditorToolsPtr
    MOV EDI,0x1                         ; 00559a51
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00559a56
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00559a5b
    MOV dword ptr [0x0310f4a8],EDI      ; 00559a5e | DAT_0310f4a8
    JMP 0x005599d3                      ; 00559a64
        ;   XREF to: 005599d3 (UNCONDITIONAL_JUMP)  ; LAB_005599d3
    MOV EAX,dword ptr [EBX + 0x34]      ; 00559a69
        ;   Label: LAB_00559a69
    PUSH 0x310eca0                      ; 00559a6c | DAT_0310eca0
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00559a71
    PUSH EDX                            ; 00559a75
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00559a76
    PUSH ECX                            ; 00559a79
    PUSH 0x641720                       ; 00559a7a | = "Error processing script.\nLine: %d\nT..."
    MOV EAX,[0x00678a60]                ; 00559a7f | g_CEditorToolsPtr
    PUSH EAX                            ; 00559a84 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00559a85
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 00559a8a
    JMP 0x00559a25                      ; 00559a8d
        ;   XREF to: 00559a25 (UNCONDITIONAL_JUMP)  ; LAB_00559a25
    PUSH ESI                            ; 00559a8f
        ;   Label: LAB_00559a8f
    MOV EDX,dword ptr [ESI + 0x154]     ; 00559a90
    CALL dword ptr [EDX + 0x120]        ; 00559a96
    ADD ESP,0x4                         ; 00559a9c
    TEST EAX,EAX                        ; 00559a9f
    JLE 0x005599fe                      ; 00559aa1
        ;   XREF to: 005599fe (CONDITIONAL_JUMP)  ; LAB_005599fe
    MOV EDI,dword ptr [EBX + 0x24]      ; 00559aa7
    PUSH EDI                            ; 00559aaa
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00559aab
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00559ab0
    MOV ESP,EBP                         ; 00559ab3
    POP EBP                             ; 00559ab5
    POP EDI                             ; 00559ab6
    POP ESI                             ; 00559ab7
    POP EBX                             ; 00559ab8
    RET                                 ; 00559ab9

