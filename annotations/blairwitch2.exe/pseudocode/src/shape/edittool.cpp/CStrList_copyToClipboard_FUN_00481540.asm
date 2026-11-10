; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleInput_FUN_00482350 at 004823e0
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d27cd
;   TerminatedCString s_CStrList_copyToClipboard_005d27e3
;   undefined4 DAT_005d2824
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b8df8
;   crt_unknown.c_sprintf_FUN_005b7790
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   shape_edittool.cpp_FUN_0047fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481540
        ;   Label: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540
    PUSH ESI                            ; 00481541
    PUSH EDI                            ; 00481542
    PUSH EBP                            ; 00481543
    SUB ESP,0x4                         ; 00481544
    MOV EBX,dword ptr [ESP + 0x18]      ; 00481547
    MOV EDX,dword ptr [EBX]             ; 0048154b
    XOR ESI,ESI                         ; 0048154d
    XOR EBP,EBP                         ; 0048154f
    TEST EDX,EDX                        ; 00481551
    JLE 0x00481580                      ; 00481553
        ;   XREF to: 00481580 (CONDITIONAL_JUMP)  ; LAB_00481580
    PUSH ESI                            ; 00481555
        ;   Label: LAB_00481555
    PUSH EBX                            ; 00481556
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00481557
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048155c
    MOV EDI,EAX                         ; 0048155f
    SUB ECX,ECX                         ; 00481561
    DEC ECX                             ; 00481563
    XOR EAX,EAX                         ; 00481564
    SCASB.REPNE ES:EDI                  ; 00481566
    NOT ECX                             ; 00481568
    DEC ECX                             ; 0048156a
    INC ECX                             ; 0048156b
    INC ESI                             ; 0048156c
    ADD EBP,ECX                         ; 0048156d
    CMP ESI,dword ptr [EBX]             ; 0048156f
    JL 0x00481555                       ; 00481571
        ;   XREF to: 00481555 (CONDITIONAL_JUMP)  ; LAB_00481555
    LEA EAX,[EAX]                       ; 00481573
    LEA EDX,[EDX]                       ; 00481579
    NOP                                 ; 0048157f
    INC EBP                             ; 00481580
        ;   Label: LAB_00481580
    PUSH EBP                            ; 00481581
    CALL crt_unknown.c_FUN_005b8df8     ; 00481582
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8df8()
    ADD ESP,0x4                         ; 00481587
    MOV dword ptr [ESP],EAX             ; 0048158a
    TEST EAX,EAX                        ; 0048158d
    JNZ 0x004815b8                      ; 0048158f
        ;   XREF to: 004815b8 (CONDITIONAL_JUMP)  ; LAB_004815b8
    PUSH EBP                            ; 00481591
    MOV EBP,dword ptr [EBX]             ; 00481592
    PUSH EBP                            ; 00481594
    MOV ESI,0x5d27cd                    ; 00481595 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xcd1                       ; 0048159a
    PUSH 0x5d27e3                       ; 0048159f | = "CStrList::copyToClipboard - out of me..."
    MOV dword ptr [0x01d046a0],ESI      ; 004815a4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004815aa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004815b0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004815b5
    MOV EDI,dword ptr [ESP]             ; 004815b8
        ;   Label: LAB_004815b8
    MOV EAX,dword ptr [EBX]             ; 004815bb
    XOR ESI,ESI                         ; 004815bd
    TEST EAX,EAX                        ; 004815bf
    JLE 0x004815f0                      ; 004815c1
        ;   XREF to: 004815f0 (CONDITIONAL_JUMP)  ; LAB_004815f0
    PUSH ESI                            ; 004815c3
        ;   Label: LAB_004815c3
    PUSH EBX                            ; 004815c4
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 004815c5
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004815ca
    PUSH EAX                            ; 004815cd
    PUSH 0x5d2824                       ; 004815ce | DAT_005d2824
    PUSH EDI                            ; 004815d3
    INC ESI                             ; 004815d4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004815d5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004815da
    MOV EDX,dword ptr [EBX]             ; 004815dd
    ADD EDI,EAX                         ; 004815df
    CMP ESI,EDX                         ; 004815e1
    JL 0x004815c3                       ; 004815e3
        ;   XREF to: 004815c3 (CONDITIONAL_JUMP)  ; LAB_004815c3
    LEA EAX,[EAX]                       ; 004815e5
    LEA EDX,[EDX]                       ; 004815eb
    MOV EBX,EBX                         ; 004815ee
    MOV ECX,dword ptr [ESP]             ; 004815f0
        ;   Label: LAB_004815f0
    PUSH ECX                            ; 004815f3
    MOV EBX,dword ptr [0x006138e0]      ; 004815f4 | g_CEditorToolsPtr
    PUSH EBX                            ; 004815fa
    MOV byte ptr [EDI],0x0              ; 004815fb
    CALL shape_edittool.cpp_FUN_0047fc30 ; 004815fe
        ;   XREF to: 0047fc30 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047fc30(CEditorTools * this_ptr, char * text_data)
    ADD ESP,0x8                         ; 00481603
    MOV ESI,dword ptr [ESP]             ; 00481606
    PUSH ESI                            ; 00481609
    CALL crt_unknown.c_FUN_005b7fce     ; 0048160a
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0048160f
    ADD ESP,0x4                         ; 00481612
    POP EBP                             ; 00481615
    POP EDI                             ; 00481616
    POP ESI                             ; 00481617
    POP EBX                             ; 00481618
    RET                                 ; 00481619

