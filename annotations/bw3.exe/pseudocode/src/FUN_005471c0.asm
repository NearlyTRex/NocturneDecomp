; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005471c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_0041ad40
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005471c0
        ;   Label: FUN_005471c0
    PUSH ESI                            ; 005471c1
    PUSH EDI                            ; 005471c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005471c3
    PUSH EBX                            ; 005471c7
    CALL FUN_00408600                   ; 005471c8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 005471cd
    ADD EAX,0x158                       ; 005471d0
    PUSH EAX                            ; 005471d5
    CALL FUN_00462500                   ; 005471d6
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 005471db
    ADD EAX,0x200                       ; 005471de
    PUSH EAX                            ; 005471e3
    CALL FUN_0041ad40                   ; 005471e4
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ad40()
    ADD ESP,0x4                         ; 005471e9
    LEA EBX,[EAX + 0xfffffca8]          ; 005471ec
    PUSH 0x5d157e                       ; 005471f2
    LEA EAX,[EBX + 0x158]               ; 005471f7
    PUSH EAX                            ; 005471fd
    MOV dword ptr [EBX + 0x154],0x5e4634 ; 005471fe
    CALL FUN_004625f0                   ; 00547208
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0054720d
    MOV ESI,0x5d158b                    ; 00547210
    LEA EDI,[EBX + 0x2dc]               ; 00547215
    PUSH EDI                            ; 0054721b
    MOV AL,byte ptr [ESI]               ; 0054721c
        ;   Label: LAB_0054721c
    MOV byte ptr [EDI],AL               ; 0054721e
    CMP AL,0x0                          ; 00547220
    JZ 0x00547234                       ; 00547222
        ;   XREF to: 00547234 (CONDITIONAL_JUMP)  ; LAB_00547234
    MOV AL,byte ptr [ESI + 0x1]         ; 00547224
    ADD ESI,0x2                         ; 00547227
    MOV byte ptr [EDI + 0x1],AL         ; 0054722a
    ADD EDI,0x2                         ; 0054722d
    CMP AL,0x0                          ; 00547230
    JNZ 0x0054721c                      ; 00547232
        ;   XREF to: 0054721c (CONDITIONAL_JUMP)  ; LAB_0054721c
    POP EDI                             ; 00547234
        ;   Label: LAB_00547234
    LEA EAX,[EBX + 0x340]               ; 00547235
    MOV dword ptr [EAX + 0x8],0x0       ; 0054723b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00547242
    MOV dword ptr [EAX + 0x4],EDX       ; 00547245
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547248
    MOV dword ptr [EAX],EDX             ; 0054724b
    LEA EAX,[EBX + 0x34c]               ; 0054724d
    MOV dword ptr [EAX + 0x8],0x0       ; 00547253
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054725a
    MOV dword ptr [EAX + 0x4],EDX       ; 0054725d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547260
    MOV dword ptr [EAX],EDX             ; 00547263
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00547265
    MOV EAX,EBX                         ; 0054726f
    MOV dword ptr [EBX + 0x2d8],0x42c80000 ; 00547271
    POP EDI                             ; 0054727b
    POP ESI                             ; 0054727c
    POP EBX                             ; 0054727d
    RET                                 ; 0054727e

