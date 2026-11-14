; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004825f0(CStrList *this_ptr,int index,char *new_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; char *           Stack[0xc]:4   new_string
;
; XREF[1]:
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d37b
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd582
;   TerminatedCString s_CStrList_set_invalid_ind_005bd598
;   undefined1 DAT_005bd5b6
;   TerminatedCString s_shape_edittool_cpp_005bd5b7
;   undefined4 s_shape_edittool_cpp_005bd5b7+1
;   undefined4 s_shape_edittool_cpp_005bd5b7+2
;   TerminatedCString s_CStrList_set_out_of_memo_005bd5cd
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004825f0
        ;   Label: shape_edittool.cpp_CStrList_setStringAt_FUN_004825f0
    PUSH ESI                            ; 004825f1
    PUSH EDI                            ; 004825f2
    PUSH EBP                            ; 004825f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004825f4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004825f8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004825fc
    TEST EDX,EDX                        ; 00482600
    JL 0x00482609                       ; 00482602
        ;   XREF to: 00482609 (CONDITIONAL_JUMP)  ; LAB_00482609
    CMP EDX,dword ptr [EBP]             ; 00482604
    JL 0x0048262c                       ; 00482607
        ;   XREF to: 0048262c (CONDITIONAL_JUMP)  ; LAB_0048262c
    MOV EBX,0x5bd582                    ; 00482609 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00482609
    MOV EDI,0xd0f                       ; 0048260e
    PUSH 0x5bd598                       ; 00482613 | = "CStrList::set - invalid index"
    MOV dword ptr [0x01d71de0],EBX      ; 00482618 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0048261e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00482624
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00482629
    TEST ESI,ESI                        ; 0048262c
        ;   Label: LAB_0048262c
    JNZ 0x00482635                      ; 0048262e
        ;   XREF to: 00482635 (CONDITIONAL_JUMP)  ; LAB_00482635
    MOV ESI,0x5bd5b6                    ; 00482630 | DAT_005bd5b6
    MOV EDI,ESI                         ; 00482635
        ;   Label: LAB_00482635
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482637
    SUB ECX,ECX                         ; 0048263b
    DEC ECX                             ; 0048263d
    XOR EAX,EAX                         ; 0048263e
    SCASB.REPNE ES:EDI                  ; 00482640 | DAT_005bd5b6 | = "..\\shape\\edittool.cpp"
    NOT ECX                             ; 00482642
    DEC ECX                             ; 00482644
    INC ECX                             ; 00482645
    MOV EAX,dword ptr [EBP + 0x8]       ; 00482646
    PUSH ECX                            ; 00482649
    MOV EDX,dword ptr [EAX + EBX*0x4]   ; 0048264a
    PUSH EDX                            ; 0048264d
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 0048264e
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV ECX,dword ptr [EBP + 0x8]       ; 00482653
    MOV dword ptr [ECX + EBX*0x4],EAX   ; 00482656
    MOV EAX,dword ptr [EBP + 0x8]       ; 00482659
    MOV ECX,dword ptr [EAX + EBX*0x4]   ; 0048265c
    ADD ESP,0x8                         ; 0048265f
    TEST ECX,ECX                        ; 00482662
    JZ 0x0048268f                       ; 00482664
        ;   XREF to: 0048268f (CONDITIONAL_JUMP)  ; LAB_0048268f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00482666
        ;   Label: LAB_00482666
    MOV EAX,dword ptr [EBP + 0x8]       ; 0048266a
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 0048266d
    PUSH EDI                            ; 00482670
    MOV AL,byte ptr [ESI]               ; 00482671 | DAT_005bd5b6 | s_shape_edittool_cpp_005bd5b7+1
        ;   Label: LAB_00482671
    MOV byte ptr [EDI],AL               ; 00482673
    CMP AL,0x0                          ; 00482675
    JZ 0x00482689                       ; 00482677
        ;   XREF to: 00482689 (CONDITIONAL_JUMP)  ; LAB_00482689
    MOV AL,byte ptr [ESI + 0x1]         ; 00482679 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_005bd5b7+2
    ADD ESI,0x2                         ; 0048267c
    MOV byte ptr [EDI + 0x1],AL         ; 0048267f
    ADD EDI,0x2                         ; 00482682
    CMP AL,0x0                          ; 00482685
    JNZ 0x00482671                      ; 00482687
        ;   XREF to: 00482671 (CONDITIONAL_JUMP)  ; LAB_00482671
    POP EDI                             ; 00482689
        ;   Label: LAB_00482689
    POP EBP                             ; 0048268a
    POP EDI                             ; 0048268b
    POP ESI                             ; 0048268c
    POP EBX                             ; 0048268d
    RET                                 ; 0048268e
    MOV EBX,0x5bd5b7                    ; 0048268f | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0048268f
    MOV EDI,0xd18                       ; 00482694
    PUSH 0x5bd5cd                       ; 00482699 | = "CStrList::set - out of memory!"
    MOV dword ptr [0x01d71de0],EBX      ; 0048269e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004826a4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004826aa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004826af
    JMP 0x00482666                      ; 004826b2
        ;   XREF to: 00482666 (UNCONDITIONAL_JUMP)  ; LAB_00482666

