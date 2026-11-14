; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00480bf0(CEditorTools *this_ptr,int cursor_type,int height,int width)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   cursor_type
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   width
;
; Referenced Globals:
;   undefined4 DAT_006138e4
;   undefined4 DAT_006138e8
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c25f80
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480bf0
        ;   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00480bf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480bf1
    MOV EBX,dword ptr [ESP + 0x14]      ; 00480bf5
    MOV dword ptr [0x01c25f80],EDX      ; 00480bf9 | DAT_01c25f80
    CMP EDX,0x1                         ; 00480bff
    JNC 0x00480ca6                      ; 00480c02
        ;   XREF to: 00480ca6 (CONDITIONAL_JUMP)  ; LAB_00480ca6
    TEST EDX,EDX                        ; 00480c08
    JNZ 0x00480cb1                      ; 00480c0a
        ;   XREF to: 00480cb1 (CONDITIONAL_JUMP)  ; LAB_00480cb1
    CMP dword ptr [ESP + 0x10],0x0      ; 00480c10
        ;   Label: LAB_00480c10
    JLE 0x00480c3e                      ; 00480c15
        ;   XREF to: 00480c3e (CONDITIONAL_JUMP)  ; LAB_00480c3e
    TEST EBX,EBX                        ; 00480c17
        ;   Label: LAB_00480c17
    JLE 0x00480c48                      ; 00480c19
        ;   XREF to: 00480c48 (CONDITIONAL_JUMP)  ; LAB_00480c48
    TEST byte ptr [ESP + 0x10],0x1      ; 00480c1b
        ;   Label: LAB_00480c1b
    JNZ 0x00480c26                      ; 00480c20
        ;   XREF to: 00480c26 (CONDITIONAL_JUMP)  ; LAB_00480c26
    INC dword ptr [ESP + 0x10]          ; 00480c22
    TEST BL,0x1                         ; 00480c26
        ;   Label: LAB_00480c26
    JNZ 0x00480c2c                      ; 00480c29
        ;   XREF to: 00480c2c (CONDITIONAL_JUMP)  ; LAB_00480c2c
    INC EBX                             ; 00480c2b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00480c2c
        ;   Label: LAB_00480c2c
    MOV dword ptr [0x006138e4],EBX      ; 00480c30 | DAT_006138e4
    MOV dword ptr [0x006138e8],EDX      ; 00480c36 | DAT_006138e8
    POP EBX                             ; 00480c3c
    RET                                 ; 00480c3d
    MOV dword ptr [ESP + 0x10],0xb      ; 00480c3e
        ;   Label: LAB_00480c3e
    JMP 0x00480c17                      ; 00480c46
        ;   XREF to: 00480c17 (UNCONDITIONAL_JUMP)  ; LAB_00480c17
    MOV EBX,dword ptr [ESP + 0x10]      ; 00480c48
        ;   Label: LAB_00480c48
    IMUL EBX,dword ptr [0x006141b8]     ; 00480c4c | DAT_006141b8
    LEA EDX,[EBX*0x4 + 0x0]             ; 00480c53
    SUB EDX,EBX                         ; 00480c5a
    MOV ECX,dword ptr [0x006141bc]      ; 00480c5c | DAT_006141bc
    MOV EAX,EDX                         ; 00480c62
    SAR EDX,0x1f                        ; 00480c64
    IDIV ECX                            ; 00480c67
    MOV EDX,EAX                         ; 00480c69
    SAR EDX,0x1f                        ; 00480c6b
    SHL EDX,0x2                         ; 00480c6e
    SBB EAX,EDX                         ; 00480c71
    SAR EAX,0x2                         ; 00480c73
    MOV EBX,EAX                         ; 00480c76
    JMP 0x00480c1b                      ; 00480c78
        ;   XREF to: 00480c1b (UNCONDITIONAL_JUMP)  ; LAB_00480c1b
    CMP dword ptr [ESP + 0x10],0x0      ; 00480c7a
        ;   Label: LAB_00480c7a
    JLE 0x00480c87                      ; 00480c7f
        ;   XREF to: 00480c87 (CONDITIONAL_JUMP)  ; LAB_00480c87
    TEST EBX,EBX                        ; 00480c81
    JLE 0x00480c95                      ; 00480c83
        ;   XREF to: 00480c95 (CONDITIONAL_JUMP)  ; LAB_00480c95
    JMP 0x00480c26                      ; 00480c85
        ;   XREF to: 00480c26 (UNCONDITIONAL_JUMP)  ; LAB_00480c26
    MOV dword ptr [ESP + 0x10],0xb      ; 00480c87
        ;   Label: LAB_00480c87
    TEST EBX,EBX                        ; 00480c8f
    JLE 0x00480c95                      ; 00480c91
        ;   XREF to: 00480c95 (CONDITIONAL_JUMP)  ; LAB_00480c95
    JMP 0x00480c26                      ; 00480c93
        ;   XREF to: 00480c26 (UNCONDITIONAL_JUMP)  ; LAB_00480c26
    MOV EAX,dword ptr [ESP + 0x10]      ; 00480c95
        ;   Label: LAB_00480c95
    MOV EDX,EAX                         ; 00480c99
    SAR EDX,0x1f                        ; 00480c9b
    SUB EAX,EDX                         ; 00480c9e
    SAR EAX,0x1                         ; 00480ca0
    MOV EBX,EAX                         ; 00480ca2
    JMP 0x00480c26                      ; 00480ca4
        ;   XREF to: 00480c26 (UNCONDITIONAL_JUMP)  ; LAB_00480c26
    JBE 0x00480c7a                      ; 00480ca6
        ;   XREF to: 00480c7a (CONDITIONAL_JUMP)  ; LAB_00480c7a
        ;   Label: LAB_00480ca6
    CMP EDX,0x2                         ; 00480ca8
    JZ 0x00480c10                       ; 00480cab
        ;   XREF to: 00480c10 (CONDITIONAL_JUMP)  ; LAB_00480c10
    PUSH EDI                            ; 00480cb1
        ;   Label: LAB_00480cb1
    PUSH ESI                            ; 00480cb2
    MOV ESI,0x5d2557                    ; 00480cb3
    MOV EDI,0xb28                       ; 00480cb8
    PUSH 0x5d256d                       ; 00480cbd
    MOV dword ptr [0x01d046a0],ESI      ; 00480cc2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00480cc8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00480cce
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00480cd3
    POP ESI                             ; 00480cd6
    POP EDI                             ; 00480cd7
    MOV EDX,dword ptr [ESP + 0x10]      ; 00480cd8
    MOV dword ptr [0x006138e4],EBX      ; 00480cdc | DAT_006138e4
    MOV dword ptr [0x006138e8],EDX      ; 00480ce2 | DAT_006138e8
    POP EBX                             ; 00480ce8
    RET                                 ; 00480ce9

