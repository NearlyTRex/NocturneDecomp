; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00486580(int param_1)
;
;
; XREF[6]:
;   FUN_0047c2c0 at 0047c359
;   FUN_0047c8e0 at 0047c948
;   FUN_0047d230 at 0047d441
;   FUN_00480200 at 00480256
;   FUN_00483c00 at 00484088
;   FUN_004843d0 at 0048450b
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bcd25
;   TerminatedCString s_gEdFont_must_be_set_by_t_005bcd3b
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5b0e0
;   undefined4 DAT_01c5bae0
;   undefined4 DAT_01c5bae4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004b2b30
;   FUN_004b30f0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486580
        ;   Label: FUN_00486580
    PUSH EDI                            ; 00486581
    MOV EBX,dword ptr [ESP + 0xc]       ; 00486582
    CMP dword ptr [0x01c5b0e0],0x0      ; 00486586 | DAT_01c5b0e0
    JNZ 0x004865b4                      ; 0048658d
        ;   XREF to: 004865b4 (CONDITIONAL_JUMP)  ; LAB_004865b4
    PUSH ESI                            ; 0048658f
    MOV ECX,0x5bcd25                    ; 00486590 | = "..\\shape\\edittool.cpp"
    MOV ESI,0xa7                        ; 00486595
    PUSH 0x5bcd3b                       ; 0048659a | = "gEdFont must be set by the application."
    MOV dword ptr [0x01d71de0],ECX      ; 0048659f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004865a5 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004865ab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004865b0
    POP ESI                             ; 004865b3
    MOV EAX,[0x01c5b0e0]                ; 004865b4 | DAT_01c5b0e0
        ;   Label: LAB_004865b4
    PUSH 0x6a                           ; 004865b9
    MOV ECX,dword ptr [EAX + 0x41e8]    ; 004865bb
    PUSH EAX                            ; 004865c1
    MOV dword ptr [0x01c5bae0],ECX      ; 004865c2 | DAT_01c5bae0
    CALL FUN_004b30f0                   ; 004865c8
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    ADD ESP,0x8                         ; 004865cd
    MOV [0x01c5bae4],EAX                ; 004865d0 | DAT_01c5bae4
    TEST EBX,EBX                        ; 004865d5
    JNZ 0x004865fb                      ; 004865d7
        ;   XREF to: 004865fb (CONDITIONAL_JUMP)  ; LAB_004865fb
    MOV ECX,dword ptr [0x01c5b0e0]      ; 004865d9 | DAT_01c5b0e0
    MOV ECX,dword ptr [ECX + 0x41ec]    ; 004865df
    MOV EAX,[0x005fba1c]                ; 004865e5 | DAT_005fba1c
        ;   Label: LAB_004865e5
    MOV EDX,EAX                         ; 004865ea
    MOV EBX,0x50                        ; 004865ec
    SAR EDX,0x1f                        ; 004865f1
    IDIV EBX                            ; 004865f4
    ADD EAX,ECX                         ; 004865f6
    POP EDI                             ; 004865f8
    POP EBX                             ; 004865f9
    RET                                 ; 004865fa
    PUSH EBX                            ; 004865fb
        ;   Label: LAB_004865fb
    MOV EDI,dword ptr [0x01c5b0e0]      ; 004865fc | DAT_01c5b0e0
    PUSH EDI                            ; 00486602
    CALL FUN_004b2b30                   ; 00486603
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2b30()
    ADD ESP,0x8                         ; 00486608
    MOV ECX,EAX                         ; 0048660b
    JMP 0x004865e5                      ; 0048660d
        ;   XREF to: 004865e5 (UNCONDITIONAL_JUMP)  ; LAB_004865e5

