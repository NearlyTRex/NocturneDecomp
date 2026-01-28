; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_displayMemoryStatus_FUN_0046e6f0(int line_number)
;
; Parameters:
; int              Stack[0x4]:4   line_number
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   TerminatedCString s_Memory_available_d_0061dea9
;   TerminatedCString s_Largest_block_d_0061debe
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_watcom.c_memavl_FUN_006008f0
;   crt_watcom.c_memmax_FUN_00600940
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e6f0
        ;   Label: shape_design.c_displayMemoryStatus_FUN_0046e6f0
    PUSH ESI                            ; 0046e6f1
    PUSH EDI                            ; 0046e6f2
    PUSH EBP                            ; 0046e6f3
    MOV EBP,ESP                         ; 0046e6f4
    SUB ESP,0x50                        ; 0046e6f6
    CALL crt_watcom.c_memavl_FUN_006008f0 ; 0046e6fc
        ;   XREF to: 006008f0 (UNCONDITIONAL_CALL)  ; uint crt_watcom.c_memavl_FUN_006008f0()
    PUSH EAX                            ; 0046e701
    MOV EAX,0x61dea9                    ; 0046e702 | = "Memory available: %d"
    PUSH EAX                            ; 0046e707 | = "Memory available: %d"
    LEA EAX,[EBP + -0x50]               ; 0046e708
    PUSH EAX                            ; 0046e70b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046e70c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046e711
    IMUL EAX,dword ptr [EBP + 0x14],0xb ; 0046e714
    PUSH EAX                            ; 0046e718
    PUSH 0x0                            ; 0046e719
    LEA EAX,[EBP + -0x50]               ; 0046e71b
    PUSH EAX                            ; 0046e71e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e71f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0046e724
    CALL crt_watcom.c_memmax_FUN_00600940 ; 0046e727
        ;   XREF to: 00600940 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c_memmax_FUN_00600940()
    PUSH EAX                            ; 0046e72c
    MOV EAX,0x61debe                    ; 0046e72d | = "Largest block: %d"
    PUSH EAX                            ; 0046e732 | = "Largest block: %d"
    LEA EAX,[EBP + -0x50]               ; 0046e733
    PUSH EAX                            ; 0046e736
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0046e737
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046e73c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046e73f
    INC EAX                             ; 0046e742
    IMUL EAX,EAX,0xb                    ; 0046e743
    PUSH EAX                            ; 0046e746
    PUSH 0x0                            ; 0046e747
    LEA EAX,[EBP + -0x50]               ; 0046e749
    PUSH EAX                            ; 0046e74c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e74d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0046e752
    MOV ESP,EBP                         ; 0046e755
    POP EBP                             ; 0046e757
    POP EDI                             ; 0046e758
    POP ESI                             ; 0046e759
    POP EBX                             ; 0046e75a
    RET                                 ; 0046e75b

