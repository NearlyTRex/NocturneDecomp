; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_005125a0 at 005128c2
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005086b6
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
;   core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514340
        ;   Label: core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00514340
    PUSH ESI                            ; 00514341
    PUSH EDI                            ; 00514342
    MOV ESI,dword ptr [ESP + 0x10]      ; 00514343
    MOV EDI,dword ptr [ESP + 0x14]      ; 00514347
    MOV EDX,dword ptr [ESI + 0x15b028]  ; 0051434b
    XOR EBX,EBX                         ; 00514351
    TEST EDX,EDX                        ; 00514353
    JLE 0x0051436f                      ; 00514355
        ;   XREF to: 0051436f (CONDITIONAL_JUMP)  ; LAB_0051436f
    PUSH EDI                            ; 00514357
        ;   Label: LAB_00514357
    PUSH EBX                            ; 00514358
    PUSH ESI                            ; 00514359
    CALL core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80 ; 0051435a
        ;   XREF to: 00513d80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_isPointInVdirBox_FUN_00513d80()
    ADD ESP,0xc                         ; 0051435f
    TEST EAX,EAX                        ; 00514362
    JNZ 0x00514378                      ; 00514364
        ;   XREF to: 00514378 (CONDITIONAL_JUMP)  ; LAB_00514378
    INC EBX                             ; 00514366
    CMP EBX,dword ptr [ESI + 0x15b028]  ; 00514367
    JL 0x00514357                       ; 0051436d
        ;   XREF to: 00514357 (CONDITIONAL_JUMP)  ; LAB_00514357
    MOV EAX,0xffffffff                  ; 0051436f
        ;   Label: LAB_0051436f
    POP EDI                             ; 00514374
    POP ESI                             ; 00514375
    POP EBX                             ; 00514376
    RET                                 ; 00514377
    PUSH EBX                            ; 00514378
        ;   Label: LAB_00514378
    PUSH ESI                            ; 00514379
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300 ; 0051437a
        ;   XREF to: 00514300 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300()
    ADD ESP,0x8                         ; 0051437f
    POP EDI                             ; 00514382
    POP ESI                             ; 00514383
    POP EBX                             ; 00514384
    RET                                 ; 00514385

