; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(CStrList *this_ptr,char *output_buffer,int string_index,int field_number)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   string_index
; int              Stack[0x10]:4   field_number
; Local Variables:
; undefined1       Stack[-0x134]:1  local_134
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550 at 004705e1
;   shape_edittool.cpp_FUN_00470730 at 00470897
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474090
        ;   Label: shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
    PUSH ESI                            ; 00474091
    SUB ESP,0x12c                       ; 00474092
    MOV ESI,dword ptr [ESP + 0x144]     ; 00474098
    MOV EDX,dword ptr [ESP + 0x140]     ; 0047409f
    PUSH EDX                            ; 004740a6
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004740a7
    PUSH ECX                            ; 004740ae
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 004740af
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004740b4
    MOV ECX,EAX                         ; 004740b7
    TEST EAX,EAX                        ; 004740b9
    JZ 0x004740e1                       ; 004740bb
        ;   XREF to: 004740e1 (CONDITIONAL_JUMP)  ; LAB_004740e1
    TEST ESI,ESI                        ; 004740bd
        ;   Label: LAB_004740bd
    JLE 0x004740e1                      ; 004740bf
        ;   XREF to: 004740e1 (CONDITIONAL_JUMP)  ; LAB_004740e1
    MOV EDX,ESP                         ; 004740c1
    MOV BH,byte ptr [ECX]               ; 004740c3
    MOV EAX,ECX                         ; 004740c5
    TEST BH,BH                          ; 004740c7
    JZ 0x004740d7                       ; 004740c9
        ;   XREF to: 004740d7 (CONDITIONAL_JUMP)  ; LAB_004740d7
    MOV BH,byte ptr [EAX]               ; 004740cb
        ;   Label: LAB_004740cb
    LEA ECX,[EAX + 0x1]                 ; 004740cd
    CMP BH,0x9                          ; 004740d0
    JNZ 0x00474111                      ; 004740d3
        ;   XREF to: 00474111 (CONDITIONAL_JUMP)  ; LAB_00474111
    MOV EAX,ECX                         ; 004740d5
    MOV byte ptr [EDX],0x0              ; 004740d7
        ;   Label: LAB_004740d7
    MOV ECX,EAX                         ; 004740da
    DEC ESI                             ; 004740dc
    TEST EAX,EAX                        ; 004740dd
    JNZ 0x004740bd                      ; 004740df
        ;   XREF to: 004740bd (CONDITIONAL_JUMP)  ; LAB_004740bd
    TEST ECX,ECX                        ; 004740e1
        ;   Label: LAB_004740e1
    JZ 0x00474120                       ; 004740e3
        ;   XREF to: 00474120 (CONDITIONAL_JUMP)  ; LAB_00474120
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004740e5
    MOV BL,byte ptr [ECX]               ; 004740ec
    MOV EAX,ECX                         ; 004740ee
    TEST BL,BL                          ; 004740f0
    JZ 0x00474105                       ; 004740f2
        ;   XREF to: 00474105 (CONDITIONAL_JUMP)  ; LAB_00474105
    CMP byte ptr [EAX],0x9              ; 004740f4
        ;   Label: LAB_004740f4
    JZ 0x00474105                       ; 004740f7
        ;   XREF to: 00474105 (CONDITIONAL_JUMP)  ; LAB_00474105
    MOV CL,byte ptr [EAX]               ; 004740f9
    INC EAX                             ; 004740fb
    MOV byte ptr [EDX],CL               ; 004740fc
    MOV CL,byte ptr [EAX]               ; 004740fe
    INC EDX                             ; 00474100
    TEST CL,CL                          ; 00474101
    JNZ 0x004740f4                      ; 00474103
        ;   XREF to: 004740f4 (CONDITIONAL_JUMP)  ; LAB_004740f4
    MOV byte ptr [EDX],0x0              ; 00474105
        ;   Label: LAB_00474105
    ADD ESP,0x12c                       ; 00474108
    POP ESI                             ; 0047410e
    POP EBX                             ; 0047410f
    RET                                 ; 00474110
    MOV AL,byte ptr [EAX]               ; 00474111
        ;   Label: LAB_00474111
    MOV byte ptr [EDX],AL               ; 00474113
    INC EDX                             ; 00474115
    MOV BL,byte ptr [ECX]               ; 00474116
    MOV EAX,ECX                         ; 00474118
    TEST BL,BL                          ; 0047411a
    JNZ 0x004740cb                      ; 0047411c
        ;   XREF to: 004740cb (CONDITIONAL_JUMP)  ; LAB_004740cb
    JMP 0x004740d7                      ; 0047411e
        ;   XREF to: 004740d7 (UNCONDITIONAL_JUMP)  ; LAB_004740d7
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00474120
        ;   Label: LAB_00474120
    MOV byte ptr [EAX],0x0              ; 00474127
    ADD ESP,0x12c                       ; 0047412a
    POP ESI                             ; 00474130
    POP EBX                             ; 00474131
    RET                                 ; 00474132

