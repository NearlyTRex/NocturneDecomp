; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ed30(int param_1)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   FUN_0053f310 at 0053f8cf
;
; Referenced Globals:
;   string s_fuse.wav_0057e4e2
;   undefined4 DAT_0059c91c
;
; Called Functions:
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ed30
        ;   Label: FUN_0046ed30
    SUB ESP,0x64                        ; 0046ed31
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0046ed34
    PUSH 0x57e4e2                       ; 0046ed38 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0046ed3d
    FLD float ptr [0x0059c91c]          ; 0046ed41 | DAT_0059c91c
    PUSH EAX                            ; 0046ed47
    FSTP float ptr [EBX + 0x570]        ; 0046ed48
    CALL FUN_00563c90                   ; 0046ed4e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x8                         ; 0046ed53
    MOV EAX,ESP                         ; 0046ed56
    PUSH EAX                            ; 0046ed58
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0046ed59
    PUSH EBX                            ; 0046ed5f
    CALL dword ptr [EDX + 0x24]         ; 0046ed60
    ADD ESP,0x8                         ; 0046ed63
    MOV dword ptr [EBX + 0x580],EAX     ; 0046ed66
    ADD ESP,0x64                        ; 0046ed6c
    POP EBX                             ; 0046ed6f
    RET                                 ; 0046ed70

