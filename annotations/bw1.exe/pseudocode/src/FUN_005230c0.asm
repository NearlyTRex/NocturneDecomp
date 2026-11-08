; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005230c0(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_00414ab0 at 00414ae8
;   FUN_0050f290 at 0050f503
;   FUN_00520430 at 0052049b
;   FUN_005204e0 at 00520b94
;   FUN_00532930 at 005329a1
;   FUN_00591ff0 at 00592259
;   FUN_005a52a0 at 005a5390
;
; Called Functions:
;   FUN_00522170
;   FUN_00522490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005230c0
        ;   Label: FUN_005230c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005230c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005230c5
    SUB EAX,EDX                         ; 005230cc
    SHL EAX,0x6                         ; 005230ce
    ADD EAX,EDX                         ; 005230d1
    MOV EBX,dword ptr [ESP + 0x8]       ; 005230d3
    SHL EAX,0x3                         ; 005230d7
    ADD EBX,EAX                         ; 005230da
    PUSH EBX                            ; 005230dc
    CALL FUN_00522170                   ; 005230dd
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; undefined FUN_00522170()
    ADD ESP,0x4                         ; 005230e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005230e5
    PUSH EDX                            ; 005230e9
    PUSH EBX                            ; 005230ea
    CALL FUN_00522490                   ; 005230eb
        ;   XREF to: 00522490 (UNCONDITIONAL_CALL)  ; undefined FUN_00522490()
    ADD ESP,0x8                         ; 005230f0
    POP EBX                             ; 005230f3
    RET                                 ; 005230f4

