; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 at 0047be2e
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;
; Called Functions:
;   shape_edittool.cpp_FUN_00480e30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0047bca0
        ;   Label: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047bca3
    MOV ECX,dword ptr [EAX + 0x134]     ; 0047bca7
    MOV EDX,dword ptr [EAX + 0x138]     ; 0047bcad
    CMP EDX,ECX                         ; 0047bcb3
    JZ 0x0047bce9                       ; 0047bcb5
        ;   XREF to: 0047bce9 (CONDITIONAL_JUMP)  ; LAB_0047bce9
    PUSH ESI                            ; 0047bcb7
    PUSH EBX                            ; 0047bcb8
    JLE 0x0047bcc1                      ; 0047bcb9
        ;   XREF to: 0047bcc1 (CONDITIONAL_JUMP)  ; LAB_0047bcc1
    MOV EBX,EDX                         ; 0047bcbb
    MOV EDX,ECX                         ; 0047bcbd
    MOV ECX,EBX                         ; 0047bcbf
    LEA EBX,[EAX + ECX*0x1]             ; 0047bcc1
        ;   Label: LAB_0047bcc1
    ADD EAX,EDX                         ; 0047bcc4
    XOR ECX,ECX                         ; 0047bcc6
    PUSH EAX                            ; 0047bcc8
    MOV ESI,dword ptr [0x005fb140]      ; 0047bcc9 | g_CEditorToolsPtr
    MOV CL,byte ptr [EBX]               ; 0047bccf
    PUSH ESI                            ; 0047bcd1
    MOV dword ptr [ESP + 0x10],ECX      ; 0047bcd2
    MOV byte ptr [EBX],0x0              ; 0047bcd6
    CALL shape_edittool.cpp_FUN_00480e30 ; 0047bcd9
        ;   XREF to: 00480e30 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00480e30(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 0047bcde
    MOV AL,byte ptr [ESP + 0x8]         ; 0047bce1
    MOV byte ptr [EBX],AL               ; 0047bce5
    POP EBX                             ; 0047bce7
    POP ESI                             ; 0047bce8
    ADD ESP,0x4                         ; 0047bce9
        ;   Label: LAB_0047bce9
    RET                                 ; 0047bcec

