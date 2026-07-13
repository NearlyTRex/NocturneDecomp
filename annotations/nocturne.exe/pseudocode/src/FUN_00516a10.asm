; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00516a10(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_shoveit.kfm_005910c5
;   undefined1* PTR_FUN_005a1c34 = 00553f10
;
; Called Functions:
;   FUN_00454580
;   FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516a10
        ;   Label: FUN_00516a10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00516a11
    PUSH EDX                            ; 00516a15
    CALL FUN_00553d90                   ; 00516a16
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d90()
    ADD ESP,0x4                         ; 00516a1b
    PUSH 0x5910c5                       ; 00516a1e | = "shoveit.kfm"
    MOV EBX,EAX                         ; 00516a23
    ADD EAX,0x150                       ; 00516a25
    PUSH EAX                            ; 00516a2a
    MOV dword ptr [EAX + -0x4],0x5a1c34 ; 00516a2b | PTR_FUN_005a1c34
    CALL FUN_00454580                   ; 00516a32
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    MOV dword ptr [EBX + 0x2d8],0x7     ; 00516a37
    MOV dword ptr [EBX + 0x564],0xffffffff ; 00516a41
    MOV dword ptr [EBX + 0x560],0x0     ; 00516a4b
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00516a55
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00516a5f
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00516a69
    ADD ESP,0x8                         ; 00516a73
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 00516a76
    MOV EAX,EBX                         ; 00516a80
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00516a82
    POP EBX                             ; 00516a8c
    RET                                 ; 00516a8d

