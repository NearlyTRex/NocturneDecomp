; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea060(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   FUN_004e9f20 at 004e9f5c
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fd1210
;
; Called Functions:
;   FUN_00408b40
;   FUN_0042c010
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea060
        ;   Label: FUN_004ea060
    PUSH ESI                            ; 004ea061
    PUSH EDI                            ; 004ea062
    PUSH EBP                            ; 004ea063
    SUB ESP,0x6c                        ; 004ea064
    MOV EBP,dword ptr [ESP + 0x80]      ; 004ea067
    MOV EDX,dword ptr [ESP + 0x84]      ; 004ea06e
    PUSH EDX                            ; 004ea075
    LEA EAX,[EBP + 0x158]               ; 004ea076
    PUSH EAX                            ; 004ea07c
    LEA ESI,[ESP + 0x5c]                ; 004ea07d
    LEA EDI,[ESP + 0x50]                ; 004ea081
    CALL FUN_00569130                   ; 004ea085
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    ADD ESP,0x8                         ; 004ea08a
    LEA EAX,[ESP + 0x48]                ; 004ea08d
    LEA ESI,[ESP + 0x54]                ; 004ea091
    PUSH EAX                            ; 004ea095
    MOVSD ES:EDI,ESI                    ; 004ea096
    MOVSD ES:EDI,ESI                    ; 004ea097
    MOVSD ES:EDI,ESI                    ; 004ea098
    PUSH EBP                            ; 004ea099
    LEA ESI,[ESP + 0x44]                ; 004ea09a
    LEA EDI,[ESP + 0x68]                ; 004ea09e
    CALL FUN_00408b40                   ; 004ea0a2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x44]                ; 004ea0a7
    ADD ESP,0x8                         ; 004ea0ab
    MOVSD ES:EDI,ESI                    ; 004ea0ae
    MOVSD ES:EDI,ESI                    ; 004ea0af
    MOVSD ES:EDI,ESI                    ; 004ea0b0
    XOR EDI,EDI                         ; 004ea0b1
    XOR ESI,ESI                         ; 004ea0b3
    MOV EBX,dword ptr [0x00622c18]      ; 004ea0b5 | DAT_00622c18
        ;   Label: LAB_004ea0b5
    CMP EDI,dword ptr [EBX + 0x14f0a8]  ; 004ea0bb | DAT_01fd1210
    JGE 0x004ea10f                      ; 004ea0c1
        ;   XREF to: 004ea10f (CONDITIONAL_JUMP)  ; LAB_004ea10f
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f0ac] ; 004ea0c3
    CMP EBX,EBP                         ; 004ea0ca
    JNZ 0x004ea0d4                      ; 004ea0cc
        ;   XREF to: 004ea0d4 (CONDITIONAL_JUMP)  ; LAB_004ea0d4
    INC EDI                             ; 004ea0ce
        ;   Label: LAB_004ea0ce
    ADD ESI,0x4                         ; 004ea0cf
    JMP 0x004ea0b5                      ; 004ea0d2
        ;   XREF to: 004ea0b5 (UNCONDITIONAL_JUMP)  ; LAB_004ea0b5
    MOV EAX,ESP                         ; 004ea0d4
        ;   Label: LAB_004ea0d4
    PUSH EAX                            ; 004ea0d6
    CALL FUN_0042c010                   ; 004ea0d7
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    MOV EAX,0x41200000                  ; 004ea0dc
    ADD ESP,0x4                         ; 004ea0e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004ea0e4
    MOV EAX,ESP                         ; 004ea0e8
    PUSH EAX                            ; 004ea0ea
    MOV dword ptr [ESP + 0x38],EBP      ; 004ea0eb
    PUSH 0x3f000000                     ; 004ea0ef
    LEA EAX,[ESP + 0x68]                ; 004ea0f4
    MOV dword ptr [ESP + 0x40],EBP      ; 004ea0f8
    PUSH EAX                            ; 004ea0fc
    MOV EDX,dword ptr [EBX + 0x154]     ; 004ea0fd
    PUSH EBX                            ; 004ea103
    CALL dword ptr [EDX + 0x100]        ; 004ea104
    ADD ESP,0x10                        ; 004ea10a
    JMP 0x004ea0ce                      ; 004ea10d
        ;   XREF to: 004ea0ce (UNCONDITIONAL_JUMP)  ; LAB_004ea0ce
    ADD ESP,0x6c                        ; 004ea10f
        ;   Label: LAB_004ea10f
    POP EBP                             ; 004ea112
    POP EDI                             ; 004ea113
    POP ESI                             ; 004ea114
    POP EBX                             ; 004ea115
    RET                                 ; 004ea116

