; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b4b0(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[25]:
;   FUN_00410dc0 at 00410dda
;   FUN_00413e60 at 00413f10
;   FUN_00419c50 at 00419dab
;   FUN_0041c7f0 at 0041c850
;   FUN_0041d270 at 0041d2ac
;   FUN_00437b80 at 00437c44
;   FUN_00438780 at 0043879a
;   FUN_0045ff80 at 00460063
;   FUN_00464cc0 at 00464efa
;   FUN_0046cfe0 at 0046d03a
;   ... and 15 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005caac9
;   TerminatedCString s_s_g_g_g_005caad2
;   TerminatedCString s_s_3D_vector_00609510
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   FUN_0040b380
;   FUN_0040b400
;   FUN_005b8010
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b4b0
        ;   Label: FUN_0040b4b0
    PUSH EDI                            ; 0040b4b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b4b2
    CMP dword ptr [0x007bc038],0x1      ; 0040b4b6 | DAT_007bc038
    JNZ 0x0040b50c                      ; 0040b4bd
        ;   XREF to: 0040b50c (CONDITIONAL_JUMP)  ; LAB_0040b50c
    LEA EDX,[EAX + 0x8]                 ; 0040b4bf
    PUSH EDX                            ; 0040b4c2
    LEA EDX,[EAX + 0x4]                 ; 0040b4c3
    PUSH EDX                            ; 0040b4c6
    PUSH EAX                            ; 0040b4c7
    PUSH 0x5caac9                       ; 0040b4c8 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007bc034]      ; 0040b4cd | DAT_007bc034
    PUSH EBX                            ; 0040b4d3
    CALL FUN_005b8100                   ; 0040b4d4
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x14                        ; 0040b4d9
    CMP EAX,0x3                         ; 0040b4dc
    JNZ 0x0040b4f6                      ; 0040b4df
        ;   XREF to: 0040b4f6 (CONDITIONAL_JUMP)  ; LAB_0040b4f6
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b4e1
        ;   Label: LAB_0040b4e1
    PUSH EDI                            ; 0040b4e5
    PUSH 0x609510                       ; 0040b4e6 | = "3D vector"
    CALL FUN_0040b400                   ; 0040b4eb
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 0040b4f0
    POP EDI                             ; 0040b4f3
    POP EBX                             ; 0040b4f4
    RET                                 ; 0040b4f5
    PUSH ESI                            ; 0040b4f6
        ;   Label: LAB_0040b4f6
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b4f7
    PUSH ESI                            ; 0040b4fb
    PUSH 0x609510                       ; 0040b4fc | = "3D vector"
    CALL FUN_0040b380                   ; 0040b501
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b380()
    ADD ESP,0x8                         ; 0040b506
    POP ESI                             ; 0040b509
    JMP 0x0040b4e1                      ; 0040b50a
        ;   XREF to: 0040b4e1 (UNCONDITIONAL_JUMP)  ; LAB_0040b4e1
    SUB ESP,0x8                         ; 0040b50c
        ;   Label: LAB_0040b50c
    FLD float ptr [EAX + 0x8]           ; 0040b50f
    FSTP double ptr [ESP]               ; 0040b512
    SUB ESP,0x8                         ; 0040b515
    FLD float ptr [EAX + 0x4]           ; 0040b518
    FSTP double ptr [ESP]               ; 0040b51b
    SUB ESP,0x8                         ; 0040b51e
    FLD float ptr [EAX]                 ; 0040b521
    FSTP double ptr [ESP]               ; 0040b523
    PUSH 0x609590                       ; 0040b526 | DAT_00609590
    PUSH 0x5caad2                       ; 0040b52b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007bc034]      ; 0040b530 | DAT_007bc034
    PUSH ECX                            ; 0040b536
    CALL FUN_005b8010                   ; 0040b537
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x24                        ; 0040b53c
    JMP 0x0040b4e1                      ; 0040b53f
        ;   XREF to: 0040b4e1 (UNCONDITIONAL_JUMP)  ; LAB_0040b4e1

