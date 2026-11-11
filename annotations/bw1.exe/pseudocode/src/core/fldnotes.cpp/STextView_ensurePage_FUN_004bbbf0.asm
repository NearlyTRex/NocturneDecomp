; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004bbbf0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0 at 004bb5f6
;   core_fldnotes.cpp_STextView_newPage_FUN_004bb6c0 at 004bb6e2
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005dfb1a
;   TerminatedCString s_Out_of_memory_005dfb2f
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_init_FUN_004bb070
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbbf0
        ;   Label: core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0
    PUSH ESI                            ; 004bbbf1
    PUSH EBP                            ; 004bbbf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bbbf3
    MOV EAX,dword ptr [EBX + 0x10]      ; 004bbbf7
    CMP EAX,dword ptr [EBX + 0x38]      ; 004bbbfa
    JL 0x004bbc63                       ; 004bbbfd
        ;   XREF to: 004bbc63 (CONDITIONAL_JUMP)  ; LAB_004bbc63
    MOV EAX,dword ptr [EBX + 0x38]      ; 004bbbff
        ;   Label: LAB_004bbbff
    INC EAX                             ; 004bbc02
    IMUL EAX,EAX,0x144                  ; 004bbc03
    PUSH EAX                            ; 004bbc09
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004bbc0a
    PUSH EBP                            ; 004bbc0d
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 004bbc0e
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004bbc13
    MOV dword ptr [EBX + 0x3c],EAX      ; 004bbc16
    TEST EAX,EAX                        ; 004bbc19
    JNZ 0x004bbc40                      ; 004bbc1b
        ;   XREF to: 004bbc40 (CONDITIONAL_JUMP)  ; LAB_004bbc40
    MOV EDX,0x5dfb1a                    ; 004bbc1d | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x686                       ; 004bbc22
    PUSH 0x5dfb2f                       ; 004bbc27 | = "Out of memory"
    MOV dword ptr [0x01d1d400],EDX      ; 004bbc2c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004bbc32 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bbc38
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bbc3d
    IMUL EAX,dword ptr [EBX + 0x38],0x144 ; 004bbc40
        ;   Label: LAB_004bbc40
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004bbc47
    ADD EAX,EDX                         ; 004bbc4a
    PUSH EAX                            ; 004bbc4c
    CALL core_fldnotes.cpp_STextPage_init_FUN_004bb070 ; 004bbc4d
        ;   XREF to: 004bb070 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_init_FUN_004bb070(STextPage * this_ptr)
    MOV ESI,dword ptr [EBX + 0x38]      ; 004bbc52
    ADD ESP,0x4                         ; 004bbc55
    INC ESI                             ; 004bbc58
    MOV EAX,dword ptr [EBX + 0x10]      ; 004bbc59
    MOV dword ptr [EBX + 0x38],ESI      ; 004bbc5c
    CMP EAX,ESI                         ; 004bbc5f
    JGE 0x004bbbff                      ; 004bbc61
        ;   XREF to: 004bbbff (CONDITIONAL_JUMP)  ; LAB_004bbbff
    POP EBP                             ; 004bbc63
        ;   Label: LAB_004bbc63
    POP ESI                             ; 004bbc64
    POP EBX                             ; 004bbc65
    RET                                 ; 004bbc66

