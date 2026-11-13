; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005820a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_01c50930
;   undefined4 DAT_01c50934
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005820a0
        ;   Label: engine_special.cpp_FUN_005820a0
    CMP dword ptr [0x01c50948],0x0      ; 005820a1 | DAT_01c50948
    JNZ 0x005820ae                      ; 005820a8
        ;   XREF to: 005820ae (CONDITIONAL_JUMP)  ; LAB_005820ae
    XOR EAX,EAX                         ; 005820aa
    POP EBP                             ; 005820ac
    RET                                 ; 005820ad
    PUSH EDI                            ; 005820ae
        ;   Label: LAB_005820ae
    PUSH ESI                            ; 005820af
    PUSH EBX                            ; 005820b0
    MOV ECX,dword ptr [0x01c50934]      ; 005820b1 | DAT_01c50934
    PUSH ECX                            ; 005820b7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005820b8
    PUSH EBX                            ; 005820bc
    MOV ESI,dword ptr [0x01c50930]      ; 005820bd | DAT_01c50930
    PUSH ESI                            ; 005820c3
    MOV EDI,dword ptr [0x0061b4a8]      ; 005820c4 | DAT_0061b4a8
    PUSH EDI                            ; 005820ca
    MOV EBP,dword ptr [ESP + 0x24]      ; 005820cb
    PUSH EBP                            ; 005820cf
    CALL dword ptr [0x02c833b0]         ; 005820d0 | DAT_02c833b0
    ADD ESP,0x14                        ; 005820d6
    POP EBX                             ; 005820d9
    POP ESI                             ; 005820da
    POP EDI                             ; 005820db
    POP EBP                             ; 005820dc
    RET                                 ; 005820dd

