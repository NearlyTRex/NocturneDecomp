; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00499ba0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleInput_FUN_0049a9b0 at 0049aa40
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc566
;   TerminatedCString s_CStrList_copyToClipboard_005dc57c
;   undefined4 DAT_005dc5bd
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_sprintf_FUN_005bfb40
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_FUN_00498290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499ba0
        ;   Label: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0
    PUSH ESI                            ; 00499ba1
    PUSH EDI                            ; 00499ba2
    PUSH EBP                            ; 00499ba3
    SUB ESP,0x4                         ; 00499ba4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00499ba7
    MOV EDX,dword ptr [EBX]             ; 00499bab
    XOR ESI,ESI                         ; 00499bad
    XOR EBP,EBP                         ; 00499baf
    TEST EDX,EDX                        ; 00499bb1
    JLE 0x00499be0                      ; 00499bb3
        ;   XREF to: 00499be0 (CONDITIONAL_JUMP)  ; LAB_00499be0
    PUSH ESI                            ; 00499bb5
        ;   Label: LAB_00499bb5
    PUSH EBX                            ; 00499bb6
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 00499bb7
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00499bbc
    MOV EDI,EAX                         ; 00499bbf
    SUB ECX,ECX                         ; 00499bc1
    DEC ECX                             ; 00499bc3
    XOR EAX,EAX                         ; 00499bc4
    SCASB.REPNE ES:EDI                  ; 00499bc6
    NOT ECX                             ; 00499bc8
    DEC ECX                             ; 00499bca
    INC ECX                             ; 00499bcb
    INC ESI                             ; 00499bcc
    ADD EBP,ECX                         ; 00499bcd
    CMP ESI,dword ptr [EBX]             ; 00499bcf
    JL 0x00499bb5                       ; 00499bd1
        ;   XREF to: 00499bb5 (CONDITIONAL_JUMP)  ; LAB_00499bb5
    LEA EAX,[EAX]                       ; 00499bd3
    LEA EDX,[EDX]                       ; 00499bd9
    NOP                                 ; 00499bdf
    INC EBP                             ; 00499be0
        ;   Label: LAB_00499be0
    PUSH EBP                            ; 00499be1
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00499be2
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 00499be7
    MOV dword ptr [ESP],EAX             ; 00499bea
    TEST EAX,EAX                        ; 00499bed
    JNZ 0x00499c18                      ; 00499bef
        ;   XREF to: 00499c18 (CONDITIONAL_JUMP)  ; LAB_00499c18
    PUSH EBP                            ; 00499bf1
    MOV EBP,dword ptr [EBX]             ; 00499bf2
    PUSH EBP                            ; 00499bf4
    MOV ESI,0x5dc566                    ; 00499bf5 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xd4a                       ; 00499bfa
    PUSH 0x5dc57c                       ; 00499bff | = "CStrList::copyToClipboard - out of me..."
    MOV dword ptr [0x01d1d400],ESI      ; 00499c04 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499c0a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00499c10
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00499c15
    MOV EDI,dword ptr [ESP]             ; 00499c18
        ;   Label: LAB_00499c18
    MOV EAX,dword ptr [EBX]             ; 00499c1b
    XOR ESI,ESI                         ; 00499c1d
    TEST EAX,EAX                        ; 00499c1f
    JLE 0x00499c50                      ; 00499c21
        ;   XREF to: 00499c50 (CONDITIONAL_JUMP)  ; LAB_00499c50
    PUSH ESI                            ; 00499c23
        ;   Label: LAB_00499c23
    PUSH EBX                            ; 00499c24
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 00499c25
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00499c2a
    PUSH EAX                            ; 00499c2d
    PUSH 0x5dc5bd                       ; 00499c2e | DAT_005dc5bd
    PUSH EDI                            ; 00499c33
    INC ESI                             ; 00499c34
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00499c35
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00499c3a
    MOV EDX,dword ptr [EBX]             ; 00499c3d
    ADD EDI,EAX                         ; 00499c3f
    CMP ESI,EDX                         ; 00499c41
    JL 0x00499c23                       ; 00499c43
        ;   XREF to: 00499c23 (CONDITIONAL_JUMP)  ; LAB_00499c23
    LEA EAX,[EAX]                       ; 00499c45
    LEA EDX,[EDX]                       ; 00499c4b
    MOV EBX,EBX                         ; 00499c4e
    MOV ECX,dword ptr [ESP]             ; 00499c50
        ;   Label: LAB_00499c50
    PUSH ECX                            ; 00499c53
    MOV EBX,dword ptr [0x0061abc0]      ; 00499c54 | g_CEditorToolsPtr
    PUSH EBX                            ; 00499c5a
    MOV byte ptr [EDI],0x0              ; 00499c5b
    CALL shape_edittool.cpp_FUN_00498290 ; 00499c5e
        ;   XREF to: 00498290 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00498290(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 00499c63
    MOV ESI,dword ptr [ESP]             ; 00499c66
    PUSH ESI                            ; 00499c69
    CALL crt_unknown.c_FUN_005c0336     ; 00499c6a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00499c6f
    ADD ESP,0x4                         ; 00499c72
    POP EBP                             ; 00499c75
    POP EDI                             ; 00499c76
    POP ESI                             ; 00499c77
    POP EBX                             ; 00499c78
    RET                                 ; 00499c79

