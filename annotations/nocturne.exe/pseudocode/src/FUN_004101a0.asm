; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004101a0(void)
;
;
; Called Functions:
;   core_baron.cpp_CBaron_ctor_FUN_004101d0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fb3c                        ; 004101a0
        ;   Label: FUN_004101a0
    CALL FUN_0056497c                   ; 004101a5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004101aa
    TEST EAX,EAX                        ; 004101ad
    JNZ 0x004101b2                      ; 004101af
        ;   XREF to: 004101b2 (CONDITIONAL_JUMP)  ; LAB_004101b2
    RET                                 ; 004101b1
    PUSH EAX                            ; 004101b2
        ;   Label: LAB_004101b2
    CALL core_baron.cpp_CBaron_ctor_FUN_004101d0 ; 004101b3
        ;   XREF to: 004101d0 (UNCONDITIONAL_CALL)  ; undefined core_baron.cpp_CBaron_ctor_FUN_004101d0()
    ADD ESP,0x4                         ; 004101b8
    RET                                 ; 004101bb

