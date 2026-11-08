; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005751c0(int param_1)
;
;
; Called Functions:
;   FUN_0040ce40
;   FUN_00462580
;   FUN_00489110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005751c0
        ;   Label: FUN_005751c0
    SUB ESP,0x4                         ; 005751c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005751c4
    LEA EAX,[EBX + 0xd058]              ; 005751c8
    PUSH EAX                            ; 005751ce
    CALL FUN_00462580                   ; 005751cf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 005751d4
    PUSH EBX                            ; 005751d7
    CALL FUN_00489110                   ; 005751d8
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    MOV dword ptr [EBX + 0x2538],0x41200000 ; 005751dd
    ADD ESP,0x4                         ; 005751e7
    MOV dword ptr [EBX + 0xd288],0x0    ; 005751ea
    PUSH dword ptr [EBX + 0xd27c]       ; 005751f4
    PUSH dword ptr [EBX + 0xd278]       ; 005751fa
    MOV dword ptr [EBX + 0xd280],0x0    ; 00575200
    CALL FUN_0040ce40                   ; 0057520a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0057520f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00575213
    MOV dword ptr [EBX + 0xd284],EAX    ; 00575217
    ADD ESP,0x8                         ; 0057521d
    ADD ESP,0x4                         ; 00575220
    POP EBX                             ; 00575223
    RET                                 ; 00575224

