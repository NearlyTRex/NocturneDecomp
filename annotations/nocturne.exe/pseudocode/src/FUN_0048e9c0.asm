; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0048e9c0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_flamegun.kfm_0058169c
;   undefined4 DAT_0059d79c
;   undefined1* PTR_FUN_0059d7b4 = 00553f10
;
; Called Functions:
;   FUN_00454580
;   FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e9c0
        ;   Label: FUN_0048e9c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048e9c1
    PUSH EDX                            ; 0048e9c5
    CALL FUN_00553d90                   ; 0048e9c6
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d90()
    ADD ESP,0x4                         ; 0048e9cb
    PUSH 0x58169c                       ; 0048e9ce | = "flamegun.kfm"
    MOV EBX,EAX                         ; 0048e9d3
    ADD EAX,0x150                       ; 0048e9d5
    PUSH EAX                            ; 0048e9da
    MOV dword ptr [EAX + -0x4],0x59d7b4 ; 0048e9db | PTR_FUN_0059d7b4
    CALL FUN_00454580                   ; 0048e9e2
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined FUN_00454580()
    MOV dword ptr [EBX + 0x574],0x0     ; 0048e9e7
    MOV dword ptr [EBX + 0x570],0x0     ; 0048e9f1
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0048e9fb
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0048ea05
    MOV dword ptr [EBX + 0x2d8],0x2     ; 0048ea0f
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048ea19
    MOV dword ptr [EBX + 0x2e0],0x41700000 ; 0048ea23
    MOV dword ptr [EBX + 0x2e4],0x1     ; 0048ea2d
    FLD float ptr [0x0059d79c]          ; 0048ea37 | DAT_0059d79c
    MOV dword ptr [EBX + 0x57c],0x0     ; 0048ea3d
    ADD ESP,0x8                         ; 0048ea47
    MOV dword ptr [EBX + 0x578],0x0     ; 0048ea4a
    MOV EAX,EBX                         ; 0048ea54
    FSTP float ptr [EBX + 0x55c]        ; 0048ea56
    POP EBX                             ; 0048ea5c
    RET                                 ; 0048ea5d

