; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056db40(int param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00566450 at 0056646e
;
; Called Functions:
;   FUN_0056da50
;   FUN_00570ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056db40
        ;   Label: FUN_0056db40
    PUSH ESI                            ; 0056db41
    PUSH EDI                            ; 0056db42
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056db43
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056db47
    XOR EDI,EDI                         ; 0056db4b
    PUSH EBX                            ; 0056db4d
        ;   Label: LAB_0056db4d
    CALL FUN_00570ca0                   ; 0056db4e
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00570ca0()
    ADD ESP,0x4                         ; 0056db53
    TEST EAX,EAX                        ; 0056db56
    JNZ 0x0056db72                      ; 0056db58
        ;   XREF to: 0056db72 (CONDITIONAL_JUMP)  ; LAB_0056db72
    TEST ESI,ESI                        ; 0056db5a
    JBE 0x0056db72                      ; 0056db5c
        ;   XREF to: 0056db72 (CONDITIONAL_JUMP)  ; LAB_0056db72
    PUSH EBX                            ; 0056db5e
    CALL FUN_0056da50                   ; 0056db5f
        ;   XREF to: 0056da50 (UNCONDITIONAL_CALL)  ; undefined FUN_0056da50()
    ADD ESP,0x4                         ; 0056db64
    CMP ESI,EAX                         ; 0056db67
    JC 0x0056db72                       ; 0056db69
        ;   XREF to: 0056db72 (CONDITIONAL_JUMP)  ; LAB_0056db72
    INC EDI                             ; 0056db6b
    SUB ESI,EAX                         ; 0056db6c
    ADD EBX,EAX                         ; 0056db6e
    JMP 0x0056db4d                      ; 0056db70
        ;   XREF to: 0056db4d (UNCONDITIONAL_JUMP)  ; LAB_0056db4d
    MOV EAX,EDI                         ; 0056db72
        ;   Label: LAB_0056db72
    POP EDI                             ; 0056db74
    POP ESI                             ; 0056db75
    POP EBX                             ; 0056db76
    RET                                 ; 0056db77

