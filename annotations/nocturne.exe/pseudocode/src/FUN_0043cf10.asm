; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043cf10(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_crossbow.kfm_0057b478
;   undefined1* PTR_FUN_0059bb54 = 00553f10
;
; Called Functions:
;   FUN_00454580
;   FUN_0048cf60
;   FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cf10
        ;   Label: FUN_0043cf10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043cf11
    PUSH EBX                            ; 0043cf15
    CALL FUN_00553d90                   ; 0043cf16
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d90()
    ADD ESP,0x4                         ; 0043cf1b
    ADD EAX,0x574                       ; 0043cf1e
    PUSH EAX                            ; 0043cf23
    CALL FUN_0048cf60                   ; 0043cf24
        ;   XREF to: 0048cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0048cf60()
    ADD ESP,0x4                         ; 0043cf29
    LEA EBX,[EAX + 0xfffffa8c]          ; 0043cf2c
    PUSH 0x57b478                       ; 0043cf32 | = "crossbow.kfm"
    LEA EAX,[EBX + 0x150]               ; 0043cf37
    PUSH EAX                            ; 0043cf3d
    MOV dword ptr [EBX + 0x14c],0x59bb54 ; 0043cf3e | PTR_FUN_0059bb54
    CALL FUN_00454580                   ; 0043cf48
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0043cf4d
    MOV dword ptr [EBX + 0x570],0x0     ; 0043cf57
    MOV dword ptr [EBX + 0x6c4],0x3ee66666 ; 0043cf61
    MOV dword ptr [EBX + 0x6c8],0x3f59999a ; 0043cf6b
    MOV dword ptr [EBX + 0x6cc],0x3ee66666 ; 0043cf75
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0043cf7f
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0043cf89
    MOV dword ptr [EBX + 0x2d8],0x1     ; 0043cf93
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0043cf9d
    ADD ESP,0x8                         ; 0043cfa7
    MOV dword ptr [EBX + 0x2e0],0x42480000 ; 0043cfaa
    MOV EAX,EBX                         ; 0043cfb4
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0043cfb6
    POP EBX                             ; 0043cfc0
    RET                                 ; 0043cfc1

