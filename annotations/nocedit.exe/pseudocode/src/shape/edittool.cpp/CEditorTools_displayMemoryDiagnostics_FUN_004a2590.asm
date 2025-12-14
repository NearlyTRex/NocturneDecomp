; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590(CEditorTools * this_ptr, char * output_buffer)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined2       Stack[-0x24]:2  local_24
; undefined4       Stack[-0x22]:4  local_22
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da9f7
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db020
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507918
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538a65
;
; Referenced Globals:
;   void* switchdataD_004a257c = 004a25cc
;   TerminatedCString s_Blocks_d_Total_1fk_Max_1_006235d2
;   TerminatedCString s_Heap_is_empty_006235f5
;   undefined4 s_eap_is_empty._006235f6
;   undefined4 s_ap_is_empty._006235f7
;   TerminatedCString s_Memory_corruption_detect_00623604
;   undefined4 s_emory_corruption_detected!_00623605
;   undefined4 s_mory_corruption_detected!_00623606
;   undefined4 s_ory_corruption_detected!_00623607
;   double g_BytesToKilobytesScale = 0.0009765625
;
; Called Functions:
;   crt_heap.c_heapCheckWrapper_FUN_006012c0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2590
        ;   Label: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
    PUSH ESI                            ; 004a2591
    PUSH EDI                            ; 004a2592
    PUSH EBP                            ; 004a2593
    MOV EBP,ESP                         ; 004a2594
    SUB ESP,0x14                        ; 004a2596
    AND ESP,0xfffffff8                  ; 004a2599
    XOR EDX,EDX                         ; 004a259c
    XOR EBX,EBX                         ; 004a259e
    XOR EDI,EDI                         ; 004a25a0
    XOR ESI,ESI                         ; 004a25a2
    MOV word ptr [ESP + 0x4],DX         ; 004a25a4
    MOV dword ptr [ESP],EBX             ; 004a25a9
    MOV EAX,ESP                         ; 004a25ac
        ;   Label: LAB_004a25ac
    PUSH EAX                            ; 004a25ae
    CALL crt_heap.c_heapCheckWrapper_FUN_006012c0 ; 004a25af
        ;   XREF to: 006012c0 (UNCONDITIONAL_CALL)  ; int crt_heap.c_heapCheckWrapper_FUN_006012c0(void * heap_state_ptr)
    ADD ESP,0x4                         ; 004a25b4
    TEST EAX,EAX                        ; 004a25b7
    JZ 0x004a25f5                       ; 004a25b9
        ;   XREF to: 004a25f5 (CONDITIONAL_JUMP)  ; LAB_004a25f5
    DEC EAX                             ; 004a25bb
    CMP EAX,0x4                         ; 004a25bc
    JA 0x004a2650                       ; 004a25bf
        ;   XREF to: 004a2650 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4a257c]  ; 004a25c5 | caseD_1 | caseD_4 | caseD_3
        ;   Label: switchD
    MOV ESI,0x6235f5                    ; 004a25cc | = "Heap is empty."
        ;   Label: caseD_1
    MOV EDI,dword ptr [EBP + 0x18]      ; 004a25d1
        ;   Label: LAB_004a25d1
    PUSH EDI                            ; 004a25d4
    MOV AL,byte ptr [ESI]               ; 004a25d5 | = "Heap is empty." | s_ap_is_empty._006235f7 | s_Memory_corruption_detect_00623604
        ;   Label: LAB_004a25d5
    MOV byte ptr [EDI],AL               ; 004a25d7
    CMP AL,0x0                          ; 004a25d9
    JZ 0x004a25ed                       ; 004a25db
        ;   XREF to: 004a25ed (CONDITIONAL_JUMP)  ; LAB_004a25ed
    MOV AL,byte ptr [ESI + 0x1]         ; 004a25dd | s_eap_is_empty._006235f6 | s_emory_corruption_detected!_00623605 | s_ory_corruption_detected!_00623607
    ADD ESI,0x2                         ; 004a25e0
    MOV byte ptr [EDI + 0x1],AL         ; 004a25e3
    ADD EDI,0x2                         ; 004a25e6
    CMP AL,0x0                          ; 004a25e9
    JNZ 0x004a25d5                      ; 004a25eb
        ;   XREF to: 004a25d5 (CONDITIONAL_JUMP)  ; LAB_004a25d5
    POP EDI                             ; 004a25ed
        ;   Label: LAB_004a25ed
    MOV ESP,EBP                         ; 004a25ee
    POP EBP                             ; 004a25f0
    POP EDI                             ; 004a25f1
    POP ESI                             ; 004a25f2
    POP EBX                             ; 004a25f3
    RET                                 ; 004a25f4
    CMP dword ptr [ESP + 0xa],0x0       ; 004a25f5
        ;   Label: LAB_004a25f5
    JNZ 0x004a25ac                      ; 004a25fa
        ;   XREF to: 004a25ac (CONDITIONAL_JUMP)  ; LAB_004a25ac
    MOV EAX,dword ptr [ESP + 0x6]       ; 004a25fc
    INC EBX                             ; 004a2600
    ADD EDI,EAX                         ; 004a2601
    CMP ESI,EAX                         ; 004a2603
    JNC 0x004a25ac                      ; 004a2605
        ;   XREF to: 004a25ac (CONDITIONAL_JUMP)  ; LAB_004a25ac
    MOV ESI,EAX                         ; 004a2607
    JMP 0x004a25ac                      ; 004a2609
        ;   XREF to: 004a25ac (UNCONDITIONAL_JUMP)  ; LAB_004a25ac
    TEST EBX,EBX                        ; 004a260b
        ;   Label: caseD_4
    JLE 0x004a25cc                      ; 004a260d
        ;   XREF to: 004a25cc (CONDITIONAL_JUMP)  ; caseD_1
    MOV dword ptr [ESP + 0x10],ESI      ; 004a260f
    FILD dword ptr [ESP + 0x10]         ; 004a2613
    SUB ESP,0x8                         ; 004a2617
    MOV dword ptr [ESP + 0x18],EDI      ; 004a261a
    FLD double ptr [0x00623626]         ; 004a261e | g_BytesToKilobytesScale
    FXCH                                ; 004a2624
    FMUL ST1                            ; 004a2626
    FILD dword ptr [ESP + 0x18]         ; 004a2628
    FMULP ST2                           ; 004a262c
    FSTP double ptr [ESP]               ; 004a262e
    SUB ESP,0x8                         ; 004a2631
    FSTP double ptr [ESP]               ; 004a2634
    PUSH EBX                            ; 004a2637
    PUSH 0x6235d2                       ; 004a2638 | = "Blocks: %d Total: %.1fk Max: %.1fk"
    MOV ECX,dword ptr [EBP + 0x18]      ; 004a263d
    PUSH ECX                            ; 004a2640
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a2641
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 004a2646
    MOV ESP,EBP                         ; 004a2649
    POP EBP                             ; 004a264b
    POP EDI                             ; 004a264c
    POP ESI                             ; 004a264d
    POP EBX                             ; 004a264e
    RET                                 ; 004a264f
    MOV ESI,0x623604                    ; 004a2650 | = "Memory corruption detected!"
        ;   Label: caseD_5
    JMP 0x004a25d1                      ; 004a2655
        ;   XREF to: 004a25d1 (UNCONDITIONAL_JUMP)  ; LAB_004a25d1

