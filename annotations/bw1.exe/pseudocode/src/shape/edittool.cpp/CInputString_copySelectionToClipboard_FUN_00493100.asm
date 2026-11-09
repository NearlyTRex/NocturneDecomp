; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_00493100(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0 at 0049328e
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;
; Called Functions:
;   shape_edittool.cpp_FUN_00498290
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00493100
        ;   Label: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_00493100
    MOV EAX,dword ptr [ESP + 0x8]       ; 00493103
    MOV ECX,dword ptr [EAX + 0x134]     ; 00493107
    MOV EDX,dword ptr [EAX + 0x138]     ; 0049310d
    CMP EDX,ECX                         ; 00493113
    JZ 0x00493149                       ; 00493115
        ;   XREF to: 00493149 (CONDITIONAL_JUMP)  ; LAB_00493149
    PUSH ESI                            ; 00493117
    PUSH EBX                            ; 00493118
    JLE 0x00493121                      ; 00493119
        ;   XREF to: 00493121 (CONDITIONAL_JUMP)  ; LAB_00493121
    MOV EBX,EDX                         ; 0049311b
    MOV EDX,ECX                         ; 0049311d
    MOV ECX,EBX                         ; 0049311f
    LEA EBX,[EAX + ECX*0x1]             ; 00493121
        ;   Label: LAB_00493121
    ADD EAX,EDX                         ; 00493124
    XOR ECX,ECX                         ; 00493126
    PUSH EAX                            ; 00493128
    MOV ESI,dword ptr [0x0061abc0]      ; 00493129 | g_CEditorToolsPtr
    MOV CL,byte ptr [EBX]               ; 0049312f
    PUSH ESI                            ; 00493131
    MOV dword ptr [ESP + 0x10],ECX      ; 00493132
    MOV byte ptr [EBX],0x0              ; 00493136
    CALL shape_edittool.cpp_FUN_00498290 ; 00493139
        ;   XREF to: 00498290 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00498290(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0049313e
    MOV AL,byte ptr [ESP + 0x8]         ; 00493141
    MOV byte ptr [EBX],AL               ; 00493145
    POP EBX                             ; 00493147
    POP ESI                             ; 00493148
    ADD ESP,0x4                         ; 00493149
        ;   Label: LAB_00493149
    RET                                 ; 0049314c

