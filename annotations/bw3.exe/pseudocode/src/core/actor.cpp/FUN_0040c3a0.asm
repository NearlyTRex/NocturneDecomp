; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_0040c3a0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[104]:
;   FUN_004080e0 at 004080f5
;   FUN_0040dda0 at 0040ddbb
;   FUN_0040e560 at 0040e57b
;   FUN_0040ea60 at 0040ea7b
;   FUN_0040ece0 at 0040ecfb
;   FUN_0040f440 at 0040f45b
;   FUN_0040f720 at 0040f73b
;   FUN_0040f990 at 0040f9ab
;   FUN_00410390 at 004103ab
;   FUN_00414520 at 0041453b
;   ... and 94 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b5daf
;   TerminatedCString s_Too_many_actor_types_005b5dc1
;   undefined4 DAT_006074b8
;   undefined4 DAT_007df9c4
;   undefined4 DAT_007df9c8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_005a35a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c3a0
        ;   Label: FUN_0040c3a0
    PUSH ESI                            ; 0040c3a1
    PUSH EDI                            ; 0040c3a2
    PUSH EBP                            ; 0040c3a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0040c3a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040c3a8
    MOV EDI,EBP                         ; 0040c3ac
    PUSH EDI                            ; 0040c3ae
    MOV AL,byte ptr [ESI]               ; 0040c3af
        ;   Label: LAB_0040c3af
    MOV byte ptr [EDI],AL               ; 0040c3b1
    CMP AL,0x0                          ; 0040c3b3
    JZ 0x0040c3c7                       ; 0040c3b5
        ;   XREF to: 0040c3c7 (CONDITIONAL_JUMP)  ; LAB_0040c3c7
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c3b7
    ADD ESI,0x2                         ; 0040c3ba
    MOV byte ptr [EDI + 0x1],AL         ; 0040c3bd
    ADD EDI,0x2                         ; 0040c3c0
    CMP AL,0x0                          ; 0040c3c3
    JNZ 0x0040c3af                      ; 0040c3c5
        ;   XREF to: 0040c3af (CONDITIONAL_JUMP)  ; LAB_0040c3af
    POP EDI                             ; 0040c3c7
        ;   Label: LAB_0040c3c7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040c3c8
    MOV dword ptr [EBP + 0x2c],EAX      ; 0040c3cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040c3cf
    MOV dword ptr [EBP + 0x30],EAX      ; 0040c3d3
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040c3d6
    XOR EBX,EBX                         ; 0040c3da
    MOV dword ptr [EBP + 0x34],EAX      ; 0040c3dc
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040c3df
    MOV ESI,EBP                         ; 0040c3e3
    MOV dword ptr [EBP + 0x28],EAX      ; 0040c3e5
    XOR EAX,EAX                         ; 0040c3e8
        ;   Label: LAB_0040c3e8
    MOV AL,byte ptr [ESI]               ; 0040c3ea
    INC ESI                             ; 0040c3ec
    TEST EAX,EAX                        ; 0040c3ed
    JNZ 0x0040c41e                      ; 0040c3ef
        ;   XREF to: 0040c41e (CONDITIONAL_JUMP)  ; LAB_0040c41e
    MOV EDX,dword ptr [0x007df9c4]      ; 0040c3f1 | DAT_007df9c4
    MOV dword ptr [EBP + 0x38],EBX      ; 0040c3f7
    CMP EDX,0xc8                        ; 0040c3fa
    JGE 0x0040c44f                      ; 0040c400
        ;   XREF to: 0040c44f (CONDITIONAL_JUMP)  ; LAB_0040c44f
    MOV EAX,[0x007df9c4]                ; 0040c402 | DAT_007df9c4
        ;   Label: LAB_0040c402
    LEA ESI,[EAX + 0x1]                 ; 0040c407
    MOV dword ptr [EAX*0x4 + 0x7df9c8],EBP ; 0040c40a | DAT_007df9c8
    MOV dword ptr [0x007df9c4],ESI      ; 0040c411 | DAT_007df9c4
    MOV EAX,EBP                         ; 0040c417
    POP EBP                             ; 0040c419
    POP EDI                             ; 0040c41a
    POP ESI                             ; 0040c41b
    POP EBX                             ; 0040c41c
    RET                                 ; 0040c41d
    MOV DL,AL                           ; 0040c41e
        ;   Label: LAB_0040c41e
    INC DL                              ; 0040c420
    AND EDX,0xff                        ; 0040c422
    TEST byte ptr [EDX + 0x6074b8],0xe0 ; 0040c428 | DAT_006074b8
    JZ 0x0040c3e8                       ; 0040c42f
        ;   XREF to: 0040c3e8 (CONDITIONAL_JUMP)  ; LAB_0040c3e8
    PUSH EAX                            ; 0040c431
    CALL FUN_005a35a0                   ; 0040c432
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a35a0()
    MOV EDX,EBX                         ; 0040c437
    SHL EDX,0x7                         ; 0040c439
    SHR EBX,0x19                        ; 0040c43c
    ADD EDX,EBX                         ; 0040c43f
    MOV EBX,EAX                         ; 0040c441
    SHL EBX,0x11                        ; 0040c443
    ADD EBX,EDX                         ; 0040c446
    ADD ESP,0x4                         ; 0040c448
    ADD EBX,EAX                         ; 0040c44b
    JMP 0x0040c3e8                      ; 0040c44d
        ;   XREF to: 0040c3e8 (UNCONDITIONAL_JUMP)  ; LAB_0040c3e8
    MOV ECX,0x5b5daf                    ; 0040c44f | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040c44f
    MOV EBX,0xa7b                       ; 0040c454
    PUSH 0x5b5dc1                       ; 0040c459 | = "Too many actor types!"
    MOV dword ptr [0x01d71de0],ECX      ; 0040c45e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0040c464 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0040c46a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0040c46f
    JMP 0x0040c402                      ; 0040c472
        ;   XREF to: 0040c402 (UNCONDITIONAL_JUMP)  ; LAB_0040c402

