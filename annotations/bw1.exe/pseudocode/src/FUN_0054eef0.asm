; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054eef0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_0054f0d0 at 0054f78a
;   FUN_00550260 at 005503a6
;   FUN_00550da0 at 00550f4c
;   FUN_00551170 at 00551324
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f650
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d2c900
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   FUN_00483de0
;   FUN_00483e20
;   FUN_00551c30
;   FUN_00555770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054eef0
        ;   Label: FUN_0054eef0
    PUSH ESI                            ; 0054eef1
    PUSH EDI                            ; 0054eef2
    PUSH EBP                            ; 0054eef3
    SUB ESP,0x50                        ; 0054eef4
    MOV EBP,dword ptr [ESP + 0x64]      ; 0054eef7
    MOV EAX,[0x0061f650]                ; 0054eefb | DAT_0061f650 | DAT_01d2c900
    CMP dword ptr [EAX + 0x1008],0x0    ; 0054ef00 | DAT_01d2d908
    JNZ 0x0054f032                      ; 0054ef07
        ;   XREF to: 0054f032 (CONDITIONAL_JUMP)  ; LAB_0054f032
    XOR EBX,EBX                         ; 0054ef0d
        ;   Label: LAB_0054ef0d
    MOV ESI,dword ptr [EBP + 0x15f6fc]  ; 0054ef0f
    MOV dword ptr [ESP + 0x4c],EBX      ; 0054ef15
    TEST ESI,ESI                        ; 0054ef19
    JLE 0x0054f02a                      ; 0054ef1b
        ;   XREF to: 0054f02a (CONDITIONAL_JUMP)  ; LAB_0054f02a
    MOV dword ptr [ESP + 0x48],EBP      ; 0054ef21
    MOV EBX,dword ptr [ESP + 0x48]      ; 0054ef25
        ;   Label: LAB_0054ef25
    MOV EBX,dword ptr [EBX + 0x15f700]  ; 0054ef29
    PUSH EBX                            ; 0054ef2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054ef30
    LEA ESI,[ESP + 0x1c]                ; 0054ef36
    LEA EDI,[ESP + 0x34]                ; 0054ef3a
    CALL dword ptr [EAX + 0x1c]         ; 0054ef3e
    MOV ECX,0x6                         ; 0054ef41
    LEA ESI,[ESP + 0x1c]                ; 0054ef46
    ADD ESP,0x4                         ; 0054ef4a
    MOVSD.REP ES:EDI,ESI                ; 0054ef4d
    MOV EDX,ESP                         ; 0054ef4f
    LEA ESI,[ESP + 0x30]                ; 0054ef51
    CMP EDX,ESI                         ; 0054ef55
    JNZ 0x0054f03d                      ; 0054ef57
        ;   XREF to: 0054f03d (CONDITIONAL_JUMP)  ; LAB_0054f03d
    LEA EAX,[ESP + 0xc]                 ; 0054ef5d
        ;   Label: LAB_0054ef5d
    LEA EDX,[ESI + 0xc]                 ; 0054ef61
    CMP EAX,EDX                         ; 0054ef64
    JZ 0x0054ef7c                       ; 0054ef66
        ;   XREF to: 0054ef7c (CONDITIONAL_JUMP)  ; LAB_0054ef7c
    MOV EAX,dword ptr [EDX]             ; 0054ef68
    MOV dword ptr [ESP + 0xc],EAX       ; 0054ef6a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0054ef6e
    MOV dword ptr [ESP + 0x10],EAX      ; 0054ef71
    MOV EAX,dword ptr [EDX + 0x8]       ; 0054ef75
    MOV dword ptr [ESP + 0x14],EAX      ; 0054ef78
    LEA EAX,[EBX + 0x3c]                ; 0054ef7c
        ;   Label: LAB_0054ef7c
    PUSH EAX                            ; 0054ef7f
    LEA EAX,[ESP + 0x10]                ; 0054ef80
    PUSH EAX                            ; 0054ef84
    LEA EAX,[ESP + 0x8]                 ; 0054ef85
    PUSH EAX                            ; 0054ef89
    LEA EAX,[EBX + 0x30]                ; 0054ef8a
    PUSH EAX                            ; 0054ef8d
    LEA EAX,[EBX + 0x20]                ; 0054ef8e
    PUSH EAX                            ; 0054ef91
    PUSH EBP                            ; 0054ef92
    CALL FUN_00551c30                   ; 0054ef93
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 0054ef98
    MOV EDI,dword ptr [EBX + 0x110]     ; 0054ef9b
    PUSH EDI                            ; 0054efa1
    MOV EAX,dword ptr [EBX + 0x10c]     ; 0054efa2
    PUSH EAX                            ; 0054efa8
    MOV EDX,dword ptr [EBX + 0x108]     ; 0054efa9
    PUSH EDX                            ; 0054efaf
    PUSH EBP                            ; 0054efb0
    CALL FUN_00555770                   ; 0054efb1
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0054efb6
    PUSH 0xffff                         ; 0054efb9
    MOV ECX,dword ptr [0x00612560]      ; 0054efbe | DAT_00612560
    PUSH ECX                            ; 0054efc4 | DAT_01bc120c
    CALL FUN_00483de0                   ; 0054efc5
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 0054efca
    MOV ESI,dword ptr [ESP + 0x68]      ; 0054efcd
    PUSH ESI                            ; 0054efd1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054efd2
    PUSH EBX                            ; 0054efd8
    CALL dword ptr [EAX + 0x18]         ; 0054efd9
    ADD ESP,0x8                         ; 0054efdc
    PUSH 0x10000                        ; 0054efdf
    PUSH 0x10000                        ; 0054efe4
    PUSH 0x10000                        ; 0054efe9
    PUSH EBP                            ; 0054efee
    CALL FUN_00555770                   ; 0054efef
        ;   XREF to: 00555770 (UNCONDITIONAL_CALL)  ; undefined FUN_00555770()
    ADD ESP,0x10                        ; 0054eff4
    PUSH 0x1                            ; 0054eff7
    MOV EDI,dword ptr [0x00612560]      ; 0054eff9 | DAT_00612560
    PUSH EDI                            ; 0054efff | DAT_01bc120c
    CALL FUN_00483e20                   ; 0054f000
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 0054f005
    MOV ECX,dword ptr [EBP + 0x15f6fc]  ; 0054f008
    MOV EAX,dword ptr [ESP + 0x48]      ; 0054f00e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0054f012
    ADD EAX,0x4                         ; 0054f016
    INC EDX                             ; 0054f019
    MOV dword ptr [ESP + 0x48],EAX      ; 0054f01a
    MOV dword ptr [ESP + 0x4c],EDX      ; 0054f01e
    CMP EDX,ECX                         ; 0054f022
    JL 0x0054ef25                       ; 0054f024
        ;   XREF to: 0054ef25 (CONDITIONAL_JUMP)  ; LAB_0054ef25
    ADD ESP,0x50                        ; 0054f02a
        ;   Label: LAB_0054f02a
    POP EBP                             ; 0054f02d
    POP EDI                             ; 0054f02e
    POP ESI                             ; 0054f02f
    POP EBX                             ; 0054f030
    RET                                 ; 0054f031
    XOR ECX,ECX                         ; 0054f032
        ;   Label: LAB_0054f032
    MOV dword ptr [ESP + 0x68],ECX      ; 0054f034
    JMP 0x0054ef0d                      ; 0054f038
        ;   XREF to: 0054ef0d (UNCONDITIONAL_JUMP)  ; LAB_0054ef0d
    MOV EAX,dword ptr [ESP + 0x30]      ; 0054f03d
        ;   Label: LAB_0054f03d
    MOV dword ptr [ESP],EAX             ; 0054f041
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054f044
    MOV dword ptr [ESP + 0x4],EAX       ; 0054f048
    MOV EAX,dword ptr [ESP + 0x38]      ; 0054f04c
    MOV dword ptr [ESP + 0x8],EAX       ; 0054f050
    JMP 0x0054ef5d                      ; 0054f054
        ;   XREF to: 0054ef5d (UNCONDITIONAL_JUMP)  ; LAB_0054ef5d

