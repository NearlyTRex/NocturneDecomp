; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bc250(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_004bc1b0 at 004bc1f6
;   FUN_004bc210 at 004bc216
;   FUN_004bdaa0 at 004bdad5
;
; Called Functions:
;   FUN_0040d1c0
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc250
        ;   Label: FUN_004bc250
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bc251
    LEA EAX,[EBX + 0x70]                ; 004bc255
    MOV dword ptr [EBX],0x0             ; 004bc258
    PUSH EAX                            ; 004bc25e
    MOV dword ptr [EBX + 0x9c],0x0      ; 004bc25f
    CALL FUN_0040d1c0                   ; 004bc269
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x4                         ; 004bc26e
    LEA EAX,[EBX + 0x88]                ; 004bc271
    PUSH EAX                            ; 004bc277
    CALL FUN_0040d1c0                   ; 004bc278
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    MOV dword ptr [EBX + 0x964],0xffffffff ; 004bc27d
    MOV dword ptr [EBX + 0x968],0xffffffff ; 004bc287
    MOV dword ptr [EBX + 0x96c],0x1     ; 004bc291
    ADD ESP,0x4                         ; 004bc29b
    MOV EDX,dword ptr [EBX + 0x84]      ; 004bc29e
    MOV byte ptr [EBX + 0x4],0x0        ; 004bc2a4
    TEST EDX,EDX                        ; 004bc2a8
    JNZ 0x004bc2ae                      ; 004bc2aa
        ;   XREF to: 004bc2ae (CONDITIONAL_JUMP)  ; LAB_004bc2ae
    POP EBX                             ; 004bc2ac
    RET                                 ; 004bc2ad
    PUSH EDX                            ; 004bc2ae
        ;   Label: LAB_004bc2ae
    CALL FUN_005c09f0                   ; 004bc2af
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 004bc2b4
    MOV dword ptr [EBX + 0x84],0x0      ; 004bc2b7
    POP EBX                             ; 004bc2c1
    RET                                 ; 004bc2c2

