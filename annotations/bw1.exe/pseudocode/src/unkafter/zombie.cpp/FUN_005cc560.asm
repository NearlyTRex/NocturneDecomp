; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cc560(byte *param_1)
;
;
; XREF[7]:
;   crt_unknown.c_FUN_005c8fb0 at 005c8fbe
;   crt_unknown.c_FUN_005c9020 at 005c902e
;   crt_unknown.c_FUN_005c9ea0 at 005c9eb7
;   unkafter_2d.cpp_FUN_005cdb10 at 005cdb39
;   unkafter_2d.cpp_FUN_005cdf00 at 005cdf0c
;   unkafter_2d.cpp_FUN_005cebe0 at 005cebe9
;   unkafter_zombie.cpp_FUN_005cc170 at 005cc17b
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005cc560
        ;   Label: unkafter_zombie.cpp_FUN_005cc560
    CMP byte ptr [EDX],0x0              ; 005cc564
    JNZ 0x005cc56f                      ; 005cc567
        ;   XREF to: 005cc56f (CONDITIONAL_JUMP)  ; LAB_005cc56f
    MOV EAX,0x1                         ; 005cc569
    RET                                 ; 005cc56e
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cc56f | DAT_02c9f6e0
        ;   Label: LAB_005cc56f
    JZ 0x005cc597                       ; 005cc576
        ;   XREF to: 005cc597 (CONDITIONAL_JUMP)  ; LAB_005cc597
    XOR EAX,EAX                         ; 005cc578
    MOV AL,byte ptr [EDX]               ; 005cc57a
    MOV AL,byte ptr [EAX + 0x2c9f6f1]   ; 005cc57c
    AND AL,0x1                          ; 005cc582
    AND EAX,0xff                        ; 005cc584
    JZ 0x005cc597                       ; 005cc589
        ;   XREF to: 005cc597 (CONDITIONAL_JUMP)  ; LAB_005cc597
    CMP byte ptr [EDX + 0x1],0x0        ; 005cc58b
    JNZ 0x005cc597                      ; 005cc58f
        ;   XREF to: 005cc597 (CONDITIONAL_JUMP)  ; LAB_005cc597
    MOV EAX,0x2                         ; 005cc591
    RET                                 ; 005cc596
    XOR EAX,EAX                         ; 005cc597
        ;   Label: LAB_005cc597
    RET                                 ; 005cc599

