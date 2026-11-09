; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_00483350(CPickList *this_ptr,char *text)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[1]:
;   core_menu.cpp_FUN_004eae80 at 004ebd9a
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd6cc
;   TerminatedCString s_CPickList_setOkButtonTex_005bd6e2
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00483350
        ;   Label: shape_edittool.cpp_CPickList_setOkButtonText_FUN_00483350
    MOV ESI,dword ptr [ESP + 0xc]       ; 00483351
    TEST ESI,ESI                        ; 00483355
    JNZ 0x00483363                      ; 00483357
        ;   XREF to: 00483363 (CONDITIONAL_JUMP)  ; LAB_00483363
    MOV ECX,dword ptr [ESP + 0x8]       ; 00483359
    MOV byte ptr [ECX + 0x5c],0x0       ; 0048335d
    POP ESI                             ; 00483361
    RET                                 ; 00483362
    PUSH EDI                            ; 00483363
        ;   Label: LAB_00483363
    MOV EDI,ESI                         ; 00483364
    SUB ECX,ECX                         ; 00483366
    DEC ECX                             ; 00483368
    XOR EAX,EAX                         ; 00483369
    SCASB.REPNE ES:EDI                  ; 0048336b
    NOT ECX                             ; 0048336d
    DEC ECX                             ; 0048336f
    CMP ECX,0x64                        ; 00483370
    JC 0x00483398                       ; 00483373
        ;   XREF to: 00483398 (CONDITIONAL_JUMP)  ; LAB_00483398
    MOV EDX,0x5bd6cc                    ; 00483375 | = "..\\shape\\edittool.cpp"
    MOV ECX,0xeb8                       ; 0048337a
    PUSH 0x5bd6e2                       ; 0048337f | = "CPickList::setOkButtonText - too long!"
    MOV dword ptr [0x01d71de0],EDX      ; 00483384 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0048338a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00483390
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00483395
    MOV EDI,dword ptr [ESP + 0xc]       ; 00483398
        ;   Label: LAB_00483398
    ADD EDI,0x5c                        ; 0048339c
    PUSH EDI                            ; 0048339f
    MOV AL,byte ptr [ESI]               ; 004833a0
        ;   Label: LAB_004833a0
    MOV byte ptr [EDI],AL               ; 004833a2
    CMP AL,0x0                          ; 004833a4
    JZ 0x004833b8                       ; 004833a6
        ;   XREF to: 004833b8 (CONDITIONAL_JUMP)  ; LAB_004833b8
    MOV AL,byte ptr [ESI + 0x1]         ; 004833a8
    ADD ESI,0x2                         ; 004833ab
    MOV byte ptr [EDI + 0x1],AL         ; 004833ae
    ADD EDI,0x2                         ; 004833b1
    CMP AL,0x0                          ; 004833b4
    JNZ 0x004833a0                      ; 004833b6
        ;   XREF to: 004833a0 (CONDITIONAL_JUMP)  ; LAB_004833a0
    POP EDI                             ; 004833b8
        ;   Label: LAB_004833b8
    POP EDI                             ; 004833b9
    POP ESI                             ; 004833ba
    RET                                 ; 004833bb

