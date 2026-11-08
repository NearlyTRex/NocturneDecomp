; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fdef0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00502d60 at 00502e1e
;
; Called Functions:
;   FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdef0
        ;   Label: FUN_004fdef0
    PUSH ESI                            ; 004fdef1
    PUSH EDI                            ; 004fdef2
    PUSH EBP                            ; 004fdef3
    SUB ESP,0x4                         ; 004fdef4
    XOR EDX,EDX                         ; 004fdef7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004fdef9
    MOV dword ptr [ESP],EDX             ; 004fdefd
    MOV EBP,dword ptr [EBP + 0x10]      ; 004fdf00
    XOR ESI,ESI                         ; 004fdf03
        ;   Label: LAB_004fdf03
    TEST EBP,EBP                        ; 004fdf05
    JLE 0x004fdf37                      ; 004fdf07
        ;   XREF to: 004fdf37 (CONDITIONAL_JUMP)  ; LAB_004fdf37
    MOV EBX,dword ptr [ESP]             ; 004fdf09
    MOV EDI,dword ptr [ESP + 0x20]      ; 004fdf0c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fdf10
    ADD EBX,EDI                         ; 004fdf14
    MOV EDI,dword ptr [ESP]             ; 004fdf16
    ADD EDI,EAX                         ; 004fdf19
    CMP dword ptr [EDI],0x0             ; 004fdf1b
        ;   Label: LAB_004fdf1b
    JNZ 0x004fdf50                      ; 004fdf1e
        ;   XREF to: 004fdf50 (CONDITIONAL_JUMP)  ; LAB_004fdf50
    MOV dword ptr [EBX],0x3f            ; 004fdf20
    ADD EBX,0x180                       ; 004fdf26
        ;   Label: LAB_004fdf26
    INC ESI                             ; 004fdf2c
    ADD EDI,0x80                        ; 004fdf2d
    CMP ESI,EBP                         ; 004fdf33
    JL 0x004fdf1b                       ; 004fdf35
        ;   XREF to: 004fdf1b (CONDITIONAL_JUMP)  ; LAB_004fdf1b
    MOV ECX,dword ptr [ESP]             ; 004fdf37
        ;   Label: LAB_004fdf37
    ADD ECX,0x4                         ; 004fdf3a
    MOV dword ptr [ESP],ECX             ; 004fdf3d
    CMP ECX,0x80                        ; 004fdf40
    JNZ 0x004fdf03                      ; 004fdf46
        ;   XREF to: 004fdf03 (CONDITIONAL_JUMP)  ; LAB_004fdf03
    ADD ESP,0x4                         ; 004fdf48
    POP EBP                             ; 004fdf4b
    POP EDI                             ; 004fdf4c
    POP ESI                             ; 004fdf4d
    POP EBX                             ; 004fdf4e
    RET                                 ; 004fdf4f
    PUSH 0x6                            ; 004fdf50
        ;   Label: LAB_004fdf50
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004fdf52
    PUSH ECX                            ; 004fdf56
    CALL FUN_004fd5e0                   ; 004fdf57
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fdf5c
    MOV dword ptr [EBX],EAX             ; 004fdf5f
    JMP 0x004fdf26                      ; 004fdf61
        ;   XREF to: 004fdf26 (UNCONDITIONAL_JUMP)  ; LAB_004fdf26

