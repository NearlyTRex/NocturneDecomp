; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLendScene(void)
;
;
; XREF[2]:
;   APIDLLlockFrame at 10002d99
;   APIDLLsetFogColor at 10004a48
;
; Referenced Globals:
;   undefined4 DAT_100141e0
;   undefined4 DAT_10014204
;
; Called Functions:
;   FUN_10002d50
;   FUN_100047b0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 10002d10 | DAT_10014204
        ;   Label: APIDLLendScene
    JNZ 0x10002d1c                      ; 10002d17
        ;   XREF to: 10002d1c (CONDITIONAL_JUMP)  ; LAB_10002d1c
    XOR EAX,EAX                         ; 10002d19
    RET                                 ; 10002d1b
    CALL FUN_10002d50                   ; 10002d1c
        ;   XREF to: 10002d50 (UNCONDITIONAL_CALL)  ; undefined FUN_10002d50()
        ;   Label: LAB_10002d1c
    CALL FUN_100047b0                   ; 10002d21
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; undefined FUN_100047b0()
    MOV dword ptr [0x10014204],0x0      ; 10002d26 | DAT_10014204
    MOV ECX,dword ptr [0x100141e0]      ; 10002d30 | DAT_100141e0
    PUSH ECX                            ; 10002d36
    MOV EAX,dword ptr [ECX]             ; 10002d37
    CALL dword ptr [EAX + 0x28]         ; 10002d39
    CMP EAX,0x1                         ; 10002d3c
    SBB EAX,EAX                         ; 10002d3f
    NEG EAX                             ; 10002d41
    RET                                 ; 10002d43

