; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_ensurePage_FUN_004a31c0(STextView *this_ptr)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_fldnotes.cpp_STextView_addResource_FUN_004a2bb0 at 004a2bb6
;   core_fldnotes.cpp_STextView_newPage_FUN_004a2c90 at 004a2cb2
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005d5c9f
;   TerminatedCString s_Out_of_memory_005d5cb4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_init_FUN_004a2690
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a31c0
        ;   Label: core_fldnotes.cpp_STextView_ensurePage_FUN_004a31c0
    PUSH ESI                            ; 004a31c1
    PUSH EBP                            ; 004a31c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a31c3
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a31c7
    CMP EAX,dword ptr [EBX + 0x38]      ; 004a31ca
    JL 0x004a3233                       ; 004a31cd
        ;   XREF to: 004a3233 (CONDITIONAL_JUMP)  ; LAB_004a3233
    MOV EAX,dword ptr [EBX + 0x38]      ; 004a31cf
        ;   Label: LAB_004a31cf
    INC EAX                             ; 004a31d2
    IMUL EAX,EAX,0x144                  ; 004a31d3
    PUSH EAX                            ; 004a31d9
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004a31da
    PUSH EBP                            ; 004a31dd
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 004a31de
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004a31e3
    MOV dword ptr [EBX + 0x3c],EAX      ; 004a31e6
    TEST EAX,EAX                        ; 004a31e9
    JNZ 0x004a3210                      ; 004a31eb
        ;   XREF to: 004a3210 (CONDITIONAL_JUMP)  ; LAB_004a3210
    MOV EDX,0x5d5c9f                    ; 004a31ed | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x62d                       ; 004a31f2
    PUSH 0x5d5cb4                       ; 004a31f7 | = "Out of memory"
    MOV dword ptr [0x01d046a0],EDX      ; 004a31fc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004a3202 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a3208
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a320d
    IMUL EAX,dword ptr [EBX + 0x38],0x144 ; 004a3210
        ;   Label: LAB_004a3210
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004a3217
    ADD EAX,EDX                         ; 004a321a
    PUSH EAX                            ; 004a321c
    CALL core_fldnotes.cpp_STextPage_init_FUN_004a2690 ; 004a321d
        ;   XREF to: 004a2690 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_init_FUN_004a2690(STextPage * this_ptr)
    MOV ESI,dword ptr [EBX + 0x38]      ; 004a3222
    ADD ESP,0x4                         ; 004a3225
    INC ESI                             ; 004a3228
    MOV EAX,dword ptr [EBX + 0x10]      ; 004a3229
    MOV dword ptr [EBX + 0x38],ESI      ; 004a322c
    CMP EAX,ESI                         ; 004a322f
    JGE 0x004a31cf                      ; 004a3231
        ;   XREF to: 004a31cf (CONDITIONAL_JUMP)  ; LAB_004a31cf
    POP EBP                             ; 004a3233
        ;   Label: LAB_004a3233
    POP ESI                             ; 004a3234
    POP EBX                             ; 004a3235
    RET                                 ; 004a3236

