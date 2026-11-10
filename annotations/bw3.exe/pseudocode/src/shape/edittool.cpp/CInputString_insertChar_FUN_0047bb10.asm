; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_0047bb10(CInputString *this_ptr,char character,int advance_cursor)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
; int              Stack[0xc]:4   advance_cursor
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e8cb
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0 at 0047bd33
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c6a2
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bb10
        ;   Label: shape_edittool.cpp_CInputString_insertChar_FUN_0047bb10
    PUSH EDI                            ; 0047bb11
    PUSH EBP                            ; 0047bb12
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047bb13
    MOV EAX,dword ptr [EBX + 0x12c]     ; 0047bb17
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bb1d
    DEC EAX                             ; 0047bb23
    CMP EAX,EDX                         ; 0047bb24
    JLE 0x0047bb73                      ; 0047bb26
        ;   XREF to: 0047bb73 (CONDITIONAL_JUMP)  ; LAB_0047bb73
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047bb28
    CMP EAX,ECX                         ; 0047bb2e
    JLE 0x0047bb3d                      ; 0047bb30
        ;   XREF to: 0047bb3d (CONDITIONAL_JUMP)  ; LAB_0047bb3d
    PUSH ESI                            ; 0047bb32
    LEA ESI,[ECX + 0x1]                 ; 0047bb33
    MOV dword ptr [EBX + 0x130],ESI     ; 0047bb36
    POP ESI                             ; 0047bb3c
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047bb3d
        ;   Label: LAB_0047bb3d
    MOV EDI,dword ptr [EBX + 0x134]     ; 0047bb43
    SUB EAX,EDI                         ; 0047bb49
    PUSH EAX                            ; 0047bb4b
    LEA EAX,[EDI + EBX*0x1]             ; 0047bb4c
    PUSH EAX                            ; 0047bb4f
    LEA EAX,[EDI + 0x1]                 ; 0047bb50
    ADD EAX,EBX                         ; 0047bb53
    PUSH EAX                            ; 0047bb55
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0047bb56
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0047bb5b
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047bb5e
    MOV DL,byte ptr [ESP + 0x14]        ; 0047bb64
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047bb68
    MOV byte ptr [EBX + EAX*0x1],DL     ; 0047bb6c
    TEST EBP,EBP                        ; 0047bb6f
    JNZ 0x0047bb80                      ; 0047bb71
        ;   XREF to: 0047bb80 (CONDITIONAL_JUMP)  ; LAB_0047bb80
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bb73
        ;   Label: LAB_0047bb73
    MOV byte ptr [EBX],0x0              ; 0047bb79
    POP EBP                             ; 0047bb7c
    POP EDI                             ; 0047bb7d
    POP EBX                             ; 0047bb7e
    RET                                 ; 0047bb7f
    INC dword ptr [EBX + 0x134]         ; 0047bb80
        ;   Label: LAB_0047bb80
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bb86
    MOV byte ptr [EBX],0x0              ; 0047bb8c
    POP EBP                             ; 0047bb8f
    POP EDI                             ; 0047bb90
    POP EBX                             ; 0047bb91
    RET                                 ; 0047bb92

