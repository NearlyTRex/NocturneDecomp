; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 at 0047ad9e
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_0047fc30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0047ac10
        ;   Label: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ac13
    MOV ECX,dword ptr [EAX + 0x134]     ; 0047ac17
    MOV EDX,dword ptr [EAX + 0x138]     ; 0047ac1d
    CMP EDX,ECX                         ; 0047ac23
    JZ 0x0047ac59                       ; 0047ac25
        ;   XREF to: 0047ac59 (CONDITIONAL_JUMP)  ; LAB_0047ac59
    PUSH ESI                            ; 0047ac27
    PUSH EBX                            ; 0047ac28
    JLE 0x0047ac31                      ; 0047ac29
        ;   XREF to: 0047ac31 (CONDITIONAL_JUMP)  ; LAB_0047ac31
    MOV EBX,EDX                         ; 0047ac2b
    MOV EDX,ECX                         ; 0047ac2d
    MOV ECX,EBX                         ; 0047ac2f
    LEA EBX,[EAX + ECX*0x1]             ; 0047ac31
        ;   Label: LAB_0047ac31
    ADD EAX,EDX                         ; 0047ac34
    XOR ECX,ECX                         ; 0047ac36
    PUSH EAX                            ; 0047ac38
    MOV ESI,dword ptr [0x006138e0]      ; 0047ac39 | g_CEditorToolsPtr
    MOV CL,byte ptr [EBX]               ; 0047ac3f
    PUSH ESI                            ; 0047ac41
    MOV dword ptr [ESP + 0x10],ECX      ; 0047ac42
    MOV byte ptr [EBX],0x0              ; 0047ac46
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_0047fc30 ; 0047ac49
        ;   XREF to: 0047fc30 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setClipboardText_FUN_0047fc30(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0047ac4e
    MOV AL,byte ptr [ESP + 0x8]         ; 0047ac51
    MOV byte ptr [EBX],AL               ; 0047ac55
    POP EBX                             ; 0047ac57
    POP ESI                             ; 0047ac58
    ADD ESP,0x4                         ; 0047ac59
        ;   Label: LAB_0047ac59
    RET                                 ; 0047ac5c

