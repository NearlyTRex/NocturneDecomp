; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443020(int param_1,int *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0043d870 at 0043d99e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443020
        ;   Label: FUN_00443020
    PUSH EDI                            ; 00443021
    PUSH EBP                            ; 00443022
    SUB ESP,0x20                        ; 00443023
    MOV EDI,dword ptr [ESP + 0x30]      ; 00443026
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044302a
    MOV EBP,ESI                         ; 0044302e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00443030
    MOV EDX,dword ptr [EDI + 0x1c8]     ; 00443033
    MOV dword ptr [ESP + 0x8],EAX       ; 00443039
    MOV EAX,dword ptr [ECX]             ; 0044303d
    MOV EBX,dword ptr [EDI + 0x1c0]     ; 0044303f
    SUB EAX,EDX                         ; 00443045
    MOV EDX,dword ptr [ESP + 0x8]       ; 00443047
    IMUL EDX                            ; 0044304b
    IDIV EBX                            ; 0044304d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044304f
    MOV ESI,EAX                         ; 00443053
    MOV dword ptr [ESP],EAX             ; 00443055
    MOV EAX,dword ptr [ECX + 0x4]       ; 00443058
    MOV ECX,dword ptr [EDI + 0x1cc]     ; 0044305b
    MOV EBX,dword ptr [EDI + 0x1c4]     ; 00443061
    SUB EAX,ECX                         ; 00443067
    MOV ECX,dword ptr [ESP + 0x38]      ; 00443069
    IMUL EDX                            ; 0044306d
    IDIV EBX                            ; 0044306f
    SHL ECX,0x2                         ; 00443071
    MOV EBX,EAX                         ; 00443074
    ADD ECX,EDI                         ; 00443076
    MOV dword ptr [ESP + 0x4],EAX       ; 00443078
    MOV EDX,ESI                         ; 0044307c
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044307e
    IMUL EDX                            ; 00443084
    SHRD EAX,EDX,0x10                   ; 00443086
    MOV dword ptr [ESP + 0x18],EAX      ; 0044308a
    MOV EDX,EBX                         ; 0044308e
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 00443090
    IMUL EDX                            ; 00443096
    SHRD EAX,EDX,0x10                   ; 00443098
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044309c
    ADD EDX,EAX                         ; 004430a0
    MOV dword ptr [ESP + 0x18],EDX      ; 004430a2
    MOV EAX,dword ptr [ECX + 0x142c]    ; 004430a6
    MOV EDX,dword ptr [ESP + 0x8]       ; 004430ac
    IMUL EDX                            ; 004430b0
    SHRD EAX,EDX,0x10                   ; 004430b2
    MOV EDX,dword ptr [ESP + 0x18]      ; 004430b6
    ADD EDX,EAX                         ; 004430ba
    MOV EAX,dword ptr [ESP + 0x38]      ; 004430bc
    MOV dword ptr [ESP + 0x18],EAX      ; 004430c0
    MOV dword ptr [ESP + 0x1c],EDX      ; 004430c4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004430c8
    SHL EAX,0x2                         ; 004430cc
    SUB EAX,EDX                         ; 004430cf
    SHL EAX,0x2                         ; 004430d1
    ADD EDI,EAX                         ; 004430d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004430d6
    MOV EDX,dword ptr [EDI + 0x11ec]    ; 004430da
    ADD EAX,EDX                         ; 004430e0
    MOV dword ptr [ESP + 0xc],EAX       ; 004430e2
    MOV EDX,ESI                         ; 004430e6
    MOV EAX,dword ptr [ECX + 0x138c]    ; 004430e8
    IMUL EDX                            ; 004430ee
    SHRD EAX,EDX,0x10                   ; 004430f0
    MOV dword ptr [ESP + 0x18],EAX      ; 004430f4
    MOV EDX,EBX                         ; 004430f8
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 004430fa
    IMUL EDX                            ; 00443100
    SHRD EAX,EDX,0x10                   ; 00443102
    MOV EDX,dword ptr [ESP + 0x18]      ; 00443106
    ADD EDX,EAX                         ; 0044310a
    MOV dword ptr [ESP + 0x18],EDX      ; 0044310c
    MOV EAX,dword ptr [ECX + 0x144c]    ; 00443110
    MOV EDX,dword ptr [ESP + 0x8]       ; 00443116
    IMUL EDX                            ; 0044311a
    SHRD EAX,EDX,0x10                   ; 0044311c
    ADD EAX,dword ptr [ESP + 0x18]      ; 00443120
    MOV EDX,dword ptr [EDI + 0x11f0]    ; 00443124
    ADD EDX,EAX                         ; 0044312a
    MOV dword ptr [ESP + 0x10],EDX      ; 0044312c
    MOV EDX,ESI                         ; 00443130
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 00443132
    IMUL EDX                            ; 00443138
    SHRD EAX,EDX,0x10                   ; 0044313a
    MOV ESI,EAX                         ; 0044313e
    MOV EDX,EBX                         ; 00443140
    MOV EAX,dword ptr [ECX + 0x140c]    ; 00443142
    IMUL EDX                            ; 00443148
    SHRD EAX,EDX,0x10                   ; 0044314a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044314e
    ADD ESI,EAX                         ; 00443152
    MOV EAX,dword ptr [ECX + 0x146c]    ; 00443154
    IMUL EDX                            ; 0044315a
    SHRD EAX,EDX,0x10                   ; 0044315c
    MOV EDX,dword ptr [EDI + 0x11f4]    ; 00443160
    ADD EAX,ESI                         ; 00443166
    LEA ESI,[ESP + 0xc]                 ; 00443168
    ADD EDX,EAX                         ; 0044316c
    MOV EDI,EBP                         ; 0044316e
    MOV dword ptr [ESP + 0x14],EDX      ; 00443170
    MOVSD ES:EDI,ESI                    ; 00443174
    MOVSD ES:EDI,ESI                    ; 00443175
    MOVSD ES:EDI,ESI                    ; 00443176
    MOV EAX,EBP                         ; 00443177
    ADD ESP,0x20                        ; 00443179
    POP EBP                             ; 0044317c
    POP EDI                             ; 0044317d
    POP EBX                             ; 0044317e
    RET                                 ; 0044317f

