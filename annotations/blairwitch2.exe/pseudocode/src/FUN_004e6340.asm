; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_004e6340(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004e56d0 at 004e5775
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_0044fcc0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004e6340
        ;   Label: FUN_004e6340
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e6344
    SUB EAX,EDX                         ; 004e634b
    SHL EAX,0x3                         ; 004e634d
    ADD EDX,EAX                         ; 004e6350
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e6352
    SHL EDX,0x2                         ; 004e6356
    ADD EAX,0x74c                       ; 004e6359
    ADD EAX,EDX                         ; 004e635e
    CMP dword ptr [EAX],0x0             ; 004e6360
    JNZ 0x004e6366                      ; 004e6363
        ;   XREF to: 004e6366 (CONDITIONAL_JUMP)  ; LAB_004e6366
    RET                                 ; 004e6365
    PUSH EBX                            ; 004e6366
        ;   Label: LAB_004e6366
    LEA EDX,[EAX + 0xc]                 ; 004e6367
    PUSH EDX                            ; 004e636a
    ADD EAX,0x18                        ; 004e636b
    PUSH EAX                            ; 004e636e
    MOV ECX,dword ptr [0x0060b280]      ; 004e636f | DAT_0060b280
    PUSH ECX                            ; 004e6375
    CALL FUN_0046b350                   ; 004e6376
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 004e637b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e637e
    PUSH -0x1                           ; 004e6382
    ADD EAX,0x2b4                       ; 004e6384
    PUSH 0x0                            ; 004e6389
    PUSH EAX                            ; 004e638b
    CALL FUN_0044fcc0                   ; 004e638c
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004e6391
    MOV EBX,dword ptr [0x0060b280]      ; 004e6394 | DAT_0060b280
    PUSH EBX                            ; 004e639a
    CALL thunk_FUN_004e9810             ; 004e639b
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 004e63a0
    POP EBX                             ; 004e63a3
    LEA EAX,[EAX]                       ; 004e63a4
    LEA EDX,[EDX]                       ; 004e63aa
    RET                                 ; 004e63b0

