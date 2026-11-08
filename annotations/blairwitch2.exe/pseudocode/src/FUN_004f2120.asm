; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f2120(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa120
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2120
        ;   Label: FUN_004f2120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f2121
    TEST byte ptr [ESP + 0xc],0x4       ; 004f2125
    JNZ 0x004f215d                      ; 004f212a
        ;   XREF to: 004f215d (CONDITIONAL_JUMP)  ; LAB_004f215d
    PUSH 0x0                            ; 004f212c
    ADD EBX,0x46c                       ; 004f212e
    PUSH EBX                            ; 004f2134
    CALL FUN_00438a70                   ; 004f2135
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 004f213a
    PUSH 0x1                            ; 004f213d
    LEA EBX,[EAX + 0xfffffb94]          ; 004f213f
    PUSH EBX                            ; 004f2145
    CALL FUN_00408930                   ; 004f2146
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004f214b
    MOV DL,byte ptr [ESP + 0xc]         ; 004f214e
    MOV EBX,EAX                         ; 004f2152
    TEST DL,0x2                         ; 004f2154
    JNZ 0x004f2178                      ; 004f2157
        ;   XREF to: 004f2178 (CONDITIONAL_JUMP)  ; LAB_004f2178
    MOV EAX,EBX                         ; 004f2159
    POP EBX                             ; 004f215b
    RET                                 ; 004f215c
    PUSH 0x5fa120                       ; 004f215d | DAT_005fa120
        ;   Label: LAB_004f215d
    PUSH EBX                            ; 004f2162
    CALL FUN_005b7fa7                   ; 004f2163
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004f2168
    PUSH EAX                            ; 004f216b
    CALL FUN_005b7fce                   ; 004f216c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004f2171
    MOV EAX,EBX                         ; 004f2174
    POP EBX                             ; 004f2176
    RET                                 ; 004f2177
    PUSH EAX                            ; 004f2178
        ;   Label: LAB_004f2178
    CALL FUN_005b7fdc                   ; 004f2179
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004f217e
    MOV EAX,EBX                         ; 004f2181
    POP EBX                             ; 004f2183
    RET                                 ; 004f2184

