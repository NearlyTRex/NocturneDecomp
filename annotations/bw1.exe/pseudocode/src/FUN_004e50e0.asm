; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e50e0(void)
;
;
; XREF[2]:
;   FUN_004e5cd0 at 004e5d45
;   FUN_004e5e80 at 004e5ee5
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_006290bc
;   undefined4 DAT_006290c0
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01cd0e44
;   undefined4 DAT_01cd0e48
;   undefined4 DAT_01cd0e4c
;   undefined4 DAT_01cd0e50
;   undefined4 DAT_01cd0e54
;   ... and 4 more
;
; Called Functions:
;   FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e50e0
        ;   Label: FUN_004e50e0
    PUSH ESI                            ; 004e50e1
    PUSH EDI                            ; 004e50e2
    PUSH EBP                            ; 004e50e3
    MOV EDX,0x4                         ; 004e50e4
    MOV EBX,0x1                         ; 004e50e9
    MOV ESI,0x2                         ; 004e50ee
    MOV EDI,0x3                         ; 004e50f3
    MOV EBP,0x80000                     ; 004e50f8
    MOV EAX,0xf80000                    ; 004e50fd
    XOR ECX,ECX                         ; 004e5102
    MOV dword ptr [0x01cd0e44],EDX      ; 004e5104 | DAT_01cd0e44
    MOV dword ptr [0x01cd0e58],ECX      ; 004e510a | DAT_01cd0e58
    MOV dword ptr [0x01cd0e5c],EBX      ; 004e5110 | DAT_01cd0e5c
    MOV dword ptr [0x01cd0e60],ESI      ; 004e5116 | DAT_01cd0e60
    MOV dword ptr [0x01cd0e64],EDI      ; 004e511c | DAT_01cd0e64
    MOV dword ptr [0x0062902c],EBP      ; 004e5122 | DAT_0062902c
    MOV [0x00629030],EAX                ; 004e5128 | DAT_00629030
    MOV [0x0062905c],EAX                ; 004e512d | DAT_0062905c
    MOV [0x00629060],EAX                ; 004e5132 | DAT_00629060
    MOV [0x0062908c],EAX                ; 004e5137 | DAT_0062908c
    MOV dword ptr [0x00629090],EBP      ; 004e513c | DAT_00629090
    MOV dword ptr [0x006290bc],EBP      ; 004e5142 | DAT_006290bc
    MOV dword ptr [0x006290c0],EBP      ; 004e5148 | DAT_006290c0
    MOV EDX,0xffff                      ; 004e514e
    MOV dword ptr [0x01cd0e48],ECX      ; 004e5153 | DAT_01cd0e48
    PUSH EDX                            ; 004e5159
    MOV ESI,dword ptr [0x00612560]      ; 004e515a | DAT_00612560
    MOV dword ptr [0x01cd0e50],ECX      ; 004e5160 | DAT_01cd0e50
    PUSH ESI                            ; 004e5166 | DAT_01bc120c
    MOV dword ptr [0x01cd0e54],ECX      ; 004e5167 | DAT_01cd0e54
    MOV dword ptr [0x01cd0e4c],EDX      ; 004e516d | DAT_01cd0e4c
    CALL FUN_00483de0                   ; 004e5173
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    ADD ESP,0x8                         ; 004e5178
    POP EBP                             ; 004e517b
    POP EDI                             ; 004e517c
    POP ESI                             ; 004e517d
    POP EBX                             ; 004e517e
    RET                                 ; 004e517f

