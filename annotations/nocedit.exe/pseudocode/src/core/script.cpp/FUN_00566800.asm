; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00566800()
;
;
; XREF[4]:
;   core_script.cpp_CScript_Unk20_FUN_00565130 at 00565a4d
;   core_script.cpp_CScript_editorPutLine_FUN_005662a0 at 005662e3
;   core_script.cpp_CScript_unk50_FUN_00566660 at 005667ef
;   core_script.cpp_FUN_00566180 at 005661d4
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;   undefined4 DAT_0310fd10
;   undefined4 DAT_0310fd48
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566800
        ;   Label: core_script.cpp_FUN_00566800
    PUSH ESI                            ; 00566801
    PUSH EDI                            ; 00566802
    PUSH EBP                            ; 00566803
    MOV ESI,dword ptr [ESP + 0x18]      ; 00566804
    TEST ESI,ESI                        ; 00566808
    JGE 0x00566811                      ; 0056680a | LAB_00566811
        ;   XREF to: 00566811 (CONDITIONAL_JUMP)
    POP EBP                             ; 0056680c
        ;   Label: LAB_0056680c
    POP EDI                             ; 0056680d
    POP ESI                             ; 0056680e
    POP EBX                             ; 0056680f
    RET                                 ; 00566810
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566811
        ;   Label: LAB_00566811
    ADD EBX,0x38                        ; 00566815
    PUSH EBX                            ; 00566818
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00566819 | int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056681e
    CMP ESI,EAX                         ; 00566821
    JGE 0x0056680c                      ; 00566823 | LAB_0056680c
        ;   XREF to: 0056680c (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00566825
    PUSH EBX                            ; 00566826
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566827 | char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0056682c
    ADD ESP,0x8                         ; 0056682e
    MOV EDI,EAX                         ; 00566831
    MOV EBP,EAX                         ; 00566833
    SUB ECX,ECX                         ; 00566835
    DEC ECX                             ; 00566837
    XOR EAX,EAX                         ; 00566838
    SCASB.REPNE ES:EDI                  ; 0056683a
    NOT ECX                             ; 0056683c
    DEC ECX                             ; 0056683e
    MOV EBX,dword ptr [0x0310fd48]      ; 0056683f | undefined4 DAT_0310fd48
    MOV EAX,ECX                         ; 00566845
    CMP ESI,EBX                         ; 00566847
    JZ 0x0056686b                       ; 00566849 | LAB_0056686b
        ;   XREF to: 0056686b (CONDITIONAL_JUMP)
    ADD EDX,ECX                         ; 0056684b
    TEST EAX,EAX                        ; 0056684d
        ;   Label: LAB_0056684d
    JLE 0x00566867                      ; 0056684f | LAB_00566867
        ;   XREF to: 00566867 (CONDITIONAL_JUMP)
    MOV BL,byte ptr [EDX + -0x1]        ; 00566851
    XOR ECX,ECX                         ; 00566854
    INC BL                              ; 00566856
    MOV CL,BL                           ; 00566858
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 0056685a | char[256] g_CharacterClassificationTable
    JZ 0x00566867                       ; 00566861 | LAB_00566867
        ;   XREF to: 00566867 (CONDITIONAL_JUMP)
    DEC EAX                             ; 00566863
    DEC EDX                             ; 00566864
    JMP 0x0056684d                      ; 00566865 | LAB_0056684d
        ;   XREF to: 0056684d (UNCONDITIONAL_JUMP)
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 00566867
        ;   Label: LAB_00566867
    CMP EAX,dword ptr [0x0310fd10]      ; 0056686b | undefined4 DAT_0310fd10
        ;   Label: LAB_0056686b
    JLE 0x0056680c                      ; 00566871 | LAB_0056680c
        ;   XREF to: 0056680c (CONDITIONAL_JUMP)
    MOV [0x0310fd10],EAX                ; 00566873 | undefined4 DAT_0310fd10
    POP EBP                             ; 00566878
    POP EDI                             ; 00566879
    POP ESI                             ; 0056687a
    POP EBX                             ; 0056687b
    RET                                 ; 0056687c

