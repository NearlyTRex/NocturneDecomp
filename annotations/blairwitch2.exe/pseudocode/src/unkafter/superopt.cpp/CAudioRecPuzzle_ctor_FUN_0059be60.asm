; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAudioRecPuzzle * unkafter_superopt_cpp_CAudioRecPuzzle_ctor_FUN_0059be60(CAudioRecPuzzle *this_ptr)
;
; Parameters:
; CAudioRecPuzzle * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   crt_memory.c___arrinit_FUN_005b7f5f
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   unkaddr_0059aa80.cpp_FUN_0059ab30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059be60
        ;   Label: unkafter_superopt.cpp_CAudioRecPuzzle_ctor_FUN_0059be60
    PUSH EAX                            ; 0059be64
    CALL unkaddr_0059aa80.cpp_FUN_0059ab30 ; 0059be65
        ;   XREF to: 0059ab30 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059aa80.cpp_FUN_0059ab30()
    ADD ESP,0x4                         ; 0059be6a
    ADD EAX,0x4                         ; 0059be6d
    PUSH EAX                            ; 0059be70
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 0059be71
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0059be76
    PUSH 0x5fe5f0                       ; 0059be79
    PUSH 0x1e                           ; 0059be7e
    ADD EAX,0x48                        ; 0059be80
    PUSH EAX                            ; 0059be83
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0059be84
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0059be89
    ADD EAX,0x528                       ; 0059be8c
    PUSH EAX                            ; 0059be91
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0059be92
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059be97
    ADD EAX,0x17c                       ; 0059be9a
    PUSH EAX                            ; 0059be9f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 0059bea0
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    SUB EAX,0x6f0                       ; 0059bea5
    ADD ESP,0x4                         ; 0059beaa
    MOV dword ptr [EAX],0x5fe524        ; 0059bead
    RET                                 ; 0059beb3

