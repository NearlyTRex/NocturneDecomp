; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555e30(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0055f020 at 0055f230
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d367d
;   TerminatedCString s_setNextSfxUserData_inval_005d3692
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ceb91c
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555e30
        ;   Label: FUN_00555e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00555e31
    TEST EBX,EBX                        ; 00555e35
    JL 0x00555e5d                       ; 00555e37
        ;   XREF to: 00555e5d (CONDITIONAL_JUMP)  ; LAB_00555e5d
    CMP EBX,0x2                         ; 00555e39
    JGE 0x00555e5d                      ; 00555e3c
        ;   XREF to: 00555e5d (CONDITIONAL_JUMP)  ; LAB_00555e5d
    MOV EDX,dword ptr [0x02ceb91c]      ; 00555e3e | DAT_02ceb91c
        ;   Label: LAB_00555e3e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555e44
    SUB EAX,EDX                         ; 00555e4b
    SHL EAX,0x5                         ; 00555e4d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00555e50
    MOV dword ptr [EAX + EBX*0x4 + 0x2ceb964],EDX ; 00555e54
    POP EBX                             ; 00555e5b
    RET                                 ; 00555e5c
    PUSH EBX                            ; 00555e5d
        ;   Label: LAB_00555e5d
    MOV EDX,0x5d367d                    ; 00555e5e | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe6e                       ; 00555e63
    PUSH 0x5d3692                       ; 00555e68 | = "setNextSfxUserData - invalid user dat..."
    MOV dword ptr [0x01d71de0],EDX      ; 00555e6d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00555e73 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00555e79
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 00555e7e
    JMP 0x00555e3e                      ; 00555e81
        ;   XREF to: 00555e3e (UNCONDITIONAL_JUMP)  ; LAB_00555e3e

