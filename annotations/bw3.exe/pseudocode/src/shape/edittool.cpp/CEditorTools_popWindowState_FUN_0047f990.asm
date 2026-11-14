; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_dtor_FUN_0047c770 at 0047c782
;   shape_edittool.cpp_FUN_0047f970 at 0047f97f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd1e4
;   TerminatedCString s_CEditorTools_popWindow_c_005bd1fa
;   undefined4 DAT_01c5b104
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6b5b8
;   undefined4 DAT_01c6b5bc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3770
;   engine_mini3d.cpp_setRenderViewport_FUN_004ed020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f990
        ;   Label: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990
    PUSH ESI                            ; 0047f991
    PUSH EDI                            ; 0047f992
    CMP dword ptr [0x01c5b104],0x1      ; 0047f993 | DAT_01c5b104
    JL 0x0047fa37                       ; 0047f99a
        ;   XREF to: 0047fa37 (CONDITIONAL_JUMP)  ; LAB_0047fa37
    MOV ESI,dword ptr [0x01c5b104]      ; 0047f9a0 | DAT_01c5b104
        ;   Label: LAB_0047f9a0
    DEC ESI                             ; 0047f9a6
    MOV dword ptr [0x01c5b104],ESI      ; 0047f9a7 | DAT_01c5b104
    LEA EBX,[ESI*0x8 + 0x0]             ; 0047f9ad
    MOV EAX,EBX                         ; 0047f9b4
    SHL EBX,0x6                         ; 0047f9b6
    SUB EBX,EAX                         ; 0047f9b9
    ADD EBX,0x1c5b108                   ; 0047f9bb
    MOV EDI,dword ptr [EBX + 0x1d8]     ; 0047f9c1
    TEST EDI,EDI                        ; 0047f9c7
    JNZ 0x0047fa5f                      ; 0047f9c9
        ;   XREF to: 0047fa5f (CONDITIONAL_JUMP)  ; LAB_0047fa5f
    PUSH dword ptr [EBX + 0x2c]         ; 0047f9cf
        ;   Label: LAB_0047f9cf
    PUSH dword ptr [EBX + 0x28]         ; 0047f9d2
    PUSH dword ptr [EBX + 0x24]         ; 0047f9d5
    PUSH dword ptr [EBX + 0x20]         ; 0047f9d8
    CALL engine_mini3d.cpp_setRenderViewport_FUN_004ed020 ; 0047f9db
        ;   XREF to: 004ed020 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setRenderViewport_FUN_004ed020(float left, float top, float right, float bottom)
    MOV EAX,dword ptr [EBX + 0x10]      ; 0047f9e0
    MOV [0x01c6b5a8],EAX                ; 0047f9e3 | DAT_01c6b5a8
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047f9e8
    MOV [0x01c6b5ac],EAX                ; 0047f9eb | DAT_01c6b5ac
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047f9f0
    MOV [0x01c6b5b0],EAX                ; 0047f9f3 | DAT_01c6b5b0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0047f9f8
    MOV [0x01c6b5b4],EAX                ; 0047f9fb | DAT_01c6b5b4
    MOV EAX,dword ptr [EBX + 0x30]      ; 0047fa00
    MOV [0x01c6b598],EAX                ; 0047fa03 | DAT_01c6b598
    MOV EAX,dword ptr [EBX + 0x34]      ; 0047fa08
    MOV [0x01c6b59c],EAX                ; 0047fa0b | DAT_01c6b59c
    MOV EAX,dword ptr [EBX + 0x38]      ; 0047fa10
    MOV [0x01c6b5a0],EAX                ; 0047fa13 | DAT_01c6b5a0
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0047fa18
    MOV [0x01c6b5a4],EAX                ; 0047fa1b | DAT_01c6b5a4
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047fa20
    MOV [0x01c6b5b8],EAX                ; 0047fa23 | DAT_01c6b5b8
    MOV EAX,dword ptr [EBX + 0x44]      ; 0047fa28
    ADD ESP,0x10                        ; 0047fa2b
    MOV [0x01c6b5bc],EAX                ; 0047fa2e | DAT_01c6b5bc
    POP EDI                             ; 0047fa33
    POP ESI                             ; 0047fa34
    POP EBX                             ; 0047fa35
    RET                                 ; 0047fa36
    MOV ECX,0x5bd1e4                    ; 0047fa37 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047fa37
    MOV EBX,0x916                       ; 0047fa3c
    PUSH 0x5bd1fa                       ; 0047fa41 | = "CEditorTools::popWindow() called but ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0047fa46 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0047fa4c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0047fa52
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0047fa57
    JMP 0x0047f9a0                      ; 0047fa5a
        ;   XREF to: 0047f9a0 (UNCONDITIONAL_JUMP)  ; LAB_0047f9a0
    PUSH EDI                            ; 0047fa5f
        ;   Label: LAB_0047fa5f
    CALL crt_unknown.c_FUN_005a3770     ; 0047fa60
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0047fa65
    MOV dword ptr [EBX + 0x1d8],0x0     ; 0047fa68
    JMP 0x0047f9cf                      ; 0047fa72
        ;   XREF to: 0047f9cf (UNCONDITIONAL_JUMP)  ; LAB_0047f9cf

