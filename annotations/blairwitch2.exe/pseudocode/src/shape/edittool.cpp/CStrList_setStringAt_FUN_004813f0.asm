; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004813f0(CStrList *this_ptr,int index,char *new_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   new_string
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c23b
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d272c
;   TerminatedCString s_CStrList_set_invalid_ind_005d2742
;   undefined1 DAT_005d2760
;   TerminatedCString s_shape_edittool_cpp_005d2761
;   undefined4 s_shape_edittool_cpp_005d2761+1
;   undefined4 s_shape_edittool_cpp_005d2761+2
;   TerminatedCString s_CStrList_set_out_of_memo_005d2777
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004813f0
        ;   Label: shape_edittool.cpp_CStrList_setStringAt_FUN_004813f0
    PUSH ESI                            ; 004813f1
    PUSH EDI                            ; 004813f2
    PUSH EBP                            ; 004813f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004813f4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004813f8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004813fc
    TEST EDX,EDX                        ; 00481400
    JL 0x00481409                       ; 00481402
        ;   XREF to: 00481409 (CONDITIONAL_JUMP)  ; LAB_00481409
    CMP EDX,dword ptr [EBP]             ; 00481404
    JL 0x0048142c                       ; 00481407
        ;   XREF to: 0048142c (CONDITIONAL_JUMP)  ; LAB_0048142c
    MOV EBX,0x5d272c                    ; 00481409 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00481409
    MOV EDI,0xc93                       ; 0048140e
    PUSH 0x5d2742                       ; 00481413 | = "CStrList::set - invalid index"
    MOV dword ptr [0x01d046a0],EBX      ; 00481418 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0048141e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00481424
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00481429
    TEST ESI,ESI                        ; 0048142c
        ;   Label: LAB_0048142c
    JNZ 0x00481435                      ; 0048142e
        ;   XREF to: 00481435 (CONDITIONAL_JUMP)  ; LAB_00481435
    MOV ESI,0x5d2760                    ; 00481430 | DAT_005d2760
    MOV EDI,ESI                         ; 00481435
        ;   Label: LAB_00481435
    MOV EBX,dword ptr [ESP + 0x18]      ; 00481437
    SUB ECX,ECX                         ; 0048143b
    DEC ECX                             ; 0048143d
    XOR EAX,EAX                         ; 0048143e
    SCASB.REPNE ES:EDI                  ; 00481440 | DAT_005d2760 | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 00481442
    DEC ECX                             ; 00481444
    INC ECX                             ; 00481445
    MOV EAX,dword ptr [EBP + 0x8]       ; 00481446
    PUSH ECX                            ; 00481449
    MOV EDX,dword ptr [EAX + EBX*0x4]   ; 0048144a
    PUSH EDX                            ; 0048144d
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0048144e
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV ECX,dword ptr [EBP + 0x8]       ; 00481453
    MOV dword ptr [ECX + EBX*0x4],EAX   ; 00481456
    MOV EAX,dword ptr [EBP + 0x8]       ; 00481459
    MOV ECX,dword ptr [EAX + EBX*0x4]   ; 0048145c
    ADD ESP,0x8                         ; 0048145f
    TEST ECX,ECX                        ; 00481462
    JZ 0x0048148f                       ; 00481464
        ;   XREF to: 0048148f (CONDITIONAL_JUMP)  ; LAB_0048148f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00481466
        ;   Label: LAB_00481466
    MOV EAX,dword ptr [EBP + 0x8]       ; 0048146a
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 0048146d
    PUSH EDI                            ; 00481470
    MOV AL,byte ptr [ESI]               ; 00481471 | DAT_005d2760 | s_shape_edittool_cpp_005d2761+1
        ;   Label: LAB_00481471
    MOV byte ptr [EDI],AL               ; 00481473
    CMP AL,0x0                          ; 00481475
    JZ 0x00481489                       ; 00481477
        ;   XREF to: 00481489 (CONDITIONAL_JUMP)  ; LAB_00481489
    MOV AL,byte ptr [ESI + 0x1]         ; 00481479 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_005d2761+2
    ADD ESI,0x2                         ; 0048147c
    MOV byte ptr [EDI + 0x1],AL         ; 0048147f
    ADD EDI,0x2                         ; 00481482
    CMP AL,0x0                          ; 00481485
    JNZ 0x00481471                      ; 00481487
        ;   XREF to: 00481471 (CONDITIONAL_JUMP)  ; LAB_00481471
    POP EDI                             ; 00481489
        ;   Label: LAB_00481489
    POP EBP                             ; 0048148a
    POP EDI                             ; 0048148b
    POP ESI                             ; 0048148c
    POP EBX                             ; 0048148d
    RET                                 ; 0048148e
    MOV EBX,0x5d2761                    ; 0048148f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0048148f
    MOV EDI,0xc9c                       ; 00481494
    PUSH 0x5d2777                       ; 00481499 | = "CStrList::set - out of memory!"
    MOV dword ptr [0x01d046a0],EBX      ; 0048149e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004814a4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004814aa
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004814af
    JMP 0x00481466                      ; 004814b2
        ;   XREF to: 00481466 (UNCONDITIONAL_JUMP)  ; LAB_00481466

