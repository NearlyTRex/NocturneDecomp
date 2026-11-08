; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00492ec0(char *param_1,int param_2,uint param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_00493720 at 00493788
;   FUN_004958d0 at 0049598a
;
; Called Functions:
;   FUN_005bfb70
;   FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492ec0
        ;   Label: FUN_00492ec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00492ec1
    MOV ECX,dword ptr [ESP + 0x10]      ; 00492ec5
    MOV dword ptr [EBX + 0x12c],ECX     ; 00492ec9
    CMP ECX,0x12c                       ; 00492ecf
    JC 0x00492ee1                       ; 00492ed5
        ;   XREF to: 00492ee1 (CONDITIONAL_JUMP)  ; LAB_00492ee1
    MOV dword ptr [EBX + 0x12c],0x12b   ; 00492ed7
    PUSH 0x12c                          ; 00492ee1
        ;   Label: LAB_00492ee1
    PUSH 0x0                            ; 00492ee6
    PUSH EBX                            ; 00492ee8
    CALL FUN_005bfb70                   ; 00492ee9
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00492eee
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492ef1
    TEST ECX,ECX                        ; 00492ef5
    JNZ 0x00492f21                      ; 00492ef7
        ;   XREF to: 00492f21 (CONDITIONAL_JUMP)  ; LAB_00492f21
    MOV dword ptr [EBX + 0x130],ECX     ; 00492ef9
    MOV ECX,dword ptr [EBX + 0x130]     ; 00492eff
        ;   Label: LAB_00492eff
    MOV dword ptr [EBX + 0x138],0x0     ; 00492f05
    MOV dword ptr [EBX + 0x134],ECX     ; 00492f0f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00492f15
    MOV dword ptr [EBX + 0x13c],ECX     ; 00492f19
    POP EBX                             ; 00492f1f
    RET                                 ; 00492f20
    PUSH EDI                            ; 00492f21
        ;   Label: LAB_00492f21
    PUSH ESI                            ; 00492f22
    MOV ESI,dword ptr [EBX + 0x12c]     ; 00492f23
    PUSH ESI                            ; 00492f29
    PUSH ECX                            ; 00492f2a
    PUSH EBX                            ; 00492f2b
    CALL FUN_005c20d0                   ; 00492f2c
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    ADD ESP,0xc                         ; 00492f31
    MOV EDI,EBX                         ; 00492f34
    SUB ECX,ECX                         ; 00492f36
    DEC ECX                             ; 00492f38
    XOR EAX,EAX                         ; 00492f39
    SCASB.REPNE ES:EDI                  ; 00492f3b
    NOT ECX                             ; 00492f3d
    DEC ECX                             ; 00492f3f
    MOV dword ptr [EBX + 0x130],ECX     ; 00492f40
    POP ESI                             ; 00492f46
    POP EDI                             ; 00492f47
    JMP 0x00492eff                      ; 00492f48
        ;   XREF to: 00492eff (UNCONDITIONAL_JUMP)  ; LAB_00492eff

