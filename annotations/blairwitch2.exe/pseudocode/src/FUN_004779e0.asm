; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004779e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
;
;
; XREF[8]:
;   FUN_0044f020 at 0044f200
;   FUN_0044f840 at 0044fae0
;   FUN_004e5080 at 004e54a1
;   FUN_00534ea0 at 00535326
;   FUN_00536cb0 at 00536dc4
;   FUN_00543a40 at 00543ba3
;   FUN_00562240 at 00562336
;   FUN_00587900 at 005879de
;
; Called Functions:
;   FUN_00477890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004779e0
        ;   Label: FUN_004779e0
    PUSH ESI                            ; 004779e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004779e2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004779e6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004779ea
    MOV EBX,dword ptr [ESP + 0x18]      ; 004779ee
    CMP EAX,EDX                         ; 004779f2
    JNZ 0x00477a30                      ; 004779f4
        ;   XREF to: 00477a30 (CONDITIONAL_JUMP)  ; LAB_00477a30
    LEA EDX,[EAX + 0xc]                 ; 004779f6
        ;   Label: LAB_004779f6
    CMP EDX,ECX                         ; 004779f9
    JZ 0x00477a0d                       ; 004779fb
        ;   XREF to: 00477a0d (CONDITIONAL_JUMP)  ; LAB_00477a0d
    MOV ESI,dword ptr [ECX]             ; 004779fd
    MOV dword ptr [EDX],ESI             ; 004779ff
    MOV ESI,dword ptr [ECX + 0x4]       ; 00477a01
    MOV dword ptr [EDX + 0x4],ESI       ; 00477a04
    MOV ESI,dword ptr [ECX + 0x8]       ; 00477a07
    MOV dword ptr [EDX + 0x8],ESI       ; 00477a0a
    LEA EDX,[EAX + 0x18]                ; 00477a0d
        ;   Label: LAB_00477a0d
    CMP EDX,EBX                         ; 00477a10
    JZ 0x00477a24                       ; 00477a12
        ;   XREF to: 00477a24 (CONDITIONAL_JUMP)  ; LAB_00477a24
    MOV ECX,dword ptr [EBX]             ; 00477a14
    MOV dword ptr [EDX],ECX             ; 00477a16
    MOV ECX,dword ptr [EBX + 0x4]       ; 00477a18
    MOV dword ptr [EDX + 0x4],ECX       ; 00477a1b
    MOV ECX,dword ptr [EBX + 0x8]       ; 00477a1e
    MOV dword ptr [EDX + 0x8],ECX       ; 00477a21
    PUSH EAX                            ; 00477a24
        ;   Label: LAB_00477a24
    CALL FUN_00477890                   ; 00477a25
        ;   XREF to: 00477890 (UNCONDITIONAL_CALL)  ; undefined FUN_00477890()
    ADD ESP,0x4                         ; 00477a2a
    POP ESI                             ; 00477a2d
    POP EBX                             ; 00477a2e
    RET                                 ; 00477a2f
    MOV ESI,dword ptr [EDX]             ; 00477a30
        ;   Label: LAB_00477a30
    MOV dword ptr [EAX],ESI             ; 00477a32
    MOV ESI,dword ptr [EDX + 0x4]       ; 00477a34
    MOV dword ptr [EAX + 0x4],ESI       ; 00477a37
    MOV ESI,dword ptr [EDX + 0x8]       ; 00477a3a
    MOV dword ptr [EAX + 0x8],ESI       ; 00477a3d
    JMP 0x004779f6                      ; 00477a40
        ;   XREF to: 004779f6 (UNCONDITIONAL_JUMP)  ; LAB_004779f6

