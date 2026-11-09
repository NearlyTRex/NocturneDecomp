; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c6488(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c85c0 at 005c85c6
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005c6488 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: crt_unknown.c_FUN_005c6488
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c648e
    MOV dword ptr [EAX + 0x8],EDX       ; 005c6492
    RET                                 ; 005c6495

