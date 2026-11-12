; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_reset_FUN_004a27e0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_flashlit.cpp_FUN_004a1d4e at 004a1d74
;   core_flashlit.cpp_FUN_004a1dcc at 004a1e04
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004a4180 at 004a419a
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a4360
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004a5490 at 004a5501
;   core_fldnotes.cpp_FUN_004a5700 at 004a5765
;   core_fldnotes.cpp_STextView_dtor_FUN_004a27c0 at 004a27c6
;
; Referenced Globals:
;   undefined4 DAT_01511cd0
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_clear_FUN_004a26a0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a27e0
        ;   Label: core_fldnotes.cpp_STextView_reset_FUN_004a27e0
    PUSH EBP                            ; 004a27e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a27e2
    CMP dword ptr [EBX + 0x3c],0x0      ; 004a27e6
    JZ 0x004a282a                       ; 004a27ea
        ;   XREF to: 004a282a (CONDITIONAL_JUMP)  ; LAB_004a282a
    PUSH EDI                            ; 004a27ec
    MOV ECX,dword ptr [EBX + 0x38]      ; 004a27ed
    XOR EDI,EDI                         ; 004a27f0
    TEST ECX,ECX                        ; 004a27f2
    JLE 0x004a2816                      ; 004a27f4
        ;   XREF to: 004a2816 (CONDITIONAL_JUMP)  ; LAB_004a2816
    PUSH ESI                            ; 004a27f6
    XOR ESI,ESI                         ; 004a27f7
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a27f9
        ;   Label: LAB_004a27f9
    ADD EAX,ESI                         ; 004a27fc
    PUSH EAX                            ; 004a27fe
    INC EDI                             ; 004a27ff
    CALL core_fldnotes.cpp_STextPage_clear_FUN_004a26a0 ; 004a2800
        ;   XREF to: 004a26a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_clear_FUN_004a26a0(STextPage * this_ptr)
    ADD ESI,0x144                       ; 004a2805
    MOV EBP,dword ptr [EBX + 0x38]      ; 004a280b
    ADD ESP,0x4                         ; 004a280e
    CMP EDI,EBP                         ; 004a2811
    JL 0x004a27f9                       ; 004a2813
        ;   XREF to: 004a27f9 (CONDITIONAL_JUMP)  ; LAB_004a27f9
    POP ESI                             ; 004a2815
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2816
        ;   Label: LAB_004a2816
    PUSH EAX                            ; 004a2819
    CALL crt_unknown.c_FUN_005b86a0     ; 004a281a
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004a281f
    MOV dword ptr [EBX + 0x3c],0x0      ; 004a2822
    POP EDI                             ; 004a2829
    MOV dword ptr [EBX + 0x10],0x0      ; 004a282a
        ;   Label: LAB_004a282a
    MOV dword ptr [EBX + 0x30],0x0      ; 004a2831
    MOV dword ptr [EBX + 0x34],0x0      ; 004a2838
    MOV byte ptr [EBX + 0x48],0x0       ; 004a283f
    MOV EAX,dword ptr [EBX]             ; 004a2843
    MOV dword ptr [EBX + 0x38],0x0      ; 004a2845
    MOV dword ptr [EBX + 0x1c],EAX      ; 004a284c
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a284f
    MOV dword ptr [EBX + 0x20],EAX      ; 004a2852
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a2855
    MOV dword ptr [EBX + 0x24],EAX      ; 004a2858
    MOV EAX,dword ptr [EBX + 0xc]       ; 004a285b
    MOV dword ptr [EBX + 0x28],EAX      ; 004a285e
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2861
    MOV dword ptr [EBX + 0x14],EAX      ; 004a2864
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a2867
    MOV dword ptr [EBX + 0x18],EAX      ; 004a286a
    MOV EAX,[0x01511cd0]                ; 004a286d | DAT_01511cd0
    MOV dword ptr [EBX + 0x2c],EAX      ; 004a2872
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a2875
    MOV dword ptr [EBX + 0x40],EAX      ; 004a2878
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a287b
    MOV dword ptr [EBX + 0x44],EAX      ; 004a287e
    POP EBP                             ; 004a2881
    POP EBX                             ; 004a2882
    RET                                 ; 004a2883

