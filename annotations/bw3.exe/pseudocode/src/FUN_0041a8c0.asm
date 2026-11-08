; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041a8c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc850
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a8c0
        ;   Label: FUN_0041a8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a8c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a8c5
    JNZ 0x0041a91d                      ; 0041a8ca
        ;   XREF to: 0041a91d (CONDITIONAL_JUMP)  ; LAB_0041a91d
    PUSH 0x0                            ; 0041a8cc
    ADD EBX,0x385c                      ; 0041a8ce
    PUSH EBX                            ; 0041a8d4
    CALL FUN_00410370                   ; 0041a8d5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0041a8da
    PUSH 0x0                            ; 0041a8dd
    SUB EAX,0x954                       ; 0041a8df
    PUSH EAX                            ; 0041a8e4
    CALL FUN_0043f900                   ; 0041a8e5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0041a8ea
    PUSH 0x0                            ; 0041a8ed
    SUB EAX,0x2db0                      ; 0041a8ef
    PUSH EAX                            ; 0041a8f4
    CALL FUN_0054bf80                   ; 0041a8f5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0041a8fa
    PUSH 0x1                            ; 0041a8fd
    LEA EBX,[EAX + 0xfffffea8]          ; 0041a8ff
    PUSH EBX                            ; 0041a905
    CALL FUN_00408770                   ; 0041a906
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0041a90b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a90e
    MOV EBX,EAX                         ; 0041a912
    TEST DL,0x2                         ; 0041a914
    JNZ 0x0041a938                      ; 0041a917
        ;   XREF to: 0041a938 (CONDITIONAL_JUMP)  ; LAB_0041a938
    MOV EAX,EBX                         ; 0041a919
    POP EBX                             ; 0041a91b
    RET                                 ; 0041a91c
    PUSH 0x5dc850                       ; 0041a91d | DAT_005dc850
        ;   Label: LAB_0041a91d
    PUSH EBX                            ; 0041a922
    CALL FUN_005a308f                   ; 0041a923
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0041a928
    PUSH EAX                            ; 0041a92b
    CALL FUN_005a30b6                   ; 0041a92c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041a931
    MOV EAX,EBX                         ; 0041a934
    POP EBX                             ; 0041a936
    RET                                 ; 0041a937
    PUSH EAX                            ; 0041a938
        ;   Label: LAB_0041a938
    CALL FUN_005a30c4                   ; 0041a939
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0041a93e
    MOV EAX,EBX                         ; 0041a941
    POP EBX                             ; 0041a943
    RET                                 ; 0041a944

