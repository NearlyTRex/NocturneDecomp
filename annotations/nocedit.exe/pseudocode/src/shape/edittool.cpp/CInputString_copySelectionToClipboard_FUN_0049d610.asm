; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d7e1
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0049d610
        ;   Label: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d613
    MOV ECX,dword ptr [EAX + 0x134]     ; 0049d617
    MOV EDX,dword ptr [EAX + 0x138]     ; 0049d61d
    CMP EDX,ECX                         ; 0049d623
    JZ 0x0049d659                       ; 0049d625
        ;   XREF to: 0049d659 (CONDITIONAL_JUMP)  ; LAB_0049d659
    PUSH ESI                            ; 0049d627
    PUSH EBX                            ; 0049d628
    JLE 0x0049d631                      ; 0049d629
        ;   XREF to: 0049d631 (CONDITIONAL_JUMP)  ; LAB_0049d631
    MOV EBX,EDX                         ; 0049d62b
    MOV EDX,ECX                         ; 0049d62d
    MOV ECX,EBX                         ; 0049d62f
    LEA EBX,[EAX + ECX*0x1]             ; 0049d631
        ;   Label: LAB_0049d631
    ADD EAX,EDX                         ; 0049d634
    XOR ECX,ECX                         ; 0049d636
    PUSH EAX                            ; 0049d638
    MOV ESI,dword ptr [0x00678a60]      ; 0049d639 | g_CEditorToolsPtr
    MOV CL,byte ptr [EBX]               ; 0049d63f
    PUSH ESI                            ; 0049d641 | g_CEditorToolsInstance
    MOV dword ptr [ESP + 0x10],ECX      ; 0049d642
    MOV byte ptr [EBX],0x0              ; 0049d646
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0 ; 0049d649
        ;   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0049d64e
    MOV AL,byte ptr [ESP + 0x8]         ; 0049d651
    MOV byte ptr [EBX],AL               ; 0049d655
    POP EBX                             ; 0049d657
    POP ESI                             ; 0049d658
    ADD ESP,0x4                         ; 0049d659
        ;   Label: LAB_0049d659
    RET                                 ; 0049d65c

