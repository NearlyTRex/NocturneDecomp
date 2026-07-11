; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0044e340(int param_1)
;
;
; XREF[1]:
;   FUN_0044e3c0 at 0044e3dd
;
; Referenced Globals:
;   undefined4 s_..\\core\\dlight.cpp_0057c58d+1
;   string s_getRestoreMemory_-_Need_more_sta_0057c5a1
;   undefined4 DAT_01ab99ec
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0044e340
        ;   Label: FUN_0044e340
    MOV EAX,0x300064                    ; 0044e341
    SUB EAX,dword ptr [ESP + 0x8]       ; 0044e346
    MOV ECX,dword ptr [0x01ab99ec]      ; 0044e34a | DAT_01ab99ec
    SUB EAX,0x4                         ; 0044e350
    CMP EAX,ECX                         ; 0044e353
    JC 0x0044e37f                       ; 0044e355
        ;   XREF to: 0044e37f (CONDITIONAL_JUMP)  ; LAB_0044e37f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e357
        ;   Label: LAB_0044e357
    MOV EAX,[0x01ab99ec]                ; 0044e35b | DAT_01ab99ec
    MOV EDI,dword ptr [0x01ab99ec]      ; 0044e360 | DAT_01ab99ec
    ADD EAX,EAX                         ; 0044e366
    ADD EDX,0x8                         ; 0044e368
    ADD EAX,0x14b9924                   ; 0044e36b
    ADD EDI,EDX                         ; 0044e370
    ADD EAX,0x10                        ; 0044e372
    MOV dword ptr [0x01ab99ec],EDI      ; 0044e375 | DAT_01ab99ec
    AND AL,0xf0                         ; 0044e37b
    POP EDI                             ; 0044e37d
    RET                                 ; 0044e37e
    PUSH ESI                            ; 0044e37f
        ;   Label: LAB_0044e37f
    PUSH EBX                            ; 0044e380
    MOV EBX,0x57c58e                    ; 0044e381 | s_..\core\dlight.cpp_0057c58d+1
    MOV ESI,0xa3                        ; 0044e386
    PUSH 0x57c5a1                       ; 0044e38b | = "getRestoreMemory - Need more static m..."
    MOV dword ptr [0x01cc4800],EBX      ; 0044e390 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0044e396 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044e39c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0044e3a1
    POP EBX                             ; 0044e3a4
    POP ESI                             ; 0044e3a5
    JMP 0x0044e357                      ; 0044e3a6
        ;   XREF to: 0044e357 (UNCONDITIONAL_JUMP)  ; LAB_0044e357

