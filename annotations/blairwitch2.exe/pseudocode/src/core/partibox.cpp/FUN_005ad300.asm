; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_partibox_cpp_FUN_005ad300(CBoxActor *param_1)
;
;
; Called Functions:
;   core_boxactor.cpp_FUN_0041c690
;   unkafter_superopt.cpp_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad300
        ;   Label: core_partibox.cpp_FUN_005ad300
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad301
    LEA EAX,[EBX + 0x154]               ; 005ad305
    PUSH EAX                            ; 005ad30b
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ad30c
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ad311
    LEA EAX,[EBX + 0x198]               ; 005ad314
    PUSH EAX                            ; 005ad31a
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ad31b
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ad320
    LEA EAX,[EBX + 0x1dc]               ; 005ad323
    PUSH EAX                            ; 005ad329
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ad32a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ad32f
    LEA EAX,[EBX + 0x220]               ; 005ad332
    PUSH EAX                            ; 005ad338
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ad339
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ad33e
    PUSH EBX                            ; 005ad341
    CALL core_boxactor.cpp_FUN_0041c690 ; 005ad342
        ;   XREF to: 0041c690 (UNCONDITIONAL_CALL)  ; int core_boxactor.cpp_FUN_0041c690(CBoxActor * this_ptr)
    MOV EAX,0x1                         ; 005ad347
    ADD ESP,0x4                         ; 005ad34c
    POP EBX                             ; 005ad34f
    RET                                 ; 005ad350

