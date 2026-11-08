; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005906e0(int param_1)
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
;   FUN_0058e3c0 at 0058e49b
;   FUN_005907a0 at 00590dd4
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_0045f690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005906e0
        ;   Label: FUN_005906e0
    PUSH EDI                            ; 005906e1
    SUB ESP,0x4c                        ; 005906e2
    MOV EBX,ESI                         ; 005906e5
    MOV ESI,dword ptr [ESP + 0x58]      ; 005906e7
    MOV EAX,dword ptr [ESI + 0x1ffc8]   ; 005906eb
    MOV dword ptr [ESP + 0x34],EAX      ; 005906f1
    LEA EAX,[ESP + 0x34]                ; 005906f5
    PUSH EAX                            ; 005906f9
    LEA EAX,[ESP + 0x4]                 ; 005906fa
    XOR EDX,EDX                         ; 005906fe
    PUSH EAX                            ; 00590700
    MOV dword ptr [ESP + 0x44],EDX      ; 00590701
    MOV dword ptr [ESP + 0x40],EDX      ; 00590705
    CALL FUN_0045f3e0                   ; 00590709
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 0059070e
    MOV EAX,dword ptr [ESI + 0x1ffbc]   ; 00590711
    MOV dword ptr [ESP + 0x48],EAX      ; 00590717
    XOR ESI,ESI                         ; 0059071b
    LEA EAX,[ESP + 0x40]                ; 0059071d
    MOV dword ptr [ESP + 0x40],ESI      ; 00590721
    PUSH EAX                            ; 00590725
    LEA EAX,[ESP + 0x4]                 ; 00590726
    MOV dword ptr [ESP + 0x48],ESI      ; 0059072a
    PUSH EAX                            ; 0059072e
    LEA ESI,[ESP + 0x30]                ; 0059072f
    MOV EDI,EBX                         ; 00590733
    CALL FUN_0045f690                   ; 00590735
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x30]                ; 0059073a
    ADD ESP,0x8                         ; 0059073e
    MOVSD ES:EDI,ESI                    ; 00590741
    MOVSD ES:EDI,ESI                    ; 00590742
    MOVSD ES:EDI,ESI                    ; 00590743
    MOV EAX,EBX                         ; 00590744
    ADD ESP,0x4c                        ; 00590746
    POP EDI                             ; 00590749
    POP EBX                             ; 0059074a
    RET                                 ; 0059074b

