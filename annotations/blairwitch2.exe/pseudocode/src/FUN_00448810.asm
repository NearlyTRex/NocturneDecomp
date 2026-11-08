; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448810(int param_1,float *param_2)
;
;
; XREF[11]:
;   FUN_0041d020 at 0041d0f2
;   FUN_00486cb0 at 00486df0
;   FUN_00495960 at 004959c9
;   FUN_004969a0 at 004969b4
;   FUN_004a0590 at 004a05cb
;   FUN_004df1c0 at 004df1ea
;   FUN_0053c500 at 0053cfe3
;   FUN_00589fd0 at 0058a1ad
;   FUN_0059d360 at 0059d374
;   FUN_005a6bc0 at 005a6bf6
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_005ceffa
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00448810
        ;   Label: FUN_00448810
    MOV EAX,dword ptr [ESP + 0x8]       ; 00448814
    LEA EDX,[ECX + 0x24]                ; 00448818
    CMP EDX,EAX                         ; 0044881b
    JNZ 0x00448849                      ; 0044881d
        ;   XREF to: 00448849 (CONDITIONAL_JUMP)  ; LAB_00448849
    FLD double ptr [0x005ceffa]         ; 0044881f | DAT_005ceffa
        ;   Label: LAB_0044881f
    FLD float ptr [EAX]                 ; 00448825
    FMUL ST1                            ; 00448827
    CALL FUN_005b7ff0                   ; 00448829
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ECX]               ; 0044882e
    FLD float ptr [EAX + 0x4]           ; 00448830
    FMUL ST1                            ; 00448833
    CALL FUN_005b7ff0                   ; 00448835
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ECX + 0x4]         ; 0044883a
    FMUL float ptr [EAX + 0x8]          ; 0044883d
    CALL FUN_005b7ff0                   ; 00448840
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ECX + 0x8]         ; 00448845
    RET                                 ; 00448848
    PUSH EBX                            ; 00448849
        ;   Label: LAB_00448849
    MOV EBX,dword ptr [EAX]             ; 0044884a
    MOV dword ptr [EDX],EBX             ; 0044884c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044884e
    MOV dword ptr [EDX + 0x4],EBX       ; 00448851
    MOV EBX,dword ptr [EAX + 0x8]       ; 00448854
    MOV dword ptr [EDX + 0x8],EBX       ; 00448857
    POP EBX                             ; 0044885a
    JMP 0x0044881f                      ; 0044885b
        ;   XREF to: 0044881f (UNCONDITIONAL_JUMP)  ; LAB_0044881f

