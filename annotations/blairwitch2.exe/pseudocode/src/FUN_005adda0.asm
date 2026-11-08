; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005adda0(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_004ad2c0 at 004ad2d6
;   FUN_004f0310 at 004f0325
;   FUN_005701c0 at 005701d4
;   FUN_00581530 at 00581552
;   FUN_005b14a0 at 005b14d6
;
; Referenced Globals:
;   undefined4 DAT_006011e0
;   undefined4 DAT_00601200
;
; Called Functions:
;   FUN_0044dc10
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005adda0
        ;   Label: FUN_005adda0
    PUSH EAX                            ; 005adda4
    CALL FUN_0044dc10                   ; 005adda5
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044dc10()
    ADD ESP,0x4                         ; 005addaa
    PUSH 0x6011e0                       ; 005addad | DAT_006011e0
    PUSH 0x320                          ; 005addb2
    ADD EAX,0x398                       ; 005addb7
    PUSH EAX                            ; 005addbc
    CALL FUN_005b7f5f                   ; 005addbd
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 005addc2
    PUSH 0x601200                       ; 005addc5 | DAT_00601200
    PUSH 0x32                           ; 005addca
    ADD EAX,0x377b8                     ; 005addcc
    PUSH EAX                            ; 005addd1
    CALL FUN_005b7f5f                   ; 005addd2
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    MOV dword ptr [EAX + 0x2fac],0x0    ; 005addd7
    MOV dword ptr [EAX + -0x4],0x0      ; 005adde1
    ADD ESP,0xc                         ; 005adde8
    MOV dword ptr [EAX + -0xc],0x0      ; 005addeb
    SUB EAX,0x37b50                     ; 005addf2
    RET                                 ; 005addf7

