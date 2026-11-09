; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_00541410(CDemonSet *param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0
;   core_setdir.cpp_FUN_00541350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541410
        ;   Label: core_setdir.cpp_FUN_00541410
    PUSH ESI                            ; 00541411
    PUSH EDI                            ; 00541412
    PUSH EBP                            ; 00541413
    MOV ESI,dword ptr [ESP + 0x14]      ; 00541414
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00541418
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054141c
    PUSH EDX                            ; 00541420
    PUSH ESI                            ; 00541421
    XOR EBX,EBX                         ; 00541422
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0 ; 00541424
        ;   XREF to: 005419e0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00541429
    MOV ECX,dword ptr [ESI + 0x15b428]  ; 0054142c
    MOV EDI,EAX                         ; 00541432
    TEST ECX,ECX                        ; 00541434
    JLE 0x0054144f                      ; 00541436
        ;   XREF to: 0054144f (CONDITIONAL_JUMP)  ; LAB_0054144f
    PUSH EBX                            ; 00541438
        ;   Label: LAB_00541438
    PUSH ESI                            ; 00541439
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0 ; 0054143a
        ;   XREF to: 005419e0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 0054143f
    CMP EAX,EDI                         ; 00541442
    JZ 0x00541456                       ; 00541444
        ;   XREF to: 00541456 (CONDITIONAL_JUMP)  ; LAB_00541456
    INC EBX                             ; 00541446
        ;   Label: LAB_00541446
    CMP EBX,dword ptr [ESI + 0x15b428]  ; 00541447
    JL 0x00541438                       ; 0054144d
        ;   XREF to: 00541438 (CONDITIONAL_JUMP)  ; LAB_00541438
    XOR EAX,EAX                         ; 0054144f
        ;   Label: LAB_0054144f
    POP EBP                             ; 00541451
    POP EDI                             ; 00541452
    POP ESI                             ; 00541453
    POP EBX                             ; 00541454
    RET                                 ; 00541455
    PUSH EBP                            ; 00541456
        ;   Label: LAB_00541456
    PUSH EBX                            ; 00541457
    PUSH ESI                            ; 00541458
    CALL core_setdir.cpp_FUN_00541350   ; 00541459
        ;   XREF to: 00541350 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00541350()
    ADD ESP,0xc                         ; 0054145e
    TEST EAX,EAX                        ; 00541461
    JZ 0x00541446                       ; 00541463
        ;   XREF to: 00541446 (CONDITIONAL_JUMP)  ; LAB_00541446
    MOV EAX,0x1                         ; 00541465
    POP EBP                             ; 0054146a
    POP EDI                             ; 0054146b
    POP ESI                             ; 0054146c
    POP EBX                             ; 0054146d
    RET                                 ; 0054146e

