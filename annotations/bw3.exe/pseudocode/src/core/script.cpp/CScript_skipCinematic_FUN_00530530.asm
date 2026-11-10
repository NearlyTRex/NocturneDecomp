; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_skipCinematic_FUN_00530530(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8ae4
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005cfaad
;   TerminatedCString s_core_script_cpp_005cfafc
;   TerminatedCString s_Infinite_loop_detected_t_005cfb0f
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field540_0x24c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed6810
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_script.cpp_CScript_resetDialogState_FUN_00530500
;   core_script.cpp_CScript_step_FUN_00529a70
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530530
        ;   Label: core_script.cpp_CScript_skipCinematic_FUN_00530530
    PUSH EBP                            ; 00530531
    SUB ESP,0x4                         ; 00530532
    MOV EBX,dword ptr [ESP + 0x10]      ; 00530535
    CMP dword ptr [EBX + 0x454],0x0     ; 00530539
    JGE 0x0053054a                      ; 00530540
        ;   XREF to: 0053054a (CONDITIONAL_JUMP)  ; LAB_0053054a
    XOR EAX,EAX                         ; 00530542
    ADD ESP,0x4                         ; 00530544
    POP EBP                             ; 00530547
    POP EBX                             ; 00530548
    RET                                 ; 00530549
    PUSH EDI                            ; 0053054a
        ;   Label: LAB_0053054a
    PUSH ESI                            ; 0053054b
    PUSH EBX                            ; 0053054c
    CALL core_script.cpp_CScript_resetDialogState_FUN_00530500 ; 0053054d
        ;   XREF to: 00530500 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_resetDialogState_FUN_00530500(CScript * this_ptr)
    XOR ESI,ESI                         ; 00530552
    MOV EAX,dword ptr [EBX + 0x454]     ; 00530554
    ADD ESP,0x4                         ; 0053055a
    MOV dword ptr [EBX + 0x44],EAX      ; 0053055d
    MOV EAX,[0x005fe9dc]                ; 00530560 | g_CGamePtr
        ;   Label: LAB_00530560
    CMP dword ptr [EAX + 0x24c],0x0     ; 00530565 | g_CGameInstance.field540_0x24c
    JZ 0x005305f7                       ; 0053056c
        ;   XREF to: 005305f7 (CONDITIONAL_JUMP)  ; LAB_005305f7
    CMP dword ptr [EBX],0x0             ; 00530572
    JNZ 0x005305f7                      ; 00530575
        ;   XREF to: 005305f7 (CONDITIONAL_JUMP)  ; LAB_005305f7
    LEA EAX,[ESP + 0x8]                 ; 0053057b
    MOV EBP,0x3e800000                  ; 0053057f
    PUSH EAX                            ; 00530584
    MOV dword ptr [ESP + 0xc],EBP       ; 00530585
    PUSH EBX                            ; 00530589
    MOV EDI,dword ptr [EBX + 0x44]      ; 0053058a
    CALL core_script.cpp_CScript_step_FUN_00529a70 ; 0053058d
        ;   XREF to: 00529a70 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00529a70(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 00530592
    TEST EAX,EAX                        ; 00530595
    JL 0x005305d0                       ; 00530597
        ;   XREF to: 005305d0 (CONDITIONAL_JUMP)  ; LAB_005305d0
    INC ESI                             ; 00530599
        ;   Label: LAB_00530599
    CMP ESI,0x12c                       ; 0053059a
    JLE 0x00530560                      ; 005305a0
        ;   XREF to: 00530560 (CONDITIONAL_JUMP)  ; LAB_00530560
    MOV EBP,0x5cfafc                    ; 005305a2 | = "..\\core\\script.cpp"
    MOV EAX,0x1030                      ; 005305a7
    MOV EDI,dword ptr [EBX + 0x44]      ; 005305ac
    MOV [0x01d71de4],EAX                ; 005305af | DAT_01d71de4
    MOV EAX,dword ptr [EBX + 0x30]      ; 005305b4
    MOV dword ptr [0x01d71de0],EBP      ; 005305b7 | DAT_01d71de0
    MOV EDX,dword ptr [EAX + EDI*0x8]   ; 005305bd
    PUSH EDX                            ; 005305c0
    PUSH 0x5cfb0f                       ; 005305c1 | = "Infinite loop detected trying to skip..."
    CALL core_main.c_FUN_004e4330       ; 005305c6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 005305cb
    JMP 0x00530560                      ; 005305ce
        ;   XREF to: 00530560 (UNCONDITIONAL_JUMP)  ; LAB_00530560
    MOV EAX,dword ptr [EBX + 0x30]      ; 005305d0
        ;   Label: LAB_005305d0
    PUSH 0x1ed6810                      ; 005305d3 | DAT_01ed6810
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 005305d8
    PUSH EDX                            ; 005305dc
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 005305dd
    PUSH ECX                            ; 005305e0
    PUSH 0x5cfaad                       ; 005305e1 | = "Error processing script to skip cinem..."
    MOV EDI,dword ptr [0x005fb140]      ; 005305e6 | g_CEditorToolsPtr
    PUSH EDI                            ; 005305ec
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 005305ed
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 005305f2
    JMP 0x00530599                      ; 005305f5
        ;   XREF to: 00530599 (UNCONDITIONAL_JUMP)  ; LAB_00530599
    MOV EAX,0x1                         ; 005305f7
        ;   Label: LAB_005305f7
    POP ESI                             ; 005305fc
    POP EDI                             ; 005305fd
    ADD ESP,0x4                         ; 005305fe
    POP EBP                             ; 00530601
    POP EBX                             ; 00530602
    RET                                 ; 00530603

