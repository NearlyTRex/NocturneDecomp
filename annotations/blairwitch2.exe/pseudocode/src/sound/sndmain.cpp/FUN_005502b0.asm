; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005502b0(int index,void *userdata)
;
; Parameters:
; int              Stack[0x4]:4   index
; void *           Stack[0x8]:4   userdata
;
; XREF[1]:
;   core_sound.cpp_FUN_005594c0 at 005596d0
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8b99
;   TerminatedCString s_setNextSfxUserData_inval_005e8bae
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0264161c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005502b0
        ;   Label: sound_sndmain.cpp_FUN_005502b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005502b1
    TEST EBX,EBX                        ; 005502b5
    JL 0x005502dd                       ; 005502b7
        ;   XREF to: 005502dd (CONDITIONAL_JUMP)  ; LAB_005502dd
    CMP EBX,0x2                         ; 005502b9
    JGE 0x005502dd                      ; 005502bc
        ;   XREF to: 005502dd (CONDITIONAL_JUMP)  ; LAB_005502dd
    MOV EDX,dword ptr [0x0264161c]      ; 005502be | DAT_0264161c
        ;   Label: LAB_005502be
    LEA EAX,[EDX*0x4 + 0x0]             ; 005502c4
    SUB EAX,EDX                         ; 005502cb
    SHL EAX,0x5                         ; 005502cd
    MOV EDX,dword ptr [ESP + 0xc]       ; 005502d0
    MOV dword ptr [EAX + EBX*0x4 + 0x2641664],EDX ; 005502d4
    POP EBX                             ; 005502db
    RET                                 ; 005502dc
    PUSH EBX                            ; 005502dd
        ;   Label: LAB_005502dd
    MOV EDX,0x5e8b99                    ; 005502de | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xe6b                       ; 005502e3
    PUSH 0x5e8bae                       ; 005502e8 | = "setNextSfxUserData - invalid user dat..."
    MOV dword ptr [0x01d046a0],EDX      ; 005502ed | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005502f3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005502f9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005502fe
    JMP 0x005502be                      ; 00550301
        ;   XREF to: 005502be (UNCONDITIONAL_JUMP)  ; LAB_005502be

