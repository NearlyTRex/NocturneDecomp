; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00525420(int *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   FUN_0040b870 at 0040b92c
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005eafe0
;   TerminatedCString s_Tried_to_save_motion_con_005eaff3
;   TerminatedCString s_s_s_g_current_motion_nam_005eb03e
;   TerminatedCString s_s_s_g_current_motion_nam_005eb070
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_00524770
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525420
        ;   Label: FUN_00525420
    PUSH EDI                            ; 00525421
    PUSH EBP                            ; 00525422
    MOV EBP,ESP                         ; 00525423
    MOV EBX,dword ptr [EBP + 0x10]      ; 00525425
    CMP byte ptr [EBX + 0x30],0x0       ; 00525428
    JNZ 0x00525481                      ; 0052542c
        ;   XREF to: 00525481 (CONDITIONAL_JUMP)  ; LAB_00525481
    CMP dword ptr [EBX],0x0             ; 0052542e
    JNZ 0x00525455                      ; 00525431
        ;   XREF to: 00525455 (CONDITIONAL_JUMP)  ; LAB_00525455
    MOV EDI,0x5eafe0                    ; 00525433 | = "..\\core\\motion.cpp"
    MOV EAX,0x596                       ; 00525438
    PUSH 0x5eaff3                       ; 0052543d | = "Tried to save motion controller state..."
    MOV dword ptr [0x01d1d400],EDI      ; 00525442 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00525448 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052544d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00525452
    SUB ESP,0x8                         ; 00525455
        ;   Label: LAB_00525455
    FLD float ptr [EBX + 0x8]           ; 00525458
    FSTP double ptr [ESP]               ; 0052545b
    PUSH EBX                            ; 0052545e
    CALL FUN_00524770                   ; 0052545f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 00525464
    PUSH EAX                            ; 00525467
    MOV EDX,dword ptr [EBP + 0x18]      ; 00525468
    PUSH EDX                            ; 0052546b
    PUSH 0x5eb03e                       ; 0052546c | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 00525471
    PUSH ECX                            ; 00525474
    CALL FUN_005c03c0                   ; 00525475
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x18                        ; 0052547a
    POP EBP                             ; 0052547d
    POP EDI                             ; 0052547e
    POP EBX                             ; 0052547f
    RET                                 ; 00525480
    SUB ESP,0x8                         ; 00525481
        ;   Label: LAB_00525481
    FLD float ptr [EBX + 0x8]           ; 00525484
    ADD EBX,0x30                        ; 00525487
    FSTP double ptr [ESP]               ; 0052548a
    PUSH EBX                            ; 0052548d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052548e
    PUSH EDX                            ; 00525491
    PUSH 0x5eb070                       ; 00525492 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 00525497
    PUSH ECX                            ; 0052549a
    CALL FUN_005c03c0                   ; 0052549b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x18                        ; 005254a0
    POP EBP                             ; 005254a3
    POP EDI                             ; 005254a4
    POP EBX                             ; 005254a5
    RET                                 ; 005254a6

