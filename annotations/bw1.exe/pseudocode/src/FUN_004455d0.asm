; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004455d0(int param_1)
;
;
; XREF[2]:
;   FUN_004453a0 at 004453ec
;   FUN_004cf5e0 at 004cf5fb
;
; Referenced Globals:
;   TerminatedCString s_console_txt_00611108
;
; Called Functions:
;   FUN_00479950
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004455d0
        ;   Label: FUN_004455d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004455d1
    PUSH 0xfa0                          ; 004455d5
    PUSH 0x0                            ; 004455da
    LEA EAX,[EBX + 0x8]                 ; 004455dc
    PUSH EAX                            ; 004455df
    CALL FUN_005bfb70                   ; 004455e0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 004455e5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004455e8
    PUSH 0x611108                       ; 004455f2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004455f7
    CALL FUN_00479950                   ; 00445601
        ;   XREF to: 00479950 (UNCONDITIONAL_CALL)  ; undefined FUN_00479950()
    ADD ESP,0x4                         ; 00445606
    POP EBX                             ; 00445609
    RET                                 ; 0044560a

