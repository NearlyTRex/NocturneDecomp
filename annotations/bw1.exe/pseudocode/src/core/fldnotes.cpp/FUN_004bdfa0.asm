; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bdfa0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a2a34
;
; Referenced Globals:
;   void* switchdataD_004bdf84 = 004bdff1
;   TerminatedCString s_CFieldNotes_completeTask_005e0227
;   TerminatedCString s_CFieldNotes_completeTask_005e0258
;   TerminatedCString s_core_fldnotes_cpp_005e028e
;   TerminatedCString s_Field_note_s_has_invalid_005e02a3
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_0061d2e4
;   undefined4 DAT_01cc4470
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bbfd0
;   core_main.c_FUN_005030e0
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdfa0
        ;   Label: core_fldnotes.cpp_FUN_004bdfa0
    PUSH ESI                            ; 004bdfa1
    PUSH EDI                            ; 004bdfa2
    PUSH EBP                            ; 004bdfa3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bdfa4
    MOV EDX,dword ptr [0x01cc4470]      ; 004bdfa8 | DAT_01cc4470
    XOR EBP,EBP                         ; 004bdfae
    XOR EBX,EBX                         ; 004bdfb0
    TEST EDX,EDX                        ; 004bdfb2
    JLE 0x004be03c                      ; 004bdfb4
        ;   XREF to: 004be03c (CONDITIONAL_JUMP)  ; LAB_004be03c
    MOV ESI,0x1cc4474                   ; 004bdfba
    PUSH EDI                            ; 004bdfbf
        ;   Label: LAB_004bdfbf
    PUSH ESI                            ; 004bdfc0
    CALL core_fldnotes.cpp_FUN_004bbfd0 ; 004bdfc1
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbfd0()
    ADD ESP,0x8                         ; 004bdfc6
    MOV EDX,EAX                         ; 004bdfc9
    TEST EAX,EAX                        ; 004bdfcb
    JZ 0x004be02b                       ; 004bdfcd
        ;   XREF to: 004be02b (CONDITIONAL_JUMP)  ; LAB_004be02b
    TEST EBP,EBP                        ; 004bdfcf
    JZ 0x004bdfd6                       ; 004bdfd1
        ;   XREF to: 004bdfd6 (CONDITIONAL_JUMP)  ; LAB_004bdfd6
    MOV dword ptr [EBP],EBX             ; 004bdfd3
    MOV EAX,EDX                         ; 004bdfd6
        ;   Label: LAB_004bdfd6
    MOV EDX,EAX                         ; 004bdfd8
        ;   Label: LAB_004bdfd8
    TEST EAX,EAX                        ; 004bdfda
    JZ 0x004be040                       ; 004bdfdc
        ;   XREF to: 004be040 (CONDITIONAL_JUMP)  ; LAB_004be040
    MOV EAX,dword ptr [EAX + 0x140]     ; 004bdfde
    INC EAX                             ; 004bdfe4
    CMP EAX,0x5                         ; 004bdfe5
    JA 0x004bdff1                       ; 004bdfe8
        ;   XREF to: 004bdff1 (CONDITIONAL_JUMP)  ; caseD_ffffffff
    JMP dword ptr [EAX*0x4 + 0x4bdf84]  ; 004bdfea | caseD_ffffffff | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,dword ptr [EDX + 0x140]     ; 004bdff1
        ;   Label: caseD_ffffffff
    PUSH EAX                            ; 004bdff7
    PUSH EDX                            ; 004bdff8
    MOV EDI,0x5e028e                    ; 004bdff9 | = "..\\core\\fldnotes.cpp"
    MOV EBP,0xaa7                       ; 004bdffe
    PUSH 0x5e02a3                       ; 004be003 | = "Field note %s has invalid type %d"
    MOV dword ptr [0x01d1d400],EDI      ; 004be008 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 004be00e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004be014
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 004be019
    MOV dword ptr [0x0061d2e4],0x1      ; 004be01c | DAT_0061d2e4
        ;   Label: caseD_4
    POP EBP                             ; 004be026
    POP EDI                             ; 004be027
    POP ESI                             ; 004be028
    POP EBX                             ; 004be029
    RET                                 ; 004be02a
    MOV ECX,dword ptr [0x01cc4470]      ; 004be02b | DAT_01cc4470
        ;   Label: LAB_004be02b
    INC EBX                             ; 004be031
    ADD ESI,0x2e4                       ; 004be032
    CMP EBX,ECX                         ; 004be038
    JL 0x004bdfbf                       ; 004be03a
        ;   XREF to: 004bdfbf (CONDITIONAL_JUMP)  ; LAB_004bdfbf
    XOR EAX,EAX                         ; 004be03c
        ;   Label: LAB_004be03c
    JMP 0x004bdfd8                      ; 004be03e
        ;   XREF to: 004bdfd8 (UNCONDITIONAL_JUMP)  ; LAB_004bdfd8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004be040
        ;   Label: LAB_004be040
    PUSH EDX                            ; 004be044
    PUSH 0x5e0227                       ; 004be045 | = "CFieldNotes::completeTask - entry '%s..."
    MOV ECX,dword ptr [0x0061abc0]      ; 004be04a | g_CEditorToolsPtr
    PUSH ECX                            ; 004be050
    CALL shape_edittool.cpp_FUN_004943a0 ; 004be051
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004be056
    MOV dword ptr [0x0061d2e4],0x1      ; 004be059 | DAT_0061d2e4
    POP EBP                             ; 004be063
    POP EDI                             ; 004be064
    POP ESI                             ; 004be065
    POP EBX                             ; 004be066
    RET                                 ; 004be067
    MOV EBX,dword ptr [ESP + 0x18]      ; 004be068
        ;   Label: caseD_0
    PUSH EBX                            ; 004be06c
    PUSH 0x5e0258                       ; 004be06d | = "CFieldNotes::completeTask - entry '%s..."
    MOV ESI,dword ptr [0x0061abc0]      ; 004be072 | g_CEditorToolsPtr
    PUSH ESI                            ; 004be078
    CALL shape_edittool.cpp_FUN_004943a0 ; 004be079
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 004be07e
    MOV dword ptr [0x0061d2e4],0x1      ; 004be081 | DAT_0061d2e4
    POP EBP                             ; 004be08b
    POP EDI                             ; 004be08c
    POP ESI                             ; 004be08d
    POP EBX                             ; 004be08e
    RET                                 ; 004be08f
    MOV dword ptr [EDX + 0x140],0x4     ; 004be090
        ;   Label: caseD_2
    MOV dword ptr [0x0061d2e4],0x1      ; 004be09a | DAT_0061d2e4
    POP EBP                             ; 004be0a4
    POP EDI                             ; 004be0a5
    POP ESI                             ; 004be0a6
    POP EBX                             ; 004be0a7
    RET                                 ; 004be0a8

