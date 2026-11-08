; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581990(HANDLE param_1)
;
;
; XREF[4]:
;   FUN_00556fd0 at 00557000
;   FUN_00559120 at 0055918b
;   FUN_00570fb0 at 00571025
;   FUN_00571f10 at 00571f86
;
; Referenced Globals:
;   void* PTR_ReleaseMutex_005b361c = 001b410c
;
; Called Functions:
;   ReleaseMutex
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00581990
        ;   Label: FUN_00581990
    TEST EAX,EAX                        ; 00581994
    JNZ 0x00581999                      ; 00581996
        ;   XREF to: 00581999 (CONDITIONAL_JUMP)  ; LAB_00581999
    RET                                 ; 00581998
    PUSH EAX                            ; 00581999
        ;   Label: LAB_00581999
    CALL dword ptr CS:[0x5b361c]        ; 0058199a | PTR_ReleaseMutex_005b361c
    RET                                 ; 005819a1

