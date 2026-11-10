; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a55b0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048a32b
;
; Referenced Globals:
;   void* switchdataD_004a5598 = 004a5601
;   TerminatedCString s_CFieldNotes_completeTask_005d63bd
;   TerminatedCString s_CFieldNotes_completeTask_005d63ee
;   TerminatedCString s_core_fldnotes_cpp_005d6424
;   TerminatedCString s_Field_note_s_has_invalid_005d6439
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_00616014
;   undefined4 DAT_01cab9f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a35e0
;   core_main.c_FUN_004e4500
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a55b0
        ;   Label: core_fldnotes.cpp_FUN_004a55b0
    PUSH ESI                            ; 004a55b1
    PUSH EDI                            ; 004a55b2
    PUSH EBP                            ; 004a55b3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a55b4
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a55b8 | DAT_01cab9f0
    XOR EBP,EBP                         ; 004a55be
    XOR EBX,EBX                         ; 004a55c0
    TEST EDX,EDX                        ; 004a55c2
    JLE 0x004a564c                      ; 004a55c4
        ;   XREF to: 004a564c (CONDITIONAL_JUMP)  ; LAB_004a564c
    MOV ESI,0x1cab9f4                   ; 004a55ca
    PUSH EDI                            ; 004a55cf
        ;   Label: LAB_004a55cf
    PUSH ESI                            ; 004a55d0
    CALL core_fldnotes.cpp_FUN_004a35e0 ; 004a55d1
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a35e0()
    ADD ESP,0x8                         ; 004a55d6
    MOV EDX,EAX                         ; 004a55d9
    TEST EAX,EAX                        ; 004a55db
    JZ 0x004a563b                       ; 004a55dd
        ;   XREF to: 004a563b (CONDITIONAL_JUMP)  ; LAB_004a563b
    TEST EBP,EBP                        ; 004a55df
    JZ 0x004a55e6                       ; 004a55e1
        ;   XREF to: 004a55e6 (CONDITIONAL_JUMP)  ; LAB_004a55e6
    MOV dword ptr [EBP],EBX             ; 004a55e3
    MOV EAX,EDX                         ; 004a55e6
        ;   Label: LAB_004a55e6
    MOV EDX,EAX                         ; 004a55e8
        ;   Label: LAB_004a55e8
    TEST EAX,EAX                        ; 004a55ea
    JZ 0x004a5650                       ; 004a55ec
        ;   XREF to: 004a5650 (CONDITIONAL_JUMP)  ; LAB_004a5650
    MOV EAX,dword ptr [EAX + 0x140]     ; 004a55ee
    INC EAX                             ; 004a55f4
    CMP EAX,0x5                         ; 004a55f5
    JA 0x004a5601                       ; 004a55f8
        ;   XREF to: 004a5601 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x4a5598]  ; 004a55fa | caseD_ffffffff | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [EDX + 0x140]     ; 004a5601
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 004a5607
    PUSH EDX                            ; 004a5608
    MOV EDI,0x5d6424                    ; 004a5609 | = "..\\core\\fldnotes.cpp"
    MOV EBP,0xa42                       ; 004a560e
    PUSH 0x5d6439                       ; 004a5613 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d046a0],EDI      ; 004a5618 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004a561e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a5624
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004a5629
    MOV dword ptr [0x00616014],0x1      ; 004a562c | DAT_00616014
        ;   Label: caseD_4
    POP EBP                             ; 004a5636
    POP EDI                             ; 004a5637
    POP ESI                             ; 004a5638
    POP EBX                             ; 004a5639
    RET                                 ; 004a563a
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a563b | DAT_01cab9f0
        ;   Label: LAB_004a563b
    INC EBX                             ; 004a5641
    ADD ESI,0x2e4                       ; 004a5642
    CMP EBX,ECX                         ; 004a5648
    JL 0x004a55cf                       ; 004a564a
        ;   XREF to: 004a55cf (CONDITIONAL_JUMP)  ; LAB_004a55cf
    XOR EAX,EAX                         ; 004a564c
        ;   Label: LAB_004a564c
    JMP 0x004a55e8                      ; 004a564e
        ;   XREF to: 004a55e8 (UNCONDITIONAL_JUMP)  ; LAB_004a55e8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a5650
        ;   Label: LAB_004a5650
    PUSH EDX                            ; 004a5654
    PUSH 0x5d63bd                       ; 004a5655 | = "CFieldNotes::completeTask - entry '%s..."
    MOV ECX,dword ptr [0x006138e0]      ; 004a565a | g_CEditorToolsPtr
    PUSH ECX                            ; 004a5660
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004a5661
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004a5666
    MOV dword ptr [0x00616014],0x1      ; 004a5669 | DAT_00616014
    POP EBP                             ; 004a5673
    POP EDI                             ; 004a5674
    POP ESI                             ; 004a5675
    POP EBX                             ; 004a5676
    RET                                 ; 004a5677
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a5678
        ;   Label: caseD_0
    PUSH EBX                            ; 004a567c
    PUSH 0x5d63ee                       ; 004a567d | = "CFieldNotes::completeTask - entry '%s..."
    MOV ESI,dword ptr [0x006138e0]      ; 004a5682 | g_CEditorToolsPtr
    PUSH ESI                            ; 004a5688
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004a5689
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004a568e
    MOV dword ptr [0x00616014],0x1      ; 004a5691 | DAT_00616014
    POP EBP                             ; 004a569b
    POP EDI                             ; 004a569c
    POP ESI                             ; 004a569d
    POP EBX                             ; 004a569e
    RET                                 ; 004a569f
    MOV dword ptr [EDX + 0x140],0x4     ; 004a56a0
        ;   Label: caseD_2
    MOV dword ptr [0x00616014],0x1      ; 004a56aa | DAT_00616014
    POP EBP                             ; 004a56b4
    POP EDI                             ; 004a56b5
    POP ESI                             ; 004a56b6
    POP EBX                             ; 004a56b7
    RET                                 ; 004a56b8

