; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa6c0(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_004d6300 at 004d6314
;   FUN_004f8dc0 at 004f8de8
;   FUN_004f8fe0 at 004f8fee
;   FUN_004f9f10 at 004f9f3d
;   FUN_004fc370 at 004fc3ca
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004fa6c0
        ;   Label: FUN_004fa6c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fa6c1
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fa6c5 | DAT_01d06ab4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fa6cb
    CMP ECX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fa6ce
    JNZ 0x004fa6f3                      ; 004fa6d5
        ;   XREF to: 004fa6f3 (CONDITIONAL_JUMP)  ; LAB_004fa6f3
    MOV dword ptr [EAX + 0x344],0x0     ; 004fa6d7
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fa6e1
    MOV dword ptr [EAX + 0x340],0x40a00000 ; 004fa6e5
    TEST ESI,ESI                        ; 004fa6ef
    JNZ 0x004fa6f5                      ; 004fa6f1
        ;   XREF to: 004fa6f5 (CONDITIONAL_JUMP)  ; LAB_004fa6f5
    POP ESI                             ; 004fa6f3
        ;   Label: LAB_004fa6f3
    RET                                 ; 004fa6f4
    MOV dword ptr [EAX + 0x350],0x40a00000 ; 004fa6f5
        ;   Label: LAB_004fa6f5
    POP ESI                             ; 004fa6ff
    RET                                 ; 004fa700

