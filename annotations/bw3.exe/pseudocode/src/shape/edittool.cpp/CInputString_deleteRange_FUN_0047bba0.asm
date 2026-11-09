; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_deleteRange_FUN_0047bba0(CInputString *this_ptr,int start_pos,int end_pos)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_pos
; int              Stack[0xc]:4   end_pos
;
; XREF[3]:
;   shape_edittool.cpp_CInputString_backspace_FUN_0047bc60 at 0047bc86
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 at 0047bc2c
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 at 0047bf73
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bba0
        ;   Label: shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0
    PUSH ESI                            ; 0047bba1
    PUSH EDI                            ; 0047bba2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047bba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047bba7
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047bbab
    TEST EDI,EDI                        ; 0047bbaf
    JL 0x0047bc09                       ; 0047bbb1
        ;   XREF to: 0047bc09 (CONDITIONAL_JUMP)  ; LAB_0047bc09
    MOV EDX,dword ptr [EBX + 0x130]     ; 0047bbb3
        ;   Label: LAB_0047bbb3
    CMP ESI,EDX                         ; 0047bbb9
    JLE 0x0047bbbf                      ; 0047bbbb
        ;   XREF to: 0047bbbf (CONDITIONAL_JUMP)  ; LAB_0047bbbf
    MOV ESI,EDX                         ; 0047bbbd
    CMP EDI,ESI                         ; 0047bbbf
        ;   Label: LAB_0047bbbf
    JGE 0x0047bc05                      ; 0047bbc1
        ;   XREF to: 0047bc05 (CONDITIONAL_JUMP)  ; LAB_0047bc05
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047bbc3
    SUB EAX,ESI                         ; 0047bbc9
    PUSH EAX                            ; 0047bbcb
    LEA EAX,[EBX + ESI*0x1]             ; 0047bbcc
    PUSH EAX                            ; 0047bbcf
    LEA EAX,[EBX + EDI*0x1]             ; 0047bbd0
    PUSH EAX                            ; 0047bbd3
    SUB ESI,EDI                         ; 0047bbd4
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0047bbd6
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV ECX,dword ptr [EBX + 0x130]     ; 0047bbdb
    ADD ESP,0xc                         ; 0047bbe1
    SUB ECX,ESI                         ; 0047bbe4
    MOV ESI,dword ptr [EBX + 0x134]     ; 0047bbe6
    MOV dword ptr [EBX + 0x130],ECX     ; 0047bbec
    CMP ESI,ECX                         ; 0047bbf2
    JLE 0x0047bbfc                      ; 0047bbf4
        ;   XREF to: 0047bbfc (CONDITIONAL_JUMP)  ; LAB_0047bbfc
    MOV dword ptr [EBX + 0x134],ECX     ; 0047bbf6
    ADD EBX,dword ptr [EBX + 0x130]     ; 0047bbfc
        ;   Label: LAB_0047bbfc
    MOV byte ptr [EBX],0x0              ; 0047bc02
    POP EDI                             ; 0047bc05
        ;   Label: LAB_0047bc05
    POP ESI                             ; 0047bc06
    POP EBX                             ; 0047bc07
    RET                                 ; 0047bc08
    XOR EDI,EDI                         ; 0047bc09
        ;   Label: LAB_0047bc09
    JMP 0x0047bbb3                      ; 0047bc0b
        ;   XREF to: 0047bbb3 (UNCONDITIONAL_JUMP)  ; LAB_0047bbb3

