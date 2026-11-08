; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00575350(int param_1,undefined4 *param_2)
;
;
; XREF[4]:
;   FUN_0050ba70 at 0050c40d
;   FUN_005753b0 at 005753d2
;   FUN_005760b0 at 00576172
;   FUN_005763b0 at 005763f1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f4200
;   TerminatedCString s_getSoundDeviceInfo_inval_005f4215
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005752c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575350
        ;   Label: FUN_00575350
    PUSH ESI                            ; 00575351
    PUSH EDI                            ; 00575352
    MOV EBX,dword ptr [ESP + 0x10]      ; 00575353
    CALL FUN_005752c0                   ; 00575357
        ;   XREF to: 005752c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005752c0()
    TEST EBX,EBX                        ; 0057535c
    JL 0x00575388                       ; 0057535e
        ;   XREF to: 00575388 (CONDITIONAL_JUMP)  ; LAB_00575388
    CMP EBX,EAX                         ; 00575360
    JGE 0x00575388                      ; 00575362
        ;   XREF to: 00575388 (CONDITIONAL_JUMP)  ; LAB_00575388
    LEA EAX,[EBX*0x8 + 0x0]             ; 00575364
        ;   Label: LAB_00575364
    ADD EAX,EBX                         ; 0057536b
    SHL EAX,0x2                         ; 0057536d
    SUB EAX,EBX                         ; 00575370
    MOV ECX,0x46                        ; 00575372
    MOV EDI,dword ptr [ESP + 0x14]      ; 00575377
    LEA ESI,[EAX*0x8 + 0x2c7fd90]       ; 0057537b
    MOVSD.REP ES:EDI,ESI                ; 00575382
    POP EDI                             ; 00575384
    POP ESI                             ; 00575385
    POP EBX                             ; 00575386
    RET                                 ; 00575387
    MOV EDX,0x5f4200                    ; 00575388 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00575388
    MOV ECX,0x1510                      ; 0057538d
    PUSH 0x5f4215                       ; 00575392 | = "getSoundDeviceInfo - invalid index"
    MOV dword ptr [0x01d1d400],EDX      ; 00575397 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0057539d | DAT_01d1d404
    CALL FUN_005030e0                   ; 005753a3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005753a8
    JMP 0x00575364                      ; 005753ab
        ;   XREF to: 00575364 (UNCONDITIONAL_JUMP)  ; LAB_00575364

