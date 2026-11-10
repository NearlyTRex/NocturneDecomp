; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_00445610(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_console.cpp_CConsole_writeChar_FUN_00445500 at 0044559c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445610
        ;   Label: engine_console.cpp_CConsole_scrollUp_FUN_00445610
    PUSH ESI                            ; 00445611
    PUSH EDI                            ; 00445612
    PUSH EBP                            ; 00445613
    SUB ESP,0x4                         ; 00445614
    MOV EDX,dword ptr [ESP + 0x18]      ; 00445617
    ADD EDX,0x8                         ; 0044561b
    XOR EBP,EBP                         ; 0044561e
    MOV dword ptr [ESP],EDX             ; 00445620
    LEA EBX,[EDX + 0x50]                ; 00445623
    MOV ECX,dword ptr [ESP + 0x18]      ; 00445626
        ;   Label: LAB_00445626
    MOV ECX,dword ptr [ECX + 0xfb4]     ; 0044562a
    DEC ECX                             ; 00445630
    CMP EBP,ECX                         ; 00445631
    JL 0x00445664                       ; 00445633
        ;   XREF to: 00445664 (CONDITIONAL_JUMP)  ; LAB_00445664
    MOV EDX,dword ptr [ESP + 0x18]      ; 00445635
    MOV EBX,dword ptr [EDX + 0xfb0]     ; 00445639
    LEA EDX,[ECX*0x4 + 0x0]             ; 0044563f
    MOV ESI,dword ptr [ESP]             ; 00445646
    ADD EDX,ECX                         ; 00445649
    PUSH EBX                            ; 0044564b
    SHL EDX,0x4                         ; 0044564c
    PUSH 0x0                            ; 0044564f
    ADD EDX,ESI                         ; 00445651
    PUSH EDX                            ; 00445653
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00445654
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00445659
    ADD ESP,0x4                         ; 0044565c
    POP EBP                             ; 0044565f
    POP EDI                             ; 00445660
    POP ESI                             ; 00445661
    POP EBX                             ; 00445662
    RET                                 ; 00445663
    MOV ECX,dword ptr [ESP + 0x18]      ; 00445664
        ;   Label: LAB_00445664
    MOV ESI,EBX                         ; 00445668
    MOV EDI,EDX                         ; 0044566a
    MOV ECX,dword ptr [ECX + 0xfb0]     ; 0044566c
    INC EBP                             ; 00445672
    PUSH EDI                            ; 00445673
    MOV EAX,ECX                         ; 00445674
    SHR ECX,0x2                         ; 00445676
    MOVSD.REP ES:EDI,ESI                ; 00445679
    MOV CL,AL                           ; 0044567b
    AND CL,0x3                          ; 0044567d
    MOVSB.REP ES:EDI,ESI                ; 00445680
    POP EDI                             ; 00445682
    ADD EDX,0x50                        ; 00445683
    ADD EBX,0x50                        ; 00445686
    JMP 0x00445626                      ; 00445689
        ;   XREF to: 00445626 (UNCONDITIONAL_JUMP)  ; LAB_00445626

