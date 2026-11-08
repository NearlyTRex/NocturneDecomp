; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0044de40(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   FUN_0044ef30 at 0044f01f
;   FUN_004ce580 at 004ce7ca
;   FUN_004d9260 at 004d99ae
;   FUN_0057b780 at 0057bc52
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044de40
        ;   Label: FUN_0044de40
    PUSH EDI                            ; 0044de41
    PUSH EBP                            ; 0044de42
    SUB ESP,0x1c                        ; 0044de43
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044de46
    MOV dword ptr [ESP + 0x18],ESI      ; 0044de4a
    MOV ESI,dword ptr [ESP + 0x30]      ; 0044de4e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044de52
    MOV dword ptr [ESP + 0x8],EAX       ; 0044de55
    MOV EAX,dword ptr [ESI]             ; 0044de59
    MOV EDX,dword ptr [EBP + 0x1c8]     ; 0044de5b
    MOV EBX,dword ptr [EBP + 0x1c0]     ; 0044de61
    SUB EAX,EDX                         ; 0044de67
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044de69
    LEA EDI,[EBP + 0x19c]               ; 0044de6d
    IMUL EDX                            ; 0044de73
    IDIV EBX                            ; 0044de75
    MOV dword ptr [ESP],EAX             ; 0044de77
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044de7a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044de7e
    MOV ECX,dword ptr [EBP + 0x1cc]     ; 0044de81
    MOV EBX,dword ptr [EBP + 0x1c4]     ; 0044de87
    SUB EAX,ECX                         ; 0044de8d
    MOV ESI,ESP                         ; 0044de8f
    IMUL EDX                            ; 0044de91
    IDIV EBX                            ; 0044de93
    MOV dword ptr [ESP + 0x4],EAX       ; 0044de95
    MOV EAX,dword ptr [ESI]             ; 0044de99
    IMUL dword ptr [EDI]                ; 0044de9b
    MOV EBX,EAX                         ; 0044de9d
    MOV ECX,EDX                         ; 0044de9f
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dea1
    IMUL dword ptr [EDI + 0xc]          ; 0044dea4
    ADD EBX,EAX                         ; 0044dea7
    ADC ECX,EDX                         ; 0044dea9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044deab
    IMUL dword ptr [EDI + 0x18]         ; 0044deae
    ADD EAX,EBX                         ; 0044deb1
    ADC EDX,ECX                         ; 0044deb3
    SHRD EAX,EDX,0x10                   ; 0044deb5
    MOV EBX,dword ptr [EBP + 0x16c]     ; 0044deb9
    MOV ESI,ESP                         ; 0044debf
    ADD EBX,EAX                         ; 0044dec1
    LEA EDI,[EBP + 0x1a0]               ; 0044dec3
    MOV dword ptr [ESP + 0xc],EBX       ; 0044dec9
    MOV EAX,dword ptr [ESI]             ; 0044decd
    IMUL dword ptr [EDI]                ; 0044decf
    MOV EBX,EAX                         ; 0044ded1
    MOV ECX,EDX                         ; 0044ded3
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044ded5
    IMUL dword ptr [EDI + 0xc]          ; 0044ded8
    ADD EBX,EAX                         ; 0044dedb
    ADC ECX,EDX                         ; 0044dedd
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dedf
    IMUL dword ptr [EDI + 0x18]         ; 0044dee2
    ADD EAX,EBX                         ; 0044dee5
    ADC EDX,ECX                         ; 0044dee7
    SHRD EAX,EDX,0x10                   ; 0044dee9
    MOV EBX,dword ptr [EBP + 0x170]     ; 0044deed
    MOV ESI,ESP                         ; 0044def3
    ADD EBX,EAX                         ; 0044def5
    LEA EDI,[EBP + 0x1a4]               ; 0044def7
    MOV dword ptr [ESP + 0x10],EBX      ; 0044defd
    MOV EAX,dword ptr [ESI]             ; 0044df01
    IMUL dword ptr [EDI]                ; 0044df03
    MOV EBX,EAX                         ; 0044df05
    MOV ECX,EDX                         ; 0044df07
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044df09
    IMUL dword ptr [EDI + 0xc]          ; 0044df0c
    ADD EBX,EAX                         ; 0044df0f
    ADC ECX,EDX                         ; 0044df11
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044df13
    IMUL dword ptr [EDI + 0x18]         ; 0044df16
    ADD EAX,EBX                         ; 0044df19
    ADC EDX,ECX                         ; 0044df1b
    SHRD EAX,EDX,0x10                   ; 0044df1d
    MOV EBX,dword ptr [EBP + 0x174]     ; 0044df21
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044df27
    ADD EBX,EAX                         ; 0044df2b
    LEA ESI,[ESP + 0xc]                 ; 0044df2d
    MOV dword ptr [ESP + 0x14],EBX      ; 0044df31
    MOVSD ES:EDI,ESI                    ; 0044df35
    MOVSD ES:EDI,ESI                    ; 0044df36
    MOVSD ES:EDI,ESI                    ; 0044df37
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044df38
    ADD ESP,0x1c                        ; 0044df3c
    POP EBP                             ; 0044df3f
    POP EDI                             ; 0044df40
    POP EBX                             ; 0044df41
    RET                                 ; 0044df42

