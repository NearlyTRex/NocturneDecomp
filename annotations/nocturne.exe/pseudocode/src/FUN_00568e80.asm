; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568e80(undefined4 param_1)
;
;
; XREF[25]:
;   FUN_005636d0 at 005636f6
;   FUN_00563a50 at 00563a76
;   FUN_00564570 at 005645b1
;   FUN_005653e0 at 00565434
;   FUN_005656a4 at 00565711
;   FUN_0056582c at 00565872
;   FUN_00565d00 at 00565d2d
;   FUN_00566cc0 at 00566d0a
;   FUN_00568560 at 0056860a
;   FUN_00568890 at 00568915
;   ... and 15 more
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

