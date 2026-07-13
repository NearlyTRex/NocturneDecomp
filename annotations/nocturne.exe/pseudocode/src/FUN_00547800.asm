; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00547800(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a3620
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547800
        ;   Label: FUN_00547800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00547801
    TEST byte ptr [ESP + 0xc],0x4       ; 00547805
    JNZ 0x00547826                      ; 0054780a
        ;   XREF to: 00547826 (CONDITIONAL_JUMP)  ; LAB_00547826
    PUSH 0x1                            ; 0054780c
    PUSH EBX                            ; 0054780e
    CALL FUN_00409ea0                   ; 0054780f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00547814
    MOV DL,byte ptr [ESP + 0xc]         ; 00547817
    MOV EBX,EAX                         ; 0054781b
    TEST DL,0x2                         ; 0054781d
    JNZ 0x00547841                      ; 00547820
        ;   XREF to: 00547841 (CONDITIONAL_JUMP)  ; LAB_00547841
    MOV EAX,EBX                         ; 00547822
    POP EBX                             ; 00547824
    RET                                 ; 00547825
    PUSH 0x5a3620                       ; 00547826 | DAT_005a3620
        ;   Label: LAB_00547826
    PUSH EBX                            ; 0054782b
    CALL FUN_0056445f                   ; 0054782c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00547831
    PUSH EAX                            ; 00547834
    CALL FUN_00564486                   ; 00547835
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0054783a
    MOV EAX,EBX                         ; 0054783d
    POP EBX                             ; 0054783f
    RET                                 ; 00547840
    PUSH EAX                            ; 00547841
        ;   Label: LAB_00547841
    CALL FUN_00564494                   ; 00547842
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00547847
    MOV EAX,EBX                         ; 0054784a
    POP EBX                             ; 0054784c
    RET                                 ; 0054784d

