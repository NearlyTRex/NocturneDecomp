; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_turret.cpp_FUN_005e3560()
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
;
; XREF[2]:
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e26e3
;   core_turret.cpp_FUN_005e2d50 at 005e3261
;
; Referenced Globals:
;   double DOUBLE_00656798 = 0.333333333333333
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_turret.cpp_FUN_005e3280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3560
        ;   Label: core_turret.cpp_FUN_005e3560
    PUSH ESI                            ; 005e3561
    PUSH EDI                            ; 005e3562
    PUSH EBP                            ; 005e3563
    SUB ESP,0x44                        ; 005e3564
    MOV ESI,dword ptr [ESP + 0x58]      ; 005e3567
    FLD float ptr [ESI + 0x86c]         ; 005e356b
    FLDZ                                ; 005e3571
    FCOMPP                              ; 005e3573
    FNSTSW AX                           ; 005e3575
    SAHF                                ; 005e3577
    JNC 0x005e35a3                      ; 005e3578 | LAB_005e35a3
        ;   XREF to: 005e35a3 (CONDITIONAL_JUMP)
    FLD float ptr [ESI + 0x300]         ; 005e357a
    FLDZ                                ; 005e3580
    FCOMPP                              ; 005e3582
    FNSTSW AX                           ; 005e3584
    SAHF                                ; 005e3586
    JNC 0x005e3591                      ; 005e3587 | LAB_005e3591
        ;   XREF to: 005e3591 (CONDITIONAL_JUMP)
    ADD ESP,0x44                        ; 005e3589
        ;   Label: LAB_005e3589
    POP EBP                             ; 005e358c
    POP EDI                             ; 005e358d
    POP ESI                             ; 005e358e
    POP EBX                             ; 005e358f
    RET                                 ; 005e3590
    PUSH ESI                            ; 005e3591
        ;   Label: LAB_005e3591
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e3592
    CALL dword ptr [EAX + 0xf8]         ; 005e3598
    ADD ESP,0x4                         ; 005e359e
    JMP 0x005e3589                      ; 005e35a1 | LAB_005e3589
        ;   XREF to: 005e3589 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x780],0x0     ; 005e35a3
        ;   Label: LAB_005e35a3
    JZ 0x005e3589                       ; 005e35aa | LAB_005e3589
        ;   XREF to: 005e3589 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x5c]          ; 005e35ac
    FMUL double ptr [0x00656798]        ; 005e35b0 | double DOUBLE_00656798
    SUB ESP,0x4                         ; 005e35b6
    LEA EBX,[ESI + 0x84c]               ; 005e35b9
    FSTP float ptr [ESP]                ; 005e35bf
    PUSH EBX                            ; 005e35c2
    PUSH ESI                            ; 005e35c3
    CALL core_turret.cpp_FUN_005e3280   ; 005e35c4 | undefined core_turret.cpp_FUN_005e3280()
        ;   XREF to: 005e3280 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e35c9
    TEST EAX,EAX                        ; 005e35cc
    JZ 0x005e3589                       ; 005e35ce | LAB_005e3589
        ;   XREF to: 005e3589 (CONDITIONAL_JUMP)
    MOV EBP,ESP                         ; 005e35d0
    MOV EAX,dword ptr [ESI + 0x780]     ; 005e35d2
    PUSH EBP                            ; 005e35d8
    MOV EDI,dword ptr [EAX + 0x154]     ; 005e35d9
    PUSH EAX                            ; 005e35df
    CALL dword ptr [EDI + 0x14]         ; 005e35e0
    ADD ESP,0x8                         ; 005e35e3
    MOV EAX,dword ptr [EBX]             ; 005e35e6
    MOV dword ptr [ESP + 0x18],EAX      ; 005e35e8
    LEA EAX,[EBX + 0x4]                 ; 005e35ec
    MOV EAX,dword ptr [EAX]             ; 005e35ef
    MOV dword ptr [ESP + 0x1c],EAX      ; 005e35f1
    LEA EAX,[EBX + 0x8]                 ; 005e35f5
    XOR EBP,EBP                         ; 005e35f8
    MOV EAX,dword ptr [EAX]             ; 005e35fa
    MOV EDI,EBX                         ; 005e35fc
    MOV dword ptr [ESP + 0x20],EAX      ; 005e35fe
    PUSH 0x3f666666                     ; 005e3602
        ;   Label: LAB_005e3602
    PUSH 0x3dcccccd                     ; 005e3607
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e360c | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)

