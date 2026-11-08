; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00557860(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00552890 at 005528fa
;   FUN_00557910 at 00557944
;
; Referenced Globals:
;   TerminatedCString s_DirectSound_s_005ea499
;   undefined4 DAT_0061bf80
;
; Called Functions:
;   FUN_005b7790
;   Ordinal_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557860
        ;   Label: FUN_00557860
    PUSH ESI                            ; 00557861
    MOV ESI,dword ptr [ESP + 0xc]       ; 00557862
    MOV EBX,dword ptr [ESP + 0x10]      ; 00557866
    CMP dword ptr [0x0061bf80],0x0      ; 0055786a | DAT_0061bf80
    JL 0x00557884                       ; 00557871
        ;   XREF to: 00557884 (CONDITIONAL_JUMP)  ; LAB_00557884
    TEST ESI,ESI                        ; 00557873
        ;   Label: LAB_00557873
    JL 0x0055787f                       ; 00557875
        ;   XREF to: 0055787f (CONDITIONAL_JUMP)  ; LAB_0055787f
    CMP ESI,dword ptr [0x0061bf80]      ; 00557877 | DAT_0061bf80
    JL 0x00557899                       ; 0055787d
        ;   XREF to: 00557899 (CONDITIONAL_JUMP)  ; LAB_00557899
    XOR EAX,EAX                         ; 0055787f
        ;   Label: LAB_0055787f
    POP ESI                             ; 00557881
    POP EBX                             ; 00557882
    RET                                 ; 00557883
    XOR ECX,ECX                         ; 00557884
        ;   Label: LAB_00557884
    PUSH ECX                            ; 00557886
    PUSH 0x557540                       ; 00557887 | LAB_00557540
    MOV dword ptr [0x0061bf80],ECX      ; 0055788c | DAT_0061bf80
    CALL Ordinal_2                      ; 00557892
        ;   XREF to: 005c754a (UNCONDITIONAL_CALL)  ; undefined Ordinal_2()
    JMP 0x00557873                      ; 00557897
        ;   XREF to: 00557873 (UNCONDITIONAL_JUMP)  ; LAB_00557873
    MOV dword ptr [EBX + 0x104],ESI     ; 00557899
        ;   Label: LAB_00557899
    LEA EAX,[ESI*0x8 + 0x0]             ; 0055789f
    ADD EAX,ESI                         ; 005578a6
    SHL EAX,0x3                         ; 005578a8
    SUB EAX,ESI                         ; 005578ab
    SHL EAX,0x2                         ; 005578ad
    MOV dword ptr [EBX + 0x100],0x1     ; 005578b0
    MOV EDX,dword ptr [EAX + 0x264998c] ; 005578ba
    MOV dword ptr [EBX + 0x10c],0x0     ; 005578c0
    MOV dword ptr [EBX + 0x108],EDX     ; 005578ca
    MOV EDX,dword ptr [EAX + 0x2649988] ; 005578d0
    MOV dword ptr [EBX + 0x114],EDX     ; 005578d6
    MOV EDX,dword ptr [EAX + 0x2649874] ; 005578dc
    ADD EAX,0x2649874                   ; 005578e2
    ADD EAX,0x14                        ; 005578e7
    PUSH EAX                            ; 005578ea
    PUSH 0x5ea499                       ; 005578eb | = "DirectSound: %s"
    PUSH EBX                            ; 005578f0
    MOV dword ptr [EBX + 0x110],EDX     ; 005578f1
    CALL FUN_005b7790                   ; 005578f7
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0x1                         ; 005578fc
    ADD ESP,0xc                         ; 00557901
    POP ESI                             ; 00557904
    POP EBX                             ; 00557905
    RET                                 ; 00557906

