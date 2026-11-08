; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a1160(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00442d10 at 00442d28
;   FUN_00442d90 at 00442da8
;
; Referenced Globals:
;   undefined1* PTR_FUN_006073c4 = 005a11e0
;
; Called Functions:
;   FUN_0059f540
;   FUN_005a1450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1160
        ;   Label: FUN_005a1160
    PUSH ESI                            ; 005a1161
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a1162
    PUSH EDX                            ; 005a1166
    CALL FUN_0059f540                   ; 005a1167
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f540()
    ADD ESP,0x4                         ; 005a116c
    MOV dword ptr [EAX],0x6073c4        ; 005a116f | PTR_FUN_006073c4
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a1175
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1179
    PUSH ECX                            ; 005a1180
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a1181
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1185
    PUSH ESI                            ; 005a118c
    MOV dword ptr [EAX + 0xc],0x0       ; 005a118d
    PUSH EAX                            ; 005a1194
    MOV EBX,EAX                         ; 005a1195
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1197
    CALL FUN_005a1450                   ; 005a119e
        ;   XREF to: 005a1450 (UNCONDITIONAL_CALL)  ; undefined FUN_005a1450()
    ADD ESP,0xc                         ; 005a11a3
    MOV EAX,EBX                         ; 005a11a6
    POP ESI                             ; 005a11a8
    POP EBX                             ; 005a11a9
    RET                                 ; 005a11aa

