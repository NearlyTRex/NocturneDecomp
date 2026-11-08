; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496df0(void)
;
;
; XREF[2]:
;   FUN_00493bd0 at 00493be2
;   FUN_00496dd0 at 00496ddf
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc127
;   TerminatedCString s_CEditorTools_popWindow_c_005dc13d
;   undefined4 DAT_01c3eb5c
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f018
;   undefined4 DAT_01c4f01c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00511850
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496df0
        ;   Label: FUN_00496df0
    PUSH ESI                            ; 00496df1
    PUSH EDI                            ; 00496df2
    CMP dword ptr [0x01c3eb5c],0x1      ; 00496df3 | DAT_01c3eb5c
    JL 0x00496e97                       ; 00496dfa
        ;   XREF to: 00496e97 (CONDITIONAL_JUMP)  ; LAB_00496e97
    MOV ESI,dword ptr [0x01c3eb5c]      ; 00496e00 | DAT_01c3eb5c
        ;   Label: LAB_00496e00
    DEC ESI                             ; 00496e06
    MOV dword ptr [0x01c3eb5c],ESI      ; 00496e07 | DAT_01c3eb5c
    LEA EBX,[ESI*0x8 + 0x0]             ; 00496e0d
    MOV EAX,EBX                         ; 00496e14
    SHL EBX,0x6                         ; 00496e16
    SUB EBX,EAX                         ; 00496e19
    ADD EBX,0x1c3eb60                   ; 00496e1b
    MOV EDI,dword ptr [EBX + 0x1d8]     ; 00496e21
    TEST EDI,EDI                        ; 00496e27
    JNZ 0x00496ebf                      ; 00496e29
        ;   XREF to: 00496ebf (CONDITIONAL_JUMP)  ; LAB_00496ebf
    PUSH dword ptr [EBX + 0x2c]         ; 00496e2f
        ;   Label: LAB_00496e2f
    PUSH dword ptr [EBX + 0x28]         ; 00496e32
    PUSH dword ptr [EBX + 0x24]         ; 00496e35
    PUSH dword ptr [EBX + 0x20]         ; 00496e38
    CALL FUN_00511850                   ; 00496e3b
        ;   XREF to: 00511850 (UNCONDITIONAL_CALL)  ; undefined FUN_00511850()
    MOV EAX,dword ptr [EBX + 0x10]      ; 00496e40
    MOV [0x01c4f008],EAX                ; 00496e43 | DAT_01c4f008
    MOV EAX,dword ptr [EBX + 0x14]      ; 00496e48
    MOV [0x01c4f00c],EAX                ; 00496e4b | DAT_01c4f00c
    MOV EAX,dword ptr [EBX + 0x18]      ; 00496e50
    MOV [0x01c4f010],EAX                ; 00496e53 | DAT_01c4f010
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00496e58
    MOV [0x01c4f014],EAX                ; 00496e5b | DAT_01c4f014
    MOV EAX,dword ptr [EBX + 0x30]      ; 00496e60
    MOV [0x01c4eff8],EAX                ; 00496e63 | DAT_01c4eff8
    MOV EAX,dword ptr [EBX + 0x34]      ; 00496e68
    MOV [0x01c4effc],EAX                ; 00496e6b | DAT_01c4effc
    MOV EAX,dword ptr [EBX + 0x38]      ; 00496e70
    MOV [0x01c4f000],EAX                ; 00496e73 | DAT_01c4f000
    MOV EAX,dword ptr [EBX + 0x3c]      ; 00496e78
    MOV [0x01c4f004],EAX                ; 00496e7b | DAT_01c4f004
    MOV EAX,dword ptr [EBX + 0x40]      ; 00496e80
    MOV [0x01c4f018],EAX                ; 00496e83 | DAT_01c4f018
    MOV EAX,dword ptr [EBX + 0x44]      ; 00496e88
    ADD ESP,0x10                        ; 00496e8b
    MOV [0x01c4f01c],EAX                ; 00496e8e | DAT_01c4f01c
    POP EDI                             ; 00496e93
    POP ESI                             ; 00496e94
    POP EBX                             ; 00496e95
    RET                                 ; 00496e96
    MOV ECX,0x5dc127                    ; 00496e97 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00496e97
    MOV EBX,0x913                       ; 00496e9c
    PUSH 0x5dc13d                       ; 00496ea1 | = "CEditorTools::popWindow() called but ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00496ea6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00496eac | DAT_01d1d404
    CALL FUN_005030e0                   ; 00496eb2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00496eb7
    JMP 0x00496e00                      ; 00496eba
        ;   XREF to: 00496e00 (UNCONDITIONAL_JUMP)  ; LAB_00496e00
    PUSH EDI                            ; 00496ebf
        ;   Label: LAB_00496ebf
    CALL FUN_005c09f0                   ; 00496ec0
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00496ec5
    MOV dword ptr [EBX + 0x1d8],0x0     ; 00496ec8
    JMP 0x00496e2f                      ; 00496ed2
        ;   XREF to: 00496e2f (UNCONDITIONAL_JUMP)  ; LAB_00496e2f

