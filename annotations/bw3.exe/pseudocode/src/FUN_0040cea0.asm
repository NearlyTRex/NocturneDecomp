; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040cea0(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[73]:
;   FUN_0040cab0 at 0040cd9f
;   FUN_0040fe90 at 0040ff09
;   FUN_00410030 at 0041008b
;   FUN_004132c0 at 0041335a
;   FUN_004133c0 at 00413b62
;   FUN_00417400 at 004174ee
;   FUN_00418930 at 00418efd
;   FUN_00420420 at 00420497
;   FUN_00420ea0 at 00420efb
;   FUN_00421060 at 004211bf
;   ... and 63 more
;
; Referenced Globals:
;   undefined4 DAT_005b5ef1
;   undefined4 DAT_005b5ef9
;   undefined4 DAT_005b5efd
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d2156c
;
; Called Functions:
;   FUN_0040cdd0
;   FUN_005a3120
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cea0
        ;   Label: FUN_0040cea0
    PUSH ESI                            ; 0040cea1
    PUSH EBP                            ; 0040cea2
    MOV EBP,ESP                         ; 0040cea3
    SUB ESP,0x14                        ; 0040cea5
    AND ESP,0xfffffff8                  ; 0040cea8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040ceab
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040ceae
    MOV EAX,ESI                         ; 0040ceb1
    SUB EAX,EBX                         ; 0040ceb3
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ceb5
    FILD dword ptr [ESP + 0x10]         ; 0040ceb9
    MOV EAX,[0x005fe9dc]                ; 0040cebd | DAT_005fe9dc
    FADD double ptr [0x005b5ef1]        ; 0040cec2 | DAT_005b5ef1
    MOV EDX,dword ptr [EAX + 0x260]     ; 0040cec8 | DAT_01d2156c
    FSTP double ptr [ESP]               ; 0040cece
    TEST EDX,EDX                        ; 0040ced1
    JNZ 0x0040cf1a                      ; 0040ced3
        ;   XREF to: 0040cf1a (CONDITIONAL_JUMP)  ; LAB_0040cf1a
    CALL FUN_005a35cc                   ; 0040ced5
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ceda
    FILD dword ptr [ESP + 0x10]         ; 0040cede
    FMUL float ptr [0x005b5ef9]         ; 0040cee2 | DAT_005b5ef9
    FSTP float ptr [ESP + 0x8]          ; 0040cee8
        ;   Label: LAB_0040cee8
    FLD float ptr [ESP + 0x8]           ; 0040ceec
    FMUL double ptr [ESP]               ; 0040cef0
    MOV dword ptr [ESP + 0x10],EBX      ; 0040cef3
    FILD dword ptr [ESP + 0x10]         ; 0040cef7
    FADDP                               ; 0040cefb
    CALL FUN_005a3120                   ; 0040cefd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 0040cf02
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040cf06
    CMP EBX,ECX                         ; 0040cf0a
    JG 0x0040cf2f                       ; 0040cf0c
        ;   XREF to: 0040cf2f (CONDITIONAL_JUMP)  ; LAB_0040cf2f
    CMP ESI,ECX                         ; 0040cf0e
    JGE 0x0040cf33                      ; 0040cf10
        ;   XREF to: 0040cf33 (CONDITIONAL_JUMP)  ; LAB_0040cf33
    MOV EAX,ESI                         ; 0040cf12
    MOV ESP,EBP                         ; 0040cf14
        ;   Label: LAB_0040cf14
    POP EBP                             ; 0040cf16
    POP ESI                             ; 0040cf17
    POP EBX                             ; 0040cf18
    RET                                 ; 0040cf19
    CALL FUN_0040cdd0                   ; 0040cf1a
        ;   XREF to: 0040cdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cdd0()
        ;   Label: LAB_0040cf1a
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cf1f
    FILD dword ptr [ESP + 0x10]         ; 0040cf23
    FMUL float ptr [0x005b5efd]         ; 0040cf27 | DAT_005b5efd
    JMP 0x0040cee8                      ; 0040cf2d
        ;   XREF to: 0040cee8 (UNCONDITIONAL_JUMP)  ; LAB_0040cee8
    MOV EAX,EBX                         ; 0040cf2f
        ;   Label: LAB_0040cf2f
    JMP 0x0040cf14                      ; 0040cf31
        ;   XREF to: 0040cf14 (UNCONDITIONAL_JUMP)  ; LAB_0040cf14
    MOV EAX,ECX                         ; 0040cf33
        ;   Label: LAB_0040cf33
    MOV ESP,EBP                         ; 0040cf35
    POP EBP                             ; 0040cf37
    POP ESI                             ; 0040cf38
    POP EBX                             ; 0040cf39
    RET                                 ; 0040cf3a

