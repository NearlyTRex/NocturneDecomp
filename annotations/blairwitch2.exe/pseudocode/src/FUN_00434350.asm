; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434350(int param_1)
;
;
; XREF[2]:
;   FUN_004342d0 at 004342ed
;   FUN_004343f0 at 00434470
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434350
        ;   Label: FUN_00434350
    MOV EAX,0x1                         ; 00434354
    MOV ECX,dword ptr [EDX + 0x4]       ; 00434359
    SHL EAX,CL                          ; 0043435c
    XOR ECX,ECX                         ; 0043435e
    MOV dword ptr [EDX + 0xc],EAX       ; 00434360
    TEST EAX,EAX                        ; 00434363
    JLE 0x0043439f                      ; 00434365
        ;   XREF to: 0043439f (CONDITIONAL_JUMP)  ; LAB_0043439f
    PUSH ESI                            ; 00434367
    PUSH EBX                            ; 00434368
    XOR EAX,EAX                         ; 00434369
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043436b
        ;   Label: LAB_0043436b
    MOV dword ptr [EBX + EAX*0x1],ECX   ; 0043436e
    MOV EBX,dword ptr [EDX + 0x10]      ; 00434371
    MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff ; 00434374
    MOV EBX,dword ptr [EDX + 0x10]      ; 0043437c
    MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff ; 0043437f
    MOV EBX,dword ptr [EDX + 0x10]      ; 00434387
    MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff ; 0043438a
    INC ECX                             ; 00434392
    MOV ESI,dword ptr [EDX + 0xc]       ; 00434393
    ADD EAX,0x10                        ; 00434396
    CMP ECX,ESI                         ; 00434399
    JL 0x0043436b                       ; 0043439b
        ;   XREF to: 0043436b (CONDITIONAL_JUMP)  ; LAB_0043436b
    POP EBX                             ; 0043439d
    POP ESI                             ; 0043439e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043439f
        ;   Label: LAB_0043439f
    MOV dword ptr [EDX + 0x8],EAX       ; 004343a2
    RET                                 ; 004343a5

