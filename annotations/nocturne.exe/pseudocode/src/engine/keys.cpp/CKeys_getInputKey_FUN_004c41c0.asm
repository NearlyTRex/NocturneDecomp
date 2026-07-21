; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(void)
;
;
; XREF[5]:
;   FUN_0046f7e0 at 0046f918
;   FUN_0046fb40 at 0046fca6
;   FUN_0046fcd0 at 0046fe36
;   FUN_0046fe60 at 0046ffc6
;   FUN_00470eb0 at 0047119c
;
; Called Functions:
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 004c41c0
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
        ;   Label: engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
    AND EAX,0xff                        ; 004c41c5
    RET                                 ; 004c41ca

