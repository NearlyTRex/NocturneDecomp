; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CInputString_insertChar_FUN_0049d480(CInputString * this_ptr, char character, int advance_cursor)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
; int              Stack[0xc]:4   advance_cursor
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049ffa4
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 at 0049d6a3
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dedf
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d480
        ;   Label: shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
    PUSH EDI                            ; 0049d481
    PUSH EBP                            ; 0049d482
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049d483
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0049d487
    MOV EDX,dword ptr [EBX + 0x134]     ; 0049d48d
    DEC EAX                             ; 0049d493
    CMP EAX,EDX                         ; 0049d494
    JLE 0x0049d4e3                      ; 0049d496
        ;   XREF to: 0049d4e3 (CONDITIONAL_JUMP)  ; LAB_0049d4e3
    MOV ECX,dword ptr [EBX + 0x130]     ; 0049d498
    CMP EAX,ECX                         ; 0049d49e
    JLE 0x0049d4ad                      ; 0049d4a0
        ;   XREF to: 0049d4ad (CONDITIONAL_JUMP)  ; LAB_0049d4ad
    PUSH ESI                            ; 0049d4a2
    LEA ESI,[ECX + 0x1]                 ; 0049d4a3
    MOV dword ptr [EBX + 0x130],ESI     ; 0049d4a6
    POP ESI                             ; 0049d4ac
    MOV EAX,dword ptr [EBX + 0x130]     ; 0049d4ad
        ;   Label: LAB_0049d4ad
    MOV EDI,dword ptr [EBX + 0x134]     ; 0049d4b3
    SUB EAX,EDI                         ; 0049d4b9
    PUSH EAX                            ; 0049d4bb
    LEA EAX,[EDI + EBX*0x1]             ; 0049d4bc
    PUSH EAX                            ; 0049d4bf
    LEA EAX,[EDI + 0x1]                 ; 0049d4c0
    ADD EAX,EBX                         ; 0049d4c3
    PUSH EAX                            ; 0049d4c5
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0049d4c6
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0049d4cb
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049d4ce
    MOV DL,byte ptr [ESP + 0x14]        ; 0049d4d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049d4d8
    MOV byte ptr [EBX + EAX*0x1],DL     ; 0049d4dc
    TEST EBP,EBP                        ; 0049d4df
    JNZ 0x0049d4f0                      ; 0049d4e1
        ;   XREF to: 0049d4f0 (CONDITIONAL_JUMP)  ; LAB_0049d4f0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0049d4e3
        ;   Label: LAB_0049d4e3
    MOV byte ptr [EBX],0x0              ; 0049d4e9
    POP EBP                             ; 0049d4ec
    POP EDI                             ; 0049d4ed
    POP EBX                             ; 0049d4ee
    RET                                 ; 0049d4ef
    INC dword ptr [EBX + 0x134]         ; 0049d4f0
        ;   Label: LAB_0049d4f0
    ADD EBX,dword ptr [EBX + 0x130]     ; 0049d4f6
    MOV byte ptr [EBX],0x0              ; 0049d4fc
    POP EBP                             ; 0049d4ff
    POP EDI                             ; 0049d500
    POP EBX                             ; 0049d501
    RET                                 ; 0049d502

