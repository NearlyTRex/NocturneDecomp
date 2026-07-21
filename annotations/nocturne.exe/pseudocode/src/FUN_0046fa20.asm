; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0046fa20(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01bcd078
;   undefined4 DAT_01bcd07c
;
; Called Functions:
;   FUN_005638d0
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fa20
        ;   Label: FUN_0046fa20
    PUSH ESI                            ; 0046fa21
    PUSH EBP                            ; 0046fa22
    MOV EDX,dword ptr [0x01bcd07c]      ; 0046fa23 | DAT_01bcd07c
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046fa29
    TEST EDX,EDX                        ; 0046fa2d
    JLE 0x0046fa50                      ; 0046fa2f
        ;   XREF to: 0046fa50 (CONDITIONAL_JUMP)  ; LAB_0046fa50
    PUSH EBX                            ; 0046fa31
        ;   Label: LAB_0046fa31
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0 ; 0046fa32
        ;   XREF to: 004721e0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0()
    MOV ECX,dword ptr [0x01bcd07c]      ; 0046fa37 | DAT_01bcd07c
    ADD ESP,0x4                         ; 0046fa3d
    TEST ECX,ECX                        ; 0046fa40
    JG 0x0046fa31                       ; 0046fa42
        ;   XREF to: 0046fa31 (CONDITIONAL_JUMP)  ; LAB_0046fa31
    LEA EAX,[EAX]                       ; 0046fa44
    LEA EDX,[EDX]                       ; 0046fa4a
    MOV ESI,dword ptr [0x01bcd078]      ; 0046fa50 | DAT_01bcd078
        ;   Label: LAB_0046fa50
    TEST ESI,ESI                        ; 0046fa56
    JNZ 0x0046fa60                      ; 0046fa58
        ;   XREF to: 0046fa60 (CONDITIONAL_JUMP)  ; LAB_0046fa60
    MOV EAX,EBX                         ; 0046fa5a
    POP EBP                             ; 0046fa5c
    POP ESI                             ; 0046fa5d
    POP EBX                             ; 0046fa5e
    RET                                 ; 0046fa5f
    PUSH ESI                            ; 0046fa60
        ;   Label: LAB_0046fa60
    CALL FUN_005638d0                   ; 0046fa61
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    XOR EBP,EBP                         ; 0046fa66
    ADD ESP,0x4                         ; 0046fa68
    MOV dword ptr [0x01bcd078],EBP      ; 0046fa6b | DAT_01bcd078
    MOV EAX,EBX                         ; 0046fa71
    POP EBP                             ; 0046fa73
    POP ESI                             ; 0046fa74
    POP EBX                             ; 0046fa75
    RET                                 ; 0046fa76

