; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(CEditorTools *this_ptr,int cursor_type,int width,int height)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   cursor_type
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057eb12
;   TerminatedCString s_CEditorTools_setMousePoi_0057eb28
;   undefined4 DAT_005b6d54
;   undefined4 DAT_005b6d58
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01bcd9c0
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473a60
        ;   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00473a60
    MOV EDX,dword ptr [ESP + 0xc]       ; 00473a61
    MOV EBX,dword ptr [ESP + 0x14]      ; 00473a65
    MOV dword ptr [0x01bcd9c0],EDX      ; 00473a69 | DAT_01bcd9c0
    CMP EDX,0x1                         ; 00473a6f
    JNC 0x00473b16                      ; 00473a72
        ;   XREF to: 00473b16 (CONDITIONAL_JUMP)  ; LAB_00473b16
    TEST EDX,EDX                        ; 00473a78
    JNZ 0x00473b21                      ; 00473a7a
        ;   XREF to: 00473b21 (CONDITIONAL_JUMP)  ; LAB_00473b21
    CMP dword ptr [ESP + 0x10],0x0      ; 00473a80
        ;   Label: LAB_00473a80
    JLE 0x00473aae                      ; 00473a85
        ;   XREF to: 00473aae (CONDITIONAL_JUMP)  ; LAB_00473aae
    TEST EBX,EBX                        ; 00473a87
        ;   Label: LAB_00473a87
    JLE 0x00473ab8                      ; 00473a89
        ;   XREF to: 00473ab8 (CONDITIONAL_JUMP)  ; LAB_00473ab8
    TEST byte ptr [ESP + 0x10],0x1      ; 00473a8b
        ;   Label: LAB_00473a8b
    JNZ 0x00473a96                      ; 00473a90
        ;   XREF to: 00473a96 (CONDITIONAL_JUMP)  ; LAB_00473a96
    INC dword ptr [ESP + 0x10]          ; 00473a92
    TEST BL,0x1                         ; 00473a96
        ;   Label: LAB_00473a96
    JNZ 0x00473a9c                      ; 00473a99
        ;   XREF to: 00473a9c (CONDITIONAL_JUMP)  ; LAB_00473a9c
    INC EBX                             ; 00473a9b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00473a9c
        ;   Label: LAB_00473a9c
    MOV dword ptr [0x005b6d54],EBX      ; 00473aa0 | DAT_005b6d54
    MOV dword ptr [0x005b6d58],EDX      ; 00473aa6 | DAT_005b6d58
    POP EBX                             ; 00473aac
    RET                                 ; 00473aad
    MOV dword ptr [ESP + 0x10],0xb      ; 00473aae
        ;   Label: LAB_00473aae
    JMP 0x00473a87                      ; 00473ab6
        ;   XREF to: 00473a87 (UNCONDITIONAL_JUMP)  ; LAB_00473a87
    MOV EBX,dword ptr [ESP + 0x10]      ; 00473ab8
        ;   Label: LAB_00473ab8
    IMUL EBX,dword ptr [0x005b761c]     ; 00473abc | DAT_005b761c
    LEA EDX,[EBX*0x4 + 0x0]             ; 00473ac3
    SUB EDX,EBX                         ; 00473aca
    MOV ECX,dword ptr [0x005b7620]      ; 00473acc | DAT_005b7620
    MOV EAX,EDX                         ; 00473ad2
    SAR EDX,0x1f                        ; 00473ad4
    IDIV ECX                            ; 00473ad7
    MOV EDX,EAX                         ; 00473ad9
    SAR EDX,0x1f                        ; 00473adb
    SHL EDX,0x2                         ; 00473ade
    SBB EAX,EDX                         ; 00473ae1
    SAR EAX,0x2                         ; 00473ae3
    MOV EBX,EAX                         ; 00473ae6
    JMP 0x00473a8b                      ; 00473ae8
        ;   XREF to: 00473a8b (UNCONDITIONAL_JUMP)  ; LAB_00473a8b
    CMP dword ptr [ESP + 0x10],0x0      ; 00473aea
        ;   Label: LAB_00473aea
    JLE 0x00473af7                      ; 00473aef
        ;   XREF to: 00473af7 (CONDITIONAL_JUMP)  ; LAB_00473af7
    TEST EBX,EBX                        ; 00473af1
    JLE 0x00473b05                      ; 00473af3
        ;   XREF to: 00473b05 (CONDITIONAL_JUMP)  ; LAB_00473b05
    JMP 0x00473a96                      ; 00473af5
        ;   XREF to: 00473a96 (UNCONDITIONAL_JUMP)  ; LAB_00473a96
    MOV dword ptr [ESP + 0x10],0xb      ; 00473af7
        ;   Label: LAB_00473af7
    TEST EBX,EBX                        ; 00473aff
    JLE 0x00473b05                      ; 00473b01
        ;   XREF to: 00473b05 (CONDITIONAL_JUMP)  ; LAB_00473b05
    JMP 0x00473a96                      ; 00473b03
        ;   XREF to: 00473a96 (UNCONDITIONAL_JUMP)  ; LAB_00473a96
    MOV EAX,dword ptr [ESP + 0x10]      ; 00473b05
        ;   Label: LAB_00473b05
    MOV EDX,EAX                         ; 00473b09
    SAR EDX,0x1f                        ; 00473b0b
    SUB EAX,EDX                         ; 00473b0e
    SAR EAX,0x1                         ; 00473b10
    MOV EBX,EAX                         ; 00473b12
    JMP 0x00473a96                      ; 00473b14
        ;   XREF to: 00473a96 (UNCONDITIONAL_JUMP)  ; LAB_00473a96
    JBE 0x00473aea                      ; 00473b16
        ;   XREF to: 00473aea (CONDITIONAL_JUMP)  ; LAB_00473aea
        ;   Label: LAB_00473b16
    CMP EDX,0x2                         ; 00473b18
    JZ 0x00473a80                       ; 00473b1b
        ;   XREF to: 00473a80 (CONDITIONAL_JUMP)  ; LAB_00473a80
    PUSH EDI                            ; 00473b21
        ;   Label: LAB_00473b21
    PUSH ESI                            ; 00473b22
    MOV ESI,0x57eb12                    ; 00473b23 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x93b                       ; 00473b28
    PUSH 0x57eb28                       ; 00473b2d | = "CEditorTools::setMousePointerType - i..."
    MOV dword ptr [0x01cc4800],ESI      ; 00473b32 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00473b38 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473b3e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473b43
    POP ESI                             ; 00473b46
    POP EDI                             ; 00473b47
    MOV EDX,dword ptr [ESP + 0x10]      ; 00473b48
    MOV dword ptr [0x005b6d54],EBX      ; 00473b4c | DAT_005b6d54
    MOV dword ptr [0x005b6d58],EDX      ; 00473b52 | DAT_005b6d58
    POP EBX                             ; 00473b58
    RET                                 ; 00473b59

