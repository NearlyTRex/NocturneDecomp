; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cb2f0(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004cb400 at 004cb507
;
; Referenced Globals:
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;
; Called Functions:
;   FUN_00573910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb2f0
        ;   Label: FUN_004cb2f0
    PUSH ESI                            ; 004cb2f1
    PUSH EDI                            ; 004cb2f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004cb2f3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cb2f7
    IMUL EAX,dword ptr [EBX]            ; 004cb2fb
    MOV ECX,dword ptr [ESP + 0x14]      ; 004cb2fe
    MOV EDX,dword ptr [EBX + 0x24]      ; 004cb302
    ADD EAX,ECX                         ; 004cb305
    MOV AX,word ptr [EDX + EAX*0x4 + 0x2] ; 004cb307
    AND EAX,0xffff                      ; 004cb30c
    PUSH EAX                            ; 004cb311
    MOV ESI,dword ptr [EBX + 0x28]      ; 004cb312
    PUSH ESI                            ; 004cb315
    CALL FUN_00573910                   ; 004cb316
        ;   XREF to: 00573910 (UNCONDITIONAL_CALL)  ; undefined FUN_00573910()
    MOV EDX,dword ptr [EBX + 0x50]      ; 004cb31b
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb31e
    SUB EAX,EDX                         ; 004cb325
    SHL EAX,0x4                         ; 004cb327
    MOV EDI,0xf80000                    ; 004cb32a
    MOV dword ptr [EAX + 0x62202c],EDI  ; 004cb32f | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x50]      ; 004cb335
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb338
    SUB EAX,EDX                         ; 004cb33f
    SHL EAX,0x4                         ; 004cb341
    MOV dword ptr [EAX + 0x622030],EDI  ; 004cb344 | DAT_00622030
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004cb34a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb34d
    SUB EAX,EDX                         ; 004cb354
    SHL EAX,0x4                         ; 004cb356
    MOV dword ptr [EAX + 0x62202c],0x80000 ; 004cb359 | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x4c]      ; 004cb363
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb366
    SUB EAX,EDX                         ; 004cb36d
    SHL EAX,0x4                         ; 004cb36f
    MOV dword ptr [EAX + 0x622030],EDI  ; 004cb372 | DAT_00622030
    MOV EDX,dword ptr [EBX + 0x58]      ; 004cb378
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb37b
    SUB EAX,EDX                         ; 004cb382
    SHL EAX,0x4                         ; 004cb384
    MOV ESI,0x80000                     ; 004cb387
    MOV dword ptr [EAX + 0x62202c],ESI  ; 004cb38c | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x58]      ; 004cb392
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb395
    SUB EAX,EDX                         ; 004cb39c
    SHL EAX,0x4                         ; 004cb39e
    MOV dword ptr [EAX + 0x622030],ESI  ; 004cb3a1 | DAT_00622030
    MOV EDX,dword ptr [EBX + 0x54]      ; 004cb3a7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb3aa
    SUB EAX,EDX                         ; 004cb3b1
    SHL EAX,0x4                         ; 004cb3b3
    MOV dword ptr [EAX + 0x62202c],EDI  ; 004cb3b6 | DAT_0062202c
    MOV EDX,dword ptr [EBX + 0x54]      ; 004cb3bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cb3bf
    SUB EAX,EDX                         ; 004cb3c6
    SHL EAX,0x4                         ; 004cb3c8
    ADD ESP,0x8                         ; 004cb3cb
    MOV dword ptr [EAX + 0x622030],ESI  ; 004cb3ce | DAT_00622030
    POP EDI                             ; 004cb3d4
    POP ESI                             ; 004cb3d5
    POP EBX                             ; 004cb3d6
    RET                                 ; 004cb3d7

