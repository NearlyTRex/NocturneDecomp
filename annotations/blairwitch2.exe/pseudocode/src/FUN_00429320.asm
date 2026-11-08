; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429320(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_004244b0 at 004244ef
;
; Called Functions:
;   FUN_00503860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429320
        ;   Label: FUN_00429320
    PUSH ESI                            ; 00429321
    MOV EBX,dword ptr [ESP + 0xc]       ; 00429322
    MOV EDX,dword ptr [EBX + 0x27c4]    ; 00429326
    TEST EDX,EDX                        ; 0042932c
    JGE 0x00429333                      ; 0042932e
        ;   XREF to: 00429333 (CONDITIONAL_JUMP)  ; LAB_00429333
    POP ESI                             ; 00429330
        ;   Label: LAB_00429330
    POP EBX                             ; 00429331
    RET                                 ; 00429332
    LEA ESI,[EDX*0x8 + 0x0]             ; 00429333
        ;   Label: LAB_00429333
    ADD ESI,EDX                         ; 0042933a
    LEA EAX,[EBX + 0x2b4]               ; 0042933c
    SHL ESI,0x2                         ; 00429342
    PUSH EAX                            ; 00429345
    SUB ESI,EDX                         ; 00429346
    CALL FUN_00503860                   ; 00429348
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 0042934d
    SHL ESI,0x3                         ; 00429350
    FLD float ptr [ESP + 0x10]          ; 00429353
    FMUL float ptr [ESI + EAX*0x1 + 0x1c48] ; 00429357
    FADD float ptr [EBX + 0x27c8]       ; 0042935e
    FSTP float ptr [EBX + 0x27c8]       ; 00429364
    FILD dword ptr [ESI + EAX*0x1 + 0x1c8c] ; 0042936a
    FCOMP float ptr [EBX + 0x27c8]      ; 00429371
    FNSTSW AX                           ; 00429377
    SAHF                                ; 00429379
    JA 0x00429330                       ; 0042937a
        ;   XREF to: 00429330 (CONDITIONAL_JUMP)  ; LAB_00429330
    MOV dword ptr [EBX + 0x27c4],0xffffffff ; 0042937c
    POP ESI                             ; 00429386
    POP EBX                             ; 00429387
    RET                                 ; 00429388

