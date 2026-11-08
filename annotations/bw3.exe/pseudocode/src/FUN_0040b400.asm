; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040b400(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[21]:
;   FUN_0040ebd0 at 0040ebea
;   FUN_00419070 at 004191cb
;   FUN_0041fb90 at 0041fbf0
;   FUN_004207f0 at 0042082c
;   FUN_0042b450 at 0042b7ac
;   FUN_00443ca0 at 00443d64
;   FUN_00448420 at 0044843d
;   FUN_00464cd0 at 00464db3
;   FUN_0046ebc0 at 0046ec1a
;   FUN_00488bb0 at 00488bdf
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005b5a78
;   TerminatedCString s_s_g_g_g_005b5a81
;   TerminatedCString s_s_3D_vector_005f0910
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

    PUSH EBX                            ; 0040b400
        ;   Label: FUN_0040b400
    PUSH EDI                            ; 0040b401
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040b402
    CMP dword ptr [0x007df9b8],0x1      ; 0040b406 | DAT_007df9b8
    JNZ 0x0040b45c                      ; 0040b40d
        ;   XREF to: 0040b45c (CONDITIONAL_JUMP)  ; LAB_0040b45c
    LEA EDX,[EAX + 0x8]                 ; 0040b40f
    PUSH EDX                            ; 0040b412
    LEA EDX,[EAX + 0x4]                 ; 0040b413
    PUSH EDX                            ; 0040b416
    PUSH EAX                            ; 0040b417
    PUSH 0x5b5a78                       ; 0040b418 | = "%f,%f,%f"
    MOV EBX,dword ptr [0x007df9b4]      ; 0040b41d | DAT_007df9b4
    PUSH EBX                            ; 0040b423
    CALL FUN_005a3230                   ; 0040b424
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 0040b429
    CMP EAX,0x3                         ; 0040b42c
    JNZ 0x0040b446                      ; 0040b42f
        ;   XREF to: 0040b446 (CONDITIONAL_JUMP)  ; LAB_0040b446
    MOV EDI,dword ptr [ESP + 0x10]      ; 0040b431
        ;   Label: LAB_0040b431
    PUSH EDI                            ; 0040b435
    PUSH 0x5f0910                       ; 0040b436 | = "3D vector"
    CALL FUN_0040b350                   ; 0040b43b
        ;   XREF to: 0040b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b350()
    ADD ESP,0x8                         ; 0040b440
    POP EDI                             ; 0040b443
    POP EBX                             ; 0040b444
    RET                                 ; 0040b445
    PUSH ESI                            ; 0040b446
        ;   Label: LAB_0040b446
    MOV ESI,dword ptr [ESP + 0x14]      ; 0040b447
    PUSH ESI                            ; 0040b44b
    PUSH 0x5f0910                       ; 0040b44c | = "3D vector"
    CALL FUN_0040b2d0                   ; 0040b451
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040b456
    POP ESI                             ; 0040b459
    JMP 0x0040b431                      ; 0040b45a
        ;   XREF to: 0040b431 (UNCONDITIONAL_JUMP)  ; LAB_0040b431
    SUB ESP,0x8                         ; 0040b45c
        ;   Label: LAB_0040b45c
    FLD float ptr [EAX + 0x8]           ; 0040b45f
    FSTP double ptr [ESP]               ; 0040b462
    SUB ESP,0x8                         ; 0040b465
    FLD float ptr [EAX + 0x4]           ; 0040b468
    FSTP double ptr [ESP]               ; 0040b46b
    SUB ESP,0x8                         ; 0040b46e
    FLD float ptr [EAX]                 ; 0040b471
    FSTP double ptr [ESP]               ; 0040b473
    PUSH 0x5f0990                       ; 0040b476 | DAT_005f0990
    PUSH 0x5b5a81                       ; 0040b47b | = "%s%g,%g,%g"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040b480 | DAT_007df9b4
    PUSH ECX                            ; 0040b486
    CALL FUN_005a3140                   ; 0040b487
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x24                        ; 0040b48c
    JMP 0x0040b431                      ; 0040b48f
        ;   XREF to: 0040b431 (UNCONDITIONAL_JUMP)  ; LAB_0040b431

