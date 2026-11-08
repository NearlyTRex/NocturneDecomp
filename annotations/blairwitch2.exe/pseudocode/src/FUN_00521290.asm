; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521290(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00522350 at 00523de5
;   FUN_00529750 at 0052978e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005e2cc9
;   undefined4 s_ust_specify_actor_name_005e2cc9+1
;   undefined4 s_st_specify_actor_name_005e2cc9+2
;   undefined4 s_t_specify_actor_name_005e2cc9+3
;   TerminatedCString s_Actor_variable_s_not_def_005e2ce1
;   undefined4 DAT_005e2d27
;   TerminatedCString s_Can_t_use_actor_specifie_005e2d29
;   TerminatedCString s_Hero_doesn_t_exist_005e2d57
;   TerminatedCString s_Actor_s_does_not_exist_005e2d6e
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005e2d89
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   undefined4 DAT_0061b120
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d34cb0
;   ... and 5 more
;
; Called Functions:
;   FUN_00408a50
;   FUN_0040c8c0
;   FUN_00491860
;   FUN_004fc740
;   FUN_00520fd0
;   FUN_005b7790
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521290
        ;   Label: FUN_00521290
    PUSH ESI                            ; 00521291
    PUSH EDI                            ; 00521292
    PUSH EBP                            ; 00521293
    MOV EBX,dword ptr [ESP + 0x14]      ; 00521294
    XOR EDX,EDX                         ; 00521298
    MOV dword ptr [0x01e6590c],EDX      ; 0052129a | DAT_01e6590c
    TEST EBX,EBX                        ; 005212a0
    JZ 0x005212c5                       ; 005212a2
        ;   XREF to: 005212c5 (CONDITIONAL_JUMP)  ; LAB_005212c5
    MOV AH,byte ptr [EBX]               ; 005212a4
    TEST AH,AH                          ; 005212a6
    JZ 0x005212c5                       ; 005212a8
        ;   XREF to: 005212c5 (CONDITIONAL_JUMP)  ; LAB_005212c5
    CMP AH,0x40                         ; 005212aa
    JNZ 0x00521347                      ; 005212ad
        ;   XREF to: 00521347 (CONDITIONAL_JUMP)  ; LAB_00521347
    PUSH EBX                            ; 005212b3
    CALL FUN_00520fd0                   ; 005212b4
        ;   XREF to: 00520fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00520fd0()
    ADD ESP,0x4                         ; 005212b9
    TEST EAX,EAX                        ; 005212bc
    JNZ 0x005212f0                      ; 005212be
        ;   XREF to: 005212f0 (CONDITIONAL_JUMP)  ; LAB_005212f0
    POP EBP                             ; 005212c0
    POP EDI                             ; 005212c1
    POP ESI                             ; 005212c2
    POP EBX                             ; 005212c3
    RET                                 ; 005212c4
    MOV ESI,0x5e2cc9                    ; 005212c5 | = "Must specify actor name"
        ;   Label: LAB_005212c5
    MOV EDI,0x1e65100                   ; 005212ca
    PUSH EDI                            ; 005212cf | DAT_01e65100
    MOV AL,byte ptr [ESI]               ; 005212d0 | = "Must specify actor name" | s_st_specify_actor_name_005e2cc9+2
        ;   Label: LAB_005212d0
    MOV byte ptr [EDI],AL               ; 005212d2 | DAT_01e65100 | DAT_01e65102
    CMP AL,0x0                          ; 005212d4
    JZ 0x005212e8                       ; 005212d6
        ;   XREF to: 005212e8 (CONDITIONAL_JUMP)  ; LAB_005212e8
    MOV AL,byte ptr [ESI + 0x1]         ; 005212d8 | s_ust_specify_actor_name_005e2cc9+1 | s_t_specify_actor_name_005e2cc9+3
    ADD ESI,0x2                         ; 005212db
    MOV byte ptr [EDI + 0x1],AL         ; 005212de | DAT_01e65101 | DAT_01e65103
    ADD EDI,0x2                         ; 005212e1
    CMP AL,0x0                          ; 005212e4
    JNZ 0x005212d0                      ; 005212e6
        ;   XREF to: 005212d0 (CONDITIONAL_JUMP)  ; LAB_005212d0
    POP EDI                             ; 005212e8
        ;   Label: LAB_005212e8
    XOR EAX,EAX                         ; 005212e9
    POP EBP                             ; 005212eb
    POP EDI                             ; 005212ec
    POP ESI                             ; 005212ed
    POP EBX                             ; 005212ee
    RET                                 ; 005212ef
    PUSH EBX                            ; 005212f0
        ;   Label: LAB_005212f0
    MOV EAX,[0x006141f0]                ; 005212f1 | DAT_006141f0
    MOV EBP,0x1                         ; 005212f6
    PUSH EAX                            ; 005212fb
    MOV dword ptr [0x01e6590c],EBP      ; 005212fc | DAT_01e6590c
    CALL FUN_00491860                   ; 00521302
        ;   XREF to: 00491860 (UNCONDITIONAL_CALL)  ; undefined FUN_00491860()
    ADD ESP,0x8                         ; 00521307
    MOV ESI,EAX                         ; 0052130a
    TEST EAX,EAX                        ; 0052130c
    JZ 0x0052132d                       ; 0052130e
        ;   XREF to: 0052132d (CONDITIONAL_JUMP)  ; LAB_0052132d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00521310
        ;   Label: LAB_00521310
    PUSH EDX                            ; 00521314
    PUSH ESI                            ; 00521315
    CALL FUN_0040c8c0                   ; 00521316
        ;   XREF to: 0040c8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8c0()
    ADD ESP,0x8                         ; 0052131b
    TEST EAX,EAX                        ; 0052131e
    JZ 0x005213e5                       ; 00521320
        ;   XREF to: 005213e5 (CONDITIONAL_JUMP)  ; LAB_005213e5
    MOV EAX,ESI                         ; 00521326
    POP EBP                             ; 00521328
    POP EDI                             ; 00521329
    POP ESI                             ; 0052132a
    POP EBX                             ; 0052132b
    RET                                 ; 0052132c
    PUSH EBX                            ; 0052132d
        ;   Label: LAB_0052132d
    PUSH 0x5e2ce1                       ; 0052132e | = "Actor variable %s not defined, or doe..."
    PUSH 0x1e65100                      ; 00521333
    CALL FUN_005b7790                   ; 00521338
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0052133d
    XOR EAX,EAX                         ; 00521340
    POP EBP                             ; 00521342
    POP EDI                             ; 00521343
    POP ESI                             ; 00521344
    POP EBX                             ; 00521345
    RET                                 ; 00521346
    PUSH 0x5e2d27                       ; 00521347 | DAT_005e2d27
        ;   Label: LAB_00521347
    PUSH EBX                            ; 0052134c
    CALL FUN_005b8130                   ; 0052134d
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00521352
    TEST EAX,EAX                        ; 00521355
    JNZ 0x005213b1                      ; 00521357
        ;   XREF to: 005213b1 (CONDITIONAL_JUMP)  ; LAB_005213b1
    MOV EAX,[0x0061b120]                ; 00521359 | DAT_0061b120
    CMP dword ptr [EAX],0x0             ; 0052135e | DAT_01d34cb0
    JNZ 0x00521398                      ; 00521361
        ;   XREF to: 00521398 (CONDITIONAL_JUMP)  ; LAB_00521398
    MOV ESI,dword ptr [0x01cedef4]      ; 00521363 | DAT_01cedef4
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 00521369
    TEST ESI,ESI                        ; 00521370
    JNZ 0x00521310                      ; 00521372
        ;   XREF to: 00521310 (CONDITIONAL_JUMP)  ; LAB_00521310
    PUSH 0x5e2d57                       ; 00521374 | = "Hero doesn't exist!!?!"
    MOV EDI,0x1                         ; 00521379
    PUSH 0x1e65100                      ; 0052137e
    MOV dword ptr [0x01e6590c],EDI      ; 00521383 | DAT_01e6590c
    CALL FUN_005b7790                   ; 00521389
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 0052138e
    XOR EAX,EAX                         ; 00521391
    POP EBP                             ; 00521393
    POP EDI                             ; 00521394
    POP ESI                             ; 00521395
    POP EBX                             ; 00521396
    RET                                 ; 00521397
    PUSH 0x5e2d29                       ; 00521398 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_00521398
    PUSH 0x1e65100                      ; 0052139d
    CALL FUN_005b7790                   ; 005213a2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 005213a7
    XOR EAX,EAX                         ; 005213aa
    POP EBP                             ; 005213ac
    POP EDI                             ; 005213ad
    POP ESI                             ; 005213ae
    POP EBX                             ; 005213af
    RET                                 ; 005213b0
    PUSH EBX                            ; 005213b1
        ;   Label: LAB_005213b1
    MOV ECX,dword ptr [0x00618170]      ; 005213b2 | DAT_00618170
    PUSH ECX                            ; 005213b8
    CALL FUN_004fc740                   ; 005213b9
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc740()
    ADD ESP,0x8                         ; 005213be
    MOV ESI,EAX                         ; 005213c1
    TEST EAX,EAX                        ; 005213c3
    JNZ 0x00521310                      ; 005213c5
        ;   XREF to: 00521310 (CONDITIONAL_JUMP)  ; LAB_00521310
    PUSH EBX                            ; 005213cb
    PUSH 0x5e2d6e                       ; 005213cc | = "Actor \"%s\" does not exist."
    PUSH 0x1e65100                      ; 005213d1
    CALL FUN_005b7790                   ; 005213d6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 005213db
    XOR EAX,EAX                         ; 005213de
    POP EBP                             ; 005213e0
    POP EDI                             ; 005213e1
    POP ESI                             ; 005213e2
    POP EBX                             ; 005213e3
    RET                                 ; 005213e4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005213e5
        ;   Label: LAB_005213e5
    PUSH ECX                            ; 005213e9
    PUSH ESI                            ; 005213ea
    CALL FUN_00408a50                   ; 005213eb
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a50()
    ADD ESP,0x4                         ; 005213f0
    PUSH EAX                            ; 005213f3
    PUSH EBX                            ; 005213f4
    PUSH 0x5e2d89                       ; 005213f5 | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1e65100                      ; 005213fa
    CALL FUN_005b7790                   ; 005213ff
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x14                        ; 00521404
    XOR EAX,EAX                         ; 00521407
    POP EBP                             ; 00521409
    POP EDI                             ; 0052140a
    POP ESI                             ; 0052140b
    POP EBX                             ; 0052140c
    RET                                 ; 0052140d

