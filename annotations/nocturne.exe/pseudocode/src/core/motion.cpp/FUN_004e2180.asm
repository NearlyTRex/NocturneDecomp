; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e2180(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0040cb00 at 0040cb39
;
; Referenced Globals:
;   undefined4 DAT_0058b3b5
;   string s_%d,%f_0058b3b7
;   string s_\"%[^\"]\"_,_%f_0058b3bd
;   string s_..\\core\\motion.cpp_0058b3ca
;   string s_CMotionController::load_-_error_p_0058b3dd
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;   FUN_00563350
;   FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2180
        ;   Label: FUN_004e2180
    PUSH EDI                            ; 004e2181
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e2182
    MOV EDI,dword ptr [ESP + 0x10]      ; 004e2186
    PUSH ESI                            ; 004e218a
    PUSH 0x58b3b5                       ; 004e218b | DAT_0058b3b5
    PUSH EDI                            ; 004e2190
    CALL FUN_00563350                   ; 004e2191
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x8                         ; 004e2196
    LEA ESI,[EBX + 0x8]                 ; 004e2199
    PUSH ESI                            ; 004e219c
    LEA EAX,[EBX + 0x4]                 ; 004e219d
    PUSH EAX                            ; 004e21a0
    PUSH 0x58b3b7                       ; 004e21a1 | = "%d,%f"
    MOV byte ptr [EBX + 0x30],0x0       ; 004e21a6
    PUSH EDI                            ; 004e21aa
    MOV dword ptr [EBX + 0x4],0xffffffff ; 004e21ab
    CALL FUN_00563350                   ; 004e21b2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x10                        ; 004e21b7
    CMP EAX,0x2                         ; 004e21ba
    JNZ 0x004e21d7                      ; 004e21bd
        ;   XREF to: 004e21d7 (CONDITIONAL_JUMP)  ; LAB_004e21d7
    MOV EBX,EDI                         ; 004e21bf
        ;   Label: LAB_004e21bf
    POP ESI                             ; 004e21c1
    PUSH EBX                            ; 004e21c2
        ;   Label: LAB_004e21c2
    CALL FUN_00564570                   ; 004e21c3
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined FUN_00564570()
    ADD ESP,0x4                         ; 004e21c8
    TEST EAX,EAX                        ; 004e21cb
    JL 0x004e21d4                       ; 004e21cd
        ;   XREF to: 004e21d4 (CONDITIONAL_JUMP)  ; LAB_004e21d4
    CMP EAX,0xa                         ; 004e21cf
    JNZ 0x004e21c2                      ; 004e21d2
        ;   XREF to: 004e21c2 (CONDITIONAL_JUMP)  ; LAB_004e21c2
    POP EDI                             ; 004e21d4
        ;   Label: LAB_004e21d4
    POP EBX                             ; 004e21d5
    RET                                 ; 004e21d6
    PUSH ESI                            ; 004e21d7
        ;   Label: LAB_004e21d7
    ADD EBX,0x30                        ; 004e21d8
    PUSH EBX                            ; 004e21db
    PUSH 0x58b3bd                       ; 004e21dc | = "\"%[^\"]\" , %f"
    PUSH EDI                            ; 004e21e1
    CALL FUN_00563350                   ; 004e21e2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined FUN_00563350()
    ADD ESP,0x10                        ; 004e21e7
    CMP EAX,0x2                         ; 004e21ea
    JZ 0x004e21bf                       ; 004e21ed
        ;   XREF to: 004e21bf (CONDITIONAL_JUMP)  ; LAB_004e21bf
    MOV EDX,0x58b3ca                    ; 004e21ef | = "..\\core\\motion.cpp"
    MOV ECX,0x51e                       ; 004e21f4
    PUSH 0x58b3dd                       ; 004e21f9 | = "CMotionController::load - error parsi..."
    MOV dword ptr [0x01cc4800],EDX      ; 004e21fe | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e2204 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e220a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004e220f
    JMP 0x004e21bf                      ; 004e2212
        ;   XREF to: 004e21bf (UNCONDITIONAL_JUMP)  ; LAB_004e21bf

