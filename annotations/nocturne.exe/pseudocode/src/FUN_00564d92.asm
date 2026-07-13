; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_00564d92(undefined4 *param_1,byte param_2,char *param_3,undefined4 param_4,byte param_5)
;
;
; XREF[2]:
;   FUN_00439000 at 0043902c
;   FUN_004392d0 at 004392f4
;
; Referenced Globals:
;   undefined4 DAT_005a46b8
;   undefined4 DAT_005a46c0
;   void* PTR_FUN_005a46cc = 00564e98
;   void* PTR_FUN_005a46d4 = 00564e3d
;   void* PTR_FUN_005a46dc = 00564e53
;
; Called Functions:
;   FUN_0056b405
;   FUN_0056b4a9
;   FUN_0056b503
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564d92
        ;   Label: FUN_00564d92
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564d93
    MOV EBX,dword ptr [ESP + 0x10]      ; 00564d97
    TEST byte ptr [ESP + 0xc],0x1       ; 00564d9b
    JZ 0x00564e14                       ; 00564da0
        ;   XREF to: 00564e14 (CONDITIONAL_JUMP)  ; LAB_00564e14
    TEST EBX,EBX                        ; 00564da2
        ;   Label: LAB_00564da2
    JZ 0x00564e35                       ; 00564da4
        ;   XREF to: 00564e35 (CONDITIONAL_JUMP)  ; LAB_00564e35
    TEST byte ptr [ESP + 0x18],0xc      ; 00564daa
    JZ 0x00564e39                       ; 00564daf
        ;   XREF to: 00564e39 (CONDITIONAL_JUMP)  ; LAB_00564e39
    PUSH EDI                            ; 00564db5
    MOV EDI,EBX                         ; 00564db6
    SUB ECX,ECX                         ; 00564db8
    DEC ECX                             ; 00564dba
    XOR EAX,EAX                         ; 00564dbb
    SCASB.REPNE ES:EDI                  ; 00564dbd
    NOT ECX                             ; 00564dbf
    DEC ECX                             ; 00564dc1
    MOV EAX,ECX                         ; 00564dc2
    POP EDI                             ; 00564dc4
    ADD EAX,EBX                         ; 00564dc5
        ;   Label: LAB_00564dc5
    PUSH EAX                            ; 00564dc7
        ;   Label: LAB_00564dc7
    MOV ECX,dword ptr [ESP + 0x18]      ; 00564dc8
    PUSH ECX                            ; 00564dcc
    PUSH EBX                            ; 00564dcd
    PUSH 0x1                            ; 00564dce
    PUSH EDX                            ; 00564dd0
    CALL FUN_0056b405                   ; 00564dd1
        ;   XREF to: 0056b405 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b405()
    ADD ESP,0x14                        ; 00564dd6
    PUSH 0x1                            ; 00564dd9
    ADD EAX,0x48                        ; 00564ddb
    PUSH EAX                            ; 00564dde
    CALL FUN_0056b4a9                   ; 00564ddf
        ;   XREF to: 0056b4a9 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b4a9()
    LEA EDX,[EAX + -0x48]               ; 00564de4
    MOV EAX,dword ptr [EDX]             ; 00564de7
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564de9
    LEA ECX,[EDX + EAX*0x1]             ; 00564dec
    MOV dword ptr [ECX + -0x4],EAX      ; 00564def
    MOV dword ptr [EDX + 0x44],0x5a46cc ; 00564df2 | PTR_FUN_005a46cc
    MOV EAX,dword ptr [EDX]             ; 00564df9
    MOV dword ptr [EDX + 0x4c],0x5a46d4 ; 00564dfb | PTR_FUN_005a46d4
    MOV EAX,dword ptr [EAX + 0x4]       ; 00564e02
    ADD ESP,0x8                         ; 00564e05
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a46dc ; 00564e08 | PTR_FUN_005a46dc
    MOV EAX,EDX                         ; 00564e10
    POP EBX                             ; 00564e12
    RET                                 ; 00564e13
    MOV dword ptr [EDX],0x5a46b8        ; 00564e14 | DAT_005a46b8
        ;   Label: LAB_00564e14
    ADD EDX,0x54                        ; 00564e1a
    PUSH EDX                            ; 00564e1d
    MOV dword ptr [EDX + -0xc],0x5a46c0 ; 00564e1e | DAT_005a46c0
    CALL FUN_0056b503                   ; 00564e25
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 00564e2a
    LEA EDX,[EAX + -0x54]               ; 00564e2d
    JMP 0x00564da2                      ; 00564e30
        ;   XREF to: 00564da2 (UNCONDITIONAL_JUMP)  ; LAB_00564da2
    XOR EAX,EAX                         ; 00564e35
        ;   Label: LAB_00564e35
    JMP 0x00564dc7                      ; 00564e37
        ;   XREF to: 00564dc7 (UNCONDITIONAL_JUMP)  ; LAB_00564dc7
    XOR EAX,EAX                         ; 00564e39
        ;   Label: LAB_00564e39
    JMP 0x00564dc5                      ; 00564e3b
        ;   XREF to: 00564dc5 (UNCONDITIONAL_JUMP)  ; LAB_00564dc5

