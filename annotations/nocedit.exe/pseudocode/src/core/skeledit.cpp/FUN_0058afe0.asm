; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_0058afe0()
;
; Local Variables:
; undefined4       Stack[-0x484]:4  local_484
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_FUN_0058c190 at 0058c74a
;   core_skeledit.cpp_FUN_00592690 at 0059386d
;
; Referenced Globals:
;   TerminatedCString s_no_parent_0064a562
;   TerminatedCString s_s_2d_s_d_s_0064a56e
;   TerminatedCString s_Dump_to_the_clipboard_0064a57d
;   TerminatedCString s_Viewing_bone_heirarchy_f_0064a595
;   TerminatedCString s_Heirarchy_for_s_0064a5b4
;   TerminatedCString s_s_0064a5c9
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   undefined4 DAT_0366b650
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH 0x4a0                          ; 0058afe0
        ;   Label: core_skeledit.cpp_FUN_0058afe0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058afe5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058afea
    PUSH ESI                            ; 0058afeb
    PUSH EDI                            ; 0058afec
    PUSH EBP                            ; 0058afed
    SUB ESP,0x474                       ; 0058afee
    MOV EBP,dword ptr [ESP + 0x488]     ; 0058aff4
    MOV EAX,ESP                         ; 0058affb
    PUSH EAX                            ; 0058affd
    XOR EBX,EBX                         ; 0058affe
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0058b000
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    MOV EDX,dword ptr [EBP]             ; 0058b005
    ADD ESP,0x4                         ; 0058b008
    TEST EDX,EDX                        ; 0058b00b
    JLE 0x0058b078                      ; 0058b00d
        ;   XREF to: 0058b078 (CONDITIONAL_JUMP)  ; LAB_0058b078
    LEA EAX,[EBP + 0x4]                 ; 0058b00f
    MOV EDI,EBP                         ; 0058b012
    MOV ESI,EAX                         ; 0058b014
    MOV dword ptr [ESP + 0x470],EAX     ; 0058b016
    MOV EAX,dword ptr [EDI + 0x24]      ; 0058b01d
        ;   Label: LAB_0058b01d
    MOV EDX,0x64a562                    ; 0058b020 | = "(no parent)"
    TEST EAX,EAX                        ; 0058b025
    JL 0x0058b036                       ; 0058b027
        ;   XREF to: 0058b036 (CONDITIONAL_JUMP)  ; LAB_0058b036
    IMUL EDX,EAX,0x84                   ; 0058b029
    ADD EDX,dword ptr [ESP + 0x470]     ; 0058b02f
    PUSH EDX                            ; 0058b036 | = "(no parent)"
        ;   Label: LAB_0058b036
    PUSH EAX                            ; 0058b037
    PUSH ESI                            ; 0058b038
    PUSH EBX                            ; 0058b039
    PUSH 0x64a56e                       ; 0058b03a | = "%2d. %s\t%d. %s"
    LEA EAX,[ESP + 0x3bc]               ; 0058b03f
    PUSH EAX                            ; 0058b046
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0058b047
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0058b04c
    LEA EAX,[ESP + 0x3a8]               ; 0058b04f
    PUSH EAX                            ; 0058b056
    LEA EAX,[ESP + 0x4]                 ; 0058b057
    ADD EDI,0x84                        ; 0058b05b
    PUSH EAX                            ; 0058b061
    ADD ESI,0x84                        ; 0058b062
    INC EBX                             ; 0058b068
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058b069
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    MOV ECX,dword ptr [EBP]             ; 0058b06e
    ADD ESP,0x8                         ; 0058b071
    CMP EBX,ECX                         ; 0058b074
    JL 0x0058b01d                       ; 0058b076
        ;   XREF to: 0058b01d (CONDITIONAL_JUMP)  ; LAB_0058b01d
    PUSH 0x64a57d                       ; 0058b078 | = "(Dump to the clipboard)"
        ;   Label: LAB_0058b078
    LEA EAX,[ESP + 0x4]                 ; 0058b07d
    PUSH EAX                            ; 0058b081
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0058b082
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0058b087
    MOV EBX,dword ptr [ESP + 0x48c]     ; 0058b08a
    PUSH EBX                            ; 0058b091
    PUSH 0x64a595                       ; 0058b092 | = "Viewing bone heirarchy for %s."
    LEA EAX,[ESP + 0x3b0]               ; 0058b097
    PUSH EAX                            ; 0058b09e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0058b09f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058b0a4
    PUSH 0x0                            ; 0058b0a7
    PUSH -0x1                           ; 0058b0a9
    LEA EAX,[ESP + 0x3b0]               ; 0058b0ab
    PUSH EAX                            ; 0058b0b2
    LEA EAX,[ESP + 0xc]                 ; 0058b0b3
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058b0b7
    PUSH EAX                            ; 0058b0bb
    DEC EBX                             ; 0058b0bc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0058b0bd
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0058b0c2
    CMP EAX,EBX                         ; 0058b0c5
    JZ 0x0058b0e3                       ; 0058b0c7
        ;   XREF to: 0058b0e3 (CONDITIONAL_JUMP)  ; LAB_0058b0e3
    PUSH 0x0                            ; 0058b0c9
        ;   Label: LAB_0058b0c9
    LEA EAX,[ESP + 0x4]                 ; 0058b0cb
    PUSH EAX                            ; 0058b0cf
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0058b0d0
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0058b0d5
    ADD ESP,0x474                       ; 0058b0d8
    POP EBP                             ; 0058b0de
    POP EDI                             ; 0058b0df
    POP ESI                             ; 0058b0e0
    POP EBX                             ; 0058b0e1
    RET                                 ; 0058b0e2
    MOV ESI,dword ptr [ESP + 0x48c]     ; 0058b0e3
        ;   Label: LAB_0058b0e3
    PUSH ESI                            ; 0058b0ea
    PUSH 0x64a5b4                       ; 0058b0eb | = "Heirarchy for %s\r\n\r\n"
    PUSH 0x366b650                      ; 0058b0f0 | DAT_0366b650
    XOR EBX,EBX                         ; 0058b0f5
    MOV ESI,0x366b650                   ; 0058b0f7 | DAT_0366b650
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0058b0fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058b101
    MOV EDI,dword ptr [EBP]             ; 0058b104
    ADD ESI,EAX                         ; 0058b107
    TEST EDI,EDI                        ; 0058b109
    JLE 0x0058b140                      ; 0058b10b
        ;   XREF to: 0058b140 (CONDITIONAL_JUMP)  ; LAB_0058b140
    PUSH EBX                            ; 0058b10d
        ;   Label: LAB_0058b10d
    LEA EAX,[ESP + 0x4]                 ; 0058b10e
    PUSH EAX                            ; 0058b112
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 0058b113
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0058b118
    PUSH EAX                            ; 0058b11b
    PUSH 0x64a5c9                       ; 0058b11c | = "%s\r\n"
    PUSH ESI                            ; 0058b121
    INC EBX                             ; 0058b122
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0058b123
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058b128
    MOV EDI,dword ptr [EBP]             ; 0058b12b
    ADD ESI,EAX                         ; 0058b12e
    CMP EBX,EDI                         ; 0058b130
    JL 0x0058b10d                       ; 0058b132
        ;   XREF to: 0058b10d (CONDITIONAL_JUMP)  ; LAB_0058b10d
    LEA EAX,[EAX]                       ; 0058b134
    LEA EDX,[EDX]                       ; 0058b13a
    PUSH 0x366b650                      ; 0058b140 | DAT_0366b650
        ;   Label: LAB_0058b140
    MOV EBP,dword ptr [0x00678a60]      ; 0058b145 | g_CEditorToolsPtr
    PUSH EBP                            ; 0058b14b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 0058b14c
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0058b151
    JMP 0x0058b0c9                      ; 0058b154
        ;   XREF to: 0058b0c9 (UNCONDITIONAL_JUMP)  ; LAB_0058b0c9

