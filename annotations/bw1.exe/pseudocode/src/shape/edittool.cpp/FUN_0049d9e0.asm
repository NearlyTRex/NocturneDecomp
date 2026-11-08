; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049d9e0(int param_1)
;
;
; XREF[6]:
;   FUN_00493720 at 004937b9
;   FUN_00493d40 at 00493da8
;   FUN_00494690 at 004948a1
;   FUN_00497660 at 004976b6
;   FUN_0049b060 at 0049b4e8
;   FUN_0049b830 at 0049b96b
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbc68
;   TerminatedCString s_gEdFont_must_be_set_by_t_005dbc7e
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f538
;   undefined4 DAT_01c3f53c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004c3f50
;   FUN_004c4510
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d9e0
        ;   Label: FUN_0049d9e0
    PUSH EDI                            ; 0049d9e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049d9e2
    CMP dword ptr [0x01c3eb50],0x0      ; 0049d9e6 | DAT_01c3eb50
    JNZ 0x0049da14                      ; 0049d9ed
        ;   XREF to: 0049da14 (CONDITIONAL_JUMP)  ; LAB_0049da14
    PUSH ESI                            ; 0049d9ef
    MOV ECX,0x5dbc68                    ; 0049d9f0 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa4                        ; 0049d9f5
    PUSH 0x5dbc7e                       ; 0049d9fa | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d1d400],ECX      ; 0049d9ff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0049da05 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049da0b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049da10
    POP ESI                             ; 0049da13
    MOV EAX,[0x01c3eb50]                ; 0049da14 | DAT_01c3eb50
        ;   Label: LAB_0049da14
    PUSH 0x6a                           ; 0049da19
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 0049da1b
    PUSH EAX                            ; 0049da21
    MOV dword ptr [0x01c3f538],ECX      ; 0049da22 | DAT_01c3f538
    CALL FUN_004c4510                   ; 0049da28
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 0049da2d
    MOV [0x01c3f53c],EAX                ; 0049da30 | DAT_01c3f53c
    TEST EBX,EBX                        ; 0049da35
    JNZ 0x0049da5b                      ; 0049da37
        ;   XREF to: 0049da5b (CONDITIONAL_JUMP)  ; LAB_0049da5b
    MOV ECX,dword ptr [0x01c3eb50]      ; 0049da39 | DAT_01c3eb50
    MOV ECX,dword ptr [ECX + 0x41ec]    ; 0049da3f
    MOV EAX,[0x0061b49c]                ; 0049da45 | DAT_0061b49c
        ;   Label: LAB_0049da45
    MOV EDX,EAX                         ; 0049da4a
    MOV EBX,0x50                        ; 0049da4c
    SAR EDX,0x1f                        ; 0049da51
    IDIV EBX                            ; 0049da54
    ADD EAX,ECX                         ; 0049da56
    POP EDI                             ; 0049da58
    POP EBX                             ; 0049da59
    RET                                 ; 0049da5a
    PUSH EBX                            ; 0049da5b
        ;   Label: LAB_0049da5b
    MOV EDI,dword ptr [0x01c3eb50]      ; 0049da5c | DAT_01c3eb50
    PUSH EDI                            ; 0049da62
    CALL FUN_004c3f50                   ; 0049da63
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3f50()
    ADD ESP,0x8                         ; 0049da68
    MOV ECX,EAX                         ; 0049da6b
    JMP 0x0049da45                      ; 0049da6d
        ;   XREF to: 0049da45 (UNCONDITIONAL_JUMP)  ; LAB_0049da45

