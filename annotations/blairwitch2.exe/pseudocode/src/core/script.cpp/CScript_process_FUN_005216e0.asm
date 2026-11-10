; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_process_FUN_005216e0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bd66b
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005e2e3c
;   TerminatedCString s_WARNING_Infinite_loop_de_005e2e79
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field176_0xe0
;   undefined4 DAT_01e650f8
;   undefined4 DAT_01e65100
;   undefined4 DAT_01e65904
;   undefined4 DAT_01e65908
;
; Called Functions:
;   core_charactr.cpp_FUN_0042bff0
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250
;   core_script.cpp_FUN_00522350
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005216e0
        ;   Label: core_script.cpp_CScript_process_FUN_005216e0
    PUSH ESI                            ; 005216e1
    PUSH EDI                            ; 005216e2
    PUSH EBP                            ; 005216e3
    MOV EBP,ESP                         ; 005216e4
    SUB ESP,0x8                         ; 005216e6
    AND ESP,0xfffffff8                  ; 005216e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005216ec
    XOR EDX,EDX                         ; 005216ef
    MOV ECX,dword ptr [EBX + 0x2c]      ; 005216f1
    MOV dword ptr [0x01e650f8],EDX      ; 005216f4 | DAT_01e650f8
    CMP ECX,0x1                         ; 005216fa
    JL 0x0052177e                       ; 005216fd
        ;   XREF to: 0052177e (CONDITIONAL_JUMP)  ; LAB_0052177e
    CMP dword ptr [EBX + 0x30],0x0      ; 00521703
    JZ 0x0052177e                       ; 00521707
        ;   XREF to: 0052177e (CONDITIONAL_JUMP)  ; LAB_0052177e
    MOV EAX,[0x00616494]                ; 0052170d | g_CGamePtr
    CMP dword ptr [EAX + 0xe0],0x0      ; 00521712 | g_CGameInstance.field176_0xe0
    JZ 0x0052171e                       ; 00521719
        ;   XREF to: 0052171e (CONDITIONAL_JUMP)  ; LAB_0052171e
    MOV dword ptr [EBX + 0x1c],EDX      ; 0052171b
    MOV EAX,[0x00616494]                ; 0052171e | g_CGamePtr
        ;   Label: LAB_0052171e
    PUSH EAX                            ; 00521723 | g_CGameInstance
    XOR ESI,ESI                         ; 00521724
    CALL core_charactr.cpp_FUN_0042bff0 ; 00521726
        ;   XREF to: 0042bff0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042bff0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0052172b
    XOR EDX,EDX                         ; 0052172f
    FLD float ptr [ESP + 0x8]           ; 00521731
    ADD ESP,0x4                         ; 00521735
    MOV dword ptr [0x01e65904],EDX      ; 00521738 | DAT_01e65904
    FSTP float ptr [ESP]                ; 0052173e
    FLD float ptr [ESP]                 ; 00521741
        ;   Label: LAB_00521741
    FLDZ                                ; 00521744
    FCOMPP                              ; 00521746
    FNSTSW AX                           ; 00521748
    SAHF                                ; 0052174a
    JNC 0x00521753                      ; 0052174b
        ;   XREF to: 00521753 (CONDITIONAL_JUMP)  ; LAB_00521753
    CMP dword ptr [EBX + 0x1c],0x2      ; 0052174d
    JNZ 0x00521785                      ; 00521751
        ;   XREF to: 00521785 (CONDITIONAL_JUMP)  ; LAB_00521785
    CMP dword ptr [0x01e65904],0x0      ; 00521753 | DAT_01e65904
        ;   Label: LAB_00521753
    JZ 0x00521773                       ; 0052175a
        ;   XREF to: 00521773 (CONDITIONAL_JUMP)  ; LAB_00521773
    MOV EDX,dword ptr [0x00616494]      ; 0052175c | g_CGamePtr
    PUSH EDX                            ; 00521762 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250 ; 00521763
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004b8250(CGame * this_ptr)
    XOR ECX,ECX                         ; 00521768
    ADD ESP,0x4                         ; 0052176a
    MOV dword ptr [0x01e65904],ECX      ; 0052176d | DAT_01e65904
    MOV ESI,dword ptr [EBX + 0x4]       ; 00521773
        ;   Label: LAB_00521773
    TEST ESI,ESI                        ; 00521776
    JNZ 0x0052180f                      ; 00521778
        ;   XREF to: 0052180f (CONDITIONAL_JUMP)  ; LAB_0052180f
    MOV ESP,EBP                         ; 0052177e
        ;   Label: LAB_0052177e
    POP EBP                             ; 00521780
    POP EDI                             ; 00521781
    POP ESI                             ; 00521782
    POP EBX                             ; 00521783
    RET                                 ; 00521784
    CMP dword ptr [EBX],0x0             ; 00521785
        ;   Label: LAB_00521785
    JNZ 0x00521753                      ; 00521788
        ;   XREF to: 00521753 (CONDITIONAL_JUMP)  ; LAB_00521753
    MOV EAX,ESP                         ; 0052178a
    PUSH EAX                            ; 0052178c
    PUSH EBX                            ; 0052178d
    MOV EDI,dword ptr [EBX + 0x44]      ; 0052178e
    CALL core_script.cpp_FUN_00522350   ; 00521791
        ;   XREF to: 00522350 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00522350()
    ADD ESP,0x8                         ; 00521796
    TEST EAX,EAX                        ; 00521799
    JZ 0x00521753                       ; 0052179b
        ;   XREF to: 00521753 (CONDITIONAL_JUMP)  ; LAB_00521753
    JL 0x005217e9                       ; 0052179d
        ;   XREF to: 005217e9 (CONDITIONAL_JUMP)  ; LAB_005217e9
    CMP dword ptr [EBX + 0x1c],0x1      ; 0052179f
    JNZ 0x005217ac                      ; 005217a3
        ;   XREF to: 005217ac (CONDITIONAL_JUMP)  ; LAB_005217ac
    MOV dword ptr [EBX + 0x1c],0x2      ; 005217a5
        ;   Label: LAB_005217a5
    INC ESI                             ; 005217ac
        ;   Label: LAB_005217ac
    CMP ESI,0xc8                        ; 005217ad
    JLE 0x00521741                      ; 005217b3
        ;   XREF to: 00521741 (CONDITIONAL_JUMP)  ; LAB_00521741
    CMP dword ptr [0x01e65908],0x0      ; 005217b5 | DAT_01e65908
    JNZ 0x00521753                      ; 005217bc
        ;   XREF to: 00521753 (CONDITIONAL_JUMP)  ; LAB_00521753
    MOV EAX,dword ptr [EBX + 0x30]      ; 005217be
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 005217c1
    PUSH ECX                            ; 005217c4
    PUSH 0x5e2e79                       ; 005217c5 | = "!WARNING!  Infinite loop detected in ..."
    MOV ESI,dword ptr [0x006138e0]      ; 005217ca | g_CEditorToolsPtr
    PUSH ESI                            ; 005217d0
    MOV EDI,0x1                         ; 005217d1
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 005217d6
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 005217db
    MOV dword ptr [0x01e65908],EDI      ; 005217de | DAT_01e65908
    JMP 0x00521753                      ; 005217e4
        ;   XREF to: 00521753 (UNCONDITIONAL_JUMP)  ; LAB_00521753
    MOV EAX,dword ptr [EBX + 0x30]      ; 005217e9
        ;   Label: LAB_005217e9
    PUSH 0x1e65100                      ; 005217ec | DAT_01e65100
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 005217f1
    PUSH EDX                            ; 005217f5
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 005217f6
    PUSH ECX                            ; 005217f9
    PUSH 0x5e2e3c                       ; 005217fa | = "Error processing script.\nLine: %d\nT..."
    MOV EAX,[0x006138e0]                ; 005217ff | g_CEditorToolsPtr
    PUSH EAX                            ; 00521804
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 00521805
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 0052180a
    JMP 0x005217a5                      ; 0052180d
        ;   XREF to: 005217a5 (UNCONDITIONAL_JUMP)  ; LAB_005217a5
    PUSH ESI                            ; 0052180f
        ;   Label: LAB_0052180f
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00521810
    CALL dword ptr [EDX + 0x114]        ; 00521816
    ADD ESP,0x4                         ; 0052181c
    TEST EAX,EAX                        ; 0052181f
    JLE 0x0052177e                      ; 00521821
        ;   XREF to: 0052177e (CONDITIONAL_JUMP)  ; LAB_0052177e
    MOV EDI,dword ptr [EBX + 0x28]      ; 00521827
    PUSH EDI                            ; 0052182a
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0052182b
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00521830
    MOV ESP,EBP                         ; 00521833
    POP EBP                             ; 00521835
    POP EDI                             ; 00521836
    POP ESI                             ; 00521837
    POP EBX                             ; 00521838
    RET                                 ; 00521839

