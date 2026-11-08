; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4880(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a47b0 at 005a4840
;
; Called Functions:
;   FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a4880
        ;   Label: FUN_005a4880
    TEST EAX,EAX                        ; 005a4884
    JNZ 0x005a4889                      ; 005a4886
        ;   XREF to: 005a4889 (CONDITIONAL_JUMP)  ; LAB_005a4889
    RET                                 ; 005a4888
    PUSH EAX                            ; 005a4889
        ;   Label: LAB_005a4889
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a488a
    PUSH dword ptr [ESP + 0xc]          ; 005a488e
    PUSH EDX                            ; 005a4892
    CALL FUN_0059e8c0                   ; 005a4893
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a4898
    RET                                 ; 005a489b

