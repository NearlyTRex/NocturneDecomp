; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextPage_draw_FUN_004a8da0(STextPage *this_ptr)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_drawPage_FUN_004a98b0 at 004a98d9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8da0
        ;   Label: core_fldnotes.cpp_STextPage_draw_FUN_004a8da0
    PUSH EDI                            ; 004a8da1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a8da2
    MOV EDX,dword ptr [EDI]             ; 004a8da6
    XOR EBX,EBX                         ; 004a8da8
    TEST EDX,EDX                        ; 004a8daa
    JLE 0x004a8dc9                      ; 004a8dac
        ;   XREF to: 004a8dc9 (CONDITIONAL_JUMP)  ; LAB_004a8dc9
    PUSH ESI                            ; 004a8dae
    MOV ESI,EDI                         ; 004a8daf
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a8db1
        ;   Label: LAB_004a8db1
    PUSH EAX                            ; 004a8db4
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a8db5
    ADD ESI,0x4                         ; 004a8db8
    INC EBX                             ; 004a8dbb
    CALL dword ptr [EDX + 0x4]          ; 004a8dbc
    MOV ECX,dword ptr [EDI]             ; 004a8dbf
    ADD ESP,0x4                         ; 004a8dc1
    CMP EBX,ECX                         ; 004a8dc4
    JL 0x004a8db1                       ; 004a8dc6
        ;   XREF to: 004a8db1 (CONDITIONAL_JUMP)  ; LAB_004a8db1
    POP ESI                             ; 004a8dc8
    POP EDI                             ; 004a8dc9
        ;   Label: LAB_004a8dc9
    POP EBX                             ; 004a8dca
    RET                                 ; 004a8dcb

