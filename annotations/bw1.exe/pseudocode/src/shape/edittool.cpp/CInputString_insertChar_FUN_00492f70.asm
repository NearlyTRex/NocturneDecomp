; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_insertChar_FUN_00492f70(CInputString *this_ptr,char character,int advance_cursor)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
; int              Stack[0xc]:4   advance_cursor
;
; XREF[3]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 00495d2b
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_00493150 at 00493193
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493b02
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492f70
        ;   Label: shape_edittool.cpp_CInputString_insertChar_FUN_00492f70
    PUSH EDI                            ; 00492f71
    PUSH EBP                            ; 00492f72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00492f73
    MOV EAX,dword ptr [EBX + 0x12c]     ; 00492f77
    MOV EDX,dword ptr [EBX + 0x134]     ; 00492f7d
    DEC EAX                             ; 00492f83
    CMP EAX,EDX                         ; 00492f84
    JLE 0x00492fd3                      ; 00492f86
        ;   XREF to: 00492fd3 (CONDITIONAL_JUMP)  ; LAB_00492fd3
    MOV ECX,dword ptr [EBX + 0x130]     ; 00492f88
    CMP EAX,ECX                         ; 00492f8e
    JLE 0x00492f9d                      ; 00492f90
        ;   XREF to: 00492f9d (CONDITIONAL_JUMP)  ; LAB_00492f9d
    PUSH ESI                            ; 00492f92
    LEA ESI,[ECX + 0x1]                 ; 00492f93
    MOV dword ptr [EBX + 0x130],ESI     ; 00492f96
    POP ESI                             ; 00492f9c
    MOV EAX,dword ptr [EBX + 0x130]     ; 00492f9d
        ;   Label: LAB_00492f9d
    MOV EDI,dword ptr [EBX + 0x134]     ; 00492fa3
    SUB EAX,EDI                         ; 00492fa9
    PUSH EAX                            ; 00492fab
    LEA EAX,[EDI + EBX*0x1]             ; 00492fac
    PUSH EAX                            ; 00492faf
    LEA EAX,[EDI + 0x1]                 ; 00492fb0
    ADD EAX,EBX                         ; 00492fb3
    PUSH EAX                            ; 00492fb5
    CALL crt_string.c_memmove_FUN_005c25d0 ; 00492fb6
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00492fbb
    MOV EAX,dword ptr [EBX + 0x134]     ; 00492fbe
    MOV DL,byte ptr [ESP + 0x14]        ; 00492fc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00492fc8
    MOV byte ptr [EBX + EAX*0x1],DL     ; 00492fcc
    TEST EBP,EBP                        ; 00492fcf
    JNZ 0x00492fe0                      ; 00492fd1
        ;   XREF to: 00492fe0 (CONDITIONAL_JUMP)  ; LAB_00492fe0
    ADD EBX,dword ptr [EBX + 0x130]     ; 00492fd3
        ;   Label: LAB_00492fd3
    MOV byte ptr [EBX],0x0              ; 00492fd9
    POP EBP                             ; 00492fdc
    POP EDI                             ; 00492fdd
    POP EBX                             ; 00492fde
    RET                                 ; 00492fdf
    INC dword ptr [EBX + 0x134]         ; 00492fe0
        ;   Label: LAB_00492fe0
    ADD EBX,dword ptr [EBX + 0x130]     ; 00492fe6
    MOV byte ptr [EBX],0x0              ; 00492fec
    POP EBP                             ; 00492fef
    POP EDI                             ; 00492ff0
    POP EBX                             ; 00492ff1
    RET                                 ; 00492ff2

