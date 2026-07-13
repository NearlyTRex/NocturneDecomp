; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044bbd0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059bf40
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bbd0
        ;   Label: FUN_0044bbd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044bbd1
    TEST byte ptr [ESP + 0xc],0x4       ; 0044bbd5
    JNZ 0x0044bbf6                      ; 0044bbda
        ;   XREF to: 0044bbf6 (CONDITIONAL_JUMP)  ; LAB_0044bbf6
    PUSH 0x1                            ; 0044bbdc
    PUSH EBX                            ; 0044bbde
    CALL FUN_00409ea0                   ; 0044bbdf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0044bbe4
    MOV DL,byte ptr [ESP + 0xc]         ; 0044bbe7
    MOV EBX,EAX                         ; 0044bbeb
    TEST DL,0x2                         ; 0044bbed
    JNZ 0x0044bc11                      ; 0044bbf0
        ;   XREF to: 0044bc11 (CONDITIONAL_JUMP)  ; LAB_0044bc11
    MOV EAX,EBX                         ; 0044bbf2
    POP EBX                             ; 0044bbf4
    RET                                 ; 0044bbf5
    PUSH 0x59bf40                       ; 0044bbf6 | DAT_0059bf40
        ;   Label: LAB_0044bbf6
    PUSH EBX                            ; 0044bbfb
    CALL FUN_0056445f                   ; 0044bbfc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0044bc01
    PUSH EAX                            ; 0044bc04
    CALL FUN_00564486                   ; 0044bc05
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0044bc0a
    MOV EAX,EBX                         ; 0044bc0d
    POP EBX                             ; 0044bc0f
    RET                                 ; 0044bc10
    PUSH EAX                            ; 0044bc11
        ;   Label: LAB_0044bc11
    CALL FUN_00564494                   ; 0044bc12
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0044bc17
    MOV EAX,EBX                         ; 0044bc1a
    POP EBX                             ; 0044bc1c
    RET                                 ; 0044bc1d

