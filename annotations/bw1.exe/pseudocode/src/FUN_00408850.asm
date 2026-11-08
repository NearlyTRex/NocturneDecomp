; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408850(int param_1)
;
;
; XREF[45]:
;   FUN_0040dc50 at 0040dc67
;   FUN_0040e160 at 0040e175
;   FUN_0040e660 at 0040e665
;   FUN_0040ef20 at 0040ef35
;   FUN_00410880 at 00410886
;   FUN_00410c20 at 00410c4e
;   FUN_00414470 at 00414476
;   FUN_00419350 at 00419358
;   FUN_00421de0 at 00421dea
;   FUN_0042c510 at 0042c51d
;   ... and 35 more
;
; Called Functions:
;   FUN_004088b0
;   FUN_005334f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408850
        ;   Label: FUN_00408850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408851
    MOV dword ptr [EBX + 0x114],0x0     ; 00408855
    PUSH EBX                            ; 0040885f
    MOV dword ptr [EBX + 0x11c],0x0     ; 00408860
    CALL FUN_004088b0                   ; 0040886a
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 0040886f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00408872
    PUSH EBX                            ; 00408878
    CALL dword ptr [EAX + 0xc4]         ; 00408879
    ADD ESP,0x4                         ; 0040887f
    TEST EAX,EAX                        ; 00408882
    JNZ 0x00408891                      ; 00408884
        ;   XREF to: 00408891 (CONDITIONAL_JUMP)  ; LAB_00408891
    POP EBX                             ; 00408886
    LEA EAX,[EAX]                       ; 00408887
    LEA EDX,[EDX]                       ; 0040888d
    PUSH 0x1                            ; 00408891
        ;   Label: LAB_00408891
    ADD EBX,0x20                        ; 00408893
    PUSH EBX                            ; 00408896
    PUSH EAX                            ; 00408897
    CALL FUN_005334f0                   ; 00408898
        ;   XREF to: 005334f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005334f0()
    ADD ESP,0xc                         ; 0040889d
    POP EBX                             ; 004088a0
    RET                                 ; 004088a1

