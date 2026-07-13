; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00474cf0(int param_1,byte param_2)
;
;
; XREF[10]:
;   FUN_00470230 at 004702fd
;   FUN_00470310 at 004703dd
;   FUN_004703f0 at 004704fb
;   FUN_00470550 at 004706bf
;   FUN_0049da10 at 0049e436
;   FUN_004a4b50 at 004a51e6
;   FUN_004d12e0 at 004d2176
;   FUN_004d2d00 at 004d3bd9
;   FUN_004d9c20 at 004d9d86
;   FUN_0052ed40 at 0052edab
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059ca94 = 00474cf0
;   undefined4 DAT_0059cad0
;
; Called Functions:
;   FUN_00473b80
;   FUN_00476160
;   FUN_00476490
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474cf0
        ;   Label: FUN_00474cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00474cf1
    TEST byte ptr [ESP + 0xc],0x4       ; 00474cf5
    JNZ 0x00474d3d                      ; 00474cfa
        ;   XREF to: 00474d3d (CONDITIONAL_JUMP)  ; LAB_00474d3d
    PUSH EBX                            ; 00474cfc
    MOV dword ptr [EBX + 0xc],0x59ca94  ; 00474cfd | PTR_FUN_0059ca94
    CALL FUN_00476160                   ; 00474d04
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined FUN_00476160()
    ADD ESP,0x4                         ; 00474d09
    PUSH 0x0                            ; 00474d0c
    ADD EBX,0x138                       ; 00474d0e
    PUSH EBX                            ; 00474d14
    CALL FUN_00476490                   ; 00474d15
        ;   XREF to: 00476490 (UNCONDITIONAL_CALL)  ; undefined FUN_00476490()
    ADD ESP,0x8                         ; 00474d1a
    PUSH 0x1                            ; 00474d1d
    LEA EBX,[EAX + 0xfffffec8]          ; 00474d1f
    PUSH EBX                            ; 00474d25
    CALL FUN_00473b80                   ; 00474d26
        ;   XREF to: 00473b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b80()
    ADD ESP,0x8                         ; 00474d2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00474d2e
    MOV EBX,EAX                         ; 00474d32
    TEST DL,0x2                         ; 00474d34
    JNZ 0x00474d58                      ; 00474d37
        ;   XREF to: 00474d58 (CONDITIONAL_JUMP)  ; LAB_00474d58
    MOV EAX,EBX                         ; 00474d39
    POP EBX                             ; 00474d3b
    RET                                 ; 00474d3c
    PUSH 0x59cad0                       ; 00474d3d | DAT_0059cad0
        ;   Label: LAB_00474d3d
    PUSH EBX                            ; 00474d42
    CALL FUN_0056445f                   ; 00474d43
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00474d48
    PUSH EAX                            ; 00474d4b
    CALL FUN_00564486                   ; 00474d4c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00474d51
    MOV EAX,EBX                         ; 00474d54
    POP EBX                             ; 00474d56
    RET                                 ; 00474d57
    PUSH EAX                            ; 00474d58
        ;   Label: LAB_00474d58
    CALL FUN_00564494                   ; 00474d59
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00474d5e
    MOV EAX,EBX                         ; 00474d61
    POP EBX                             ; 00474d63
    RET                                 ; 00474d64

