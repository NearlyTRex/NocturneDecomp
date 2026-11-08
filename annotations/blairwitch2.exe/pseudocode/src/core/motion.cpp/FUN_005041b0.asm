; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005041b0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0040bb60 at 0040bb99
;
; Referenced Globals:
;   undefined4 DAT_005dfd30
;   TerminatedCString s_d_f_005dfd32
;   TerminatedCString s_f_005dfd38
;   TerminatedCString s_core_motion_cpp_005dfd45
;   TerminatedCString s_CMotionController_load_e_005dfd58
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8100
;   FUN_005b8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005041b0
        ;   Label: FUN_005041b0
    PUSH EDI                            ; 005041b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005041b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005041b6
    PUSH ESI                            ; 005041ba
    PUSH 0x5dfd30                       ; 005041bb | DAT_005dfd30
    PUSH EDI                            ; 005041c0
    CALL FUN_005b8100                   ; 005041c1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x8                         ; 005041c6
    LEA ESI,[EBX + 0x8]                 ; 005041c9
    PUSH ESI                            ; 005041cc
    LEA EAX,[EBX + 0x4]                 ; 005041cd
    PUSH EAX                            ; 005041d0
    PUSH 0x5dfd32                       ; 005041d1 | = "%d,%f"
    MOV byte ptr [EBX + 0x30],0x0       ; 005041d6
    PUSH EDI                            ; 005041da
    MOV dword ptr [EBX + 0x4],0xffffffff ; 005041db
    CALL FUN_005b8100                   ; 005041e2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 005041e7
    CMP EAX,0x2                         ; 005041ea
    JNZ 0x00504207                      ; 005041ed
        ;   XREF to: 00504207 (CONDITIONAL_JUMP)  ; LAB_00504207
    MOV EBX,EDI                         ; 005041ef
        ;   Label: LAB_005041ef
    POP ESI                             ; 005041f1
    PUSH EBX                            ; 005041f2
        ;   Label: LAB_005041f2
    CALL FUN_005b8180                   ; 005041f3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 005041f8
    TEST EAX,EAX                        ; 005041fb
    JL 0x00504204                       ; 005041fd
        ;   XREF to: 00504204 (CONDITIONAL_JUMP)  ; LAB_00504204
    CMP EAX,0xa                         ; 005041ff
    JNZ 0x005041f2                      ; 00504202
        ;   XREF to: 005041f2 (CONDITIONAL_JUMP)  ; LAB_005041f2
    POP EDI                             ; 00504204
        ;   Label: LAB_00504204
    POP EBX                             ; 00504205
    RET                                 ; 00504206
    PUSH ESI                            ; 00504207
        ;   Label: LAB_00504207
    ADD EBX,0x30                        ; 00504208
    PUSH EBX                            ; 0050420b
    PUSH 0x5dfd38                       ; 0050420c | = "\"%[^\"]\" , %f"
    PUSH EDI                            ; 00504211
    CALL FUN_005b8100                   ; 00504212
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x10                        ; 00504217
    CMP EAX,0x2                         ; 0050421a
    JZ 0x005041ef                       ; 0050421d
        ;   XREF to: 005041ef (CONDITIONAL_JUMP)  ; LAB_005041ef
    MOV EDX,0x5dfd45                    ; 0050421f | = "..\\core\\motion.cpp"
    MOV ECX,0x569                       ; 00504224
    PUSH 0x5dfd58                       ; 00504229 | = "CMotionController::load - error parsi..."
    MOV dword ptr [0x01d046a0],EDX      ; 0050422e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00504234 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050423a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050423f
    JMP 0x005041ef                      ; 00504242
        ;   XREF to: 005041ef (UNCONDITIONAL_JUMP)  ; LAB_005041ef

