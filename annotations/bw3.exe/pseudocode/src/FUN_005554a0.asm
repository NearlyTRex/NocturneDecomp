; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005554a0(int param_1)
;
;
; XREF[2]:
;   FUN_00553960 at 00553a14
;   FUN_005567c0 at 005567f0
;
; Referenced Globals:
;   TerminatedCString s_Error_polling_hw_playbac_005d33ad
;   undefined4 DAT_02cf3280
;
; Called Functions:
;   FUN_00555530
;   FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005554a0
        ;   Label: FUN_005554a0
    PUSH EDI                            ; 005554a1
    PUSH EBP                            ; 005554a2
    MOV EBP,ESP                         ; 005554a3
    SUB ESP,0x10                        ; 005554a5
    AND ESP,0xfffffff8                  ; 005554a8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005554ab
    CMP dword ptr [EBX + 0x60],0x0      ; 005554ae
    JZ 0x005554c4                       ; 005554b2
        ;   XREF to: 005554c4 (CONDITIONAL_JUMP)  ; LAB_005554c4
    MOV ECX,dword ptr [0x02cf3280]      ; 005554b4 | DAT_02cf3280
    TEST ECX,ECX                        ; 005554ba
    JZ 0x005554c4                       ; 005554bc
        ;   XREF to: 005554c4 (CONDITIONAL_JUMP)  ; LAB_005554c4
    CMP dword ptr [EBX + 0x68],0x0      ; 005554be
    JNZ 0x005554cc                      ; 005554c2
        ;   XREF to: 005554cc (CONDITIONAL_JUMP)  ; LAB_005554cc
    XOR EAX,EAX                         ; 005554c4
        ;   Label: LAB_005554c4
    MOV ESP,EBP                         ; 005554c6
    POP EBP                             ; 005554c8
    POP EDI                             ; 005554c9
    POP EBX                             ; 005554ca
    RET                                 ; 005554cb
    PUSH EBX                            ; 005554cc
        ;   Label: LAB_005554cc
    MOV EDX,dword ptr [ECX]             ; 005554cd
    PUSH ECX                            ; 005554cf
    CALL dword ptr [EDX + 0x48]         ; 005554d0
    MOV dword ptr [ESP + 0x10],EAX      ; 005554d3
    MOV dword ptr [ESP + 0x14],EDX      ; 005554d7
    FLD double ptr [ESP + 0x10]         ; 005554db
    ADD ESP,0x8                         ; 005554df
    FLDZ                                ; 005554e2
    FXCH                                ; 005554e4
    FSTP double ptr [ESP]               ; 005554e6
    FCOMP double ptr [ESP]              ; 005554e9
    FNSTSW AX                           ; 005554ec
    SAHF                                ; 005554ee
    JBE 0x0055550a                      ; 005554ef
        ;   XREF to: 0055550a (CONDITIONAL_JUMP)  ; LAB_0055550a
    MOV EDX,dword ptr [EBX + 0x68]      ; 005554f1
    PUSH EDX                            ; 005554f4
    PUSH 0x5d33ad                       ; 005554f5 | = "Error polling hw playback pos %s\n"
    CALL FUN_0055a560                   ; 005554fa
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x8                         ; 005554ff
    XOR EAX,EAX                         ; 00555502
    MOV ESP,EBP                         ; 00555504
    POP EBP                             ; 00555506
    POP EDI                             ; 00555507
    POP EBX                             ; 00555508
    RET                                 ; 00555509
    MOV EDI,dword ptr [ESP + 0x4]       ; 0055550a
        ;   Label: LAB_0055550a
    PUSH EDI                            ; 0055550e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055550f
    PUSH EAX                            ; 00555513
    PUSH EBX                            ; 00555514
    CALL FUN_00555530                   ; 00555515
        ;   XREF to: 00555530 (UNCONDITIONAL_CALL)  ; undefined FUN_00555530()
    MOV EAX,0x1                         ; 0055551a
    ADD ESP,0xc                         ; 0055551f
    MOV ESP,EBP                         ; 00555522
    POP EBP                             ; 00555524
    POP EDI                             ; 00555525
    POP EBX                             ; 00555526
    RET                                 ; 00555527

