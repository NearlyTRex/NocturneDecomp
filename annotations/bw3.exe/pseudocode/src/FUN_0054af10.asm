; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054af10(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0042f310 at 0042f42d
;   FUN_0054e3a0 at 0054e3f8
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d21558
;
; Called Functions:
;   FUN_0041e100
;   FUN_0046d540
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054af10
        ;   Label: FUN_0054af10
    SUB ESP,0x8                         ; 0054af11
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054af14
    MOV EDX,dword ptr [0x005f2afc]      ; 0054af18 | DAT_005f2afc
    PUSH EDX                            ; 0054af1e | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 0054af1f
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0054af24
    TEST EAX,EAX                        ; 0054af27
    JNZ 0x0054af45                      ; 0054af29
        ;   XREF to: 0054af45 (CONDITIONAL_JUMP)  ; LAB_0054af45
    CMP dword ptr [EBX],0x1             ; 0054af2b
    JLE 0x0054af40                      ; 0054af2e
        ;   XREF to: 0054af40 (CONDITIONAL_JUMP)  ; LAB_0054af40
    MOV EAX,[0x005fe9dc]                ; 0054af30 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x24c],0x0     ; 0054af35 | DAT_01d21558
    JZ 0x0054af4d                       ; 0054af3c
        ;   XREF to: 0054af4d (CONDITIONAL_JUMP)  ; LAB_0054af4d
    XOR EAX,EAX                         ; 0054af3e
    ADD ESP,0x8                         ; 0054af40
        ;   Label: LAB_0054af40
    POP EBX                             ; 0054af43
    RET                                 ; 0054af44
    MOV EAX,dword ptr [EBX]             ; 0054af45
        ;   Label: LAB_0054af45
    DEC EAX                             ; 0054af47
    ADD ESP,0x8                         ; 0054af48
    POP EBX                             ; 0054af4b
    RET                                 ; 0054af4c
    PUSH EDI                            ; 0054af4d
        ;   Label: LAB_0054af4d
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054af4e
    PUSH EDI                            ; 0054af52
    CALL FUN_0041e100                   ; 0054af53
        ;   XREF to: 0041e100 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e100()
    MOV dword ptr [ESP + 0xc],EAX       ; 0054af58
    MOV ECX,dword ptr [EBX]             ; 0054af5c
    FLD float ptr [ESP + 0xc]           ; 0054af5e
    CALL FUN_005a3120                   ; 0054af62
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    ADD ESP,0x4                         ; 0054af67
    DEC ECX                             ; 0054af6a
    FISTP dword ptr [ESP + 0x4]         ; 0054af6b
    TEST ECX,ECX                        ; 0054af6f
    JLE 0x0054af8e                      ; 0054af71
        ;   XREF to: 0054af8e (CONDITIONAL_JUMP)  ; LAB_0054af8e
    LEA EDX,[ECX*0x8 + 0x0]             ; 0054af73
    ADD EDX,EBX                         ; 0054af7a
    MOV EBX,dword ptr [ESP + 0x4]       ; 0054af7c
    CMP dword ptr [EDX + 0x8],0x0       ; 0054af80
        ;   Label: LAB_0054af80
    JZ 0x0054af96                       ; 0054af84
        ;   XREF to: 0054af96 (CONDITIONAL_JUMP)  ; LAB_0054af96
    DEC ECX                             ; 0054af86
    SUB EDX,0x8                         ; 0054af87
    TEST ECX,ECX                        ; 0054af8a
    JG 0x0054af80                       ; 0054af8c
        ;   XREF to: 0054af80 (CONDITIONAL_JUMP)  ; LAB_0054af80
    MOV EAX,ECX                         ; 0054af8e
        ;   Label: LAB_0054af8e
    POP EDI                             ; 0054af90
    ADD ESP,0x8                         ; 0054af91
    POP EBX                             ; 0054af94
    RET                                 ; 0054af95
    CMP EBX,dword ptr [EDX + 0x4]       ; 0054af96
        ;   Label: LAB_0054af96
    JL 0x0054af8e                       ; 0054af99
        ;   XREF to: 0054af8e (CONDITIONAL_JUMP)  ; LAB_0054af8e
    DEC ECX                             ; 0054af9b
    SUB EDX,0x8                         ; 0054af9c
    TEST ECX,ECX                        ; 0054af9f
    JG 0x0054af80                       ; 0054afa1
        ;   XREF to: 0054af80 (CONDITIONAL_JUMP)  ; LAB_0054af80
    MOV EAX,ECX                         ; 0054afa3
    POP EDI                             ; 0054afa5
    ADD ESP,0x8                         ; 0054afa6
    POP EBX                             ; 0054afa9
    RET                                 ; 0054afaa

