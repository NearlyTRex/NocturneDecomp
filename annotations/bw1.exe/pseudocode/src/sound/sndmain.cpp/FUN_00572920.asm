; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00572920(int index,void *userdata)
;
; Parameters:
; int              Stack[0x4]:4   index
; void *           Stack[0x8]:4   userdata
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c100
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3d93
;   TerminatedCString s_setNextSfxUserData_inval_005f3da8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c78cec
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572920
        ;   Label: sound_sndmain.cpp_FUN_00572920
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572921
    TEST EBX,EBX                        ; 00572925
    JL 0x0057294d                       ; 00572927
        ;   XREF to: 0057294d (CONDITIONAL_JUMP)  ; LAB_0057294d
    CMP EBX,0x2                         ; 00572929
    JGE 0x0057294d                      ; 0057292c
        ;   XREF to: 0057294d (CONDITIONAL_JUMP)  ; LAB_0057294d
    MOV EDX,dword ptr [0x02c78cec]      ; 0057292e | DAT_02c78cec
        ;   Label: LAB_0057292e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00572934
    SUB EAX,EDX                         ; 0057293b
    SHL EAX,0x5                         ; 0057293d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00572940
    MOV dword ptr [EAX + EBX*0x4 + 0x2c78d34],EDX ; 00572944
    POP EBX                             ; 0057294b
    RET                                 ; 0057294c
    PUSH EBX                            ; 0057294d
        ;   Label: LAB_0057294d
    MOV EDX,0x5f3d93                    ; 0057294e | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe6b                       ; 00572953
    PUSH 0x5f3da8                       ; 00572958 | = "setNextSfxUserData - invalid user dat..."
    MOV dword ptr [0x01d1d400],EDX      ; 0057295d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00572963 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00572969
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057296e
    JMP 0x0057292e                      ; 00572971
        ;   XREF to: 0057292e (UNCONDITIONAL_JUMP)  ; LAB_0057292e

