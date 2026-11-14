; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c4e44(int param_1)
;
;
; XREF[5]:
;   crt_unknown.c_FUN_005c4eb0 at 005c4ec2
;   crt_unknown.c_FUN_005c4f10 at 005c4f13
;   crt_unknown.c_FUN_005c4fb8 at 005c4fbb
;   crt_unknown.c_FUN_005c4ff8 at 005c5056
;   crt_unknown.c_processSignal_FUN_005c50b8 at 005c50bf
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   undefined4 DAT_0061f764
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4e44
        ;   Label: crt_unknown.c_FUN_005c4e44
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c4e45
    CMP EBX,0x7                         ; 005c4e49
    JZ 0x005c4e53                       ; 005c4e4c
        ;   XREF to: 005c4e53 (CONDITIONAL_JUMP)  ; LAB_005c4e53
    CMP EBX,0x4                         ; 005c4e4e
    JNZ 0x005c4e5c                      ; 005c4e51
        ;   XREF to: 005c4e5c (CONDITIONAL_JUMP)  ; LAB_005c4e5c
    MOV EAX,dword ptr [EBX*0x8 + 0x61f764] ; 005c4e53 | DAT_0061f764
        ;   Label: LAB_005c4e53
    POP EBX                             ; 005c4e5a
    RET                                 ; 005c4e5b
    CALL dword ptr [0x0061f2a4]         ; 005c4e5c | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: LAB_005c4e5c
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58] ; 005c4e62
    POP EBX                             ; 005c4e66
    RET                                 ; 005c4e67

