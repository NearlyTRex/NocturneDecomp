; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056f7c0(int param_1)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
;
; XREF[2]:
;   FUN_0056f9c0 at 0056f9ce
;   FUN_0056fbb0 at 0056fbee
;
; Called Functions:
;   FUN_0056f6f0
;   FUN_005a28f0
;   Ordinal_9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f7c0
        ;   Label: FUN_0056f7c0
    PUSH EDI                            ; 0056f7c1
    SUB ESP,0x10                        ; 0056f7c2
    MOV EBX,ESI                         ; 0056f7c5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056f7c7
    MOV EDX,0x2                         ; 0056f7cb
    XOR EAX,EAX                         ; 0056f7d0
    MOV word ptr [ESP],DX               ; 0056f7d2
    MOV AX,word ptr [ESI + 0x4]         ; 0056f7d6
    PUSH EAX                            ; 0056f7da
    CALL Ordinal_9                      ; 0056f7db
        ;   XREF to: 005b25ce (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH ESI                            ; 0056f7e0
    MOV word ptr [ESP + 0x6],AX         ; 0056f7e1
    CALL FUN_0056f6f0                   ; 0056f7e6
        ;   XREF to: 0056f6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f6f0()
    ADD ESP,0x4                         ; 0056f7eb
    PUSH 0x8                            ; 0056f7ee
    LEA EDX,[ESP + 0x4]                 ; 0056f7f0
    PUSH 0x0                            ; 0056f7f4
    MOV dword ptr [EDX + 0x4],EAX       ; 0056f7f6
    LEA EAX,[EDX + 0x8]                 ; 0056f7f9
    PUSH EAX                            ; 0056f7fc
    MOV EDI,EBX                         ; 0056f7fd
    LEA ESI,[ESP + 0xc]                 ; 0056f7ff
    CALL FUN_005a28f0                   ; 0056f803
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0056f808
    MOVSD ES:EDI,ESI                    ; 0056f80b
    MOVSD ES:EDI,ESI                    ; 0056f80c
    MOVSD ES:EDI,ESI                    ; 0056f80d
    MOVSD ES:EDI,ESI                    ; 0056f80e
    MOV EAX,EBX                         ; 0056f80f
    ADD ESP,0x10                        ; 0056f811
    POP EDI                             ; 0056f814
    POP EBX                             ; 0056f815
    RET                                 ; 0056f816

