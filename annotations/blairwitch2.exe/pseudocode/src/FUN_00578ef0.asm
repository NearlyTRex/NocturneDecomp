; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00578ef0(int param_1)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
;
; XREF[2]:
;   FUN_005790f0 at 005790fe
;   FUN_005792e0 at 0057931e
;
; Called Functions:
;   FUN_00578e20
;   FUN_005b77c0
;   Ordinal_9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578ef0
        ;   Label: FUN_00578ef0
    PUSH EDI                            ; 00578ef1
    SUB ESP,0x10                        ; 00578ef2
    MOV EBX,ESI                         ; 00578ef5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00578ef7
    MOV EDX,0x2                         ; 00578efb
    XOR EAX,EAX                         ; 00578f00
    MOV word ptr [ESP],DX               ; 00578f02
    MOV AX,word ptr [ESI + 0x4]         ; 00578f06
    PUSH EAX                            ; 00578f0a
    CALL Ordinal_9                      ; 00578f0b
        ;   XREF to: 005c752c (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH ESI                            ; 00578f10
    MOV word ptr [ESP + 0x6],AX         ; 00578f11
    CALL FUN_00578e20                   ; 00578f16
        ;   XREF to: 00578e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00578e20()
    ADD ESP,0x4                         ; 00578f1b
    PUSH 0x8                            ; 00578f1e
    LEA EDX,[ESP + 0x4]                 ; 00578f20
    PUSH 0x0                            ; 00578f24
    MOV dword ptr [EDX + 0x4],EAX       ; 00578f26
    LEA EAX,[EDX + 0x8]                 ; 00578f29
    PUSH EAX                            ; 00578f2c
    MOV EDI,EBX                         ; 00578f2d
    LEA ESI,[ESP + 0xc]                 ; 00578f2f
    CALL FUN_005b77c0                   ; 00578f33
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00578f38
    MOVSD ES:EDI,ESI                    ; 00578f3b
    MOVSD ES:EDI,ESI                    ; 00578f3c
    MOVSD ES:EDI,ESI                    ; 00578f3d
    MOVSD ES:EDI,ESI                    ; 00578f3e
    MOV EAX,EBX                         ; 00578f3f
    ADD ESP,0x10                        ; 00578f41
    POP EDI                             ; 00578f44
    POP EBX                             ; 00578f45
    RET                                 ; 00578f46

