; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047acc0(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270 at 0047d4e8
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b5ea
;
; Referenced Globals:
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01d02f84
;
; Called Functions:
;   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0047ab10
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60
;   wincore_winrun.cpp_clearKeypresses_FUN_0058eab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047acc0
        ;   Label: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0
    PUSH ESI                            ; 0047acc1
    PUSH EDI                            ; 0047acc2
    PUSH EBP                            ; 0047acc3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047acc4
    PUSH 0x4b                           ; 0047acc8
    MOV EAX,[0x00617dd4]                ; 0047acca | DAT_00617dd4
    PUSH EAX                            ; 0047accf | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047acd0 | DAT_01d02f84
    XOR ESI,ESI                         ; 0047acd2
    CALL dword ptr [EDX + 0x4]          ; 0047acd4
    ADD ESP,0x8                         ; 0047acd7
    TEST EAX,EAX                        ; 0047acda
    JZ 0x0047acf7                       ; 0047acdc
        ;   XREF to: 0047acf7 (CONDITIONAL_JUMP)  ; LAB_0047acf7
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047acde
    MOV ESI,0x1                         ; 0047ace4
    TEST EDX,EDX                        ; 0047ace9
    JLE 0x0047acf7                      ; 0047aceb
        ;   XREF to: 0047acf7 (CONDITIONAL_JUMP)  ; LAB_0047acf7
    MOV ECX,EDX                         ; 0047aced
    SUB ECX,ESI                         ; 0047acef
    MOV dword ptr [EBX + 0x134],ECX     ; 0047acf1
    PUSH 0x4d                           ; 0047acf7
        ;   Label: LAB_0047acf7
    MOV EAX,[0x00617dd4]                ; 0047acf9 | DAT_00617dd4
    PUSH EAX                            ; 0047acfe | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047acff | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047ad01
    ADD ESP,0x8                         ; 0047ad04
    TEST EAX,EAX                        ; 0047ad07
    JZ 0x0047ad29                       ; 0047ad09
        ;   XREF to: 0047ad29 (CONDITIONAL_JUMP)  ; LAB_0047ad29
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047ad0b
    MOV EDI,dword ptr [EBX + 0x130]     ; 0047ad11
    MOV ESI,0x1                         ; 0047ad17
    CMP EAX,EDI                         ; 0047ad1c
    JGE 0x0047ad29                      ; 0047ad1e
        ;   XREF to: 0047ad29 (CONDITIONAL_JUMP)  ; LAB_0047ad29
    LEA EBP,[EAX + ESI*0x1]             ; 0047ad20
    MOV dword ptr [EBX + 0x134],EBP     ; 0047ad23
    PUSH 0x47                           ; 0047ad29
        ;   Label: LAB_0047ad29
    MOV EAX,[0x00617dd4]                ; 0047ad2b | DAT_00617dd4
    PUSH EAX                            ; 0047ad30 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047ad31 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047ad33
    ADD ESP,0x8                         ; 0047ad36
    TEST EAX,EAX                        ; 0047ad39
    JZ 0x0047ad4c                       ; 0047ad3b
        ;   XREF to: 0047ad4c (CONDITIONAL_JUMP)  ; LAB_0047ad4c
    MOV ESI,0x1                         ; 0047ad3d
    MOV dword ptr [EBX + 0x134],0x0     ; 0047ad42
    PUSH 0x4f                           ; 0047ad4c
        ;   Label: LAB_0047ad4c
    MOV EAX,[0x00617dd4]                ; 0047ad4e | DAT_00617dd4
    PUSH EAX                            ; 0047ad53 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047ad54 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047ad56
    ADD ESP,0x8                         ; 0047ad59
    TEST EAX,EAX                        ; 0047ad5c
    JZ 0x0047ad71                       ; 0047ad5e
        ;   XREF to: 0047ad71 (CONDITIONAL_JUMP)  ; LAB_0047ad71
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047ad60
    MOV ESI,0x1                         ; 0047ad66
    MOV dword ptr [EBX + 0x134],EAX     ; 0047ad6b
    PUSH 0x1d                           ; 0047ad71
        ;   Label: LAB_0047ad71
    MOV EAX,[0x00617dd4]                ; 0047ad73 | DAT_00617dd4
    PUSH EAX                            ; 0047ad78 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047ad79 | DAT_01d02f84
    CALL dword ptr [EDX]                ; 0047ad7b
    ADD ESP,0x8                         ; 0047ad7d
    TEST EAX,EAX                        ; 0047ad80
    JZ 0x0047ae37                       ; 0047ad82
        ;   XREF to: 0047ae37 (CONDITIONAL_JUMP)  ; LAB_0047ae37
    PUSH 0x2d                           ; 0047ad88
    MOV ESI,dword ptr [0x00617dd4]      ; 0047ad8a | DAT_00617dd4
    PUSH ESI                            ; 0047ad90 | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 0047ad91 | DAT_01d02f84
    CALL dword ptr [EAX + 0x4]          ; 0047ad93
    ADD ESP,0x8                         ; 0047ad96
    TEST EAX,EAX                        ; 0047ad99
    JZ 0x0047adaf                       ; 0047ad9b
        ;   XREF to: 0047adaf (CONDITIONAL_JUMP)  ; LAB_0047adaf
    PUSH EBX                            ; 0047ad9d
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10 ; 0047ad9e
        ;   XREF to: 0047ac10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ada3
    PUSH EBX                            ; 0047ada6
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047ada7
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047adac
    PUSH 0x52                           ; 0047adaf
        ;   Label: LAB_0047adaf
    MOV EAX,[0x00617dd4]                ; 0047adb1 | DAT_00617dd4
    PUSH EAX                            ; 0047adb6 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047adb7 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047adb9
    ADD ESP,0x8                         ; 0047adbc
    TEST EAX,EAX                        ; 0047adbf
    JZ 0x0047adcc                       ; 0047adc1
        ;   XREF to: 0047adcc (CONDITIONAL_JUMP)  ; LAB_0047adcc
    PUSH EBX                            ; 0047adc3
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10 ; 0047adc4
        ;   XREF to: 0047ac10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047adc9
    PUSH 0x2e                           ; 0047adcc
        ;   Label: LAB_0047adcc
    MOV EAX,[0x00617dd4]                ; 0047adce | DAT_00617dd4
    PUSH EAX                            ; 0047add3 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047add4 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047add6
    ADD ESP,0x8                         ; 0047add9
    TEST EAX,EAX                        ; 0047addc
    JZ 0x0047ade9                       ; 0047adde
        ;   XREF to: 0047ade9 (CONDITIONAL_JUMP)  ; LAB_0047ade9
    PUSH EBX                            ; 0047ade0
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10 ; 0047ade1
        ;   XREF to: 0047ac10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ade6
    PUSH 0x2f                           ; 0047ade9
        ;   Label: LAB_0047ade9
    MOV EAX,[0x00617dd4]                ; 0047adeb | DAT_00617dd4
    PUSH EAX                            ; 0047adf0 | DAT_01d02f84
    MOV ESI,dword ptr [EAX]             ; 0047adf1 | DAT_01d02f84
    CALL dword ptr [ESI + 0x4]          ; 0047adf3
    ADD ESP,0x8                         ; 0047adf6
    TEST EAX,EAX                        ; 0047adf9
    JZ 0x0047ae0f                       ; 0047adfb
        ;   XREF to: 0047ae0f (CONDITIONAL_JUMP)  ; LAB_0047ae0f
    PUSH EBX                            ; 0047adfd
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047adfe
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae03
    PUSH EBX                            ; 0047ae06
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60 ; 0047ae07
        ;   XREF to: 0047ac60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae0c
    PUSH 0x53                           ; 0047ae0f
        ;   Label: LAB_0047ae0f
    MOV ESI,dword ptr [0x00617dd4]      ; 0047ae11 | DAT_00617dd4
    PUSH ESI                            ; 0047ae17 | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 0047ae18 | DAT_01d02f84
    CALL dword ptr [EAX + 0x4]          ; 0047ae1a
    ADD ESP,0x8                         ; 0047ae1d
    TEST EAX,EAX                        ; 0047ae20
    JZ 0x0047ae2d                       ; 0047ae22
        ;   XREF to: 0047ae2d (CONDITIONAL_JUMP)  ; LAB_0047ae2d
    PUSH EBX                            ; 0047ae24
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047ae25
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae2a
    CALL wincore_winrun.cpp_clearKeypresses_FUN_0058eab0 ; 0047ae2d
        ;   XREF to: 0058eab0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_0058eab0()
        ;   Label: LAB_0047ae2d
    POP EBP                             ; 0047ae32
        ;   Label: LAB_0047ae32
    POP EDI                             ; 0047ae33
    POP ESI                             ; 0047ae34
    POP EBX                             ; 0047ae35
    RET                                 ; 0047ae36
    PUSH 0x2a                           ; 0047ae37
        ;   Label: LAB_0047ae37
    MOV EAX,[0x00617dd4]                ; 0047ae39 | DAT_00617dd4
    PUSH EAX                            ; 0047ae3e | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047ae3f | DAT_01d02f84
    CALL dword ptr [EDX]                ; 0047ae41
    ADD ESP,0x8                         ; 0047ae43
    TEST EAX,EAX                        ; 0047ae46
    JZ 0x0047ae9b                       ; 0047ae48
        ;   XREF to: 0047ae9b (CONDITIONAL_JUMP)  ; LAB_0047ae9b
    PUSH 0x52                           ; 0047ae4a
    MOV EAX,[0x00617dd4]                ; 0047ae4c | DAT_00617dd4
    PUSH EAX                            ; 0047ae51 | DAT_01d02f84
    MOV ESI,dword ptr [EAX]             ; 0047ae52 | DAT_01d02f84
    CALL dword ptr [ESI + 0x4]          ; 0047ae54
    ADD ESP,0x8                         ; 0047ae57
    TEST EAX,EAX                        ; 0047ae5a
    JZ 0x0047ae70                       ; 0047ae5c
        ;   XREF to: 0047ae70 (CONDITIONAL_JUMP)  ; LAB_0047ae70
    PUSH EBX                            ; 0047ae5e
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047ae5f
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae64
    PUSH EBX                            ; 0047ae67
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60 ; 0047ae68
        ;   XREF to: 0047ac60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae6d
    PUSH 0x53                           ; 0047ae70
        ;   Label: LAB_0047ae70
    MOV EAX,[0x00617dd4]                ; 0047ae72 | DAT_00617dd4
    PUSH EAX                            ; 0047ae77 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 0047ae78 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 0047ae7a
    ADD ESP,0x8                         ; 0047ae7d
    TEST EAX,EAX                        ; 0047ae80
    JZ 0x0047ae32                       ; 0047ae82
        ;   XREF to: 0047ae32 (CONDITIONAL_JUMP)  ; LAB_0047ae32
    PUSH EBX                            ; 0047ae84
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10 ; 0047ae85
        ;   XREF to: 0047ac10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047ac10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae8a
    PUSH EBX                            ; 0047ae8d
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047ae8e
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047ae93
    POP EBP                             ; 0047ae96
    POP EDI                             ; 0047ae97
    POP ESI                             ; 0047ae98
    POP EBX                             ; 0047ae99
    RET                                 ; 0047ae9a
    TEST ESI,ESI                        ; 0047ae9b
        ;   Label: LAB_0047ae9b
    JZ 0x0047aea8                       ; 0047ae9d
        ;   XREF to: 0047aea8 (CONDITIONAL_JUMP)  ; LAB_0047aea8
    PUSH EBX                            ; 0047ae9f
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60 ; 0047aea0
        ;   XREF to: 0047aa60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047aea5
    PUSH 0x53                           ; 0047aea8
        ;   Label: LAB_0047aea8
    MOV ESI,dword ptr [0x00617dd4]      ; 0047aeaa | DAT_00617dd4
    PUSH ESI                            ; 0047aeb0 | DAT_01d02f84
    MOV EAX,dword ptr [ESI]             ; 0047aeb1 | DAT_01d02f84
    CALL dword ptr [EAX + 0x4]          ; 0047aeb3
    ADD ESP,0x8                         ; 0047aeb6
    TEST EAX,EAX                        ; 0047aeb9
    JZ 0x0047ae32                       ; 0047aebb
        ;   XREF to: 0047ae32 (CONDITIONAL_JUMP)  ; LAB_0047ae32
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047aec1
    CMP EDX,dword ptr [EBX + 0x138]     ; 0047aec7
    JZ 0x0047aedd                       ; 0047aecd
        ;   XREF to: 0047aedd (CONDITIONAL_JUMP)  ; LAB_0047aedd
    PUSH EBX                            ; 0047aecf
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80 ; 0047aed0
        ;   XREF to: 0047ab80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047ab80(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047aed5
    POP EBP                             ; 0047aed8
    POP EDI                             ; 0047aed9
    POP ESI                             ; 0047aeda
    POP EBX                             ; 0047aedb
    RET                                 ; 0047aedc
    LEA EAX,[EDX + 0x1]                 ; 0047aedd
        ;   Label: LAB_0047aedd
    PUSH EAX                            ; 0047aee0
    PUSH EDX                            ; 0047aee1
    PUSH EBX                            ; 0047aee2
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0047ab10 ; 0047aee3
        ;   XREF to: 0047ab10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0047ab10(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 0047aee8
    POP EBP                             ; 0047aeeb
    POP EDI                             ; 0047aeec
    POP ESI                             ; 0047aeed
    POP EBX                             ; 0047aeee
    RET                                 ; 0047aeef

