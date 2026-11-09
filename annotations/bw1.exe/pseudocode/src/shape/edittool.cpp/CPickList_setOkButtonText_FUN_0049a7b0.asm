; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_0049a7b0(CPickList *this_ptr,char *text)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[1]:
;   core_menu.cpp_FUN_0050d640 at 0050e65c
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc60f
;   TerminatedCString s_CPickList_setOkButtonTex_005dc625
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049a7b0
        ;   Label: shape_edittool.cpp_CPickList_setOkButtonText_FUN_0049a7b0
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049a7b1
    TEST ESI,ESI                        ; 0049a7b5
    JNZ 0x0049a7c3                      ; 0049a7b7
        ;   XREF to: 0049a7c3 (CONDITIONAL_JUMP)  ; LAB_0049a7c3
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049a7b9
    MOV byte ptr [ECX + 0x5c],0x0       ; 0049a7bd
    POP ESI                             ; 0049a7c1
    RET                                 ; 0049a7c2
    PUSH EDI                            ; 0049a7c3
        ;   Label: LAB_0049a7c3
    MOV EDI,ESI                         ; 0049a7c4
    SUB ECX,ECX                         ; 0049a7c6
    DEC ECX                             ; 0049a7c8
    XOR EAX,EAX                         ; 0049a7c9
    SCASB.REPNE ES:EDI                  ; 0049a7cb
    NOT ECX                             ; 0049a7cd
    DEC ECX                             ; 0049a7cf
    CMP ECX,0x64                        ; 0049a7d0
    JC 0x0049a7f8                       ; 0049a7d3
        ;   XREF to: 0049a7f8 (CONDITIONAL_JUMP)  ; LAB_0049a7f8
    MOV EDX,0x5dc60f                    ; 0049a7d5 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xeb5                       ; 0049a7da
    PUSH 0x5dc625                       ; 0049a7df | = "CPickList::setOkButtonText - too long!"
    MOV dword ptr [0x01d1d400],EDX      ; 0049a7e4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0049a7ea | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049a7f0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049a7f5
    MOV EDI,dword ptr [ESP + 0xc]       ; 0049a7f8
        ;   Label: LAB_0049a7f8
    ADD EDI,0x5c                        ; 0049a7fc
    PUSH EDI                            ; 0049a7ff
    MOV AL,byte ptr [ESI]               ; 0049a800
        ;   Label: LAB_0049a800
    MOV byte ptr [EDI],AL               ; 0049a802
    CMP AL,0x0                          ; 0049a804
    JZ 0x0049a818                       ; 0049a806
        ;   XREF to: 0049a818 (CONDITIONAL_JUMP)  ; LAB_0049a818
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a808
    ADD ESI,0x2                         ; 0049a80b
    MOV byte ptr [EDI + 0x1],AL         ; 0049a80e
    ADD EDI,0x2                         ; 0049a811
    CMP AL,0x0                          ; 0049a814
    JNZ 0x0049a800                      ; 0049a816
        ;   XREF to: 0049a800 (CONDITIONAL_JUMP)  ; LAB_0049a800
    POP EDI                             ; 0049a818
        ;   Label: LAB_0049a818
    POP EDI                             ; 0049a819
    POP ESI                             ; 0049a81a
    RET                                 ; 0049a81b

