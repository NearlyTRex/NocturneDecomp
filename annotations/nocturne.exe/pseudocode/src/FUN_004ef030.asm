; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ef030(int param_1)
;
;
; XREF[8]:
;   FUN_0048c980 at 0048c987
;   FUN_0048c9b0 at 0048c9b7
;   FUN_0048c9e0 at 0048c9e7
;   FUN_0048cb30 at 0048cb48
;   FUN_0048cba0 at 0048cba7
;   FUN_0048cbd0 at 0048cbd7
;   FUN_0048cc00 at 0048cc07
;   FUN_004b0a50 at 004b0a57
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a1034 = 004ef040
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ef030
        ;   Label: FUN_004ef030
    MOV dword ptr [EAX + 0x34],0x5a1034 ; 004ef034 | PTR_FUN_005a1034
    RET                                 ; 004ef03b

