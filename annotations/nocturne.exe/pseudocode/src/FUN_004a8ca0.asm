; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a8ca0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   string s_guul.dfm_00584ac4
;   undefined4 DAT_00584acd
;   undefined4 DAT_0059e210
;   undefined4 DAT_0059e214
;   undefined1* PTR_FUN_0059e224 = 004a8dd0
;
; Called Functions:
;   FUN_0040dda0
;   FUN_0040de00
;   FUN_00479560
;   FUN_0051e0c0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8ca0
        ;   Label: FUN_004a8ca0
    SUB ESP,0x4                         ; 004a8ca1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a8ca4
    PUSH EDX                            ; 004a8ca8
    CALL FUN_00479560                   ; 004a8ca9
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 004a8cae
    PUSH 0x584ac4                       ; 004a8cb1 | = "guul.dfm"
    MOV EBX,EAX                         ; 004a8cb6
    ADD EAX,0x150                       ; 004a8cb8
    PUSH EAX                            ; 004a8cbd
    MOV dword ptr [EAX + -0x4],0x59e224 ; 004a8cbe | PTR_FUN_0059e224
    CALL FUN_0051e0c0                   ; 004a8cc5
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    ADD ESP,0x8                         ; 004a8cca
    PUSH 0x420c0000                     ; 004a8ccd
    PUSH 0x41a00000                     ; 004a8cd2
    CALL FUN_0040dda0                   ; 004a8cd7
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004a8cdc
    FLD float ptr [ESP + 0x8]           ; 004a8ce0
    ADD ESP,0x8                         ; 004a8ce4
    FMUL double ptr [0x00584acd]        ; 004a8ce7 | DAT_00584acd
    PUSH 0x41200000                     ; 004a8ced
    PUSH 0x40800000                     ; 004a8cf2
    CALL FUN_00563a30                   ; 004a8cf7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [EBX + 0xbd28]      ; 004a8cfc
    CALL FUN_0040dda0                   ; 004a8d02
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [EBX + 0xbd30],0xa0000 ; 004a8d07
    MOV dword ptr [ESP + 0x8],EAX       ; 004a8d11
    MOV dword ptr [EBX + 0xbd34],0xffffffff ; 004a8d15
    FLD float ptr [ESP + 0x8]           ; 004a8d1f
    FMUL double ptr [0x00584acd]        ; 004a8d23 | DAT_00584acd
    MOV dword ptr [EBX + 0xbd38],0x0    ; 004a8d29
    ADD ESP,0x8                         ; 004a8d33
    MOV dword ptr [EBX + 0xbd44],0x2    ; 004a8d36
    PUSH 0x3                            ; 004a8d40
    CALL FUN_00563a30                   ; 004a8d42
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    PUSH 0x1                            ; 004a8d47
    FISTP dword ptr [EBX + 0xbd2c]      ; 004a8d49
    CALL FUN_0040de00                   ; 004a8d4f
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    MOV dword ptr [EBX + 0x2dd4],0x3f400000 ; 004a8d54
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 004a8d5e
    MOV dword ptr [EBX + 0xbd80],0x0    ; 004a8d68
    MOV dword ptr [EBX + 0xbd84],0x0    ; 004a8d72
    MOV dword ptr [EBX + 0xbd88],0x0    ; 004a8d7c
    MOV dword ptr [EBX + 0xbd8c],0x0    ; 004a8d86
    FLD float ptr [0x0059e210]          ; 004a8d90 | DAT_0059e210
    MOV dword ptr [EBX + 0xbd90],0x0    ; 004a8d96
    FLD float ptr [0x0059e214]          ; 004a8da0 | DAT_0059e214
    MOV dword ptr [EBX + 0xbd40],EAX    ; 004a8da6
    ADD ESP,0x8                         ; 004a8dac
    FXCH                                ; 004a8daf
    FSTP float ptr [EBX + 0x2ddc]       ; 004a8db1
    FSTP float ptr [EBX + 0x2de0]       ; 004a8db7
    MOV EAX,EBX                         ; 004a8dbd
    ADD ESP,0x4                         ; 004a8dbf
    POP EBX                             ; 004a8dc2
    RET                                 ; 004a8dc3

