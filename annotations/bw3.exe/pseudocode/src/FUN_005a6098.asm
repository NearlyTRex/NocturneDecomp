; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005a6098(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   FUN_005ad0f2
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a6098
        ;   Label: FUN_005a6098
    MOV EBP,ESP                         ; 005a6099
    SUB ESP,0x10                        ; 005a609b
    PUSH 0x0                            ; 005a609e
    MOV EDX,dword ptr [EBP + 0x8]       ; 005a60a0
    PUSH EDX                            ; 005a60a3
    CALL FUN_005ad0f2                   ; 005a60a4
        ;   XREF to: 005ad0f2 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad0f2()
    MOV dword ptr [EBP + -0x10],EAX     ; 005a60a9
    MOV dword ptr [EBP + -0xc],EDX      ; 005a60ac
    ADD ESP,0x8                         ; 005a60af
    MOV EAX,dword ptr [EBP + -0x10]     ; 005a60b2
    MOV dword ptr [EBP + -0x8],EAX      ; 005a60b5
    MOV EAX,dword ptr [EBP + -0xc]      ; 005a60b8
    MOV dword ptr [EBP + -0x4],EAX      ; 005a60bb
    MOV EAX,dword ptr [EBP + -0x8]      ; 005a60be
    MOV EDX,dword ptr [EBP + -0x4]      ; 005a60c1
    MOV ESP,EBP                         ; 005a60c4
    POP EBP                             ; 005a60c6
    RET                                 ; 005a60c7

