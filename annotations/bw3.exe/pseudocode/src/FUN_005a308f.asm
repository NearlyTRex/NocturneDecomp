; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a308f(int param_1,undefined4 param_2)
;
;
; XREF[166]:
;   FUN_00408770 at 004087a7
;   FUN_0040e420 at 0040e44c
;   FUN_0040e470 at 0040e49c
;   FUN_0040e4c0 at 0040e4ec
;   FUN_0040e510 at 0040e53c
;   FUN_0040ea10 at 0040ea3c
;   FUN_0040ec90 at 0040ecbc
;   FUN_0040f3d0 at 0040f413
;   FUN_0040f6d0 at 0040f6fc
;   FUN_0040f940 at 0040f96c
;   ... and 156 more
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a308f
        ;   Label: FUN_005a308f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3090
    TEST EAX,EAX                        ; 005a3094
    JNZ 0x005a309e                      ; 005a3096
        ;   XREF to: 005a309e (CONDITIONAL_JUMP)  ; LAB_005a309e
    XOR EBX,EBX                         ; 005a3098
    MOV EAX,EBX                         ; 005a309a
    POP EBX                             ; 005a309c
    RET                                 ; 005a309d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a309e
        ;   Label: LAB_005a309e
    LEA EBX,[EAX + -0x4]                ; 005a30a2
    PUSH EDX                            ; 005a30a5
    MOV ECX,dword ptr [EBX]             ; 005a30a6
    PUSH ECX                            ; 005a30a8
    PUSH EAX                            ; 005a30a9
    CALL FUN_005a3de6                   ; 005a30aa
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 005a30af
    MOV EAX,EBX                         ; 005a30b2
    POP EBX                             ; 005a30b4
    RET                                 ; 005a30b5

