; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0042b300(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1f64]:4  local_1f64
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_00429f20 at 00429fb2
;   FUN_0053c500 at 0053cb2f
;
; Referenced Globals:
;   undefined4 DAT_005cd332
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01fbb02c
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_0042b420
;   FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b300
        ;   Label: FUN_0042b300
    PUSH ESI                            ; 0042b301
    PUSH EDI                            ; 0042b302
    PUSH EBP                            ; 0042b303
    SUB ESP,0x1f54                      ; 0042b304
    MOV ESI,dword ptr [ESP + 0x1f68]    ; 0042b30a
    XOR EDX,EDX                         ; 0042b311
    XOR EDI,EDI                         ; 0042b313
    XOR EBP,EBP                         ; 0042b315
    MOV dword ptr [ESP + 0x1f48],EDX    ; 0042b317
    MOV dword ptr [ESP + 0x1f4c],EDX    ; 0042b31e
    ADD ESI,0x20                        ; 0042b325
    MOV EAX,[0x0061b5a8]                ; 0042b328 | DAT_0061b5a8
        ;   Label: LAB_0042b328
    MOV EBX,dword ptr [ESP + 0x1f4c]    ; 0042b32d
    CMP EBX,dword ptr [EAX + 0x154e74]  ; 0042b334 | DAT_01fbb02c
    JL 0x0042b37d                       ; 0042b33a
        ;   XREF to: 0042b37d (CONDITIONAL_JUMP)  ; LAB_0042b37d
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 0042b33c
    TEST ECX,ECX                        ; 0042b343
    JLE 0x0042b370                      ; 0042b345
        ;   XREF to: 0042b370 (CONDITIONAL_JUMP)  ; LAB_0042b370
    LEA EDI,[ECX + -0x1]                ; 0042b347
    XOR ESI,ESI                         ; 0042b34a
    XOR EBP,EBP                         ; 0042b34c
    PUSH EDI                            ; 0042b34e
        ;   Label: LAB_0042b34e
    PUSH EBP                            ; 0042b34f
    CALL FUN_0040cfc0                   ; 0042b350
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    LEA EBX,[EAX*0x4 + 0x0]             ; 0042b355
    ADD ESP,0x8                         ; 0042b35c
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 0042b35f
    CMP EBP,EAX                         ; 0042b362
    JNZ 0x0042b3f4                      ; 0042b364
        ;   XREF to: 0042b3f4 (CONDITIONAL_JUMP)  ; LAB_0042b3f4
    INC ESI                             ; 0042b36a
        ;   Label: LAB_0042b36a
    CMP ESI,0xa                         ; 0042b36b
    JL 0x0042b34e                       ; 0042b36e
        ;   XREF to: 0042b34e (CONDITIONAL_JUMP)  ; LAB_0042b34e
    XOR EAX,EAX                         ; 0042b370
        ;   Label: LAB_0042b370
    ADD ESP,0x1f54                      ; 0042b372
        ;   Label: LAB_0042b372
    POP EBP                             ; 0042b378
    POP EDI                             ; 0042b379
    POP ESI                             ; 0042b37a
    POP EBX                             ; 0042b37b
    RET                                 ; 0042b37c
    PUSH 0x0                            ; 0042b37d
        ;   Label: LAB_0042b37d
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x154e78] ; 0042b37f
    PUSH EBX                            ; 0042b386
    MOV EAX,dword ptr [ESP + 0x1f74]    ; 0042b387
    PUSH EAX                            ; 0042b38e
    CALL FUN_00485840                   ; 0042b38f
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; undefined FUN_00485840()
    ADD ESP,0xc                         ; 0042b394
    TEST EAX,EAX                        ; 0042b397
    JZ 0x0042b3dd                       ; 0042b399
        ;   XREF to: 0042b3dd (CONDITIONAL_JUMP)  ; LAB_0042b3dd
    LEA EAX,[EBX + 0x20]                ; 0042b39b
    FLD float ptr [ESI]                 ; 0042b39e
    FSUB float ptr [EAX]                ; 0042b3a0
    FMUL ST0                            ; 0042b3a2
    FLD float ptr [ESI + 0x4]           ; 0042b3a4
    FSUB float ptr [EAX + 0x4]          ; 0042b3a7
    FMUL ST0                            ; 0042b3aa
    FLD float ptr [ESI + 0x8]           ; 0042b3ac
    FXCH                                ; 0042b3af
    FADDP ST2,ST0                       ; 0042b3b1
    FSUB float ptr [EAX + 0x8]          ; 0042b3b3
    FMUL ST0                            ; 0042b3b6
    FADDP                               ; 0042b3b8
    FSQRT                               ; 0042b3ba
    FCOMP float ptr [0x005cd332]        ; 0042b3bc | DAT_005cd332
    FNSTSW AX                           ; 0042b3c2
    SAHF                                ; 0042b3c4
    JC 0x0042b3dd                       ; 0042b3c5
        ;   XREF to: 0042b3dd (CONDITIONAL_JUMP)  ; LAB_0042b3dd
    MOV EDX,dword ptr [ESP + 0x1f48]    ; 0042b3c7
    ADD EBP,0x4                         ; 0042b3ce
    INC EDX                             ; 0042b3d1
    MOV dword ptr [ESP + EBP*0x1 + -0x4],EBX ; 0042b3d2
    MOV dword ptr [ESP + 0x1f48],EDX    ; 0042b3d6
    MOV ECX,dword ptr [ESP + 0x1f4c]    ; 0042b3dd
        ;   Label: LAB_0042b3dd
    INC ECX                             ; 0042b3e4
    ADD EDI,0x4                         ; 0042b3e5
    MOV dword ptr [ESP + 0x1f4c],ECX    ; 0042b3e8
    JMP 0x0042b328                      ; 0042b3ef
        ;   XREF to: 0042b328 (UNCONDITIONAL_JUMP)  ; LAB_0042b328
    PUSH EAX                            ; 0042b3f4
        ;   Label: LAB_0042b3f4
    MOV ECX,dword ptr [ESP + 0x1f6c]    ; 0042b3f5
    PUSH ECX                            ; 0042b3fc
    CALL FUN_0042b420                   ; 0042b3fd
        ;   XREF to: 0042b420 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b420()
    ADD ESP,0x8                         ; 0042b402
    TEST EAX,EAX                        ; 0042b405
    JNZ 0x0042b372                      ; 0042b407
        ;   XREF to: 0042b372 (CONDITIONAL_JUMP)  ; LAB_0042b372
    MOV dword ptr [ESP + EBX*0x1],EBP   ; 0042b40d
    JMP 0x0042b36a                      ; 0042b410
        ;   XREF to: 0042b36a (UNCONDITIONAL_JUMP)  ; LAB_0042b36a

