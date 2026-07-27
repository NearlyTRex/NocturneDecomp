; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_004570f0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_dpart_cpp_0057d44a
;   TerminatedCString s_CDemonPart_save_is_no_lo_0057d45c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x57d44a                    ; 004570f0 | = "..\\core\\dpart.cpp"
        ;   Label: core_dpart.cpp_FUN_004570f0
    MOV ECX,0x132                       ; 004570f5
    PUSH 0x57d45c                       ; 004570fa | = "CDemonPart::save is no longer needed"
    MOV dword ptr [0x01cc4800],EDX      ; 004570ff | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00457105 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045710b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00457110
    RET                                 ; 00457113

