; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004821c0(CPickList *this_ptr,char *text)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[1]:
;   core_menu.cpp_FUN_004eed60 at 004efa7c
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d28b3
;   TerminatedCString s_CPickList_setCancelButto_005d28c9
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004821c0
        ;   Label: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004821c0
    MOV ESI,dword ptr [ESP + 0xc]       ; 004821c1
    TEST ESI,ESI                        ; 004821c5
    JNZ 0x004821d6                      ; 004821c7
        ;   XREF to: 004821d6 (CONDITIONAL_JUMP)  ; LAB_004821d6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004821c9
    MOV byte ptr [ECX + 0xc0],0x0       ; 004821cd
    POP ESI                             ; 004821d4
    RET                                 ; 004821d5
    PUSH EDI                            ; 004821d6
        ;   Label: LAB_004821d6
    MOV EDI,ESI                         ; 004821d7
    SUB ECX,ECX                         ; 004821d9
    DEC ECX                             ; 004821db
    XOR EAX,EAX                         ; 004821dc
    SCASB.REPNE ES:EDI                  ; 004821de
    NOT ECX                             ; 004821e0
    DEC ECX                             ; 004821e2
    CMP ECX,0x64                        ; 004821e3
    JC 0x0048220b                       ; 004821e6
        ;   XREF to: 0048220b (CONDITIONAL_JUMP)  ; LAB_0048220b
    MOV EDX,0x5d28b3                    ; 004821e8 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xe49                       ; 004821ed
    PUSH 0x5d28c9                       ; 004821f2 | = "CPickList::setCancelButtonText - too ..."
    MOV dword ptr [0x01d046a0],EDX      ; 004821f7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004821fd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00482203
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00482208
    MOV EDI,dword ptr [ESP + 0xc]       ; 0048220b
        ;   Label: LAB_0048220b
    ADD EDI,0xc0                        ; 0048220f
    PUSH EDI                            ; 00482215
    MOV AL,byte ptr [ESI]               ; 00482216
        ;   Label: LAB_00482216
    MOV byte ptr [EDI],AL               ; 00482218
    CMP AL,0x0                          ; 0048221a
    JZ 0x0048222e                       ; 0048221c
        ;   XREF to: 0048222e (CONDITIONAL_JUMP)  ; LAB_0048222e
    MOV AL,byte ptr [ESI + 0x1]         ; 0048221e
    ADD ESI,0x2                         ; 00482221
    MOV byte ptr [EDI + 0x1],AL         ; 00482224
    ADD EDI,0x2                         ; 00482227
    CMP AL,0x0                          ; 0048222a
    JNZ 0x00482216                      ; 0048222c
        ;   XREF to: 00482216 (CONDITIONAL_JUMP)  ; LAB_00482216
    POP EDI                             ; 0048222e
        ;   Label: LAB_0048222e
    POP EDI                             ; 0048222f
    POP ESI                             ; 00482230
    RET                                 ; 00482231

