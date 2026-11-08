; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504250(int *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   FUN_0040bb60 at 0040bc1c
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005dfd85
;   TerminatedCString s_Tried_to_save_motion_con_005dfd98
;   TerminatedCString s_s_s_g_current_motion_nam_005dfde3
;   TerminatedCString s_s_s_g_current_motion_nam_005dfe15
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005035c0
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504250
        ;   Label: FUN_00504250
    PUSH EDI                            ; 00504251
    PUSH EBP                            ; 00504252
    MOV EBP,ESP                         ; 00504253
    MOV EBX,dword ptr [EBP + 0x10]      ; 00504255
    CMP byte ptr [EBX + 0x30],0x0       ; 00504258
    JNZ 0x005042b1                      ; 0050425c
        ;   XREF to: 005042b1 (CONDITIONAL_JUMP)  ; LAB_005042b1
    CMP dword ptr [EBX],0x0             ; 0050425e
    JNZ 0x00504285                      ; 00504261
        ;   XREF to: 00504285 (CONDITIONAL_JUMP)  ; LAB_00504285
    MOV EDI,0x5dfd85                    ; 00504263 | = "..\\core\\motion.cpp"
    MOV EAX,0x581                       ; 00504268
    PUSH 0x5dfd98                       ; 0050426d | = "Tried to save motion controller state..."
    MOV dword ptr [0x01d046a0],EDI      ; 00504272 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00504278 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050427d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00504282
    SUB ESP,0x8                         ; 00504285
        ;   Label: LAB_00504285
    FLD float ptr [EBX + 0x8]           ; 00504288
    FSTP double ptr [ESP]               ; 0050428b
    PUSH EBX                            ; 0050428e
    CALL FUN_005035c0                   ; 0050428f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 00504294
    PUSH EAX                            ; 00504297
    MOV EDX,dword ptr [EBP + 0x18]      ; 00504298
    PUSH EDX                            ; 0050429b
    PUSH 0x5dfde3                       ; 0050429c | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 005042a1
    PUSH ECX                            ; 005042a4
    CALL FUN_005b8010                   ; 005042a5
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x18                        ; 005042aa
    POP EBP                             ; 005042ad
    POP EDI                             ; 005042ae
    POP EBX                             ; 005042af
    RET                                 ; 005042b0
    SUB ESP,0x8                         ; 005042b1
        ;   Label: LAB_005042b1
    FLD float ptr [EBX + 0x8]           ; 005042b4
    ADD EBX,0x30                        ; 005042b7
    FSTP double ptr [ESP]               ; 005042ba
    PUSH EBX                            ; 005042bd
    MOV EDX,dword ptr [EBP + 0x18]      ; 005042be
    PUSH EDX                            ; 005042c1
    PUSH 0x5dfe15                       ; 005042c2 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 005042c7
    PUSH ECX                            ; 005042ca
    CALL FUN_005b8010                   ; 005042cb
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x18                        ; 005042d0
    POP EBP                             ; 005042d3
    POP EDI                             ; 005042d4
    POP EBX                             ; 005042d5
    RET                                 ; 005042d6

