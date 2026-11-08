; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552920(int param_1,undefined4 *param_2)
;
;
; XREF[4]:
;   FUN_004ed260 at 004edc1e
;   FUN_00552980 at 005529a2
;   FUN_00553680 at 00553742
;   FUN_00553980 at 005539c1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e9006
;   TerminatedCString s_getSoundDeviceInfo_inval_005e901b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00552890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552920
        ;   Label: FUN_00552920
    PUSH ESI                            ; 00552921
    PUSH EDI                            ; 00552922
    MOV EBX,dword ptr [ESP + 0x10]      ; 00552923
    CALL FUN_00552890                   ; 00552927
        ;   XREF to: 00552890 (UNCONDITIONAL_CALL)  ; undefined FUN_00552890()
    TEST EBX,EBX                        ; 0055292c
    JL 0x00552958                       ; 0055292e
        ;   XREF to: 00552958 (CONDITIONAL_JUMP)  ; LAB_00552958
    CMP EBX,EAX                         ; 00552930
    JGE 0x00552958                      ; 00552932
        ;   XREF to: 00552958 (CONDITIONAL_JUMP)  ; LAB_00552958
    LEA EAX,[EBX*0x8 + 0x0]             ; 00552934
        ;   Label: LAB_00552934
    ADD EAX,EBX                         ; 0055293b
    SHL EAX,0x2                         ; 0055293d
    SUB EAX,EBX                         ; 00552940
    MOV ECX,0x46                        ; 00552942
    MOV EDI,dword ptr [ESP + 0x14]      ; 00552947
    LEA ESI,[EAX*0x8 + 0x26485c0]       ; 0055294b
    MOVSD.REP ES:EDI,ESI                ; 00552952
    POP EDI                             ; 00552954
    POP ESI                             ; 00552955
    POP EBX                             ; 00552956
    RET                                 ; 00552957
    MOV EDX,0x5e9006                    ; 00552958 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00552958
    MOV ECX,0x1519                      ; 0055295d
    PUSH 0x5e901b                       ; 00552962 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x01d046a0],EDX      ; 00552967 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0055296d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00552973
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00552978
    JMP 0x00552934                      ; 0055297b
        ;   XREF to: 00552934 (UNCONDITIONAL_JUMP)  ; LAB_00552934

