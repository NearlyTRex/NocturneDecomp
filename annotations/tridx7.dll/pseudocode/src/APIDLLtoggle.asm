; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl APIDLLtoggle(void)
;
;
; XREF[1]:
;   APIDLLsetVideoMode at 10002b03
;
; Referenced Globals:
;   undefined4 DAT_1001418c
;   undefined4 DAT_100141f8
;   undefined4 DAT_10226914
;
; *****************************************************************************

section .text

    CMP dword ptr [0x1001418c],0x0      ; 100024b0 | DAT_1001418c
        ;   Label: APIDLLtoggle
    JZ 0x100024f0                       ; 100024b7
        ;   XREF to: 100024f0 (CONDITIONAL_JUMP)  ; LAB_100024f0
    CMP dword ptr [0x100141f8],0x0      ; 100024b9 | DAT_100141f8
    JNZ 0x100024f0                      ; 100024c0
        ;   XREF to: 100024f0 (CONDITIONAL_JUMP)  ; LAB_100024f0
    MOV EAX,[0x10226914]                ; 100024c2 | DAT_10226914
    CMP dword ptr [EAX],0x0             ; 100024c7
    JZ 0x100024e1                       ; 100024ca
        ;   XREF to: 100024e1 (CONDITIONAL_JUMP)  ; LAB_100024e1
    PUSH 0x1                            ; 100024cc
    MOV EAX,[0x1001418c]                ; 100024ce | DAT_1001418c
    PUSH 0x0                            ; 100024d3
    PUSH EAX                            ; 100024d5
    MOV EAX,dword ptr [EAX]             ; 100024d6
    CALL dword ptr [EAX + 0x2c]         ; 100024d8
    MOV EAX,0x1                         ; 100024db
    RET                                 ; 100024e0
    PUSH 0x0                            ; 100024e1
        ;   Label: LAB_100024e1
    MOV EAX,[0x1001418c]                ; 100024e3 | DAT_1001418c
    PUSH 0x0                            ; 100024e8
    PUSH EAX                            ; 100024ea
    MOV EAX,dword ptr [EAX]             ; 100024eb
    CALL dword ptr [EAX + 0x2c]         ; 100024ed
    MOV EAX,0x1                         ; 100024f0
        ;   Label: LAB_100024f0
    RET                                 ; 100024f5

