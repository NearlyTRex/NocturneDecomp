; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040c8e0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b5e85
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_020249fc
;   undefined4 DAT_02038f50
;   undefined4 DAT_02038f54
;   undefined4 DAT_02038f58
;
; Called Functions:
;   FUN_0053bc80
;   FUN_0053ebe0
;   FUN_0053ec10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8e0
        ;   Label: FUN_0040c8e0
    PUSH ESI                            ; 0040c8e1
    PUSH EDI                            ; 0040c8e2
    PUSH EBP                            ; 0040c8e3
    SUB ESP,0x24                        ; 0040c8e4
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040c8e7
    MOV EDI,ESP                         ; 0040c8eb
    MOV ESI,0x2038f50                   ; 0040c8ed
    MOVSD ES:EDI,ESI                    ; 0040c8f2 | DAT_02038f50
    MOVSD ES:EDI,ESI                    ; 0040c8f3 | DAT_02038f54
    MOVSD ES:EDI,ESI                    ; 0040c8f4 | DAT_02038f58
    LEA EDI,[ESP + 0xc]                 ; 0040c8f5
    MOV ESI,ESP                         ; 0040c8f9
    LEA EBX,[EBP + 0x20]                ; 0040c8fb
    MOVSD ES:EDI,ESI                    ; 0040c8fe
    MOVSD ES:EDI,ESI                    ; 0040c8ff
    MOVSD ES:EDI,ESI                    ; 0040c900
    FLD float ptr [EBX]                 ; 0040c901
    FSUB float ptr [ESP + 0xc]          ; 0040c903
    FMUL ST0                            ; 0040c907
    FLD float ptr [EBX + 0x4]           ; 0040c909
    FSUB float ptr [ESP + 0x10]         ; 0040c90c
    FMUL ST0                            ; 0040c910
    FLD float ptr [EBX + 0x8]           ; 0040c912
    FXCH                                ; 0040c915
    FADDP ST2,ST0                       ; 0040c917
    FSUB float ptr [ESP + 0x14]         ; 0040c919
    FMUL ST0                            ; 0040c91d
    FADDP                               ; 0040c91f
    FCOMP float ptr [0x005b5e85]        ; 0040c921 | DAT_005b5e85
    FNSTSW AX                           ; 0040c927
    SAHF                                ; 0040c929
    JBE 0x0040c936                      ; 0040c92a
        ;   XREF to: 0040c936 (CONDITIONAL_JUMP)  ; LAB_0040c936
    XOR EAX,EAX                         ; 0040c92c
    ADD ESP,0x24                        ; 0040c92e
    POP EBP                             ; 0040c931
    POP EDI                             ; 0040c932
    POP ESI                             ; 0040c933
    POP EBX                             ; 0040c934
    RET                                 ; 0040c935
    PUSH EBP                            ; 0040c936
        ;   Label: LAB_0040c936
    MOV EDX,dword ptr [0x00603b28]      ; 0040c937 | DAT_00603b28
    PUSH EDX                            ; 0040c93d | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 0040c93e
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 0040c943
    PUSH 0x0                            ; 0040c946
    PUSH EBX                            ; 0040c948
    MOV ECX,dword ptr [0x00603b28]      ; 0040c949 | DAT_00603b28
    PUSH ECX                            ; 0040c94f | DAT_01ed78c8
    CALL FUN_0053bc80                   ; 0040c950
        ;   XREF to: 0053bc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053bc80()
    ADD ESP,0xc                         ; 0040c955
    MOV ESI,dword ptr [0x00603b28]      ; 0040c958 | DAT_00603b28
    PUSH ESI                            ; 0040c95e | DAT_01ed78c8
    CALL FUN_0053ebe0                   ; 0040c95f
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    MOV EDX,dword ptr [0x00603b28]      ; 0040c964 | DAT_00603b28
    ADD ESP,0x4                         ; 0040c96a
    MOV EDI,dword ptr [EDX + 0x14d134]  ; 0040c96d | DAT_020249fc
    PUSH dword ptr [ESP + 0x3c]         ; 0040c973
    PUSH EDI                            ; 0040c977
    PUSH EBX                            ; 0040c978
    MOV EAX,dword ptr [EBP + 0x154]     ; 0040c979
    PUSH EBP                            ; 0040c97f
    CALL dword ptr [EAX + 0x28]         ; 0040c980
    ADD ESP,0x10                        ; 0040c983
    ADD ESP,0x24                        ; 0040c986
    POP EBP                             ; 0040c989
    POP EDI                             ; 0040c98a
    POP ESI                             ; 0040c98b
    POP EBX                             ; 0040c98c
    RET                                 ; 0040c98d

