; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_0049c9f0(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left_pos
; int              Stack[0xc]:4   top_pos
; int              Stack[0x10]:4   right_pos
; int              Stack[0x14]:4   bottom_pos
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0049b060 at 0049b5e4
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc811
;   TerminatedCString s_CEdScrollBar_setPosition_005dc827
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c9f0
        ;   Label: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_0049c9f0
    PUSH ESI                            ; 0049c9f1
    PUSH EBP                            ; 0049c9f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049c9f3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049c9f7
    MOV dword ptr [EAX + 0x14],EDX      ; 0049c9fb
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049c9fe
    MOV dword ptr [EAX + 0x18],EDX      ; 0049ca02
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049ca05
    INC EDX                             ; 0049ca09
    MOV dword ptr [EAX + 0x1c],EDX      ; 0049ca0a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049ca0d
    INC EDX                             ; 0049ca11
    MOV dword ptr [EAX + 0x20],EDX      ; 0049ca12
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0049ca15
    MOV EDX,dword ptr [EAX + 0x14]      ; 0049ca18
    MOV EBX,dword ptr [EAX + 0x18]      ; 0049ca1b
    SUB ECX,EDX                         ; 0049ca1e
    MOV EDX,dword ptr [EAX + 0x20]      ; 0049ca20
    SUB EDX,EBX                         ; 0049ca23
    CMP ECX,EDX                         ; 0049ca25
    JG 0x0049ca5d                       ; 0049ca27
        ;   XREF to: 0049ca5d (CONDITIONAL_JUMP)  ; LAB_0049ca5d
    MOV EBX,dword ptr [EAX + 0x18]      ; 0049ca29
    ADD EBX,ECX                         ; 0049ca2c
    DEC EBX                             ; 0049ca2e
    MOV dword ptr [EAX + 0x24],EBX      ; 0049ca2f
    MOV EBX,dword ptr [EAX + 0x20]      ; 0049ca32
    SUB EBX,ECX                         ; 0049ca35
    MOV dword ptr [EAX + 0x10],0x0      ; 0049ca37
    INC EBX                             ; 0049ca3e
        ;   Label: LAB_0049ca3e
    MOV dword ptr [EAX + 0x28],EBX      ; 0049ca3f
    CMP ECX,0x4                         ; 0049ca42
    JL 0x0049ca74                       ; 0049ca45
        ;   XREF to: 0049ca74 (CONDITIONAL_JUMP)  ; LAB_0049ca74
    CMP EDX,0x4                         ; 0049ca47
    JL 0x0049ca74                       ; 0049ca4a
        ;   XREF to: 0049ca74 (CONDITIONAL_JUMP)  ; LAB_0049ca74
    MOV ESI,dword ptr [EAX + 0x24]      ; 0049ca4c
    MOV EDX,dword ptr [EAX + 0x28]      ; 0049ca4f
    SUB EDX,ESI                         ; 0049ca52
    CMP EDX,0x4                         ; 0049ca54
    JL 0x0049ca74                       ; 0049ca57
        ;   XREF to: 0049ca74 (CONDITIONAL_JUMP)  ; LAB_0049ca74
    POP EBP                             ; 0049ca59
    POP ESI                             ; 0049ca5a
    POP EBX                             ; 0049ca5b
    RET                                 ; 0049ca5c
    MOV EBX,dword ptr [EAX + 0x14]      ; 0049ca5d
        ;   Label: LAB_0049ca5d
    ADD EBX,EDX                         ; 0049ca60
    DEC EBX                             ; 0049ca62
    MOV dword ptr [EAX + 0x24],EBX      ; 0049ca63
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0049ca66
    SUB EBX,EDX                         ; 0049ca69
    MOV dword ptr [EAX + 0x10],0x1      ; 0049ca6b
    JMP 0x0049ca3e                      ; 0049ca72
        ;   XREF to: 0049ca3e (UNCONDITIONAL_JUMP)  ; LAB_0049ca3e
    PUSH EDI                            ; 0049ca74
        ;   Label: LAB_0049ca74
    MOV EDI,0x5dc811                    ; 0049ca75 | = "..\\shape\\edittool.cpp"
    MOV EBP,0x127c                      ; 0049ca7a
    PUSH 0x5dc827                       ; 0049ca7f | = "CEdScrollBar::setPosition - invalid d..."
    MOV dword ptr [0x01d1d400],EDI      ; 0049ca84 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0049ca8a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049ca90
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049ca95
    POP EDI                             ; 0049ca98
    POP EBP                             ; 0049ca99
    POP ESI                             ; 0049ca9a
    POP EBX                             ; 0049ca9b
    RET                                 ; 0049ca9c

