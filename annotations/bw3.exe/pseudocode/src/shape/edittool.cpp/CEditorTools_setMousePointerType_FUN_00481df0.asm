; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00481df0(CEditorTools *this_ptr,int cursor_type,int height,int width)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   cursor_type
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   width
;
; Referenced Globals:
;   undefined4 DAT_005fb144
;   undefined4 DAT_005fb148
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5bae8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481df0
        ;   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00481df0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00481df1
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481df5
    MOV dword ptr [0x01c5bae8],EDX      ; 00481df9 | DAT_01c5bae8
    CMP EDX,0x1                         ; 00481dff
    JNC 0x00481ea6                      ; 00481e02
        ;   XREF to: 00481ea6 (CONDITIONAL_JUMP)  ; LAB_00481ea6
    TEST EDX,EDX                        ; 00481e08
    JNZ 0x00481eb1                      ; 00481e0a
        ;   XREF to: 00481eb1 (CONDITIONAL_JUMP)  ; LAB_00481eb1
    CMP dword ptr [ESP + 0x10],0x0      ; 00481e10
        ;   Label: LAB_00481e10
    JLE 0x00481e3e                      ; 00481e15
        ;   XREF to: 00481e3e (CONDITIONAL_JUMP)  ; LAB_00481e3e
    TEST EBX,EBX                        ; 00481e17
        ;   Label: LAB_00481e17
    JLE 0x00481e48                      ; 00481e19
        ;   XREF to: 00481e48 (CONDITIONAL_JUMP)  ; LAB_00481e48
    TEST byte ptr [ESP + 0x10],0x1      ; 00481e1b
        ;   Label: LAB_00481e1b
    JNZ 0x00481e26                      ; 00481e20
        ;   XREF to: 00481e26 (CONDITIONAL_JUMP)  ; LAB_00481e26
    INC dword ptr [ESP + 0x10]          ; 00481e22
    TEST BL,0x1                         ; 00481e26
        ;   Label: LAB_00481e26
    JNZ 0x00481e2c                      ; 00481e29
        ;   XREF to: 00481e2c (CONDITIONAL_JUMP)  ; LAB_00481e2c
    INC EBX                             ; 00481e2b
    MOV EDX,dword ptr [ESP + 0x10]      ; 00481e2c
        ;   Label: LAB_00481e2c
    MOV dword ptr [0x005fb144],EBX      ; 00481e30 | DAT_005fb144
    MOV dword ptr [0x005fb148],EDX      ; 00481e36 | DAT_005fb148
    POP EBX                             ; 00481e3c
    RET                                 ; 00481e3d
    MOV dword ptr [ESP + 0x10],0xb      ; 00481e3e
        ;   Label: LAB_00481e3e
    JMP 0x00481e17                      ; 00481e46
        ;   XREF to: 00481e17 (UNCONDITIONAL_JUMP)  ; LAB_00481e17
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481e48
        ;   Label: LAB_00481e48
    IMUL EBX,dword ptr [0x005fba18]     ; 00481e4c | DAT_005fba18
    LEA EDX,[EBX*0x4 + 0x0]             ; 00481e53
    SUB EDX,EBX                         ; 00481e5a
    MOV ECX,dword ptr [0x005fba1c]      ; 00481e5c | DAT_005fba1c
    MOV EAX,EDX                         ; 00481e62
    SAR EDX,0x1f                        ; 00481e64
    IDIV ECX                            ; 00481e67
    MOV EDX,EAX                         ; 00481e69
    SAR EDX,0x1f                        ; 00481e6b
    SHL EDX,0x2                         ; 00481e6e
    SBB EAX,EDX                         ; 00481e71
    SAR EAX,0x2                         ; 00481e73
    MOV EBX,EAX                         ; 00481e76
    JMP 0x00481e1b                      ; 00481e78
        ;   XREF to: 00481e1b (UNCONDITIONAL_JUMP)  ; LAB_00481e1b
    CMP dword ptr [ESP + 0x10],0x0      ; 00481e7a
        ;   Label: LAB_00481e7a
    JLE 0x00481e87                      ; 00481e7f
        ;   XREF to: 00481e87 (CONDITIONAL_JUMP)  ; LAB_00481e87
    TEST EBX,EBX                        ; 00481e81
    JLE 0x00481e95                      ; 00481e83
        ;   XREF to: 00481e95 (CONDITIONAL_JUMP)  ; LAB_00481e95
    JMP 0x00481e26                      ; 00481e85
        ;   XREF to: 00481e26 (UNCONDITIONAL_JUMP)  ; LAB_00481e26
    MOV dword ptr [ESP + 0x10],0xb      ; 00481e87
        ;   Label: LAB_00481e87
    TEST EBX,EBX                        ; 00481e8f
    JLE 0x00481e95                      ; 00481e91
        ;   XREF to: 00481e95 (CONDITIONAL_JUMP)  ; LAB_00481e95
    JMP 0x00481e26                      ; 00481e93
        ;   XREF to: 00481e26 (UNCONDITIONAL_JUMP)  ; LAB_00481e26
    MOV EAX,dword ptr [ESP + 0x10]      ; 00481e95
        ;   Label: LAB_00481e95
    MOV EDX,EAX                         ; 00481e99
    SAR EDX,0x1f                        ; 00481e9b
    SUB EAX,EDX                         ; 00481e9e
    SAR EAX,0x1                         ; 00481ea0
    MOV EBX,EAX                         ; 00481ea2
    JMP 0x00481e26                      ; 00481ea4
        ;   XREF to: 00481e26 (UNCONDITIONAL_JUMP)  ; LAB_00481e26
    JBE 0x00481e7a                      ; 00481ea6
        ;   XREF to: 00481e7a (CONDITIONAL_JUMP)  ; LAB_00481e7a
        ;   Label: LAB_00481ea6
    CMP EDX,0x2                         ; 00481ea8
    JZ 0x00481e10                       ; 00481eab
        ;   XREF to: 00481e10 (CONDITIONAL_JUMP)  ; LAB_00481e10
    PUSH EDI                            ; 00481eb1
        ;   Label: LAB_00481eb1
    PUSH ESI                            ; 00481eb2
    MOV ESI,0x5bd3ad                    ; 00481eb3
    MOV EDI,0xb9d                       ; 00481eb8
    PUSH 0x5bd3c3                       ; 00481ebd
    MOV dword ptr [0x01d71de0],ESI      ; 00481ec2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00481ec8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00481ece
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00481ed3
    POP ESI                             ; 00481ed6
    POP EDI                             ; 00481ed7
    MOV EDX,dword ptr [ESP + 0x10]      ; 00481ed8
    MOV dword ptr [0x005fb144],EBX      ; 00481edc | DAT_005fb144
    MOV dword ptr [0x005fb148],EDX      ; 00481ee2 | DAT_005fb148
    POP EBX                             ; 00481ee8
    RET                                 ; 00481ee9

