; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100047b0(void)
;
;
; XREF[7]:
;   APIDLLdrawPolyList at 10004ff7
;   APIDLLdrawPolyList2 at 10005267
;   APIDLLdrawPolygon2 at 1000448d
;   APIDLLendScene at 10002d21
;   APIDLLsync at 10004a60
;   FUN_100037e0 at 10003810
;   FUN_10003f10 at 10003f3b
;
; Referenced Globals:
;   undefined4 DAT_100141e0
;   undefined4 DAT_10014204
;   undefined4 DAT_10014228
;   undefined4 DAT_1001422c
;   undefined4 DAT_1013b8d8
;   undefined4 DAT_10238910
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 100047b0 | DAT_10014204
        ;   Label: FUN_100047b0
    PUSH ESI                            ; 100047b7
    JZ 0x100047fd                       ; 100047b8
        ;   XREF to: 100047fd (CONDITIONAL_JUMP)  ; LAB_100047fd
    MOV EAX,[0x10014228]                ; 100047ba | DAT_10014228
    TEST EAX,EAX                        ; 100047bf
    JZ 0x100047fd                       ; 100047c1
        ;   XREF to: 100047fd (CONDITIONAL_JUMP)  ; LAB_100047fd
    PUSH 0x1c                           ; 100047c3
    MOV ECX,dword ptr [0x1001422c]      ; 100047c5 | DAT_1001422c
    PUSH ECX                            ; 100047cb
    PUSH 0x10238910                     ; 100047cc | DAT_10238910
    PUSH EAX                            ; 100047d1
    PUSH 0x1013b8d8                     ; 100047d2 | DAT_1013b8d8
    PUSH 0x1c4                          ; 100047d7
    MOV EAX,[0x100141e0]                ; 100047dc | DAT_100141e0
    MOV ESI,dword ptr [EAX]             ; 100047e1
    PUSH 0x4                            ; 100047e3
    PUSH EAX                            ; 100047e5
    CALL dword ptr [ESI + 0x74]         ; 100047e6
    MOV dword ptr [0x10014228],0x0      ; 100047e9 | DAT_10014228
    MOV dword ptr [0x1001422c],0x0      ; 100047f3 | DAT_1001422c
    POP ESI                             ; 100047fd
        ;   Label: LAB_100047fd
    RET                                 ; 100047fe

