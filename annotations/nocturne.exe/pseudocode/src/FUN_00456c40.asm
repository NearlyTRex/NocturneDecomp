; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00456c40(int param_1,LPCSTR param_2)
;
;
; XREF[2]:
;   FUN_004746b0 at 00474801
;   FUN_004748b0 at 004749f4
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005754cc = 00175bfc
;
; Called Functions:
;   FindFirstFileA
;   FUN_00456d40
;   FUN_00456d80
;   FUN_00456d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456c40
        ;   Label: FUN_00456c40
    SUB ESP,0x140                       ; 00456c41
    MOV EBX,dword ptr [ESP + 0x148]     ; 00456c47
    PUSH EBX                            ; 00456c4e
    CALL FUN_00456d40                   ; 00456c4f
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00456d40()
    ADD ESP,0x4                         ; 00456c54
    MOV EAX,ESP                         ; 00456c57
    PUSH EAX                            ; 00456c59
    MOV EDX,dword ptr [ESP + 0x150]     ; 00456c5a
    PUSH EDX                            ; 00456c61
    CALL dword ptr CS:[0x5754cc]        ; 00456c62 | PTR_FindFirstFileA_005754cc
    CMP EAX,-0x1                        ; 00456c69
    JNZ 0x00456c85                      ; 00456c6c
        ;   XREF to: 00456c85 (CONDITIONAL_JUMP)  ; LAB_00456c85
    CMP dword ptr [EBX + 0x10c],0x0     ; 00456c6e
    JZ 0x00456ca3                       ; 00456c75
        ;   XREF to: 00456ca3 (CONDITIONAL_JUMP)  ; LAB_00456ca3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00456c77
        ;   Label: LAB_00456c77
    ADD ESP,0x140                       ; 00456c7d
    POP EBX                             ; 00456c83
    RET                                 ; 00456c84
    MOV dword ptr [EBX + 0x110],EAX     ; 00456c85
        ;   Label: LAB_00456c85
    MOV EAX,ESP                         ; 00456c8b
    PUSH EAX                            ; 00456c8d
    PUSH EBX                            ; 00456c8e
    CALL FUN_00456d90                   ; 00456c8f
        ;   XREF to: 00456d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00456d90()
    ADD ESP,0x8                         ; 00456c94
    MOV dword ptr [EBX + 0x10c],0x1     ; 00456c97
    JMP 0x00456c77                      ; 00456ca1
        ;   XREF to: 00456c77 (UNCONDITIONAL_JUMP)  ; LAB_00456c77
    PUSH EBX                            ; 00456ca3
        ;   Label: LAB_00456ca3
    CALL FUN_00456d80                   ; 00456ca4
        ;   XREF to: 00456d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00456d80()
    ADD ESP,0x4                         ; 00456ca9
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00456cac
    ADD ESP,0x140                       ; 00456cb2
    POP EBX                             ; 00456cb8
    RET                                 ; 00456cb9

