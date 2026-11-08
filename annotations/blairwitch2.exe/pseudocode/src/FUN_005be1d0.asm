; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be1d0(undefined4 *param_1)
;
;
; XREF[7]:
;   FUN_005b8280 at 005b8292
;   FUN_005b8350 at 005b83e6
;   FUN_005b87c0 at 005b8830
;   FUN_005b9690 at 005b9705
;   FUN_005bab40 at 005babbc
;   FUN_005bcd10 at 005bcd69
;   FUN_005c5e50 at 005c5e77
;
; Called Functions:
;   FUN_005b8580
;   FUN_005bf210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be1d0
        ;   Label: FUN_005be1d0
    PUSH ESI                            ; 005be1d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005be1d2
    PUSH EBX                            ; 005be1d6
    CALL FUN_005bf210                   ; 005be1d7
        ;   XREF to: 005bf210 (UNCONDITIONAL_CALL)  ; undefined FUN_005bf210()
    MOV EDX,dword ptr [EBX + 0x14]      ; 005be1dc
    ADD ESP,0x4                         ; 005be1df
    TEST EDX,EDX                        ; 005be1e2
    JNZ 0x005be20c                      ; 005be1e4
        ;   XREF to: 005be20c (CONDITIONAL_JUMP)  ; LAB_005be20c
    MOV AH,byte ptr [EBX + 0xd]         ; 005be1e6
    TEST AH,0x2                         ; 005be1e9
    JZ 0x005be1f7                       ; 005be1ec
        ;   XREF to: 005be1f7 (CONDITIONAL_JUMP)  ; LAB_005be1f7
    MOV dword ptr [EBX + 0x14],0x86     ; 005be1ee
    JMP 0x005be20c                      ; 005be1f5
        ;   XREF to: 005be20c (UNCONDITIONAL_JUMP)  ; LAB_005be20c
    TEST AH,0x4                         ; 005be1f7
        ;   Label: LAB_005be1f7
    JZ 0x005be205                       ; 005be1fa
        ;   XREF to: 005be205 (CONDITIONAL_JUMP)  ; LAB_005be205
    MOV dword ptr [EBX + 0x14],0x1      ; 005be1fc
    JMP 0x005be20c                      ; 005be203
        ;   XREF to: 005be20c (UNCONDITIONAL_JUMP)  ; LAB_005be20c
    MOV dword ptr [EBX + 0x14],0x1000   ; 005be205
        ;   Label: LAB_005be205
    MOV ECX,dword ptr [EBX + 0x14]      ; 005be20c
        ;   Label: LAB_005be20c
    PUSH ECX                            ; 005be20f
    CALL FUN_005b8580                   ; 005be210
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    MOV EDX,dword ptr [EBX + 0x8]       ; 005be215
    MOV dword ptr [EDX + 0x8],EAX       ; 005be218
    MOV EAX,dword ptr [EBX + 0x8]       ; 005be21b
    MOV ESI,dword ptr [EAX + 0x8]       ; 005be21e
    ADD ESP,0x4                         ; 005be221
    TEST ESI,ESI                        ; 005be224
    JNZ 0x005be24b                      ; 005be226
        ;   XREF to: 005be24b (CONDITIONAL_JUMP)  ; LAB_005be24b
    MOV CL,byte ptr [EBX + 0xd]         ; 005be228
    AND CL,0xf8                         ; 005be22b
    MOV byte ptr [EBX + 0xd],CL         ; 005be22e
    MOV CH,CL                           ; 005be231
    MOV EAX,dword ptr [EBX + 0x8]       ; 005be233
    OR CH,0x4                           ; 005be236
    LEA EDX,[EBX + 0x18]                ; 005be239
    MOV byte ptr [EBX + 0xd],CH         ; 005be23c
    MOV dword ptr [EAX + 0x8],EDX       ; 005be23f
    MOV dword ptr [EBX + 0x14],0x1      ; 005be242
    JMP 0x005be24f                      ; 005be249
        ;   XREF to: 005be24f (UNCONDITIONAL_JUMP)  ; LAB_005be24f
    OR byte ptr [EBX + 0xc],0x8         ; 005be24b
        ;   Label: LAB_005be24b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005be24f
        ;   Label: LAB_005be24f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005be252
    MOV dword ptr [EBX + 0x4],0x0       ; 005be255
    MOV dword ptr [EBX],EAX             ; 005be25c
    POP ESI                             ; 005be25e
    POP EBX                             ; 005be25f
    RET                                 ; 005be260

