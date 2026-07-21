; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_setSolidColor_FUN_00404090(int param_1,int param_2,uint param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c039a8
;   undefined4 DAT_01c039ac
;   undefined4 DAT_01c039b0
;   undefined4 DAT_01c039b4
;
; Called Functions:
;   wincore_windll.cpp_setFogColor_FUN_00532af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404090
        ;   Label: engine_2d.c_setSolidColor_FUN_00404090
    PUSH ESI                            ; 00404091
    MOV EAX,dword ptr [ESP + 0xc]       ; 00404092
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404096
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040409a
    MOV dword ptr [0x01c039b0],EBX      ; 0040409e | DAT_01c039b0
    MOV dword ptr [0x01c039b4],EDX      ; 004040a4 | DAT_01c039b4
    MOV ESI,EBX                         ; 004040aa
    MOV ECX,EAX                         ; 004040ac
    SHL ESI,0x8                         ; 004040ae
    SHL ECX,0x10                        ; 004040b1
    MOV [0x01c039ac],EAX                ; 004040b4 | DAT_01c039ac
    OR ECX,ESI                          ; 004040b9
    MOV ESI,dword ptr [0x005b7624]      ; 004040bb | DAT_005b7624
    OR ECX,EDX                          ; 004040c1
    CMP ESI,0x10                        ; 004040c3
    JZ 0x004040f3                       ; 004040c6
        ;   XREF to: 004040f3 (CONDITIONAL_JUMP)  ; LAB_004040f3
    CMP ESI,0x20                        ; 004040c8
    JNZ 0x004040f3                      ; 004040cb
        ;   XREF to: 004040f3 (CONDITIONAL_JUMP)  ; LAB_004040f3
    PUSH EDI                            ; 004040cd
    MOV CL,byte ptr [0x01c00624]        ; 004040ce | DAT_01c00624
    MOV ESI,EAX                         ; 004040d4
    MOV EDI,EBX                         ; 004040d6
    SHL ESI,CL                          ; 004040d8
    MOV CL,byte ptr [0x01c00630]        ; 004040da | DAT_01c00630
    SHL EDI,CL                          ; 004040e0
    MOV CL,byte ptr [0x01c0063c]        ; 004040e2 | DAT_01c0063c
    OR ESI,EDI                          ; 004040e8
    MOV EDI,EDX                         ; 004040ea
    SHL EDI,CL                          ; 004040ec
    MOV ECX,EDI                         ; 004040ee
    OR ECX,ESI                          ; 004040f0
    POP EDI                             ; 004040f2
    MOV dword ptr [0x01c039a8],ECX      ; 004040f3 | DAT_01c039a8
        ;   Label: LAB_004040f3
    CMP dword ptr [0x01c02594],0x0      ; 004040f9 | DAT_01c02594
    JNZ 0x00404105                      ; 00404100
        ;   XREF to: 00404105 (CONDITIONAL_JUMP)  ; LAB_00404105
    POP ESI                             ; 00404102
    POP EBX                             ; 00404103
    RET                                 ; 00404104
    PUSH EDX                            ; 00404105
        ;   Label: LAB_00404105
    PUSH EBX                            ; 00404106
    PUSH EAX                            ; 00404107
    CALL wincore_windll.cpp_setFogColor_FUN_00532af0 ; 00404108
        ;   XREF to: 00532af0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_setFogColor_FUN_00532af0()
    ADD ESP,0xc                         ; 0040410d
    POP ESI                             ; 00404110
    POP EBX                             ; 00404111
    RET                                 ; 00404112

