; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005af2a0(byte *param_1)
;
;
; XREF[7]:
;   FUN_005ac8f0 at 005ac8fe
;   FUN_005ac960 at 005ac96e
;   FUN_005acd10 at 005acd27
;   FUN_005aede0 at 005aedeb
;   FUN_005b08a0 at 005b08c9
;   FUN_005b0c90 at 005b0c9c
;   FUN_005b1970 at 005b1979
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005af2a0
        ;   Label: FUN_005af2a0
    CMP byte ptr [EDX],0x0              ; 005af2a4
    JNZ 0x005af2af                      ; 005af2a7
        ;   XREF to: 005af2af (CONDITIONAL_JUMP)  ; LAB_005af2af
    MOV EAX,0x1                         ; 005af2a9
    RET                                 ; 005af2ae
    CMP dword ptr [0x02d25930],0x0      ; 005af2af | DAT_02d25930
        ;   Label: LAB_005af2af
    JZ 0x005af2d7                       ; 005af2b6
        ;   XREF to: 005af2d7 (CONDITIONAL_JUMP)  ; LAB_005af2d7
    XOR EAX,EAX                         ; 005af2b8
    MOV AL,byte ptr [EDX]               ; 005af2ba
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005af2bc
    AND AL,0x1                          ; 005af2c2
    AND EAX,0xff                        ; 005af2c4
    JZ 0x005af2d7                       ; 005af2c9
        ;   XREF to: 005af2d7 (CONDITIONAL_JUMP)  ; LAB_005af2d7
    CMP byte ptr [EDX + 0x1],0x0        ; 005af2cb
    JNZ 0x005af2d7                      ; 005af2cf
        ;   XREF to: 005af2d7 (CONDITIONAL_JUMP)  ; LAB_005af2d7
    MOV EAX,0x2                         ; 005af2d1
    RET                                 ; 005af2d6
    XOR EAX,EAX                         ; 005af2d7
        ;   Label: LAB_005af2d7
    RET                                 ; 005af2d9

