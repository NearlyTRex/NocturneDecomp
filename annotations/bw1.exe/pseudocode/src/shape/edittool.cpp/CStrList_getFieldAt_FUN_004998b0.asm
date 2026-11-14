; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(CStrList *this_ptr,char *output_buffer,int string_index,int field_number)
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
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 at 00495048
;   shape_edittool.cpp_FUN_00495180 at 004952de
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004998b0
        ;   Label: shape_edittool.cpp_CStrList_getFieldAt_FUN_004998b0
    PUSH ESI                            ; 004998b1
    SUB ESP,0x12c                       ; 004998b2
    MOV ESI,dword ptr [ESP + 0x144]     ; 004998b8
    MOV EDX,dword ptr [ESP + 0x140]     ; 004998bf
    PUSH EDX                            ; 004998c6
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004998c7
    PUSH ECX                            ; 004998ce
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 004998cf
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004998d4
    MOV ECX,EAX                         ; 004998d7
    TEST EAX,EAX                        ; 004998d9
    JZ 0x00499901                       ; 004998db
        ;   XREF to: 00499901 (CONDITIONAL_JUMP)  ; LAB_00499901
    TEST ESI,ESI                        ; 004998dd
        ;   Label: LAB_004998dd
    JLE 0x00499901                      ; 004998df
        ;   XREF to: 00499901 (CONDITIONAL_JUMP)  ; LAB_00499901
    MOV EDX,ESP                         ; 004998e1
    MOV BH,byte ptr [ECX]               ; 004998e3
    MOV EAX,ECX                         ; 004998e5
    TEST BH,BH                          ; 004998e7
    JZ 0x004998f7                       ; 004998e9
        ;   XREF to: 004998f7 (CONDITIONAL_JUMP)  ; LAB_004998f7
    MOV BH,byte ptr [EAX]               ; 004998eb
        ;   Label: LAB_004998eb
    LEA ECX,[EAX + 0x1]                 ; 004998ed
    CMP BH,0x9                          ; 004998f0
    JNZ 0x00499931                      ; 004998f3
        ;   XREF to: 00499931 (CONDITIONAL_JUMP)  ; LAB_00499931
    MOV EAX,ECX                         ; 004998f5
    MOV byte ptr [EDX],0x0              ; 004998f7
        ;   Label: LAB_004998f7
    MOV ECX,EAX                         ; 004998fa
    DEC ESI                             ; 004998fc
    TEST EAX,EAX                        ; 004998fd
    JNZ 0x004998dd                      ; 004998ff
        ;   XREF to: 004998dd (CONDITIONAL_JUMP)  ; LAB_004998dd
    TEST ECX,ECX                        ; 00499901
        ;   Label: LAB_00499901
    JZ 0x00499940                       ; 00499903
        ;   XREF to: 00499940 (CONDITIONAL_JUMP)  ; LAB_00499940
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00499905
    MOV BL,byte ptr [ECX]               ; 0049990c
    MOV EAX,ECX                         ; 0049990e
    TEST BL,BL                          ; 00499910
    JZ 0x00499925                       ; 00499912
        ;   XREF to: 00499925 (CONDITIONAL_JUMP)  ; LAB_00499925
    CMP byte ptr [EAX],0x9              ; 00499914
        ;   Label: LAB_00499914
    JZ 0x00499925                       ; 00499917
        ;   XREF to: 00499925 (CONDITIONAL_JUMP)  ; LAB_00499925
    MOV CL,byte ptr [EAX]               ; 00499919
    INC EAX                             ; 0049991b
    MOV byte ptr [EDX],CL               ; 0049991c
    MOV CL,byte ptr [EAX]               ; 0049991e
    INC EDX                             ; 00499920
    TEST CL,CL                          ; 00499921
    JNZ 0x00499914                      ; 00499923
        ;   XREF to: 00499914 (CONDITIONAL_JUMP)  ; LAB_00499914
    MOV byte ptr [EDX],0x0              ; 00499925
        ;   Label: LAB_00499925
    ADD ESP,0x12c                       ; 00499928
    POP ESI                             ; 0049992e
    POP EBX                             ; 0049992f
    RET                                 ; 00499930
    MOV AL,byte ptr [EAX]               ; 00499931
        ;   Label: LAB_00499931
    MOV byte ptr [EDX],AL               ; 00499933
    INC EDX                             ; 00499935
    MOV BL,byte ptr [ECX]               ; 00499936
    MOV EAX,ECX                         ; 00499938
    TEST BL,BL                          ; 0049993a
    JNZ 0x004998eb                      ; 0049993c
        ;   XREF to: 004998eb (CONDITIONAL_JUMP)  ; LAB_004998eb
    JMP 0x004998f7                      ; 0049993e
        ;   XREF to: 004998f7 (UNCONDITIONAL_JUMP)  ; LAB_004998f7
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00499940
        ;   Label: LAB_00499940
    MOV byte ptr [EAX],0x0              ; 00499947
    ADD ESP,0x12c                       ; 0049994a
    POP ESI                             ; 00499950
    POP EBX                             ; 00499951
    RET                                 ; 00499952

