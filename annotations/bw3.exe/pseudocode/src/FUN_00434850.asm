; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434850(int param_1,float param_2)
;
;
; XREF[35]:
;   FUN_0040fb40 at 0040fc60
;   FUN_004179b0 at 00417e38
;   FUN_00419b40 at 00419fa6
;   FUN_00425da0 at 00426e36
;   FUN_00442a20 at 004433f8
;   FUN_00445130 at 004451bf
;   FUN_00455080 at 00455fd1
;   FUN_004628b0 at 00462987
;   FUN_004c5350 at 004c541a
;   FUN_004c6eb0 at 004c6f68
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_ghost_005b8922
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21558
;
; Called Functions:
;   FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434850
        ;   Label: FUN_00434850
    PUSH EBP                            ; 00434851
    MOV EBP,ESP                         ; 00434852
    MOV EBX,dword ptr [EBP + 0xc]       ; 00434854
    MOV EAX,[0x005fe9dc]                ; 00434857 | DAT_005fe9dc
    CMP dword ptr [EAX + 0x24c],0x0     ; 0043485c | DAT_01d21558
    JNZ 0x00434891                      ; 00434863
        ;   XREF to: 00434891 (CONDITIONAL_JUMP)  ; LAB_00434891
    FLD float ptr [EBX + 0x252c]        ; 00434865
    FMUL float ptr [EBP + 0x10]         ; 0043486b
        ;   Label: LAB_0043486b
    FSTP float ptr [EBX + 0x2528]       ; 0043486e
    PUSH 0x5                            ; 00434874
    PUSH 0x5b8922                       ; 00434876 | = "ghost"
    LEA EAX,[EBX + 0x24a8]              ; 0043487b
    PUSH EAX                            ; 00434881
    CALL FUN_005a3f90                   ; 00434882
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f90()
    ADD ESP,0xc                         ; 00434887
    TEST EAX,EAX                        ; 0043488a
    JZ 0x00434899                       ; 0043488c
        ;   XREF to: 00434899 (CONDITIONAL_JUMP)  ; LAB_00434899
    POP EBP                             ; 0043488e
    POP EBX                             ; 0043488f
    RET                                 ; 00434890
    FLD float ptr [EBX + 0x2530]        ; 00434891
        ;   Label: LAB_00434891
    JMP 0x0043486b                      ; 00434897
        ;   XREF to: 0043486b (UNCONDITIONAL_JUMP)  ; LAB_0043486b
    FLD float ptr [EBX + 0x2534]        ; 00434899
        ;   Label: LAB_00434899
    FMUL float ptr [EBP + 0x10]         ; 0043489f
    FSTP float ptr [EBX + 0x2528]       ; 004348a2
    POP EBP                             ; 004348a8
    POP EBX                             ; 004348a9
    RET                                 ; 004348aa

