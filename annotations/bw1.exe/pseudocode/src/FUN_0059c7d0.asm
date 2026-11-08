; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c7d0(int param_1)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
;
; XREF[2]:
;   FUN_0059c9d0 at 0059c9de
;   FUN_0059cbc0 at 0059cbfe
;
; Called Functions:
;   FUN_0059c700
;   FUN_005bfb70
;   Ordinal_9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c7d0
        ;   Label: FUN_0059c7d0
    PUSH EDI                            ; 0059c7d1
    SUB ESP,0x10                        ; 0059c7d2
    MOV EBX,ESI                         ; 0059c7d5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0059c7d7
    MOV EDX,0x2                         ; 0059c7db
    XOR EAX,EAX                         ; 0059c7e0
    MOV word ptr [ESP],DX               ; 0059c7e2
    MOV AX,word ptr [ESI + 0x4]         ; 0059c7e6
    PUSH EAX                            ; 0059c7ea
    CALL Ordinal_9                      ; 0059c7eb
        ;   XREF to: 005cf83e (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH ESI                            ; 0059c7f0
    MOV word ptr [ESP + 0x6],AX         ; 0059c7f1
    CALL FUN_0059c700                   ; 0059c7f6
        ;   XREF to: 0059c700 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c700()
    ADD ESP,0x4                         ; 0059c7fb
    PUSH 0x8                            ; 0059c7fe
    LEA EDX,[ESP + 0x4]                 ; 0059c800
    PUSH 0x0                            ; 0059c804
    MOV dword ptr [EDX + 0x4],EAX       ; 0059c806
    LEA EAX,[EDX + 0x8]                 ; 0059c809
    PUSH EAX                            ; 0059c80c
    MOV EDI,EBX                         ; 0059c80d
    LEA ESI,[ESP + 0xc]                 ; 0059c80f
    CALL FUN_005bfb70                   ; 0059c813
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0059c818
    MOVSD ES:EDI,ESI                    ; 0059c81b
    MOVSD ES:EDI,ESI                    ; 0059c81c
    MOVSD ES:EDI,ESI                    ; 0059c81d
    MOVSD ES:EDI,ESI                    ; 0059c81e
    MOV EAX,EBX                         ; 0059c81f
    ADD ESP,0x10                        ; 0059c821
    POP EDI                             ; 0059c824
    POP EBX                             ; 0059c825
    RET                                 ; 0059c826

