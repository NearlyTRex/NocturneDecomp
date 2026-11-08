; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00441390(int *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004bdfb0 at 004be307
;
; Called Functions:
;   FUN_00440e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441390
        ;   Label: FUN_00441390
    PUSH ESI                            ; 00441391
    PUSH EDI                            ; 00441392
    PUSH EBP                            ; 00441393
    MOV EBX,dword ptr [ESP + 0x14]      ; 00441394
    LEA EDI,[EBX + 0x18]                ; 00441398
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044139b
    LEA ESI,[EBX + 0x4]                 ; 0044139f
    CMP dword ptr [EBX + 0x2c],0x0      ; 004413a2
        ;   Label: LAB_004413a2
    JL 0x004413c0                       ; 004413a6
        ;   XREF to: 004413c0 (CONDITIONAL_JUMP)  ; LAB_004413c0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004413a8
        ;   Label: LAB_004413a8
    PUSH ECX                            ; 004413ac
    MOV EAX,dword ptr [EBX]             ; 004413ad
    PUSH EBX                            ; 004413af
    CALL dword ptr [EAX + 0xc]          ; 004413b0
    ADD ESP,0x8                         ; 004413b3
    CMP EAX,0x1                         ; 004413b6
    JZ 0x004413a2                       ; 004413b9
        ;   XREF to: 004413a2 (CONDITIONAL_JUMP)  ; LAB_004413a2
    POP EBP                             ; 004413bb
    POP EDI                             ; 004413bc
    POP ESI                             ; 004413bd
    POP EBX                             ; 004413be
    RET                                 ; 004413bf
    PUSH EBP                            ; 004413c0
        ;   Label: LAB_004413c0
    PUSH EDI                            ; 004413c1
    PUSH ESI                            ; 004413c2
    CALL FUN_00440e10                   ; 004413c3
        ;   XREF to: 00440e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00440e10()
    ADD ESP,0xc                         ; 004413c8
    TEST EAX,EAX                        ; 004413cb
    JL 0x004413d4                       ; 004413cd
        ;   XREF to: 004413d4 (CONDITIONAL_JUMP)  ; LAB_004413d4
    MOV dword ptr [EBX + 0x2c],EAX      ; 004413cf
    JMP 0x004413a8                      ; 004413d2
        ;   XREF to: 004413a8 (UNCONDITIONAL_JUMP)  ; LAB_004413a8
    CMP EAX,-0x1                        ; 004413d4
        ;   Label: LAB_004413d4
    JNZ 0x004413e3                      ; 004413d7
        ;   XREF to: 004413e3 (CONDITIONAL_JUMP)  ; LAB_004413e3
    MOV EAX,0x1                         ; 004413d9
    POP EBP                             ; 004413de
    POP EDI                             ; 004413df
    POP ESI                             ; 004413e0
    POP EBX                             ; 004413e1
    RET                                 ; 004413e2
    XOR EAX,EAX                         ; 004413e3
        ;   Label: LAB_004413e3
    POP EBP                             ; 004413e5
    POP EDI                             ; 004413e6
    POP ESI                             ; 004413e7
    POP EBX                             ; 004413e8
    RET                                 ; 004413e9

