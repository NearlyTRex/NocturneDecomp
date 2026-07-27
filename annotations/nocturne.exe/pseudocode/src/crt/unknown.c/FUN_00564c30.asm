; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00564c30(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_0042eb90 at 0042ed8f
;
; Referenced Globals:
;   undefined4 DAT_005c18ae
;
; Called Functions:
;   FUN_0056ae10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00564c30
        ;   Label: crt_unknown.c_FUN_00564c30
    LEA EAX,[ESP + 0xc]                 ; 00564c33
    MOV dword ptr [ESP],EAX             ; 00564c37
    MOV EAX,ESP                         ; 00564c3a
    PUSH EAX                            ; 00564c3c
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564c3d
    PUSH EDX                            ; 00564c41
    PUSH 0x5c18ae                       ; 00564c42 | DAT_005c18ae
    CALL FUN_0056ae10                   ; 00564c47
        ;   XREF to: 0056ae10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ae10()
    ADD ESP,0xc                         ; 00564c4c
    ADD ESP,0x4                         ; 00564c4f
    RET                                 ; 00564c52

