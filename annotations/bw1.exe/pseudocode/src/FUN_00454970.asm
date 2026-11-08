; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00454970(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00453ed0 at 0045427d
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;
; Called Functions:
;   FUN_00488680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454970
        ;   Label: FUN_00454970
    PUSH ESI                            ; 00454971
    PUSH EDI                            ; 00454972
    PUSH EBP                            ; 00454973
    SUB ESP,0x4                         ; 00454974
    MOV EBX,dword ptr [ESP + 0x18]      ; 00454977
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045497b
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045497f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00454983
    MOV ESI,dword ptr [EDX*0x4 + 0x1c4354c] ; 0045498a | DAT_01c4354c
    ADD ESI,EAX                         ; 00454991
    MOV dword ptr [ESP],ESI             ; 00454993
    MOV ESI,dword ptr [EBX + 0x144]     ; 00454996
    IMUL ESI,EDX                        ; 0045499c
    MOV EDI,dword ptr [EBX + 0x158]     ; 0045499f
    SHL ESI,0x2                         ; 004549a5
    ADD ESI,EDI                         ; 004549a8
    LEA EDI,[ESI + EAX*0x1]             ; 004549aa
    MOV EAX,EDX                         ; 004549ad
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004549af
    SAR EDX,0x1f                        ; 004549b5
    IDIV ESI                            ; 004549b8
    MOV EDX,ECX                         ; 004549ba
    LEA ESI,[EAX*0x4 + 0x0]             ; 004549bc
    SAR EDX,0x1f                        ; 004549c3
    ADD ESI,EAX                         ; 004549c6
    MOV EAX,ECX                         ; 004549c8
    IDIV dword ptr [EBX + 0x14c]        ; 004549ca
    MOV EBP,0xb23458                    ; 004549d0
    SHL ESI,0x6                         ; 004549d5
    ADD EBP,ESI                         ; 004549d8
    MOV EBX,dword ptr [ESP + 0x24]      ; 004549da
    ADD ESI,0x1342220                   ; 004549de
    LEA EDX,[EAX + EBP*0x1]             ; 004549e4
    ADD EAX,ESI                         ; 004549e7
    ADD EAX,EBX                         ; 004549e9
    PUSH EAX                            ; 004549eb
    ADD EDX,EBX                         ; 004549ec
    PUSH EDX                            ; 004549ee
    PUSH EDI                            ; 004549ef
    MOV EDI,dword ptr [ESP + 0xc]       ; 004549f0
    PUSH EDI                            ; 004549f4
    CALL FUN_00488680                   ; 004549f5
        ;   XREF to: 00488680 (UNCONDITIONAL_CALL)  ; undefined FUN_00488680()
    ADD ESP,0x10                        ; 004549fa
    ADD ESP,0x4                         ; 004549fd
    POP EBP                             ; 00454a00
    POP EDI                             ; 00454a01
    POP ESI                             ; 00454a02
    POP EBX                             ; 00454a03
    RET                                 ; 00454a04

