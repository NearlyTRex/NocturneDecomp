; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041aa70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc8b0
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

    PUSH EBX                            ; 0041aa70
        ;   Label: FUN_0041aa70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041aa71
    TEST byte ptr [ESP + 0xc],0x4       ; 0041aa75
    JNZ 0x0041aacd                      ; 0041aa7a
        ;   XREF to: 0041aacd (CONDITIONAL_JUMP)  ; LAB_0041aacd
    PUSH 0x0                            ; 0041aa7c
    ADD EBX,0x385c                      ; 0041aa7e
    PUSH EBX                            ; 0041aa84
    CALL FUN_00410370                   ; 0041aa85
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0041aa8a
    PUSH 0x0                            ; 0041aa8d
    SUB EAX,0x954                       ; 0041aa8f
    PUSH EAX                            ; 0041aa94
    CALL FUN_0043f900                   ; 0041aa95
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0041aa9a
    PUSH 0x0                            ; 0041aa9d
    SUB EAX,0x2db0                      ; 0041aa9f
    PUSH EAX                            ; 0041aaa4
    CALL FUN_0054bf80                   ; 0041aaa5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0041aaaa
    PUSH 0x1                            ; 0041aaad
    LEA EBX,[EAX + 0xfffffea8]          ; 0041aaaf
    PUSH EBX                            ; 0041aab5
    CALL FUN_00408770                   ; 0041aab6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0041aabb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041aabe
    MOV EBX,EAX                         ; 0041aac2
    TEST DL,0x2                         ; 0041aac4
    JNZ 0x0041aae8                      ; 0041aac7
        ;   XREF to: 0041aae8 (CONDITIONAL_JUMP)  ; LAB_0041aae8
    MOV EAX,EBX                         ; 0041aac9
    POP EBX                             ; 0041aacb
    RET                                 ; 0041aacc
    PUSH 0x5dc8b0                       ; 0041aacd | DAT_005dc8b0
        ;   Label: LAB_0041aacd
    PUSH EBX                            ; 0041aad2
    CALL FUN_005a308f                   ; 0041aad3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0041aad8
    PUSH EAX                            ; 0041aadb
    CALL FUN_005a30b6                   ; 0041aadc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0041aae1
    MOV EAX,EBX                         ; 0041aae4
    POP EBX                             ; 0041aae6
    RET                                 ; 0041aae7
    PUSH EAX                            ; 0041aae8
        ;   Label: LAB_0041aae8
    CALL FUN_005a30c4                   ; 0041aae9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0041aaee
    MOV EAX,EBX                         ; 0041aaf1
    POP EBX                             ; 0041aaf3
    RET                                 ; 0041aaf4

