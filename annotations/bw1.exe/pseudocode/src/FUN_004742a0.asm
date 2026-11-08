; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004742a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_00471af0 at 00471bd1
;   FUN_00474400 at 00474a9f
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004742a0
        ;   Label: FUN_004742a0
    PUSH EDI                            ; 004742a1
    SUB ESP,0x4c                        ; 004742a2
    MOV EBX,ESI                         ; 004742a5
    MOV ESI,dword ptr [ESP + 0x58]      ; 004742a7
    MOV EAX,dword ptr [ESI + 0x1ffc8]   ; 004742ab
    MOV dword ptr [ESP + 0x34],EAX      ; 004742b1
    LEA EAX,[ESP + 0x34]                ; 004742b5
    PUSH EAX                            ; 004742b9
    LEA EAX,[ESP + 0x4]                 ; 004742ba
    XOR EDX,EDX                         ; 004742be
    PUSH EAX                            ; 004742c0
    MOV dword ptr [ESP + 0x44],EDX      ; 004742c1
    MOV dword ptr [ESP + 0x40],EDX      ; 004742c5
    CALL FUN_0045f3e0                   ; 004742c9
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 004742ce
    MOV EAX,dword ptr [ESI + 0x1ffbc]   ; 004742d1
    MOV dword ptr [ESP + 0x48],EAX      ; 004742d7
    XOR ESI,ESI                         ; 004742db
    LEA EAX,[ESP + 0x40]                ; 004742dd
    MOV dword ptr [ESP + 0x40],ESI      ; 004742e1
    PUSH EAX                            ; 004742e5
    LEA EAX,[ESP + 0x4]                 ; 004742e6
    MOV dword ptr [ESP + 0x48],ESI      ; 004742ea
    PUSH EAX                            ; 004742ee
    LEA ESI,[ESP + 0x30]                ; 004742ef
    MOV EDI,EBX                         ; 004742f3
    CALL FUN_0045f690                   ; 004742f5
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x30]                ; 004742fa
    ADD ESP,0x8                         ; 004742fe
    MOVSD ES:EDI,ESI                    ; 00474301
    MOVSD ES:EDI,ESI                    ; 00474302
    MOVSD ES:EDI,ESI                    ; 00474303
    MOV EAX,EBX                         ; 00474304
    ADD ESP,0x4c                        ; 00474306
    POP EDI                             ; 00474309
    POP EBX                             ; 0047430a
    RET                                 ; 0047430b

