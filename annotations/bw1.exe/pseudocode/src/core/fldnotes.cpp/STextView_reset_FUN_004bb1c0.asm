; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_flashlit.cpp_FUN_004ba630 at 004ba655
;   core_flashlit.cpp_FUN_004ba6b0 at 004ba6e2
;   core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0 at 004be157
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004bcb70 at 004bcb8a
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bcd50
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004bde80 at 004bdef1
;   core_fldnotes.cpp_STextView_dtor_FUN_004bb1a0 at 004bb1a6
;
; Referenced Globals:
;   undefined4 DAT_0152d254
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_clear_FUN_004bb080
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb1c0
        ;   Label: core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
    PUSH EBP                            ; 004bb1c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bb1c2
    CMP dword ptr [EBX + 0x3c],0x0      ; 004bb1c6
    JZ 0x004bb20a                       ; 004bb1ca
        ;   XREF to: 004bb20a (CONDITIONAL_JUMP)  ; LAB_004bb20a
    PUSH EDI                            ; 004bb1cc
    MOV ECX,dword ptr [EBX + 0x38]      ; 004bb1cd
    XOR EDI,EDI                         ; 004bb1d0
    TEST ECX,ECX                        ; 004bb1d2
    JLE 0x004bb1f6                      ; 004bb1d4
        ;   XREF to: 004bb1f6 (CONDITIONAL_JUMP)  ; LAB_004bb1f6
    PUSH ESI                            ; 004bb1d6
    XOR ESI,ESI                         ; 004bb1d7
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004bb1d9
        ;   Label: LAB_004bb1d9
    ADD EAX,ESI                         ; 004bb1dc
    PUSH EAX                            ; 004bb1de
    INC EDI                             ; 004bb1df
    CALL core_fldnotes.cpp_STextPage_clear_FUN_004bb080 ; 004bb1e0
        ;   XREF to: 004bb080 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_clear_FUN_004bb080(STextPage * this_ptr)
    ADD ESI,0x144                       ; 004bb1e5
    MOV EBP,dword ptr [EBX + 0x38]      ; 004bb1eb
    ADD ESP,0x4                         ; 004bb1ee
    CMP EDI,EBP                         ; 004bb1f1
    JL 0x004bb1d9                       ; 004bb1f3
        ;   XREF to: 004bb1d9 (CONDITIONAL_JUMP)  ; LAB_004bb1d9
    POP ESI                             ; 004bb1f5
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004bb1f6
        ;   Label: LAB_004bb1f6
    PUSH EAX                            ; 004bb1f9
    CALL crt_unknown.c_FUN_005c09f0     ; 004bb1fa
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004bb1ff
    MOV dword ptr [EBX + 0x3c],0x0      ; 004bb202
    POP EDI                             ; 004bb209
    MOV dword ptr [EBX + 0x10],0x0      ; 004bb20a
        ;   Label: LAB_004bb20a
    MOV dword ptr [EBX + 0x30],0x0      ; 004bb211
    MOV dword ptr [EBX + 0x34],0x0      ; 004bb218
    MOV byte ptr [EBX + 0x48],0x0       ; 004bb21f
    MOV EAX,dword ptr [EBX]             ; 004bb223
    MOV dword ptr [EBX + 0x38],0x0      ; 004bb225
    MOV dword ptr [EBX + 0x1c],EAX      ; 004bb22c
    MOV EAX,dword ptr [EBX + 0x4]       ; 004bb22f
    MOV dword ptr [EBX + 0x20],EAX      ; 004bb232
    MOV EAX,dword ptr [EBX + 0x8]       ; 004bb235
    MOV dword ptr [EBX + 0x24],EAX      ; 004bb238
    MOV EAX,dword ptr [EBX + 0xc]       ; 004bb23b
    MOV dword ptr [EBX + 0x28],EAX      ; 004bb23e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004bb241
    MOV dword ptr [EBX + 0x14],EAX      ; 004bb244
    MOV EAX,dword ptr [EBX + 0x20]      ; 004bb247
    MOV dword ptr [EBX + 0x18],EAX      ; 004bb24a
    MOV EAX,[0x0152d254]                ; 004bb24d | DAT_0152d254
    MOV dword ptr [EBX + 0x2c],EAX      ; 004bb252
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004bb255
    MOV dword ptr [EBX + 0x40],EAX      ; 004bb258
    MOV EAX,dword ptr [EBX + 0x28]      ; 004bb25b
    MOV dword ptr [EBX + 0x44],EAX      ; 004bb25e
    POP EBP                             ; 004bb261
    POP EBX                             ; 004bb262
    RET                                 ; 004bb263

