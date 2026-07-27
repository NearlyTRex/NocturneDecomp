; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00526150(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d330
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005933f1
;   TerminatedCString s_setNextSfxUserData_inval_00593406
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_02dc1b74
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526150
        ;   Label: sound_sndmain.cpp_FUN_00526150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00526151
    TEST EBX,EBX                        ; 00526155
    JL 0x00526184                       ; 00526157
        ;   XREF to: 00526184 (CONDITIONAL_JUMP)  ; LAB_00526184
    CMP EBX,0x2                         ; 00526159
    JGE 0x00526184                      ; 0052615c
        ;   XREF to: 00526184 (CONDITIONAL_JUMP)  ; LAB_00526184
    MOV EDX,dword ptr [0x02dc1b74]      ; 0052615e | DAT_02dc1b74
        ;   Label: LAB_0052615e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526164
    SUB EAX,EDX                         ; 0052616b
    SHL EAX,0x2                         ; 0052616d
    MOV EDX,EAX                         ; 00526170
    SHL EAX,0x3                         ; 00526172
    ADD EAX,EDX                         ; 00526175
    MOV EDX,dword ptr [ESP + 0xc]       ; 00526177
    MOV dword ptr [EAX + EBX*0x4 + 0x2dc1bcc],EDX ; 0052617b
    POP EBX                             ; 00526182
    RET                                 ; 00526183
    PUSH EBX                            ; 00526184
        ;   Label: LAB_00526184
    MOV EDX,0x5933f1                    ; 00526185 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xcc7                       ; 0052618a
    PUSH 0x593406                       ; 0052618f | = "setNextSfxUserData - invalid user dat..."
    MOV dword ptr [0x01cc4800],EDX      ; 00526194 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0052619a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005261a0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 005261a5
    JMP 0x0052615e                      ; 005261a8
        ;   XREF to: 0052615e (UNCONDITIONAL_JUMP)  ; LAB_0052615e

