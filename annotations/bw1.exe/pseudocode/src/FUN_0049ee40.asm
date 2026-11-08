; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ee40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ee40
        ;   Label: FUN_0049ee40
    PUSH ESI                            ; 0049ee41
    PUSH EDI                            ; 0049ee42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049ee43
    PUSH EBX                            ; 0049ee47
    CALL FUN_004085c0                   ; 0049ee48
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0049ee4d
    ADD EAX,0x248                       ; 0049ee50
    PUSH EAX                            ; 0049ee55
    CALL FUN_00468860                   ; 0049ee56
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    LEA EBX,[EAX + 0xfffffdb8]          ; 0049ee5b
    MOV dword ptr [EBX + 0x154],0x5ffa34 ; 0049ee61
    MOV dword ptr [EBX + 0x15c],0x3f800000 ; 0049ee6b
    MOV ESI,0x5dc930                    ; 0049ee75
    MOV dword ptr [EBX + 0x160],0x3f800000 ; 0049ee7a
    ADD ESP,0x4                         ; 0049ee84
    MOV dword ptr [EBX + 0x164],0x3f800000 ; 0049ee87
    LEA EDI,[EBX + 0x16c]               ; 0049ee91
    MOV dword ptr [EBX + 0x158],0x0     ; 0049ee97
    PUSH EDI                            ; 0049eea1
    MOV AL,byte ptr [ESI]               ; 0049eea2
        ;   Label: LAB_0049eea2
    MOV byte ptr [EDI],AL               ; 0049eea4
    CMP AL,0x0                          ; 0049eea6
    JZ 0x0049eeba                       ; 0049eea8
        ;   XREF to: 0049eeba (CONDITIONAL_JUMP)  ; LAB_0049eeba
    MOV AL,byte ptr [ESI + 0x1]         ; 0049eeaa
    ADD ESI,0x2                         ; 0049eead
    MOV byte ptr [EDI + 0x1],AL         ; 0049eeb0
    ADD EDI,0x2                         ; 0049eeb3
    CMP AL,0x0                          ; 0049eeb6
    JNZ 0x0049eea2                      ; 0049eeb8
        ;   XREF to: 0049eea2 (CONDITIONAL_JUMP)  ; LAB_0049eea2
    POP EDI                             ; 0049eeba
        ;   Label: LAB_0049eeba
    MOV ESI,0x5dc935                    ; 0049eebb
    LEA EDI,[EBX + 0x1d0]               ; 0049eec0
    PUSH EDI                            ; 0049eec6
    MOV AL,byte ptr [ESI]               ; 0049eec7
        ;   Label: LAB_0049eec7
    MOV byte ptr [EDI],AL               ; 0049eec9
    CMP AL,0x0                          ; 0049eecb
    JZ 0x0049eedf                       ; 0049eecd
        ;   XREF to: 0049eedf (CONDITIONAL_JUMP)  ; LAB_0049eedf
    MOV AL,byte ptr [ESI + 0x1]         ; 0049eecf
    ADD ESI,0x2                         ; 0049eed2
    MOV byte ptr [EDI + 0x1],AL         ; 0049eed5
    ADD EDI,0x2                         ; 0049eed8
    CMP AL,0x0                          ; 0049eedb
    JNZ 0x0049eec7                      ; 0049eedd
        ;   XREF to: 0049eec7 (CONDITIONAL_JUMP)  ; LAB_0049eec7
    POP EDI                             ; 0049eedf
        ;   Label: LAB_0049eedf
    MOV dword ptr [EBX + 0x464],0x0     ; 0049eee0
    MOV dword ptr [EBX + 0x468],0x3dcccccd ; 0049eeea
    MOV dword ptr [EBX + 0x168],0x1     ; 0049eef4
    MOV dword ptr [EBX + 0x23c],0xff    ; 0049eefe
    MOV dword ptr [EBX + 0x240],0x0     ; 0049ef08
    MOV dword ptr [EBX + 0x244],0x0     ; 0049ef12
    PUSH 0x5dc93a                       ; 0049ef1c
    MOV dword ptr [EBX + 0x238],0x1     ; 0049ef21
    LEA EAX,[EBX + 0x248]               ; 0049ef2b
    MOV dword ptr [EBX + 0x234],0x0     ; 0049ef31
    PUSH EAX                            ; 0049ef3b
    MOV dword ptr [EBX + 0x46c],0x0     ; 0049ef3c
    CALL FUN_00468950                   ; 0049ef46
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x3c4],0x41a00000 ; 0049ef4b
    MOV dword ptr [EBX + 0x3c8],0x42c80000 ; 0049ef55
    MOV dword ptr [EBX + 0x3cc],0x3f800000 ; 0049ef5f
    MOV dword ptr [EBX + 0x3d0],0x0     ; 0049ef69
    MOV dword ptr [EBX + 0x3d4],0x4000  ; 0049ef73
    MOV dword ptr [EBX + 0x3d8],0x10000 ; 0049ef7d
    MOV dword ptr [EBX + 0x3dc],0xffff  ; 0049ef87
    MOV dword ptr [EBX + 0x3e0],0x3ecccccd ; 0049ef91
    MOV dword ptr [EBX + 0x3f4],0x42480000 ; 0049ef9b
    MOV dword ptr [EBX + 0x3e4],0x0     ; 0049efa5
    MOV dword ptr [EBX + 0x3e8],0x0     ; 0049efaf
    MOV dword ptr [EBX + 0x3ec],0x1     ; 0049efb9
    MOV dword ptr [EBX + 0x3f0],0x0     ; 0049efc3
    MOV byte ptr [EBX + 0x3f8],0x0      ; 0049efcd
    MOV dword ptr [EBX + 0x460],0x1     ; 0049efd4
    MOV dword ptr [EBX + 0x4b0],0x0     ; 0049efde
    ADD ESP,0x8                         ; 0049efe8
    MOV dword ptr [EBX + 0x4b8],0x0     ; 0049efeb
    MOV EAX,EBX                         ; 0049eff5
    MOV dword ptr [EBX + 0x4bc],0x3f800000 ; 0049eff7
    POP EDI                             ; 0049f001
    POP ESI                             ; 0049f002
    POP EBX                             ; 0049f003
    RET                                 ; 0049f004

