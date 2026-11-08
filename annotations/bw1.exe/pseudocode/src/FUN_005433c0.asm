; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005433c0(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00544460 at 00545c9b
;   FUN_0054aa60 at 0054aa9e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005edfd5
;   undefined4 s_ust_specify_actor_name_005edfd5+1
;   undefined4 s_st_specify_actor_name_005edfd5+2
;   undefined4 s_t_specify_actor_name_005edfd5+3
;   TerminatedCString s_Actor_variable_s_not_def_005edfed
;   undefined4 DAT_005ee033
;   TerminatedCString s_Can_t_use_actor_specifie_005ee035
;   TerminatedCString s_Hero_doesn_t_exist_005ee063
;   TerminatedCString s_Actor_s_does_not_exist_005ee07a
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005ee095
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622580
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d2c900
;   ... and 6 more
;
; Called Functions:
;   FUN_00408830
;   FUN_0040c5d0
;   FUN_004aa1d0
;   FUN_0051b6c0
;   FUN_00543100
;   FUN_005bfb40
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005433c0
        ;   Label: FUN_005433c0
    PUSH ESI                            ; 005433c1
    PUSH EDI                            ; 005433c2
    PUSH EBP                            ; 005433c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005433c4
    XOR EDX,EDX                         ; 005433c8
    MOV dword ptr [0x01e818bc],EDX      ; 005433ca | DAT_01e818bc
    TEST EBX,EBX                        ; 005433d0
    JZ 0x005433f5                       ; 005433d2
        ;   XREF to: 005433f5 (CONDITIONAL_JUMP)  ; LAB_005433f5
    MOV AH,byte ptr [EBX]               ; 005433d4
    TEST AH,AH                          ; 005433d6
    JZ 0x005433f5                       ; 005433d8
        ;   XREF to: 005433f5 (CONDITIONAL_JUMP)  ; LAB_005433f5
    CMP AH,0x40                         ; 005433da
    JNZ 0x00543477                      ; 005433dd
        ;   XREF to: 00543477 (CONDITIONAL_JUMP)  ; LAB_00543477
    PUSH EBX                            ; 005433e3
    CALL FUN_00543100                   ; 005433e4
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; undefined FUN_00543100()
    ADD ESP,0x4                         ; 005433e9
    TEST EAX,EAX                        ; 005433ec
    JNZ 0x00543420                      ; 005433ee
        ;   XREF to: 00543420 (CONDITIONAL_JUMP)  ; LAB_00543420
    POP EBP                             ; 005433f0
    POP EDI                             ; 005433f1
    POP ESI                             ; 005433f2
    POP EBX                             ; 005433f3
    RET                                 ; 005433f4
    MOV ESI,0x5edfd5                    ; 005433f5 | = "Must specify actor name"
        ;   Label: LAB_005433f5
    MOV EDI,0x1e810b0                   ; 005433fa
    PUSH EDI                            ; 005433ff | DAT_01e810b0
    MOV AL,byte ptr [ESI]               ; 00543400 | = "Must specify actor name" | s_st_specify_actor_name_005edfd5+2
        ;   Label: LAB_00543400
    MOV byte ptr [EDI],AL               ; 00543402 | DAT_01e810b0 | DAT_01e810b2
    CMP AL,0x0                          ; 00543404
    JZ 0x00543418                       ; 00543406
        ;   XREF to: 00543418 (CONDITIONAL_JUMP)  ; LAB_00543418
    MOV AL,byte ptr [ESI + 0x1]         ; 00543408 | s_ust_specify_actor_name_005edfd5+1 | s_t_specify_actor_name_005edfd5+3
    ADD ESI,0x2                         ; 0054340b
    MOV byte ptr [EDI + 0x1],AL         ; 0054340e | DAT_01e810b1 | DAT_01e810b3
    ADD EDI,0x2                         ; 00543411
    CMP AL,0x0                          ; 00543414
    JNZ 0x00543400                      ; 00543416
        ;   XREF to: 00543400 (CONDITIONAL_JUMP)  ; LAB_00543400
    POP EDI                             ; 00543418
        ;   Label: LAB_00543418
    XOR EAX,EAX                         ; 00543419
    POP EBP                             ; 0054341b
    POP EDI                             ; 0054341c
    POP ESI                             ; 0054341d
    POP EBX                             ; 0054341e
    RET                                 ; 0054341f
    PUSH EBX                            ; 00543420
        ;   Label: LAB_00543420
    MOV EAX,[0x0061b4d0]                ; 00543421 | DAT_0061b4d0
    MOV EBP,0x1                         ; 00543426
    PUSH EAX                            ; 0054342b
    MOV dword ptr [0x01e818bc],EBP      ; 0054342c | DAT_01e818bc
    CALL FUN_004aa1d0                   ; 00543432
        ;   XREF to: 004aa1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa1d0()
    ADD ESP,0x8                         ; 00543437
    MOV ESI,EAX                         ; 0054343a
    TEST EAX,EAX                        ; 0054343c
    JZ 0x0054345d                       ; 0054343e
        ;   XREF to: 0054345d (CONDITIONAL_JUMP)  ; LAB_0054345d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00543440
        ;   Label: LAB_00543440
    PUSH EDX                            ; 00543444
    PUSH ESI                            ; 00543445
    CALL FUN_0040c5d0                   ; 00543446
        ;   XREF to: 0040c5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5d0()
    ADD ESP,0x8                         ; 0054344b
    TEST EAX,EAX                        ; 0054344e
    JZ 0x00543515                       ; 00543450
        ;   XREF to: 00543515 (CONDITIONAL_JUMP)  ; LAB_00543515
    MOV EAX,ESI                         ; 00543456
    POP EBP                             ; 00543458
    POP EDI                             ; 00543459
    POP ESI                             ; 0054345a
    POP EBX                             ; 0054345b
    RET                                 ; 0054345c
    PUSH EBX                            ; 0054345d
        ;   Label: LAB_0054345d
    PUSH 0x5edfed                       ; 0054345e | = "Actor variable %s not defined, or doe..."
    PUSH 0x1e810b0                      ; 00543463
    CALL FUN_005bfb40                   ; 00543468
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0054346d
    XOR EAX,EAX                         ; 00543470
    POP EBP                             ; 00543472
    POP EDI                             ; 00543473
    POP ESI                             ; 00543474
    POP EBX                             ; 00543475
    RET                                 ; 00543476
    PUSH 0x5ee033                       ; 00543477 | DAT_005ee033
        ;   Label: LAB_00543477
    PUSH EBX                            ; 0054347c
    CALL FUN_005c04e0                   ; 0054347d
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00543482
    TEST EAX,EAX                        ; 00543485
    JNZ 0x005434e1                      ; 00543487
        ;   XREF to: 005434e1 (CONDITIONAL_JUMP)  ; LAB_005434e1
    MOV EAX,[0x00622580]                ; 00543489 | DAT_00622580
    CMP dword ptr [EAX],0x0             ; 0054348e | DAT_01d51c20
    JNZ 0x005434c8                      ; 00543491
        ;   XREF to: 005434c8 (CONDITIONAL_JUMP)  ; LAB_005434c8
    MOV ESI,dword ptr [0x01d06ab4]      ; 00543493 | DAT_01d06ab4
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 00543499
    TEST ESI,ESI                        ; 005434a0
    JNZ 0x00543440                      ; 005434a2
        ;   XREF to: 00543440 (CONDITIONAL_JUMP)  ; LAB_00543440
    PUSH 0x5ee063                       ; 005434a4 | = "Hero doesn't exist!!?!"
    MOV EDI,0x1                         ; 005434a9
    PUSH 0x1e810b0                      ; 005434ae
    MOV dword ptr [0x01e818bc],EDI      ; 005434b3 | DAT_01e818bc
    CALL FUN_005bfb40                   ; 005434b9
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 005434be
    XOR EAX,EAX                         ; 005434c1
    POP EBP                             ; 005434c3
    POP EDI                             ; 005434c4
    POP ESI                             ; 005434c5
    POP EBX                             ; 005434c6
    RET                                 ; 005434c7
    PUSH 0x5ee035                       ; 005434c8 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_005434c8
    PUSH 0x1e810b0                      ; 005434cd
    CALL FUN_005bfb40                   ; 005434d2
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 005434d7
    XOR EAX,EAX                         ; 005434da
    POP EBP                             ; 005434dc
    POP EDI                             ; 005434dd
    POP ESI                             ; 005434de
    POP EBX                             ; 005434df
    RET                                 ; 005434e0
    PUSH EBX                            ; 005434e1
        ;   Label: LAB_005434e1
    MOV ECX,dword ptr [0x0061f650]      ; 005434e2 | DAT_0061f650
    PUSH ECX                            ; 005434e8 | DAT_01d2c900
    CALL FUN_0051b6c0                   ; 005434e9
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6c0()
    ADD ESP,0x8                         ; 005434ee
    MOV ESI,EAX                         ; 005434f1
    TEST EAX,EAX                        ; 005434f3
    JNZ 0x00543440                      ; 005434f5
        ;   XREF to: 00543440 (CONDITIONAL_JUMP)  ; LAB_00543440
    PUSH EBX                            ; 005434fb
    PUSH 0x5ee07a                       ; 005434fc | = "Actor \"%s\" does not exist."
    PUSH 0x1e810b0                      ; 00543501
    CALL FUN_005bfb40                   ; 00543506
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0054350b
    XOR EAX,EAX                         ; 0054350e
    POP EBP                             ; 00543510
    POP EDI                             ; 00543511
    POP ESI                             ; 00543512
    POP EBX                             ; 00543513
    RET                                 ; 00543514
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00543515
        ;   Label: LAB_00543515
    PUSH ECX                            ; 00543519
    PUSH ESI                            ; 0054351a
    CALL FUN_00408830                   ; 0054351b
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 00543520
    PUSH EAX                            ; 00543523
    PUSH EBX                            ; 00543524
    PUSH 0x5ee095                       ; 00543525 | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1e810b0                      ; 0054352a
    CALL FUN_005bfb40                   ; 0054352f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 00543534
    XOR EAX,EAX                         ; 00543537
    POP EBP                             ; 00543539
    POP EDI                             ; 0054353a
    POP ESI                             ; 0054353b
    POP EBX                             ; 0054353c
    RET                                 ; 0054353d

