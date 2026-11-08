; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004831c0(undefined4 param_1)
;
;
; XREF[8]:
;   FUN_0047db70 at 0047db84
;   FUN_004b3cd0 at 004b3d13
;   FUN_004b7f90 at 004b88ee
;   FUN_004e94f0 at 004e9c02
;   FUN_004eae80 at 004ebd0d
;   FUN_004f7a20 at 004f7a33
;   FUN_005286b0 at 005286b5
;   FUN_00560c90 at 00560c9c
;
; Referenced Globals:
;   undefined4 DAT_005bd6c2
;   TerminatedCString s_Cancel_005bd6c5
;   undefined1* PTR_FUN_005df044 = 004832b0
;
; Called Functions:
;   FUN_00481f20
;   FUN_00485510
;   FUN_00486020
;   FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004831c0
        ;   Label: FUN_004831c0
    PUSH ESI                            ; 004831c1
    PUSH EDI                            ; 004831c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004831c3
    PUSH EBX                            ; 004831c7
    CALL FUN_00481f20                   ; 004831c8
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00481f20()
    ADD ESP,0x4                         ; 004831cd
    ADD EAX,0x1bc                       ; 004831d0
    PUSH EAX                            ; 004831d5
    CALL FUN_00485510                   ; 004831d6
        ;   XREF to: 00485510 (UNCONDITIONAL_CALL)  ; undefined FUN_00485510()
    ADD ESP,0x4                         ; 004831db
    ADD EAX,0x38                        ; 004831de
    PUSH EAX                            ; 004831e1
    CALL FUN_00486020                   ; 004831e2
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; undefined FUN_00486020()
    ADD ESP,0x4                         ; 004831e7
    ADD EAX,0xe4                        ; 004831ea
    PUSH EAX                            ; 004831ef
    CALL FUN_00486020                   ; 004831f0
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; undefined FUN_00486020()
    LEA EBX,[EAX + 0xfffffd28]          ; 004831f5
    MOV dword ptr [EBX + 0xc],0x5df044  ; 004831fb | PTR_FUN_005df044
    MOV dword ptr [EBX + 0x1f0],0x0     ; 00483202
    MOV dword ptr [EBX + 0x3bc],0xffffffff ; 0048320c
    MOV dword ptr [EBX + 0x1ac],0x0     ; 00483216
    MOV dword ptr [EBX + 0x1b0],0x0     ; 00483220
    ADD ESP,0x4                         ; 0048322a
    MOV dword ptr [EBX + 0x1b4],0x0     ; 0048322d
    PUSH 0x5bd6c2                       ; 00483237 | DAT_005bd6c2
    MOV dword ptr [EBX + 0x1b8],0x0     ; 0048323c
    CALL FUN_00508960                   ; 00483246
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 0048324b
    LEA EDI,[EBX + 0x5c]                ; 0048324e
    MOV ESI,EAX                         ; 00483251
    PUSH EDI                            ; 00483253
    MOV AL,byte ptr [ESI]               ; 00483254
        ;   Label: LAB_00483254
    MOV byte ptr [EDI],AL               ; 00483256
    CMP AL,0x0                          ; 00483258
    JZ 0x0048326c                       ; 0048325a
        ;   XREF to: 0048326c (CONDITIONAL_JUMP)  ; LAB_0048326c
    MOV AL,byte ptr [ESI + 0x1]         ; 0048325c
    ADD ESI,0x2                         ; 0048325f
    MOV byte ptr [EDI + 0x1],AL         ; 00483262
    ADD EDI,0x2                         ; 00483265
    CMP AL,0x0                          ; 00483268
    JNZ 0x00483254                      ; 0048326a
        ;   XREF to: 00483254 (CONDITIONAL_JUMP)  ; LAB_00483254
    POP EDI                             ; 0048326c
        ;   Label: LAB_0048326c
    PUSH 0x5bd6c5                       ; 0048326d | = "Cancel"
    CALL FUN_00508960                   ; 00483272
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 00483277
    LEA EDI,[EBX + 0xc0]                ; 0048327a
    MOV ESI,EAX                         ; 00483280
    PUSH EDI                            ; 00483282
    MOV AL,byte ptr [ESI]               ; 00483283
        ;   Label: LAB_00483283
    MOV byte ptr [EDI],AL               ; 00483285
    CMP AL,0x0                          ; 00483287
    JZ 0x0048329b                       ; 00483289
        ;   XREF to: 0048329b (CONDITIONAL_JUMP)  ; LAB_0048329b
    MOV AL,byte ptr [ESI + 0x1]         ; 0048328b
    ADD ESI,0x2                         ; 0048328e
    MOV byte ptr [EDI + 0x1],AL         ; 00483291
    ADD EDI,0x2                         ; 00483294
    CMP AL,0x0                          ; 00483297
    JNZ 0x00483283                      ; 00483299
        ;   XREF to: 00483283 (CONDITIONAL_JUMP)  ; LAB_00483283
    POP EDI                             ; 0048329b
        ;   Label: LAB_0048329b
    MOV dword ptr [EBX + 0x54],0xffffffff ; 0048329c
    MOV EAX,EBX                         ; 004832a3
    MOV dword ptr [EBX + 0x58],0x0      ; 004832a5
    POP EDI                             ; 004832ac
    POP ESI                             ; 004832ad
    POP EBX                             ; 004832ae
    RET                                 ; 004832af

