; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findByFirstField_FUN_004999a0(CStrList *this_ptr,char *search_field)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_field
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004999a0
        ;   Label: shape_edittool.cpp_CStrList_findByFirstField_FUN_004999a0
    PUSH ESI                            ; 004999a1
    PUSH EDI                            ; 004999a2
    SUB ESP,0x190                       ; 004999a3
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 004999a9
    MOV ECX,dword ptr [ESP + 0x1a4]     ; 004999b0
    LEA EDX,[ESP + 0xc8]                ; 004999b7
    MOV BL,byte ptr [ECX]               ; 004999be
    MOV EAX,ECX                         ; 004999c0
    TEST BL,BL                          ; 004999c2
    JZ 0x004999cb                       ; 004999c4
        ;   XREF to: 004999cb (CONDITIONAL_JUMP)  ; LAB_004999cb
    CMP byte ptr [EAX],0x9              ; 004999c6
        ;   Label: LAB_004999c6
    JNZ 0x00499a1f                      ; 004999c9
        ;   XREF to: 00499a1f (CONDITIONAL_JUMP)  ; LAB_00499a1f
    MOV byte ptr [EDX],0x0              ; 004999cb
        ;   Label: LAB_004999cb
    MOV EDX,dword ptr [EDI]             ; 004999ce
    XOR ESI,ESI                         ; 004999d0
    TEST EDX,EDX                        ; 004999d2
    JLE 0x00499a10                      ; 004999d4
        ;   XREF to: 00499a10 (CONDITIONAL_JUMP)  ; LAB_00499a10
    PUSH ESI                            ; 004999d6
        ;   Label: LAB_004999d6
    PUSH EDI                            ; 004999d7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 004999d8
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    LEA EDX,[ESP + 0x8]                 ; 004999dd
    MOV BL,byte ptr [EAX]               ; 004999e1
    ADD ESP,0x8                         ; 004999e3
    TEST BL,BL                          ; 004999e6
    JZ 0x004999ef                       ; 004999e8
        ;   XREF to: 004999ef (CONDITIONAL_JUMP)  ; LAB_004999ef
    CMP byte ptr [EAX],0x9              ; 004999ea
        ;   Label: LAB_004999ea
    JNZ 0x00499a2d                      ; 004999ed
        ;   XREF to: 00499a2d (CONDITIONAL_JUMP)  ; LAB_00499a2d
    MOV byte ptr [EDX],0x0              ; 004999ef
        ;   Label: LAB_004999ef
    LEA EAX,[ESP + 0xc8]                ; 004999f2
    PUSH EAX                            ; 004999f9
    LEA EAX,[ESP + 0x4]                 ; 004999fa
    PUSH EAX                            ; 004999fe
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004999ff
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00499a04
    TEST EAX,EAX                        ; 00499a07
    JZ 0x00499a3b                       ; 00499a09
        ;   XREF to: 00499a3b (CONDITIONAL_JUMP)  ; LAB_00499a3b
    INC ESI                             ; 00499a0b
    CMP ESI,dword ptr [EDI]             ; 00499a0c
    JL 0x004999d6                       ; 00499a0e
        ;   XREF to: 004999d6 (CONDITIONAL_JUMP)  ; LAB_004999d6
    MOV EAX,0xffffffff                  ; 00499a10
        ;   Label: LAB_00499a10
    ADD ESP,0x190                       ; 00499a15
    POP EDI                             ; 00499a1b
    POP ESI                             ; 00499a1c
    POP EBX                             ; 00499a1d
    RET                                 ; 00499a1e
    MOV BL,byte ptr [EAX]               ; 00499a1f
        ;   Label: LAB_00499a1f
    INC EAX                             ; 00499a21
    MOV byte ptr [EDX],BL               ; 00499a22
    MOV BH,byte ptr [EAX]               ; 00499a24
    INC EDX                             ; 00499a26
    TEST BH,BH                          ; 00499a27
    JNZ 0x004999c6                      ; 00499a29
        ;   XREF to: 004999c6 (CONDITIONAL_JUMP)  ; LAB_004999c6
    JMP 0x004999cb                      ; 00499a2b
        ;   XREF to: 004999cb (UNCONDITIONAL_JUMP)  ; LAB_004999cb
    MOV BL,byte ptr [EAX]               ; 00499a2d
        ;   Label: LAB_00499a2d
    INC EAX                             ; 00499a2f
    MOV byte ptr [EDX],BL               ; 00499a30
    MOV BH,byte ptr [EAX]               ; 00499a32
    INC EDX                             ; 00499a34
    TEST BH,BH                          ; 00499a35
    JNZ 0x004999ea                      ; 00499a37
        ;   XREF to: 004999ea (CONDITIONAL_JUMP)  ; LAB_004999ea
    JMP 0x004999ef                      ; 00499a39
        ;   XREF to: 004999ef (UNCONDITIONAL_JUMP)  ; LAB_004999ef
    MOV EAX,ESI                         ; 00499a3b
        ;   Label: LAB_00499a3b
    ADD ESP,0x190                       ; 00499a3d
    POP EDI                             ; 00499a43
    POP ESI                             ; 00499a44
    POP EBX                             ; 00499a45
    RET                                 ; 00499a46

