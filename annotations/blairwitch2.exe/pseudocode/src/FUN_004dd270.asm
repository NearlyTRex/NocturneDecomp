; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dd270(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004bb890 at 004bb8a4
;   FUN_004db9d0 at 004db9ff
;   FUN_004dbc60 at 004dbc6e
;   FUN_004dccd0 at 004dcd1a
;   FUN_004defa0 at 004deffa
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004dd270
        ;   Label: FUN_004dd270
    MOV EAX,dword ptr [ESP + 0x8]       ; 004dd271
    MOV EDX,dword ptr [0x01cedef4]      ; 004dd275 | DAT_01cedef4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dd27b
    CMP ECX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004dd27e
    JNZ 0x004dd2a3                      ; 004dd285
        ;   XREF to: 004dd2a3 (CONDITIONAL_JUMP)  ; LAB_004dd2a3
    MOV dword ptr [EAX + 0x344],0x0     ; 004dd287
    MOV ESI,dword ptr [ESP + 0xc]       ; 004dd291
    MOV dword ptr [EAX + 0x340],0x40a00000 ; 004dd295
    TEST ESI,ESI                        ; 004dd29f
    JNZ 0x004dd2a5                      ; 004dd2a1
        ;   XREF to: 004dd2a5 (CONDITIONAL_JUMP)  ; LAB_004dd2a5
    POP ESI                             ; 004dd2a3
        ;   Label: LAB_004dd2a3
    RET                                 ; 004dd2a4
    MOV dword ptr [EAX + 0x350],0x40a00000 ; 004dd2a5
        ;   Label: LAB_004dd2a5
    POP ESI                             ; 004dd2af
    RET                                 ; 004dd2b0

