; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(int param_1,int param_2)
;
;
; XREF[2]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0 at 0052bf24
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230 at 0052829a
;
; Referenced Globals:
;   string s_DirectSound:_%s_00594849
;   undefined4 DAT_005bed40
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   Ordinal_2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052be40
        ;   Label: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
    PUSH ESI                            ; 0052be41
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052be42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0052be46
    CMP dword ptr [0x005bed40],0x0      ; 0052be4a | DAT_005bed40
    JL 0x0052be64                       ; 0052be51
        ;   XREF to: 0052be64 (CONDITIONAL_JUMP)  ; LAB_0052be64
    TEST ESI,ESI                        ; 0052be53
        ;   Label: LAB_0052be53
    JL 0x0052be5f                       ; 0052be55
        ;   XREF to: 0052be5f (CONDITIONAL_JUMP)  ; LAB_0052be5f
    CMP ESI,dword ptr [0x005bed40]      ; 0052be57 | DAT_005bed40
    JL 0x0052be79                       ; 0052be5d
        ;   XREF to: 0052be79 (CONDITIONAL_JUMP)  ; LAB_0052be79
    XOR EAX,EAX                         ; 0052be5f
        ;   Label: LAB_0052be5f
    POP ESI                             ; 0052be61
    POP EBX                             ; 0052be62
    RET                                 ; 0052be63
    XOR ECX,ECX                         ; 0052be64
        ;   Label: LAB_0052be64
    PUSH ECX                            ; 0052be66
    PUSH 0x52bbd0                       ; 0052be67 | LAB_0052bbd0
    MOV dword ptr [0x005bed40],ECX      ; 0052be6c | DAT_005bed40
    CALL Ordinal_2                      ; 0052be72
        ;   XREF to: 00574c0e (UNCONDITIONAL_CALL)  ; undefined Ordinal_2()
    JMP 0x0052be53                      ; 0052be77
        ;   XREF to: 0052be53 (UNCONDITIONAL_JUMP)  ; LAB_0052be53
    MOV dword ptr [EBX + 0x104],ESI     ; 0052be79
        ;   Label: LAB_0052be79
    LEA EAX,[ESI*0x8 + 0x0]             ; 0052be7f
    ADD EAX,ESI                         ; 0052be86
    SHL EAX,0x3                         ; 0052be88
    SUB EAX,ESI                         ; 0052be8b
    SHL EAX,0x2                         ; 0052be8d
    MOV dword ptr [EBX + 0x100],0x1     ; 0052be90
    MOV EDX,dword ptr [EAX + 0x2dc85dc] ; 0052be9a
    MOV dword ptr [EBX + 0x10c],0x0     ; 0052bea0
    MOV dword ptr [EBX + 0x108],EDX     ; 0052beaa
    MOV EDX,dword ptr [EAX + 0x2dc85d8] ; 0052beb0
    MOV dword ptr [EBX + 0x114],EDX     ; 0052beb6
    MOV EDX,dword ptr [EAX + 0x2dc84c4] ; 0052bebc
    ADD EAX,0x2dc84c4                   ; 0052bec2
    ADD EAX,0x14                        ; 0052bec7
    PUSH EAX                            ; 0052beca
    PUSH 0x594849                       ; 0052becb | = "DirectSound: %s"
    PUSH EBX                            ; 0052bed0
    MOV dword ptr [EBX + 0x110],EDX     ; 0052bed1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052bed7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x1                         ; 0052bedc
    ADD ESP,0xc                         ; 0052bee1
    POP ESI                             ; 0052bee4
    POP EBX                             ; 0052bee5
    RET                                 ; 0052bee6

