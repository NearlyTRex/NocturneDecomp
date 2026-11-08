; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005587e0(void)
;
;
; XREF[4]:
;   FUN_004e94f0 at 004e9d15
;   FUN_00558010 at 00558029
;   FUN_00558730 at 00558731
;   FUN_00559220 at 00559263
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3288
;
; Called Functions:
;   FUN_00553520
;   FUN_00558250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005587e0
        ;   Label: FUN_005587e0
    PUSH ESI                            ; 005587e1
    CALL FUN_00558250                   ; 005587e2
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; undefined FUN_00558250()
    TEST EAX,EAX                        ; 005587e7
    JZ 0x00558818                       ; 005587e9
        ;   XREF to: 00558818 (CONDITIONAL_JUMP)  ; LAB_00558818
    MOV EBX,0x2cebc24                   ; 005587eb
    LEA ESI,[EBX + 0x6c00]              ; 005587f0
    PUSH EBX                            ; 005587f6
        ;   Label: LAB_005587f6
    CALL FUN_00553520                   ; 005587f7
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    ADD EBX,0x1b0                       ; 005587fc
    ADD ESP,0x4                         ; 00558802
    CMP EBX,ESI                         ; 00558805
    JNZ 0x005587f6                      ; 00558807
        ;   XREF to: 005587f6 (CONDITIONAL_JUMP)  ; LAB_005587f6
    MOV EDX,dword ptr [0x02cf3280]      ; 00558809 | DAT_02cf3280
    TEST EDX,EDX                        ; 0055880f
    JNZ 0x0055881b                      ; 00558811
        ;   XREF to: 0055881b (CONDITIONAL_JUMP)  ; LAB_0055881b
    MOV EAX,0x1                         ; 00558813
    POP ESI                             ; 00558818
        ;   Label: LAB_00558818
    POP EBX                             ; 00558819
    RET                                 ; 0055881a
    PUSH EDX                            ; 0055881b
        ;   Label: LAB_0055881b
    MOV EBX,dword ptr [EDX]             ; 0055881c
    CALL dword ptr [EBX]                ; 0055881e
    ADD ESP,0x4                         ; 00558820
    TEST EAX,EAX                        ; 00558823
    JZ 0x00558818                       ; 00558825
        ;   XREF to: 00558818 (CONDITIONAL_JUMP)  ; LAB_00558818
    XOR ECX,ECX                         ; 00558827
    MOV EAX,0x1                         ; 00558829
    MOV dword ptr [0x02cf3288],ECX      ; 0055882e | DAT_02cf3288
    MOV dword ptr [0x02cf3280],ECX      ; 00558834 | DAT_02cf3280
    POP ESI                             ; 0055883a
    POP EBX                             ; 0055883b
    RET                                 ; 0055883c

