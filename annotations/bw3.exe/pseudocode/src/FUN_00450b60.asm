; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450b60(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00450020 at 00450267
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;
; Called Functions:
;   FUN_00472a26
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450b60
        ;   Label: FUN_00450b60
    PUSH ESI                            ; 00450b61
    PUSH EDI                            ; 00450b62
    PUSH EBP                            ; 00450b63
    SUB ESP,0x4                         ; 00450b64
    MOV EBX,dword ptr [ESP + 0x18]      ; 00450b67
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00450b6b
    MOV EDX,dword ptr [ESP + 0x20]      ; 00450b6f
    LEA EAX,[ECX + ECX*0x1]             ; 00450b73
    MOV ESI,dword ptr [EDX*0x4 + 0x1c5faec] ; 00450b76 | DAT_01c5faec
    LEA EBP,[ESI + EAX*0x1]             ; 00450b7d
    MOV EAX,dword ptr [EBX + 0x144]     ; 00450b80
    IMUL EAX,EDX                        ; 00450b86
    LEA ESI,[EAX*0x4 + 0x0]             ; 00450b89
    MOV EAX,dword ptr [EBX + 0x158]     ; 00450b90
    ADD EAX,ESI                         ; 00450b96
    LEA ESI,[ECX*0x4 + 0x0]             ; 00450b98
    LEA EDI,[EAX + ESI*0x1]             ; 00450b9f
    MOV EAX,EDX                         ; 00450ba2
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00450ba4
    SAR EDX,0x1f                        ; 00450baa
    IDIV ESI                            ; 00450bad
    LEA ESI,[EAX*0x4 + 0x0]             ; 00450baf
    ADD ESI,EAX                         ; 00450bb6
    MOV EAX,0xb3fd08                    ; 00450bb8
    SHL ESI,0x6                         ; 00450bbd
    MOV EDX,ECX                         ; 00450bc0
    ADD EAX,ESI                         ; 00450bc2
    SAR EDX,0x1f                        ; 00450bc4
    MOV dword ptr [ESP],EAX             ; 00450bc7
    MOV EAX,ECX                         ; 00450bca
    IDIV dword ptr [EBX + 0x14c]        ; 00450bcc
    ADD ESI,0x135ead0                   ; 00450bd2
    MOV EDX,dword ptr [ESP]             ; 00450bd8
    MOV EBX,dword ptr [ESP + 0x24]      ; 00450bdb
    ADD EDX,EAX                         ; 00450bdf
    ADD EAX,ESI                         ; 00450be1
    ADD EAX,EBX                         ; 00450be3
    PUSH EAX                            ; 00450be5
    ADD EDX,EBX                         ; 00450be6
    PUSH EDX                            ; 00450be8
    PUSH EDI                            ; 00450be9
    PUSH EBP                            ; 00450bea
    CALL FUN_00472a26                   ; 00450beb
        ;   XREF to: 00472a26 (UNCONDITIONAL_CALL)  ; undefined FUN_00472a26()
    ADD ESP,0x10                        ; 00450bf0
    ADD ESP,0x4                         ; 00450bf3
    POP EBP                             ; 00450bf6
    POP EDI                             ; 00450bf7
    POP ESI                             ; 00450bf8
    POP EBX                             ; 00450bf9
    RET                                 ; 00450bfa

