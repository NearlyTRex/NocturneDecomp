; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045bfa0(int param_1)
;
;
; XREF[1]:
;   FUN_0045c7b0 at 0045c853
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bfa0
        ;   Label: FUN_0045bfa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045bfa1
    PUSH 0x0                            ; 0045bfa5
    PUSH 0x0                            ; 0045bfa7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045bfa9
    PUSH EBX                            ; 0045bfaf
    MOV dword ptr [EBX + 0xc278],0x0    ; 0045bfb0
    CALL dword ptr [EAX + 0x128]        ; 0045bfba
    ADD ESP,0xc                         ; 0045bfc0
    PUSH 0x0                            ; 0045bfc3
    PUSH 0x1                            ; 0045bfc5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045bfc7
    PUSH EBX                            ; 0045bfcd
    CALL dword ptr [EAX + 0x128]        ; 0045bfce
    ADD ESP,0xc                         ; 0045bfd4
    POP EBX                             ; 0045bfd7
    RET                                 ; 0045bfd8

