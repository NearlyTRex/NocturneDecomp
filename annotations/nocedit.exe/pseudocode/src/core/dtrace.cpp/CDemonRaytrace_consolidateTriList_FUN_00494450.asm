; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494ac8
;
; Referenced Globals:
;   TerminatedCString s_Consolidating_raytrace_g_00622670
;   TerminatedCString s_core_dtrace_cpp_0062269a
;   TerminatedCString s_core_dtrace_cpp_006226ad
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsPtr
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
;   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
;   crt_memory.c_free_FUN_005fe659
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494450
        ;   Label: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
    PUSH ESI                            ; 00494451
    PUSH EDI                            ; 00494452
    PUSH EBP                            ; 00494453
    SUB ESP,0x10                        ; 00494454
    MOV EBX,dword ptr [ESP + 0x24]      ; 00494457
    PUSH 0x622670                       ; 0049445b | = "Consolidating raytrace geometry array..." | s_Consolidating_raytrace_g_00622670 = Consolidating raytrace geometry arrays...
    MOV EDX,dword ptr [0x00678a60]      ; 00494460 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 00494466 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00494467 | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049446c
    PUSH EBX                            ; 0049446f
    CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690 ; 00494470 | void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00494475
    MOV dword ptr [EBX + 0x4],0x0       ; 00494478
    XOR EAX,EAX                         ; 0049447f
    XOR EDX,EDX                         ; 00494481
    MOV ECX,dword ptr [EBX + 0x44]      ; 00494483
        ;   Label: LAB_00494483
    MOV EBP,dword ptr [EBX + 0x40]      ; 00494486
    IMUL EBP,ECX                        ; 00494489
    IMUL EBP,dword ptr [EBX + 0x48]     ; 0049448c
    CMP EAX,EBP                         ; 00494490
    JGE 0x004944a8                      ; 00494492 | LAB_004944a8
        ;   XREF to: 004944a8 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x4c]      ; 00494494
    MOV ESI,dword ptr [EBX + 0x4]       ; 00494497
    MOV ECX,dword ptr [ECX + EDX*0x1]   ; 0049449a
    ADD EDX,0x58                        ; 0049449d
    ADD ESI,ECX                         ; 004944a0
    INC EAX                             ; 004944a2
    MOV dword ptr [EBX + 0x4],ESI       ; 004944a3
    JMP 0x00494483                      ; 004944a6 | LAB_00494483
        ;   XREF to: 00494483 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004944a8
        ;   Label: LAB_004944a8
    CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600 ; 004944a9 | void core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace * this_ptr)
        ;   XREF to: 00494600 (UNCONDITIONAL_CALL)
    XOR EDI,EDI                         ; 004944ae
    ADD ESP,0x4                         ; 004944b0
    MOV dword ptr [ESP + 0x8],EDI       ; 004944b3
    MOV dword ptr [ESP + 0x4],EDI       ; 004944b7
    MOV dword ptr [ESP],EDI             ; 004944bb
    MOV EDI,dword ptr [EBX + 0x44]      ; 004944be
        ;   Label: LAB_004944be
    MOV EBP,dword ptr [EBX + 0x40]      ; 004944c1
    IMUL EBP,EDI                        ; 004944c4
    IMUL EBP,dword ptr [EBX + 0x48]     ; 004944c7
    CMP EBP,dword ptr [ESP + 0x4]       ; 004944cb
    JLE 0x004945e2                      ; 004944cf | LAB_004945e2
        ;   XREF to: 004945e2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP]             ; 004944d5
    MOV EBP,dword ptr [EBX + 0x4c]      ; 004944d8
    ADD EBP,ECX                         ; 004944db
    MOV ESI,dword ptr [EBP]             ; 004944dd
    TEST ESI,ESI                        ; 004944e0
    JLE 0x00494593                      ; 004944e2 | LAB_00494593
        ;   XREF to: 00494593 (CONDITIONAL_JUMP)
    IMUL ECX,ESI,0x38                   ; 004944e8
    IMUL EDI,dword ptr [ESP + 0x8],0x38 ; 004944eb
    MOV EAX,dword ptr [EBX + 0x8]       ; 004944f0
    MOV ESI,dword ptr [EBP + 0x4]       ; 004944f3
    ADD EDI,EAX                         ; 004944f6
    MOV EDX,dword ptr [ESP + 0x8]       ; 004944f8
    PUSH EDI                            ; 004944fc
    MOV EAX,ECX                         ; 004944fd
    SHR ECX,0x2                         ; 004944ff
    MOVSD.REP ES:EDI,ESI                ; 00494502
    MOV CL,AL                           ; 00494504
    AND CL,0x3                          ; 00494506
    MOVSB.REP ES:EDI,ESI                ; 00494509
    POP EDI                             ; 0049450b
    MOV ECX,dword ptr [EBP]             ; 0049450c
    MOV EDI,dword ptr [EBX + 0xc]       ; 0049450f
    MOV ESI,dword ptr [EBP + 0x54]      ; 00494512
    ADD EDI,EDX                         ; 00494515
    PUSH EDI                            ; 00494517
    MOV EAX,ECX                         ; 00494518
    SHR ECX,0x2                         ; 0049451a
    MOVSD.REP ES:EDI,ESI                ; 0049451d
    MOV CL,AL                           ; 0049451f
    AND CL,0x3                          ; 00494521
    MOVSB.REP ES:EDI,ESI                ; 00494524
    POP EDI                             ; 00494526
    MOV ECX,0x62269a                    ; 00494527 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_0062269a = ..\core\dtrace.cpp
    MOV ESI,0xe0                        ; 0049452c
    MOV EAX,dword ptr [EBP + 0x4]       ; 00494531
    MOV dword ptr [0x0067d20c],ECX      ; 00494534 | char * g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ESI      ; 0049453a | int g_CurrentDebugLine
    TEST EAX,EAX                        ; 00494540
    JZ 0x00494550                       ; 00494542 | LAB_00494550
        ;   XREF to: 00494550 (CONDITIONAL_JUMP)
    SUB EAX,0x4                         ; 00494544
    PUSH EAX                            ; 00494547
    CALL crt_memory.c_free_FUN_005fe659 ; 00494548 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049454d
    MOV EDI,0x6226ad                    ; 00494550 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_006226ad = ..\core\dtrace.cpp
        ;   Label: LAB_00494550
    MOV EDX,dword ptr [EBP + 0x54]      ; 00494555
    MOV EAX,0xe1                        ; 00494558
    PUSH EDX                            ; 0049455d
    MOV dword ptr [0x0067d20c],EDI      ; 0049455e | char * g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 00494564 | int g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 00494569 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049456e
    MOV ECX,dword ptr [ESP + 0x8]       ; 00494571
    IMUL EAX,ECX,0x38                   ; 00494575
    MOV EDX,dword ptr [EBX + 0x8]       ; 00494578
    ADD EDX,EAX                         ; 0049457b
    MOV dword ptr [EBP + 0x4],EDX       ; 0049457d
    MOV EAX,dword ptr [EBX + 0xc]       ; 00494580
    LEA EDX,[ECX + EAX*0x1]             ; 00494583
    MOV EAX,dword ptr [EBP]             ; 00494586
    LEA ESI,[ECX + EAX*0x1]             ; 00494589
    MOV dword ptr [EBP + 0x54],EDX      ; 0049458c
    MOV dword ptr [ESP + 0x8],ESI       ; 0049458f
    MOV EBP,dword ptr [EBX + 0x40]      ; 00494593
        ;   Label: LAB_00494593
    IMUL EBP,dword ptr [EBX + 0x44]     ; 00494596
    MOV EAX,dword ptr [EBX + 0x48]      ; 0049459a
    IMUL EBP,EAX                        ; 0049459d
    MOV dword ptr [ESP + 0xc],EBP       ; 004945a0
    FILD dword ptr [ESP + 0xc]          ; 004945a4
    SUB ESP,0x4                         ; 004945a8
    MOV ESI,dword ptr [ESP + 0x8]       ; 004945ab
    INC ESI                             ; 004945af
    MOV dword ptr [ESP + 0x10],ESI      ; 004945b0
    FSTP float ptr [ESP]                ; 004945b4
    FILD dword ptr [ESP + 0x10]         ; 004945b7
    SUB ESP,0x4                         ; 004945bb
    MOV EDX,dword ptr [0x00678a60]      ; 004945be | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004945c4
    PUSH EDX                            ; 004945c7 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004945c8 | void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004945cd
    MOV ECX,dword ptr [ESP]             ; 004945d0
    ADD ECX,0x58                        ; 004945d3
    MOV dword ptr [ESP + 0x4],ESI       ; 004945d6
    MOV dword ptr [ESP],ECX             ; 004945da
    JMP 0x004944be                      ; 004945dd | LAB_004944be
        ;   XREF to: 004944be (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00678a60]      ; 004945e2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
        ;   Label: LAB_004945e2
    PUSH EBX                            ; 004945e8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004945e9 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004945ee
    ADD ESP,0x10                        ; 004945f1
    POP EBP                             ; 004945f4
    POP EDI                             ; 004945f5
    POP ESI                             ; 004945f6
    POP EBX                             ; 004945f7
    RET                                 ; 004945f8

