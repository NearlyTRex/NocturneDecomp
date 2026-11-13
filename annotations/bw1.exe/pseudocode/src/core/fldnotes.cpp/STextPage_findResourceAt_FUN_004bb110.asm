; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResource * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004bb110(STextPage *this_ptr,int x,int y)
;
; Parameters:
; STextPage *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0 at 004be323
;   core_fldnotes.cpp_CFieldNotes_process_FUN_004be970 at 004beb3f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb110
        ;   Label: core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110
    PUSH ESI                            ; 004bb111
    PUSH EDI                            ; 004bb112
    PUSH EBP                            ; 004bb113
    MOV EBP,dword ptr [ESP + 0x14]      ; 004bb114
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bb118
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004bb11c
    MOV EDX,dword ptr [EBP]             ; 004bb120
    XOR EBX,EBX                         ; 004bb123
    TEST EDX,EDX                        ; 004bb125
    JLE 0x004bb154                      ; 004bb127
        ;   XREF to: 004bb154 (CONDITIONAL_JUMP)  ; LAB_004bb154
    MOV ECX,EBP                         ; 004bb129
    MOV EAX,dword ptr [ECX + 0x4]       ; 004bb12b
        ;   Label: LAB_004bb12b
    MOV EDX,dword ptr [EAX]             ; 004bb12e
    CMP EDI,EDX                         ; 004bb130
    JL 0x004bb149                       ; 004bb132
        ;   XREF to: 004bb149 (CONDITIONAL_JUMP)  ; LAB_004bb149
    ADD EDX,dword ptr [EAX + 0x8]       ; 004bb134
    CMP EDI,EDX                         ; 004bb137
    JGE 0x004bb149                      ; 004bb139
        ;   XREF to: 004bb149 (CONDITIONAL_JUMP)  ; LAB_004bb149
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bb13b
    CMP ESI,EDX                         ; 004bb13e
    JL 0x004bb149                       ; 004bb140
        ;   XREF to: 004bb149 (CONDITIONAL_JUMP)  ; LAB_004bb149
    ADD EDX,dword ptr [EAX + 0xc]       ; 004bb142
    CMP ESI,EDX                         ; 004bb145
    JL 0x004bb156                       ; 004bb147
        ;   XREF to: 004bb156 (CONDITIONAL_JUMP)  ; LAB_004bb156
    INC EBX                             ; 004bb149
        ;   Label: LAB_004bb149
    MOV EAX,dword ptr [EBP]             ; 004bb14a
    ADD ECX,0x4                         ; 004bb14d
    CMP EBX,EAX                         ; 004bb150
    JL 0x004bb12b                       ; 004bb152
        ;   XREF to: 004bb12b (CONDITIONAL_JUMP)  ; LAB_004bb12b
    XOR EAX,EAX                         ; 004bb154
        ;   Label: LAB_004bb154
    POP EBP                             ; 004bb156
        ;   Label: LAB_004bb156
    POP EDI                             ; 004bb157
    POP ESI                             ; 004bb158
    POP EBX                             ; 004bb159
    RET                                 ; 004bb15a

