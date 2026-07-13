; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462140(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   string s_stalrock.kfm_0057ddf4
;
; Called Functions:
;   FUN_0040dda0
;   FUN_00454510
;   FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462140
        ;   Label: FUN_00462140
    SUB ESP,0x4                         ; 00462141
    MOV EBX,dword ptr [ESP + 0xc]       ; 00462144
    LEA EAX,[EBX + 0x150]               ; 00462148
    PUSH EAX                            ; 0046214e
    CALL FUN_00454510                   ; 0046214f
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    LEA EAX,[EBX + 0x20]                ; 00462154
    LEA EDX,[EBX + 0x2f0]               ; 00462157
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0046215d
    ADD ESP,0x4                         ; 00462167
    MOV ECX,dword ptr [EDX]             ; 0046216a
    MOV dword ptr [EAX],ECX             ; 0046216c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046216e
    MOV dword ptr [EAX + 0x4],ECX       ; 00462171
    MOV ECX,dword ptr [EDX + 0x8]       ; 00462174
    MOV dword ptr [EAX + 0x8],ECX       ; 00462177
    PUSH dword ptr [EBX + 0x2dc]        ; 0046217a
    PUSH dword ptr [EBX + 0x2d8]        ; 00462180
    CALL FUN_0040dda0                   ; 00462186
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0046218b
    FLD float ptr [ESP + 0x8]           ; 0046218f
    ADD ESP,0x8                         ; 00462193
    PUSH 0x57ddf4                       ; 00462196 | = "stalrock.kfm"
    PUSH 0x1b7b330                      ; 0046219b
    FSTP float ptr [EBX + 0x2d4]        ; 004621a0
    CALL FUN_00454580                   ; 004621a6
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    ADD ESP,0x8                         ; 004621ab
    PUSH 0x1b7b330                      ; 004621ae
    CALL FUN_00454510                   ; 004621b3
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 004621b8
    MOV dword ptr [EBX + 0x330],0x0     ; 004621bb
    ADD ESP,0x4                         ; 004621c5
    POP EBX                             ; 004621c8
    RET                                 ; 004621c9

