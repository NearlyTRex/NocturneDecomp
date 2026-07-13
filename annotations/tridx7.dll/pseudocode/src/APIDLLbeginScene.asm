; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLbeginScene(void)
;
;
; XREF[1]:
;   APIDLLsetFogColor at 10004a16
;
; Referenced Globals:
;   undefined4 DAT_100141e0
;   undefined4 DAT_10014204
;
; *****************************************************************************

section .text

    CMP dword ptr [0x10014204],0x0      ; 10002ce0 | DAT_10014204
        ;   Label: APIDLLbeginScene
    JZ 0x10002cec                       ; 10002ce7
        ;   XREF to: 10002cec (CONDITIONAL_JUMP)  ; LAB_10002cec
    XOR EAX,EAX                         ; 10002ce9
    RET                                 ; 10002ceb
    MOV EAX,[0x100141e0]                ; 10002cec | DAT_100141e0
        ;   Label: LAB_10002cec
    PUSH EAX                            ; 10002cf1
    MOV EAX,dword ptr [EAX]             ; 10002cf2
    CALL dword ptr [EAX + 0x24]         ; 10002cf4
    TEST EAX,EAX                        ; 10002cf7
    JZ 0x10002cfe                       ; 10002cf9
        ;   XREF to: 10002cfe (CONDITIONAL_JUMP)  ; LAB_10002cfe
    XOR EAX,EAX                         ; 10002cfb
    RET                                 ; 10002cfd
    MOV dword ptr [0x10014204],0x1      ; 10002cfe | DAT_10014204
        ;   Label: LAB_10002cfe
    MOV EAX,0x1                         ; 10002d08
    RET                                 ; 10002d0d

