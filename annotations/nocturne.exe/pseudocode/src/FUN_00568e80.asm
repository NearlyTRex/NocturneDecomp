; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568e80(undefined4 param_1)
;
;
; XREF[26]:
;   FUN_005653e0 at 00565434
;   FUN_005656a4 at 00565711
;   FUN_00568560 at 0056860a
;   FUN_00568890 at 00568915
;   FUN_005689c0 at 005689d5
;   FUN_00568a50 at 00568a69
;   FUN_00568e90 at 00568e92
;   FUN_00568e9c at 00568e9e
;   FUN_00568f70 at 00568f89
;   FUN_00569fb0 at 00569fcd
;   ... and 16 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 00568e80 | PTR_FUN_005c1abc
        ;   Label: FUN_00568e80
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e86
    MOV dword ptr [EAX + 0x4],EDX       ; 00568e8a
    RET                                 ; 00568e8d

