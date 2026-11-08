; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6f80(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[7]:
;   FUN_00414dd0 at 00414e08
;   FUN_004f04f0 at 004f0764
;   FUN_00501480 at 005014eb
;   FUN_00501530 at 00501be4
;   FUN_005115e0 at 00511651
;   FUN_0056f3a0 at 0056f609
;   FUN_00581660 at 00581750
;
; Called Functions:
;   FUN_005b6030
;   FUN_005b6350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6f80
        ;   Label: FUN_005b6f80
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6f81
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b6f85
    SUB EAX,EDX                         ; 005b6f8c
    SHL EAX,0x6                         ; 005b6f8e
    ADD EAX,EDX                         ; 005b6f91
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6f93
    SHL EAX,0x3                         ; 005b6f97
    ADD EBX,EAX                         ; 005b6f9a
    PUSH EBX                            ; 005b6f9c
    CALL FUN_005b6030                   ; 005b6f9d
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6030()
    ADD ESP,0x4                         ; 005b6fa2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b6fa5
    PUSH EDX                            ; 005b6fa9
    PUSH EBX                            ; 005b6faa
    CALL FUN_005b6350                   ; 005b6fab
        ;   XREF to: 005b6350 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6350()
    ADD ESP,0x8                         ; 005b6fb0
    POP EBX                             ; 005b6fb3
    RET                                 ; 005b6fb4

