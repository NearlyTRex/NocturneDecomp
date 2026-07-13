; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_10008fb0(uint param_1,char *param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x418]:4  local_418
; undefined4       Stack[-0x414]:4  local_414
; undefined4       Stack[-0x410]:4  local_410
; undefined4       Stack[-0x40c]:4  local_40c
; undefined4       Stack[-0x408]:4  local_408
; undefined        Stack[-0x404]:1  local_404
; undefined1       Stack[-0x403]:1  local_403
;
; XREF[2]:
;   __chsize_lk at 1000b5e5
;   __write at 10008f72
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_WriteFile_10242234 = 002425f2
;
; Called Functions:
;   __dosmaperr
;   __lseek_lk
;   FUN_10008a20
;   FUN_10008a30
;   GetLastError
;   WriteFile
;
; *****************************************************************************

section .text

    SUB ESP,0x418                       ; 10008fb0
        ;   Label: FUN_10008fb0
    PUSH EBX                            ; 10008fb6
    PUSH ESI                            ; 10008fb7
    PUSH EDI                            ; 10008fb8
    XOR EBX,EBX                         ; 10008fb9
    MOV dword ptr [ESP + 0x1c],EBX      ; 10008fbb
    PUSH EBP                            ; 10008fbf
    MOV EBP,dword ptr [ESP + 0x434]     ; 10008fc0
    CMP EBP,EBX                         ; 10008fc7
    JNZ 0x10008fd8                      ; 10008fc9
        ;   XREF to: 10008fd8 (CONDITIONAL_JUMP)  ; LAB_10008fd8
    XOR EAX,EAX                         ; 10008fcb
    POP EBP                             ; 10008fcd
    POP EDI                             ; 10008fce
    POP ESI                             ; 10008fcf
    POP EBX                             ; 10008fd0
    ADD ESP,0x418                       ; 10008fd1
    RET                                 ; 10008fd7
    MOV EDX,dword ptr [ESP + 0x42c]     ; 10008fd8
        ;   Label: LAB_10008fd8
    MOV EAX,EDX                         ; 10008fdf
    AND EAX,0xffffffe7                  ; 10008fe1
    SAR EAX,0x3                         ; 10008fe4
    ADD EAX,0x10241870                  ; 10008fe7 | DAT_10241870
    MOV dword ptr [ESP + 0x18],EAX      ; 10008fec
    MOV EAX,EDX                         ; 10008ff0
    AND EAX,0x1f                        ; 10008ff2
    MOV ESI,dword ptr [ESP + 0x18]      ; 10008ff5
    SHL EAX,0x2                         ; 10008ff9
    LEA ECX,[EAX + EAX*0x8]             ; 10008ffc
    MOV EAX,dword ptr [ESI]             ; 10008fff | DAT_10241870
    MOV dword ptr [ESP + 0x1c],ECX      ; 10009001
    TEST byte ptr [EAX + ECX*0x1 + 0x4],0x20 ; 10009005
    JZ 0x10009019                       ; 1000900a
        ;   XREF to: 10009019 (CONDITIONAL_JUMP)  ; LAB_10009019
    PUSH 0x2                            ; 1000900c
    PUSH 0x0                            ; 1000900e
    PUSH EDX                            ; 10009010
    CALL __lseek_lk                     ; 10009011
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 10009016
    MOV EAX,dword ptr [ESP + 0x18]      ; 10009019
        ;   Label: LAB_10009019
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000901d
    ADD ECX,dword ptr [EAX]             ; 10009021 | DAT_10241870
    TEST byte ptr [ECX + 0x4],0x80      ; 10009023
    JZ 0x100090b5                       ; 10009027
        ;   XREF to: 100090b5 (CONDITIONAL_JUMP)  ; LAB_100090b5
    MOV dword ptr [ESP + 0x10],0x0      ; 1000902d
    MOV EDI,dword ptr [ESP + 0x430]     ; 10009035
    MOV EAX,EDI                         ; 1000903c
        ;   Label: LAB_1000903c
    SUB EAX,dword ptr [ESP + 0x430]     ; 1000903e
    CMP EAX,EBP                         ; 10009045
    JNC 0x100090ee                      ; 10009047
        ;   XREF to: 100090ee (CONDITIONAL_JUMP)  ; LAB_100090ee
    LEA ESI,[ESP + 0x24]                ; 1000904d
    MOV EAX,EDI                         ; 10009051
        ;   Label: LAB_10009051
    SUB EAX,dword ptr [ESP + 0x430]     ; 10009053
    CMP EAX,EBP                         ; 1000905a
    JNC 0x1000907c                      ; 1000905c
        ;   XREF to: 1000907c (CONDITIONAL_JUMP)  ; LAB_1000907c
    MOV AL,byte ptr [EDI]               ; 1000905e
    INC EDI                             ; 10009060
    CMP AL,0xa                          ; 10009061
    JNZ 0x1000906a                      ; 10009063
        ;   XREF to: 1000906a (CONDITIONAL_JUMP)  ; LAB_1000906a
    MOV byte ptr [ESI],0xd              ; 10009065
    INC EBX                             ; 10009068
    INC ESI                             ; 10009069
    MOV byte ptr [ESI],AL               ; 1000906a
        ;   Label: LAB_1000906a
    INC ESI                             ; 1000906c
    MOV EAX,ESI                         ; 1000906d
    LEA ECX,[ESP + 0x24]                ; 1000906f
    SUB EAX,ECX                         ; 10009073
    CMP EAX,0x400                       ; 10009075
    JL 0x10009051                       ; 1000907a
        ;   XREF to: 10009051 (CONDITIONAL_JUMP)  ; LAB_10009051
    LEA EAX,[ESP + 0x24]                ; 1000907c
        ;   Label: LAB_1000907c
    PUSH 0x0                            ; 10009080
    SUB ESI,EAX                         ; 10009082
    LEA ECX,[ESP + 0x28]                ; 10009084
    LEA EAX,[ESP + 0x18]                ; 10009088
    MOV EDX,dword ptr [ESP + 0x1c]      ; 1000908c
    PUSH EAX                            ; 10009090
    PUSH ESI                            ; 10009091
    PUSH ECX                            ; 10009092
    MOV EAX,dword ptr [EDX]             ; 10009093 | DAT_10241870
    MOV ECX,dword ptr [ESP + 0x2c]      ; 10009095
    MOV EDX,dword ptr [EAX + ECX*0x1]   ; 10009099
    PUSH EDX                            ; 1000909c
    CALL dword ptr [0x10242234]         ; 1000909d | PTR_WriteFile_10242234
    TEST EAX,EAX                        ; 100090a3
    JZ 0x100090e4                       ; 100090a5
        ;   XREF to: 100090e4 (CONDITIONAL_JUMP)  ; LAB_100090e4
    MOV EAX,dword ptr [ESP + 0x14]      ; 100090a7
    ADD dword ptr [ESP + 0x20],EAX      ; 100090ab
    CMP ESI,EAX                         ; 100090af
    JLE 0x1000903c                      ; 100090b1
        ;   XREF to: 1000903c (CONDITIONAL_JUMP)  ; LAB_1000903c
    JMP 0x100090ee                      ; 100090b3
        ;   XREF to: 100090ee (UNCONDITIONAL_JUMP)  ; LAB_100090ee
    LEA EAX,[ESP + 0x14]                ; 100090b5
        ;   Label: LAB_100090b5
    PUSH 0x0                            ; 100090b9
    MOV EDX,dword ptr [ESP + 0x434]     ; 100090bb
    PUSH EAX                            ; 100090c2
    PUSH EBP                            ; 100090c3
    MOV ECX,dword ptr [ECX]             ; 100090c4
    PUSH EDX                            ; 100090c6
    PUSH ECX                            ; 100090c7
    CALL dword ptr [0x10242234]         ; 100090c8 | PTR_WriteFile_10242234
    TEST EAX,EAX                        ; 100090ce
    JZ 0x100090e4                       ; 100090d0
        ;   XREF to: 100090e4 (CONDITIONAL_JUMP)  ; LAB_100090e4
    MOV dword ptr [ESP + 0x10],0x0      ; 100090d2
    MOV EAX,dword ptr [ESP + 0x14]      ; 100090da
    MOV dword ptr [ESP + 0x20],EAX      ; 100090de
    JMP 0x100090ee                      ; 100090e2
        ;   XREF to: 100090ee (UNCONDITIONAL_JUMP)  ; LAB_100090ee
    CALL dword ptr [0x102421c8]         ; 100090e4 | PTR_GetLastError_102421c8
        ;   Label: LAB_100090e4
    MOV dword ptr [ESP + 0x10],EAX      ; 100090ea
    CMP dword ptr [ESP + 0x20],0x0      ; 100090ee
        ;   Label: LAB_100090ee
    JNZ 0x1000919a                      ; 100090f3
        ;   XREF to: 1000919a (CONDITIONAL_JUMP)  ; LAB_1000919a
    CMP dword ptr [ESP + 0x10],0x0      ; 100090f9
    JZ 0x1000914a                       ; 100090fe
        ;   XREF to: 1000914a (CONDITIONAL_JUMP)  ; LAB_1000914a
    CMP dword ptr [ESP + 0x10],0x5      ; 10009100
    JNZ 0x1000912d                      ; 10009105
        ;   XREF to: 1000912d (CONDITIONAL_JUMP)  ; LAB_1000912d
    CALL FUN_10008a20                   ; 10009107
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0x9             ; 1000910c
    CALL FUN_10008a30                   ; 10009112
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    MOV ECX,dword ptr [ESP + 0x10]      ; 10009117
    POP EBP                             ; 1000911b
    POP EDI                             ; 1000911c
    MOV dword ptr [EAX],ECX             ; 1000911d
    MOV EAX,0xffffffff                  ; 1000911f
    POP ESI                             ; 10009124
    POP EBX                             ; 10009125
    ADD ESP,0x418                       ; 10009126
    RET                                 ; 1000912c
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000912d
        ;   Label: LAB_1000912d
    PUSH ECX                            ; 10009131
    CALL __dosmaperr                    ; 10009132
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void __dosmaperr(ulong param_1)
    ADD ESP,0x4                         ; 10009137
    MOV EAX,0xffffffff                  ; 1000913a
    POP EBP                             ; 1000913f
    POP EDI                             ; 10009140
    POP ESI                             ; 10009141
    POP EBX                             ; 10009142
    ADD ESP,0x418                       ; 10009143
    RET                                 ; 10009149
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000914a
        ;   Label: LAB_1000914a
    MOV ECX,dword ptr [ESP + 0x1c]      ; 1000914e
    MOV EDX,dword ptr [EAX]             ; 10009152
    TEST byte ptr [EDX + ECX*0x1 + 0x4],0x40 ; 10009154
    JZ 0x10009174                       ; 10009159
        ;   XREF to: 10009174 (CONDITIONAL_JUMP)  ; LAB_10009174
    MOV EAX,dword ptr [ESP + 0x430]     ; 1000915b
    CMP byte ptr [EAX],0x1a             ; 10009162
    JNZ 0x10009174                      ; 10009165
        ;   XREF to: 10009174 (CONDITIONAL_JUMP)  ; LAB_10009174
    XOR EAX,EAX                         ; 10009167
    POP EBP                             ; 10009169
    POP EDI                             ; 1000916a
    POP ESI                             ; 1000916b
    POP EBX                             ; 1000916c
    ADD ESP,0x418                       ; 1000916d
    RET                                 ; 10009173
    CALL FUN_10008a20                   ; 10009174
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_10009174
    MOV dword ptr [EAX],0x1c            ; 10009179
    CALL FUN_10008a30                   ; 1000917f
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 10009184
    MOV dword ptr [EAX],0x0             ; 10009185
    MOV EAX,0xffffffff                  ; 1000918b
    POP EDI                             ; 10009190
    POP ESI                             ; 10009191
    POP EBX                             ; 10009192
    ADD ESP,0x418                       ; 10009193
    RET                                 ; 10009199
    MOV EAX,dword ptr [ESP + 0x20]      ; 1000919a
        ;   Label: LAB_1000919a
    POP EBP                             ; 1000919e
    SUB EAX,EBX                         ; 1000919f
    POP EDI                             ; 100091a1
    POP ESI                             ; 100091a2
    POP EBX                             ; 100091a3
    ADD ESP,0x418                       ; 100091a4
    RET                                 ; 100091aa

