; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLsync_FUN_10004a60(void)
;
;
; Called Functions:
;   dll_dx7.cpp_flushBatch_FUN_100047b0
;
; *****************************************************************************

section .text

    CALL dll_dx7.cpp_flushBatch_FUN_100047b0 ; 10004a60
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_flushBatch_FUN_100047b0()
        ;   Label: dll_dx7.cpp_APIDLLsync_FUN_10004a60
    MOV EAX,0x1                         ; 10004a65
    RET                                 ; 10004a6a

