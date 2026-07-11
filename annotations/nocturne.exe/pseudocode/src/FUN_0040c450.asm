; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c450(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[3]:
;   FUN_0041ec60 at 0041ecc0
;   FUN_004f6fa0 at 004f726b
;   FUN_00548170 at 0054819f
;
; Referenced Globals:
;   string s_%f,%f,%f_00577c04
;   string s_%s%g,%g,%g_00577c0d
;   string s_3D_vector_005acc10
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   FUN_0040c320
;   FUN_0040c3a0
;   FUN_00563350
;   FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c450
        ;   Label: FUN_0040c450
    PUSH EDI                            ; 0040c451
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040c452
    CMP dword ptr [0x00763e88],0x1      ; 0040c456 | DAT_00763e88
    JNZ 0x0040c4ac                      ; 0040c45d
        ;   XREF to: 0040c4ac (CONDITIONAL_JUMP)  ; LAB_0040c4ac
    LEA EDX,[EAX + 0x8]                 ; 0040c45f
    PUSH EDX                            ; 0040c462
    LEA EDX,[EAX + 0x4]                 ; 0040c463
    PUSH EDX                            ; 0040c466
    PUSH EAX                            ; 0040c467
    PUSH 0x577c04                       ; 0040c468 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x00763e84]      ; 0040c46d | DAT_00763e84
    PUSH EBX                            ; 0040c473
    CALL FUN_00563350                   ; 0040c474
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x14                        ; 0040c479
    CMP EAX,0x3                         ; 0040c47c
    JNZ 0x0040c496                      ; 0040c47f
        ;   XREF to: 0040c496 (CONDITIONAL_JUMP)  ; LAB_0040c496
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040c481
        ;   Label: LAB_0040c481
    PUSH EDI                            ; 0040c485
    PUSH 0x5acc10                       ; 0040c486 | = "3D vector"
    CALL FUN_0040c3a0                   ; 0040c48b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x8                         ; 0040c490
    POP EDI                             ; 0040c493
    POP EBX                             ; 0040c494
    RET                                 ; 0040c495
    PUSH ESI                            ; 0040c496
        ;   Label: LAB_0040c496
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040c497
    PUSH ESI                            ; 0040c49b
    PUSH 0x5acc10                       ; 0040c49c | = "3D vector"
    CALL FUN_0040c320                   ; 0040c4a1
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c320()
    ADD ESP,0x8                         ; 0040c4a6
    POP ESI                             ; 0040c4a9
    JMP 0x0040c481                      ; 0040c4aa
        ;   XREF to: 0040c481 (UNCONDITIONAL_JUMP)  ; LAB_0040c481
    SUB ESP,0x8                         ; 0040c4ac
        ;   Label: LAB_0040c4ac
    FLD float ptr [EAX + 0x8]           ; 0040c4af
    FSTP double ptr [ESP]               ; 0040c4b2
    SUB ESP,0x8                         ; 0040c4b5
    FLD float ptr [EAX + 0x4]           ; 0040c4b8
    FSTP double ptr [ESP]               ; 0040c4bb
    SUB ESP,0x8                         ; 0040c4be
    FLD float ptr [EAX]                 ; 0040c4c1
    FSTP double ptr [ESP]               ; 0040c4c3
    PUSH 0x5acc90                       ; 0040c4c6 | DAT_005acc90
    PUSH 0x577c0d                       ; 0040c4cb | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x00763e84]      ; 0040c4d0 | DAT_00763e84
    PUSH ECX                            ; 0040c4d6
    CALL FUN_005644f0                   ; 0040c4d7
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005644f0()
    ADD ESP,0x24                        ; 0040c4dc
    JMP 0x0040c481                      ; 0040c4df
        ;   XREF to: 0040c481 (UNCONDITIONAL_JUMP)  ; LAB_0040c481

