; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00524150(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[12]:
;   FUN_00415830 at 00415875
;   FUN_00432050 at 00432099
;   FUN_00433cd0 at 00433d1e
;   FUN_004a1d00 at 004a5b56
;   FUN_004eada0 at 004eadcf
;   FUN_004eadf0 at 004eae67
;   FUN_004eaf20 at 004eaf66
;   FUN_00524850 at 00524860
;   FUN_005317c0 at 00531aa5
;   FUN_00531cc0 at 00531d05
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005ead89
;   TerminatedCString s_Can_t_find_state_s_in_mo_005ead9c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524150
        ;   Label: FUN_00524150
    PUSH ESI                            ; 00524151
    PUSH EDI                            ; 00524152
    PUSH EBP                            ; 00524153
    MOV EDI,dword ptr [ESP + 0x14]      ; 00524154
    MOV EBP,dword ptr [ESP + 0x18]      ; 00524158
    MOV EDX,dword ptr [EDI]             ; 0052415c
    XOR EBX,EBX                         ; 0052415e
    TEST EDX,EDX                        ; 00524160
    JLE 0x0052417f                      ; 00524162
        ;   XREF to: 0052417f (CONDITIONAL_JUMP)  ; LAB_0052417f
    LEA ESI,[EDI + 0x4]                 ; 00524164
    PUSH EBP                            ; 00524167
        ;   Label: LAB_00524167
    PUSH ESI                            ; 00524168
    CALL FUN_005c04e0                   ; 00524169
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0052416e
    TEST EAX,EAX                        ; 00524171
    JZ 0x00524190                       ; 00524173
        ;   XREF to: 00524190 (CONDITIONAL_JUMP)  ; LAB_00524190
    INC EBX                             ; 00524175
    MOV ECX,dword ptr [EDI]             ; 00524176
    ADD ESI,0x1e                        ; 00524178
    CMP EBX,ECX                         ; 0052417b
    JL 0x00524167                       ; 0052417d
        ;   XREF to: 00524167 (CONDITIONAL_JUMP)  ; LAB_00524167
    CMP dword ptr [ESP + 0x1c],0x0      ; 0052417f
        ;   Label: LAB_0052417f
    JNZ 0x00524197                      ; 00524184
        ;   XREF to: 00524197 (CONDITIONAL_JUMP)  ; LAB_00524197
    MOV EAX,0xffffffff                  ; 00524186
    POP EBP                             ; 0052418b
    POP EDI                             ; 0052418c
    POP ESI                             ; 0052418d
    POP EBX                             ; 0052418e
    RET                                 ; 0052418f
    MOV EAX,EBX                         ; 00524190
        ;   Label: LAB_00524190
    POP EBP                             ; 00524192
    POP EDI                             ; 00524193
    POP ESI                             ; 00524194
    POP EBX                             ; 00524195
    RET                                 ; 00524196
    PUSH EBP                            ; 00524197
        ;   Label: LAB_00524197
    MOV ESI,0x5ead89                    ; 00524198 | = "..\\core\\motion.cpp"
    MOV EDI,0x152                       ; 0052419d
    PUSH 0x5ead9c                       ; 005241a2 | = "Can't find state \"%s\" in motion list"
    MOV dword ptr [0x01d1d400],ESI      ; 005241a7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005241ad | DAT_01d1d404
    CALL FUN_005030e0                   ; 005241b3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 005241b8
    MOV EAX,0xffffffff                  ; 005241bb
    POP EBP                             ; 005241c0
    POP EDI                             ; 005241c1
    POP ESI                             ; 005241c2
    POP EBX                             ; 005241c3
    RET                                 ; 005241c4

