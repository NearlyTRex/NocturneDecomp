; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b4a0(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[4]:
;   FUN_0040c280 at 0040c2a2
;   FUN_0041fb90 at 0041fdfc
;   FUN_004207f0 at 00420846
;   FUN_0042b450 at 0042b7be
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005b5a8c
;   TerminatedCString s_s_g_g_g_005b5a95
;   TerminatedCString s_Euler_PBH_orientation_005f0920
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040b2d0
;   FUN_0040b350
;   FUN_005a3140
;   FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b4a0
        ;   Label: FUN_0040b4a0
    PUSH EDI                            ; 0040b4a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b4a2
    CMP dword ptr [0x007df9b8],0x1      ; 0040b4a6 | DAT_007df9b8
    JNZ 0x0040b4fc                      ; 0040b4ad
        ;   XREF to: 0040b4fc (CONDITIONAL_JUMP)  ; LAB_0040b4fc
    LEA EDX,[EAX + 0x4]                 ; 0040b4af
    PUSH EDX                            ; 0040b4b2
    LEA EDX,[EAX + 0x8]                 ; 0040b4b3
    PUSH EDX                            ; 0040b4b6
    PUSH EAX                            ; 0040b4b7
    PUSH 0x5b5a8c                       ; 0040b4b8 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b4bd | DAT_007df9b4
    PUSH EBX                            ; 0040b4c3
    CALL FUN_005a3230                   ; 0040b4c4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0040b4c9
    CMP EAX,0x3                         ; 0040b4cc
    JNZ 0x0040b4e6                      ; 0040b4cf
        ;   XREF to: 0040b4e6 (CONDITIONAL_JUMP)  ; LAB_0040b4e6
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b4d1
        ;   Label: LAB_0040b4d1
    PUSH EDI                            ; 0040b4d5
    PUSH 0x5f0920                       ; 0040b4d6 | = "Euler PBH orientation"
    CALL FUN_0040b350                   ; 0040b4db
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b350()
    ADD ESP,0x8                         ; 0040b4e0
    POP EDI                             ; 0040b4e3
    POP EBX                             ; 0040b4e4
    RET                                 ; 0040b4e5
    PUSH ESI                            ; 0040b4e6
        ;   Label: LAB_0040b4e6
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b4e7
    PUSH ESI                            ; 0040b4eb
    PUSH 0x5f0920                       ; 0040b4ec | = "Euler PBH orientation"
    CALL FUN_0040b2d0                   ; 0040b4f1
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040b4f6
    POP ESI                             ; 0040b4f9
    JMP 0x0040b4d1                      ; 0040b4fa
        ;   XREF to: 0040b4d1 (UNCONDITIONAL_JUMP)  ; LAB_0040b4d1
    SUB ESP,0x8                         ; 0040b4fc
        ;   Label: LAB_0040b4fc
    FLD float ptr [EAX + 0x4]           ; 0040b4ff
    FSTP double ptr [ESP]               ; 0040b502
    SUB ESP,0x8                         ; 0040b505
    FLD float ptr [EAX + 0x8]           ; 0040b508
    FSTP double ptr [ESP]               ; 0040b50b
    SUB ESP,0x8                         ; 0040b50e
    FLD float ptr [EAX]                 ; 0040b511
    FSTP double ptr [ESP]               ; 0040b513
    PUSH 0x5f0990                       ; 0040b516 | DAT_005f0990
    PUSH 0x5b5a95                       ; 0040b51b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b520 | DAT_007df9b4
    PUSH ECX                            ; 0040b526
    CALL FUN_005a3140                   ; 0040b527
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x24                        ; 0040b52c
    JMP 0x0040b4d1                      ; 0040b52f
        ;   XREF to: 0040b4d1 (UNCONDITIONAL_JUMP)  ; LAB_0040b4d1

