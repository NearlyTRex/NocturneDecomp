; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e2220(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_00453d80 at 00454173
;   FUN_00565ff0 at 005663d8
;
; Referenced Globals:
;   undefined4 DAT_005f9488
;
; Called Functions:
;   FUN_00408d70
;   FUN_0044fd20
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2220
        ;   Label: FUN_004e2220
    PUSH EDI                            ; 004e2221
    PUSH EBP                            ; 004e2222
    SUB ESP,0x20                        ; 004e2223
    MOV EBP,ESI                         ; 004e2226
    MOV ESI,dword ptr [ESP + 0x30]      ; 004e2228
    LEA EBX,[ESI + 0x2b4]               ; 004e222c
    PUSH EBX                            ; 004e2232
    CALL FUN_0044fd20                   ; 004e2233
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 004e2238
    PUSH EBX                            ; 004e223b
    MOV EDI,dword ptr [EAX + 0x10c]     ; 004e223c
    CALL FUN_0044fd20                   ; 004e2242
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e2247
    ADD ESP,0x4                         ; 004e224d
    DEC EAX                             ; 004e2250
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e2251
    FILD dword ptr [ESP + 0x1c]         ; 004e2255
    FMUL float ptr [ESI + 0x438]        ; 004e2259
    PUSH EBX                            ; 004e225f
    CALL FUN_005b7ff0                   ; 004e2260
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 004e2265
    CALL FUN_0044fd20                   ; 004e2269
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 004e226e
    MOV EAX,dword ptr [EAX + 0x104]     ; 004e2271
    IMUL EAX,dword ptr [ESP + 0x18]     ; 004e2277
    MOV EBX,dword ptr [ESI + 0x570]     ; 004e227c
    ADD EBX,EAX                         ; 004e2282
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e2284
    SUB EAX,EBX                         ; 004e228b
    SHL EAX,0x2                         ; 004e228d
    MOV EBX,ESP                         ; 004e2290
    ADD EAX,EDI                         ; 004e2292
    FILD dword ptr [EAX]                ; 004e2294
    FMUL float ptr [0x005f9488]         ; 004e2296 | DAT_005f9488
    FSTP float ptr [EBX]                ; 004e229c
    FILD dword ptr [EAX + 0x4]          ; 004e229e
    FMUL float ptr [0x005f9488]         ; 004e22a1 | DAT_005f9488
    FSTP float ptr [EBX + 0x4]          ; 004e22a7
    FILD dword ptr [EAX + 0x8]          ; 004e22aa
    FMUL float ptr [0x005f9488]         ; 004e22ad | DAT_005f9488
    FSTP float ptr [EBX + 0x8]          ; 004e22b3
    MOV EAX,ESP                         ; 004e22b6
    PUSH EAX                            ; 004e22b8
    PUSH ESI                            ; 004e22b9
    LEA ESI,[ESP + 0x14]                ; 004e22ba
    MOV EDI,EBP                         ; 004e22be
    CALL FUN_00408d70                   ; 004e22c0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 004e22c5
    ADD ESP,0x8                         ; 004e22c9
    MOVSD ES:EDI,ESI                    ; 004e22cc
    MOVSD ES:EDI,ESI                    ; 004e22cd
    MOVSD ES:EDI,ESI                    ; 004e22ce
    MOV EAX,EBP                         ; 004e22cf
    ADD ESP,0x20                        ; 004e22d1
    POP EBP                             ; 004e22d4
    POP EDI                             ; 004e22d5
    POP EBX                             ; 004e22d6
    RET                                 ; 004e22d7

